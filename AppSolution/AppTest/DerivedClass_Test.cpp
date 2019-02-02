#include "pch.h"
#include "Test_Fixture.h"
#include "DerivedClass_Test.h"
#include "..\App\DerivedClass.cpp"

TEST_F(Test_Fixture, DerivedClassTest1_Lib) { DerivedClass_Test instance; instance.Test1(); };
TEST_F(Test_Fixture, DerivedClassTest2_Lib) { DerivedClass_Test instance; instance.Test2(); };

void DerivedClass_Test::Test1()
{
	DerivedClass instance;
	std::string message = "Hi world!";
	ASSERT_EQ("'" + message + "'", instance.Echo(message));
}

void DerivedClass_Test::Test2()
{
	DerivedClass instance;
	std::string message = "See you, world!";
	ASSERT_EQ("'" + message + "'", instance.Echo(message));
}