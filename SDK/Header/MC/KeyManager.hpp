// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Crypto.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class KeyManager {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_KEYMANAGER
public:
    class KeyManager& operator=(class KeyManager const&) = delete;
    KeyManager(class KeyManager const&) = delete;
    KeyManager() = delete;
#endif

public:
    /*0*/ virtual ~KeyManager();
    /*1*/ virtual bool isValid() const;
    /*
    inline  ~KeyManager(){
         (KeyManager::*rv)();
        *((void**)&rv) = dlsym("??1KeyManager@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI KeyManager(std::string const&, enum Crypto::Asymmetric::System);
    MCAPI std::string getPublicKey() const;

protected:

private:

};