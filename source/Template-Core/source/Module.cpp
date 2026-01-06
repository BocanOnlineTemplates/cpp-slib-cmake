////////////////////////////////////////////////////////////////////////////////
// organization: Bocan Online Templates
// author: Matthew Buchanan
// 
// license: The Unlicense
// project: cpp-slib-cmake
// file: Module.cpp
////////////////////////////////////////////////////////////////////////////////
#include <iostream>

#include "Module.hpp"

Module::Module() {

    std::cout << "Module created..." << std::endl;
}

Module::~Module() {

    std::cout << "Module destroyed..." << std::endl;
}
