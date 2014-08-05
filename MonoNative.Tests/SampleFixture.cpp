
#include <gtest/gtest.h>
#include <mscorlib.h>

using namespace mscorlib::System;

TEST(SampleFixture, BasicTest1)
{
	/* Just try Console a bit */
	//ConsoleColor::__ENUM__ lastColor = Console::ForegroundColor;
	Console::WriteLine(String("Hello World!"));
	//Console::ForegroundColor = ConsoleColor::Magenta;
	Console::WriteLine(String("Writing here in Magenta foreground color."));
	//Console::ForegroundColor = lastColor;
	Console::WriteLine(String("Writing back with default foreground color."));

}
TEST(SampleFixture, BasicTest2)
{

}
TEST(SampleFixture, BasicTest3)
{

}
TEST(SampleFixture, BasicTest4)
{

}
TEST(SampleFixture, BasicTest5)
{

}
