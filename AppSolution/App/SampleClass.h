#pragma once
#include <string>

class SampleClass
{
public:
	SampleClass();
	virtual ~SampleClass();

	virtual std::string Echo(std::string str);
};
