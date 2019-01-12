#pragma once

#include <gtest\gtest.h>

class Test_Fixture
	:public::testing::Test
{
protected:
	Test_Fixture();
	virtual ~Test_Fixture();

	virtual void SetUp();
	virtual void TearDown();
};