#pragma once

#include <string>

#include "coreApi.h"

namespace core {
class CORE_API IBusinessLogic {
 public:
  virtual ~IBusinessLogic() = default;

  virtual std::string doSomething() = 0;
};
}  // namespace core
