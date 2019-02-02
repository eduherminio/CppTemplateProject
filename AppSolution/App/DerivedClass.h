#pragma once
#include "SampleClass.h"

class DerivedClass : SampleClass
{
public:
	DerivedClass();
	virtual ~DerivedClass();

	virtual std::string Echo(std::string str) override;
};