// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class CompositeDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPOSITEDEFINITION
public:
    class CompositeDefinition& operator=(class CompositeDefinition const&) = delete;
    CompositeDefinition(class CompositeDefinition const&) = delete;
    CompositeDefinition() = delete;
#endif

public:
    MCAPI class BehaviorDefinition const* get(unsigned __int64) const;
    MCAPI unsigned __int64 getCount() const;

protected:
    MCAPI static void _compositeLoadChildrenBehaviors(class Json::Value, std::vector<std::unique_ptr<class BehaviorDefinition>>&, class BehaviorFactory const&, class BehaviorTreeDefinitionPtr);

private:

};