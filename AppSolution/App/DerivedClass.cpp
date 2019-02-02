#include "pch.h"
#include "DerivedClass.h"

DerivedClass::DerivedClass()
{
	std::cout << "DerivedClass constructor" << std::endl;
}

DerivedClass::~DerivedClass()
{
	std::cout << "DerivedClass destructor" << std::endl;
}

std::string DerivedClass::Echo(std::string str)
{
	return "'" + str + "'";
};