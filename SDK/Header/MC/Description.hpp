// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

struct Description {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DESCRIPTION
public:
    struct Description& operator=(struct Description const&) = delete;
    Description(struct Description const&) = delete;
    Description() = delete;
#endif

public:
    MCAPI struct Description* parseDescription(struct DeserializeDataParams);

protected:

private:

};