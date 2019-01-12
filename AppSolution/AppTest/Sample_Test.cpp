#include "pch.h"
#include "Test_Fixture.h"
#include "Sample_Test.h"
#include "..\App\SampleClass.h"

TEST_F(Test_Fixture, Test1_Lib) { Sample_Test instance; instance.Test1(); };
TEST_F(Test_Fixture, Test2_Lib) { Sample_Test instance; instance.Test2(); };

void Sample_Test::Test1()
{
	SampleClass instance;
	std::string message = "Hi world!";
	ASSERT_EQ(message, instance.Echo(message));
}

void Sample_Test::Test2()
{
	SampleClass instance;
	std::string message = "See you, world!";
	ASSERT_EQ(message, instance.Echo(message));
}