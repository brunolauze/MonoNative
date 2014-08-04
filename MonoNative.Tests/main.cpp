#include <iostream>
#include <gtest/gtest.h>
#include <Global.h>

int main (int argc, char *argv[])
{
	Global::Initialize();
	std::cout << "Mono Native 1.0 Unit Tests" << std::endl;

	/*
	GlobalFixture globalfixture;
	globalfixture.Run();

	List_1Fixture list_1Fixture;
	list_1Fixture.Run();
	*/


	testing::InitGoogleTest(&argc, argv);

	int exitcode = RUN_ALL_TESTS();

	mono_jit_cleanup(Global::GetDomain());
	return exitcode;
}

