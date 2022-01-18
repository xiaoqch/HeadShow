// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class DouseFireSubcomponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DOUSEFIRESUBCOMPONENT
public:
    class DouseFireSubcomponent& operator=(class DouseFireSubcomponent const&) = delete;
    DouseFireSubcomponent(class DouseFireSubcomponent const&) = delete;
#endif

public:
    /*0*/ virtual ~DouseFireSubcomponent();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual void __unk_vfn_1();
    /*3*/ virtual void doOnHitEffect(class Actor&, class ProjectileComponent&);
    /*4*/ virtual char const* getName();
    /*
    inline void writetoJSON(class Json::Value& a0) const{
        void (DouseFireSubcomponent::*rv)(class Json::Value&) const;
        *((void**)&rv) = dlsym("?writetoJSON@DouseFireSubcomponent@@UEBAXAEAVValue@Json@@@Z");
        return (this->*rv)(std::forward<class Json::Value&>(a0));
    }
    inline void readfromJSON(class Json::Value& a0, class SemVersion const& a1){
        void (DouseFireSubcomponent::*rv)(class Json::Value&, class SemVersion const&);
        *((void**)&rv) = dlsym("?readfromJSON@DouseFireSubcomponent@@UEAAXAEAVValue@Json@@AEBVSemVersion@@@Z");
        return (this->*rv)(std::forward<class Json::Value&>(a0), std::forward<class SemVersion const&>(a1));
    }
    */
    MCAPI DouseFireSubcomponent();
    MCAPI void douseFire(class BlockSource&, class BlockPos const&);

protected:

private:

};