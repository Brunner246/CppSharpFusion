#pragma once

#include <memory>

#include "IBusinessLogic.h"
#include "coreApi.h"

namespace core::factory {

CORE_API std::unique_ptr<IBusinessLogic> createBusinessLogic();

extern "C" CORE_API IBusinessLogic* createBusinessLogicPtr();
}  // namespace core::factory
