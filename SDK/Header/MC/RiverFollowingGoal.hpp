// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class RiverFollowingGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RIVERFOLLOWINGGOAL
public:
    class RiverFollowingGoal& operator=(class RiverFollowingGoal const&) = delete;
    RiverFollowingGoal(class RiverFollowingGoal const&) = delete;
    RiverFollowingGoal() = delete;
#endif

public:
    /*0*/ virtual ~RiverFollowingGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void __unk_vfn_0();
    /*4*/ virtual void start();
    /*5*/ virtual void stop();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string&) const;
    MCAPI RiverFollowingGoal(class Mob&, float, float);

protected:
    MCAPI void determineSteerDirection();

private:

};