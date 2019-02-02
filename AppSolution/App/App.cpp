// Lib.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "DerivedClass.h"

int main()
{
	SampleClass sampleClassInstance;
	std::cout << sampleClassInstance.Echo("Hi world!\nWhat do you wan't me to repeat?") << std::endl;

	std::string str;
	std::cin >> str;
	DerivedClass instance;
	std::cout << instance.Echo(str) << std::endl;

	std::cin >> str;
}

