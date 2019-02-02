#include "pch.h"
#include "Test_Fixture.h"
#include "SampleClass_Test.h"
#include "..\App\SampleClass.cpp"

TEST_F(Test_Fixture, SampleClassTest1_Lib) { SampleClass_Test instance; instance.Test1(); };
TEST_F(Test_Fixture, SampleTest2_Lib) { SampleClass_Test instance; instance.Test2(); };

void SampleClass_Test::Test1()
{
	SampleClass instance;
	std::string message = "Hi world!";
	ASSERT_EQ(message, instance.Echo(message));
}

void SampleClass_Test::Test2()
{
	SampleClass instance;
	std::string message = "See you, world!";
	ASSERT_EQ(message, instance.Echo(message));
}