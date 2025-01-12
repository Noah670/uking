#pragma once

#include <basis/seadTypes.h>
#include "KingSystem/ActorSystem/actBaseProc.h"
#include "KingSystem/ActorSystem/actBaseProcUnit.h"
#include "KingSystem/Utils/Types.h"

namespace ksys::act {

class BaseProcUnit;
class BaseProc;

class BaseProcHandle {
public:
    BaseProcHandle();
    ~BaseProcHandle();

    bool procReady();

    BaseProc* getProc();

    static BaseProcHandle sDummyHandle;

private:
    BaseProcUnit* mUnit;
    u8 mFlag;
};
KSYS_CHECK_SIZE_NX150(BaseProcHandle, 0x10);

}  // namespace ksys::act