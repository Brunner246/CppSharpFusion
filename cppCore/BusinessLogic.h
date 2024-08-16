#pragma once

#include "IBusinessLogic.h"

namespace core::impl {
class BusinessLogic : public IBusinessLogic {
 public:
  ~BusinessLogic() override;

  BusinessLogic();

  std::string doSomething() override;
};
}  // namespace core::impl
