
#include <gtest/gtest.h>
#include <mscorlib.h>

using namespace mscorlib::System;

TEST(SampleFixture, BasicTest1)
{
	/* Just try Console a bit */
	ConsoleColor::__ENUM__ lastColor = Console::ForegroundColor;

	std::cout << "Current Console Color: " << lastColor << std::endl;

	Console::WriteLine(String("Hello World!"));
	Console::ForegroundColor = ConsoleColor::Magenta;
	Console::WriteLine(String("Writing here in Magenta foreground color."));
	Console::ForegroundColor = lastColor;
	Console::WriteLine(String("Writing back with default foreground color."));

	Console::WriteLine("Writing from a plain old const char *");

	std::cout << "pass1" << std::endl;
	MonoType *type1 = Global::GetType("mscorlib", "System", "Object");
	std::cout << "pass2" << std::endl;
	MonoClass *kclass1 = mono_class_from_mono_type(type1);
	std::cout << "pass3" << std::endl;
	MonoClass *arraykclass = mono_array_class_get(kclass1, 1);
	std::cout << "pass4" << std::endl;

	MonoType *type2 = mono_class_get_type(arraykclass);

	std::cout << "pass7" << std::endl;
	const char *typeName = mono_type_get_name(type2);
	std::cout << "Array Type Created is : " << typeName << std::endl;

	Object obj1 = String("Jim");

	Console::WriteLine(String("Formatting: My name is {0}."), obj1);

	std::vector<Object*> objs;
	Object *arg1 = new String("John");
	objs.push_back(arg1);

	Console::WriteLine(String("Formatting: My name is {0}."), objs);

}
TEST(SampleFixture, BasicTest2)
{
	std::vector<Object*> objs;
	Object *arg1 = new String("John");
	objs.push_back(arg1);

	MonoObject* arrayObj = Global::FromArray<Object*>(objs, typeid(Object).name());

	MonoArray *arrayEl = (MonoArray*)arrayObj;

	int length = mono_array_length(arrayEl);
	std::cout << "Array Length: " << length << std::endl;

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
