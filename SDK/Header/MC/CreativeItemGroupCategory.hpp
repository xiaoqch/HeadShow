// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class CreativeItemGroupCategory {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CREATIVEITEMGROUPCATEGORY
public:
    class CreativeItemGroupCategory& operator=(class CreativeItemGroupCategory const&) = delete;
    CreativeItemGroupCategory(class CreativeItemGroupCategory const&) = delete;
    CreativeItemGroupCategory() = delete;
#endif

public:
    /*0*/ virtual ~CreativeItemGroupCategory();
    /*
    inline  ~CreativeItemGroupCategory(){
         (CreativeItemGroupCategory::*rv)();
        *((void**)&rv) = dlsym("??1CreativeItemGroupCategory@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI class CreativeGroupInfo* addAnonymousGroup();
    MCAPI class CreativeGroupInfo* addChildGroup(class HashedString const&, class ItemInstance const&);
    MCAPI class CreativeGroupInfo* getChildGroup(class HashedString const&);
    MCAPI enum CreativeItemCategory getCreativeCategory();
    MCAPI class CreativeGroupInfo* getOrAddTailAnonymousGroup();

protected:

private:

};