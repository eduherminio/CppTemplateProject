#include "pch.h"

int main(int argc, char* argv[])
{
	::testing::InitGoogleTest(&argc, argv);
	//testing::FLAGS_gtest_repeat = 10;
	int nRetCode = RUN_ALL_TESTS();

	//if (nRetCode)
	//{
		system("pause");
	//}

	return nRetCode;
}
