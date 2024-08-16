#include "BusinessLogic.h"

#include <format>
#include <iostream>
#include <ostream>
#include <source_location>

core::impl::BusinessLogic::~BusinessLogic() = default;

core::impl::BusinessLogic::BusinessLogic() = default;

std::string core::impl::BusinessLogic::doSomething() {
  const auto current = std::source_location::current();
  return std::format("{}:{}: {}", current.file_name(), current.line(),
                     current.function_name());
}
