
#include <gtest/gtest.h>
#include <mscorlib.h>

using namespace mscorlib::System;
using namespace mscorlib::System::Collections::Generic;

extern "C" {
MONO_API void* mono_delegate_to_ftnptr (MonoDelegate *delegate);
MONO_API MonoDelegate* mono_ftnptr_to_delegate (MonoClass *klass, void* ftn);
MONO_API void mono_delegate_free_ftnptr (MonoDelegate *delegate);
}




extern "C" {
	MonoBoolean List_Exists(MonoObject *arg1, MonoObject *arg2) 
	{ 
		if (arg2 != NULL) 
		{
			const char *result = mono_string_to_utf8(mono_object_to_string(arg2, NULL));
			if (strcmp(result, "TEST") == 0)
				return TRUE;
		}
		return FALSE;
	}
}


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
	List<String> *list = new List<String>();
	list->Add(String("TEST"));
	std::cout << "pass1" << std::endl;
	//mscorlib::System::Boolean doesExists = list->Exists(BIND_FREE_CB(SampleFixture_BasicTest3_Exists));
	MonoObject *__native_object__ = list->GetNativeObject();
	MonoType *__parameter_types__[1];
	void *__parameters__[1];
	MonoType *__generic_types__[1];
	__generic_types__[0] = Global::GetType(typeid(String).name());
	std::cout << "pass2" << std::endl;
	__parameter_types__[0] = Global::GetType("mscorlib", "System", "Predicate`1", 1, __generic_types__);
	std::cout << "pass3" << std::endl;

	//MonoType *typeDelegate = Global::GetType("mscorlib", "System", "Predicate`1", 1, __generic_types__);
	//MonoType *typeDelegate = Global::GetType("mscorlib", "System", "Action");

	MonoClass *delegateClass = Global::GetClass("mscorlib", "System", "Predicate`1", 1, __generic_types__);

	/*
	MonoAssembly *ass = mono_assembly_open("MonoNativeHelper.dll", NULL);
	MonoImage *image = mono_assembly_get_image(ass);
	MonoClass *delegateClass = mono_class_from_name(image, "System", "BooleanDelegate");
	*/
	//std::cout << mono_type_get_name(typeDelegate) << std::endl;
	std::cout << "pass4" << std::endl;
	//mono_type_get_class(typeDelegate) 
	MonoDelegate *delegateObj = mono_ftnptr_to_delegate(delegateClass, (void*)List_Exists);
	std::cout << "pass5" << std::endl;
	__parameters__[0] = delegateObj;
	std::cout << "pass6" << std::endl;
	MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "List`1", 1, __generic_types__, "Exists", __native_object__, 1, __parameter_types__, __parameters__, NULL);

	const char *resStr = mono_string_to_utf8(mono_object_to_string(__result__, NULL));

	std::cout << "pass7:" << resStr << std::endl;
	mscorlib::System::Boolean doesExists = *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
	std::cout << "pass8" << std::endl;
	EXPECT_TRUE(doesExists);

	list->Remove(String("TEST"));

	EXPECT_EQ(0, list->Count);

	list->Add(String("TEST_NO"));
	__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "List`1", 1, __generic_types__, "Exists", __native_object__, 1, __parameter_types__, __parameters__, NULL);
	doesExists = *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
	EXPECT_FALSE(doesExists);
}



TEST(SampleFixture, BasicTest4)
{

}
TEST(SampleFixture, BasicTest5)
{

}
