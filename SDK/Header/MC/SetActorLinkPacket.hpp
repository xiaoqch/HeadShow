// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SetActorLinkPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETACTORLINKPACKET
public:
    class SetActorLinkPacket& operator=(class SetActorLinkPacket const&) = delete;
    SetActorLinkPacket(class SetActorLinkPacket const&) = delete;
#endif

public:
    /*0*/ virtual ~SetActorLinkPacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream&) const;
    /*4*/ virtual bool disallowBatching() const;
    /*5*/ virtual enum StreamReadResult _read(class ReadOnlyBinaryStream&);
    /*
    inline  ~SetActorLinkPacket(){
         (SetActorLinkPacket::*rv)();
        *((void**)&rv) = dlsym("??1SetActorLinkPacket@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI SetActorLinkPacket(struct ActorLink const&);
    MCAPI SetActorLinkPacket();

protected:

private:

};