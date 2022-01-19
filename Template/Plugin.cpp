#include "pch.h"
#include <MC/Minecraft.hpp>
#include <MC/Actor.hpp>
#include <MC/Mob.hpp>
#include <MC/Player.hpp>
#include <MC/ServerPlayer.hpp>
#include <MC/Certificate.hpp>
#include <MC/CompoundTag.hpp>
#include <MC/NetworkHandler.hpp>
#include <MC/ServerNetworkHandler.hpp>
#include <MC/NetworkIdentifier.hpp>
#include <MC/NetworkPeer.hpp>
#include <MC/Level.hpp>
#include <RegCommandAPI.h>
#include <MC/IdentityDefinition.hpp>
#include "../SDK/Header/Utils/PlayerMap.h"
#include "../SDK/Header/third-party/Nlohmann/json.hpp"
#include <LoggerAPI.h>
#include <LLAPI.h>
#include <EventAPI.h>


using nlohmann::json;
Logger logger("HeadShow");

playerMap<string> ORIG_NAME;
int tick = 0;

//修改返回的Name
THook(string&, "?getNameTag@Actor@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ", void* x) {
	if (auto it = ORIG_NAME._map.find((ServerPlayer*)x); it != ORIG_NAME._map.end()) {
		return it->second;
	}
	return original(x);
}
string defaultString = "";
int defaultTick = 20;
bool readJson() {
	json j;			// 创建 json 对象
	std::ifstream jfile("plugins/HeadShow/config.json");
	jfile >> j;		// 以文件流形式读取 json 文件
	defaultTick = j.at("updateTick");
	defaultString = j.at("showTitle");
	return true;
}

string m_replace(string strSrc,
	const string& oldStr, const string& newStr, int count = -1)
{
	string strRet = strSrc;
	size_t pos = 0;
	int l_count = 0;
	if (-1 == count) // replace all
		count = strRet.size();
	while ((pos = strRet.find(oldStr, pos)) != string::npos)
	{
		strRet.replace(pos, oldStr.size(), newStr);
		if (++l_count >= count) break;
		pos += newStr.size();
	}
	return strRet;
}

class ReloadCommand : public Command {
public:
	void execute(CommandOrigin const& ori, CommandOutput& output) const override {//执行部分
		ServerPlayer* sp = ori.getPlayer();
		//检测玩家权限
		if (sp->getPlayerPermissionLevel() > 0 && sp->isPlayer()) {
			bool re = readJson();
			if (re) {
				output.addMessage("HeadShow file reload success.");
			}
		}
	}

	static void setup(CommandRegistry* registry) {//注册部分(推荐做法)
		registry->registerCommand("reheadshow", "Reload HeadShow Config", CommandPermissionLevel::GameMasters, { (CommandFlagValue)0 }, { (CommandFlagValue)0x80 });
		registry->registerOverload<ReloadCommand>("reheadshow");
	}
};


void PluginInit()
{
	LL::registerPlugin("HeadShow", "Show info on player's belowname", LL::Version(0,0,1));
	logger.info("HeadShow Loading...");
	//读取json文件
	bool re = readJson();
	if (re) logger.info("Readfile success.");
	logger.info("HeadShow Loaded. By HuoHua");
	
	//注册指令
	Event::RegCmdEvent::subscribe([](Event::RegCmdEvent ev) { //注册指令事件
		ReloadCommand::setup(ev.mCommandRegistry);
		return true;
	});
}

bool updateHead() {
	for (auto pl : Level::getAllPlayers())
	{
		string name = pl->getRealName();
		ORIG_NAME[(ServerPlayer*)pl] = name.c_str();
		string health = std::to_string(pl->getHealth());
		
		//获取玩家饥饿值
		auto plnbt = pl->getNbt();
		json plnJ = json::parse(plnbt.get()->toJson(0));
		string hunger = "";
		string maxHunger = "";
		string maxHealth = std::to_string(pl->getMaxHealth());
		string device = pl->getDeviceName();
		string avgPing = std::to_string(pl->getAvgPing());
		for (auto &nbt : plnJ["Attributes"]) {
			if (nbt["Name"] == "minecraft:player.hunger") {
				//取值
				hunger = std::to_string((double)nbt["Current"]);
				maxHunger = std::to_string((double)nbt["Max"]);

				//格式化
				maxHunger = maxHunger.substr(0, maxHunger.find("."));
				hunger = hunger.substr(0, hunger.find("."));
			}
		}
		string sinfo = m_replace(m_replace(m_replace(m_replace(m_replace(m_replace(m_replace(defaultString,"%Name%",name), "%avgPing%", avgPing), "%device%", device), "%hunger%", hunger), "%health%", health), "%maxHunger%", maxHunger), "%maxHealth%", maxHealth);
		//设置NameTag 
		pl->setNameTag(sinfo);
	}
	return true;
}

THook(void, "?tick@Level@@UEAAXXZ", void* self) {
	original(self);
	if (tick >= defaultTick) {
		updateHead();
		tick = 0;
	}
	else {
		tick++;
	}
}

//玩家生命变动
THook(long long, "?change@HealthAttributeDelegate@@UEAA_NMMUAttributeBuffInfo@@@Z", __int64 a1, float a2, float a3, __int64 a4) {
	Actor* ac = *(Actor**)(a1 + 32);
	if (ac->getTypeName() == "minecraft:player") {
		updateHead();
	}
	return original(a1, a2, a3, a4);
}
