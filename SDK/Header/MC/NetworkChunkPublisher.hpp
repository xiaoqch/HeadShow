// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class NetworkChunkPublisher {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETWORKCHUNKPUBLISHER
public:
    class NetworkChunkPublisher& operator=(class NetworkChunkPublisher const&) = delete;
    NetworkChunkPublisher(class NetworkChunkPublisher const&) = delete;
    NetworkChunkPublisher() = delete;
#endif

public:
    /*0*/ virtual ~NetworkChunkPublisher();
    /*
    inline  ~NetworkChunkPublisher(){
         (NetworkChunkPublisher::*rv)();
        *((void**)&rv) = dlsym("??1NetworkChunkPublisher@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI NetworkChunkPublisher(class Level&, class NetworkHandler&, class ClientBlobCache::Server::ActiveTransfersManager&, class NetworkIdentifier const&, unsigned char);
    MCAPI void clearRegion();
    MCAPI void destroyRegion();
    MCAPI int getChunksSentSinceStart() const;
    MCAPI bool is2DPositionRelevant(class BlockPos const&) const;
    MCAPI void moveRegion(class BlockPos const&, unsigned int, class Vec3 const&, float);
    MCAPI void prepareRegion(class ChunkSource&, class ChunkPos&);
    MCAPI void sendQueuedChunks();

protected:

private:
    MCAPI bool _sendQueuedChunk(class ChunkPos const&, class ClientBlobCache::Server::TransferBuilder*);
    MCAPI void _serializeAndCache(class LevelChunkPacket&, class ClientBlobCache::Server::TransferBuilder&, class std::function<void (class VarIntDataOutput& )>&&);

};