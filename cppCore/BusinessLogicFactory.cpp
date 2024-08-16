// BusinessLogicFactory.cpp
#include "BusinessLogicFactory.h"

#include "BusinessLogic.h"

namespace core::factory {

std::unique_ptr<IBusinessLogic> createBusinessLogic() {
  return std::make_unique<impl::BusinessLogic>();
}

IBusinessLogic* createBusinessLogicPtr() { return new impl::BusinessLogic(); }

}  // namespace core::factory
