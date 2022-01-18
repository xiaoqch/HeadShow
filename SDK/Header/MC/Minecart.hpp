// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Minecart : public Actor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINECART
public:
    class Minecart& operator=(class Minecart const&) = delete;
    Minecart(class Minecart const&) = delete;
    Minecart() = delete;
#endif

public:
    /*0*/ virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const&);
    /*1*/ virtual void reloadHardcodedClient(enum Actor::InitializationMethod, class VariantParameterList const&);
    /*2*/ virtual ~Minecart();
    /*3*/ virtual bool isRuntimePredictedMovementEnabled() const;
    /*4*/ virtual void __unk_vfn_0();
    /*5*/ virtual float getInterpolatedHeadRot(float) const;
    /*6*/ virtual float getInterpolatedBodyYaw(float) const;
    /*7*/ virtual class Vec3 getInterpolatedRidingOffset(float) const;
    /*8*/ virtual void __unk_vfn_1();
    /*9*/ virtual void normalTick();
    /*10*/ virtual float getRidingHeight();
    /*11*/ virtual void __unk_vfn_2();
    /*12*/ virtual void __unk_vfn_3();
    /*13*/ virtual float getCameraOffset() const;
    /*14*/ virtual float getShadowHeightOffs();
    /*15*/ virtual float getShadowRadius() const;
    /*16*/ virtual void __unk_vfn_4();
    /*17*/ virtual void __unk_vfn_5();
    /*18*/ virtual void playerTouch(class Player&);
    /*19*/ virtual bool isPickable();
    /*20*/ virtual void __unk_vfn_6();
    /*21*/ virtual bool isSleeping() const;
    /*22*/ virtual void setSleeping(bool);
    /*23*/ virtual void __unk_vfn_7();
    /*24*/ virtual bool isBlocking() const;
    /*25*/ virtual bool isDamageBlocked(class ActorDamageSource const&) const;
    /*26*/ virtual void __unk_vfn_8();
    /*27*/ virtual bool isSurfaceMob() const;
    /*28*/ virtual void __unk_vfn_9();
    /*29*/ virtual void __unk_vfn_10();
    /*30*/ virtual void __unk_vfn_11();
    /*31*/ virtual class Actor* findAttackTarget();
    /*32*/ virtual bool isValidTarget(class Actor*) const;
    /*33*/ virtual void adjustDamageAmount(int&) const;
    /*34*/ virtual void onTame();
    /*35*/ virtual void onFailedTame();
    /*36*/ virtual bool isJumping() const;
    /*37*/ virtual void vehicleLanded(class Vec3 const&, class Vec3 const&);
    /*38*/ virtual bool isInvulnerableTo(class ActorDamageSource const&) const;
    /*39*/ virtual void animateHurt();
    /*40*/ virtual void onBounceStarted(class BlockPos const&, class Block const&);
    /*41*/ virtual float getPickRadius();
    /*42*/ virtual void awardKillScore(class Actor&, int);
    /*43*/ virtual enum ArmorMaterialType getArmorMaterialTypeInSlot(enum ArmorSlot) const;
    /*44*/ virtual enum ArmorTextureType getArmorMaterialTextureTypeInSlot(enum ArmorSlot) const;
    /*45*/ virtual float getArmorColorInSlot(enum ArmorSlot, int) const;
    /*46*/ virtual void setEquippedSlot(enum EquipmentSlot, class ItemStack const&);
    /*47*/ virtual class HashedString const& queryEntityRenderer() const;
    /*48*/ virtual struct ActorUniqueID getSourceUniqueID() const;
    /*49*/ virtual bool canFreeze() const;
    /*50*/ virtual int getPortalWaitTime() const;
    /*51*/ virtual bool canChangeDimensions() const;
    /*52*/ virtual void __unk_vfn_12();
    /*53*/ virtual struct ActorUniqueID getControllingPlayer() const;
    /*54*/ virtual bool canPickupItem(class ItemStack const&) const;
    /*55*/ virtual bool canBePulledIntoVehicle() const;
    /*56*/ virtual bool inCaravan() const;
    /*57*/ virtual void __unk_vfn_13();
    /*58*/ virtual bool canSynchronizeNewEntity() const;
    /*59*/ virtual void buildDebugInfo(std::string&) const;
    /*60*/ virtual int getDeathTime() const;
    /*61*/ virtual void swing();
    /*62*/ virtual void __unk_vfn_14();
    /*63*/ virtual void __unk_vfn_15();
    /*64*/ virtual float getYHeadRot() const;
    /*65*/ virtual bool isWorldBuilder() const;
    /*66*/ virtual void __unk_vfn_16();
    /*67*/ virtual bool isAdventure() const;
    /*68*/ virtual bool canDestroyBlock(class Block const&) const;
    /*69*/ virtual void setAuxValue(int);
    /*70*/ virtual void stopSpinAttack();
    /*71*/ virtual void __unk_vfn_17();
    /*72*/ virtual void __unk_vfn_18();
    /*73*/ virtual void kill();
    /*74*/ virtual void interpolatorTick();
    /*75*/ virtual void updateEntitySpecificMolangVariables(class RenderParams&);
    /*76*/ virtual void __unk_vfn_19();
    /*77*/ virtual bool _hurt(class ActorDamageSource const&, int, bool, bool);
    /*78*/ virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);
    /*79*/ virtual void addAdditionalSaveData(class CompoundTag&);
    /*80*/ virtual void __unk_vfn_20();
    /*81*/ virtual void _onSizeUpdated();
    /*82*/ virtual void __unk_vfn_21();
    /*83*/ virtual void destroy(class ActorDamageSource const&, bool);
    /*84*/ virtual enum MinecartType getType() = 0;
    /*85*/ virtual class Block const* getDefaultDisplayBlock() const;
    /*86*/ virtual void __unk_vfn_22();
    /*87*/ virtual int getDefaultDisplayOffset() const;
    /*88*/ virtual void applyNaturalSlowdown(class BlockSource&);
    /*89*/ virtual void _lazyInitDisplayBlock();
    /*
    inline bool canMakeStepSound() const{
        bool (Minecart::*rv)() const;
        *((void**)&rv) = dlsym("?canMakeStepSound@Minecart@@EEBA_NXZ");
        return (this->*rv)();
    }
    inline int getDefaultDisplayData() const{
        int (Minecart::*rv)() const;
        *((void**)&rv) = dlsym("?getDefaultDisplayData@Minecart@@UEBAHXZ");
        return (this->*rv)();
    }
    inline  ~Minecart(){
         (Minecart::*rv)();
        *((void**)&rv) = dlsym("??1Minecart@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI Minecart(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class OwnerPtrT<struct EntityRefTraits> const&);
    MCAPI void setCustomDisplay(bool);
    MCAPI void setDisplayBlock(class Block const&);

protected:

private:
    MCAPI void _registerLoopingSounds();

};