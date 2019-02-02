#include "pch.h"
#include "SampleClass.h"

SampleClass::SampleClass()
{
	std::cout << "SampleClass constructor" << std::endl;
}

SampleClass::~SampleClass()
{
	std::cout << "SampleClass destructor" << std::endl;
}

std::string SampleClass::Echo(std::string str)
{
	return str;
};