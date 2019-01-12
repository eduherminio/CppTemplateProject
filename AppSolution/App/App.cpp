// Lib.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "SampleClass.h"

int main()
{
	SampleClass instance;
	std::cout << instance.Echo("Hi world!\nWhat do you wan't me to repeat?\n") << std::endl;

	std::string str;
	std::cin >> str;
	std::cout << instance.Echo(str) << std::endl;
	
	std::cin >> str;
}

