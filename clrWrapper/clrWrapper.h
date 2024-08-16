#pragma once
#include <iostream>
#include <ostream>

using namespace System;

#include <string>

#include "BusinessLogic.h"
#include "BusinessLogicFactory.h"
#include "IBusinessLogic.h"

namespace clrWrapper {
public
ref class BusinessLogicWrapper {
  core::IBusinessLogic* logic;

 public:
  BusinessLogicWrapper() { logic = core::factory::createBusinessLogicPtr(); }

  ~BusinessLogicWrapper() {
    delete logic;
    logic = nullptr;
    std::cout << "BusinessLogicWrapper destructor called" << std::endl;
  }

  String ^ GetMessage() {
    std::string message = logic->doSomething();
    return gcnew String(message.c_str());
  }
};
}  // namespace clrWrapper
