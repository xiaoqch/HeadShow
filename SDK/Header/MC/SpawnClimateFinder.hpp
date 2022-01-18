// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SpawnClimateFinder {

#define AFTER_EXTRA
// Add Member There
public:
struct ResultDetails {
    ResultDetails() = delete;
    ResultDetails(ResultDetails const&) = delete;
    ResultDetails(ResultDetails const&&) = delete;
};

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPAWNCLIMATEFINDER
public:
    class SpawnClimateFinder& operator=(class SpawnClimateFinder const&) = delete;
    SpawnClimateFinder(class SpawnClimateFinder const&) = delete;
    SpawnClimateFinder() = delete;
#endif

public:
    MCAPI SpawnClimateFinder(std::vector<struct ClimateParameters>, struct OverworldNoises3d const&, class DimensionHeightRange const&);
    MCAPI class BlockPos findSpawnPosition() const;
    MCAPI ~SpawnClimateFinder();

protected:

private:
    MCAPI struct std::pair<class BlockPos, __int64> _getSpawnPositionAndFitness(class BlockPos) const;
    MCAPI struct SpawnClimateFinder::ResultDetails _radialSearch(struct SpawnClimateFinder::ResultDetails, int, int) const;

};