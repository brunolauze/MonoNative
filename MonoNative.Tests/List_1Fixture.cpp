
#include "List_1Fixture.h"

#include <Global.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_List_1.h>
#include <iostream>

void List_1Fixture::Run()
{
	CreateList();
}

void List_1Fixture::CreateList()
{
	Output("Creating list...");

	mscorlib::System::Collections::Generic::List<mscorlib::System::String> *list = new mscorlib::System::Collections::Generic::List<mscorlib::System::String>();
	if (list == NULL) Fail("Cannot create List<String>");
	else Output("List Created");

	//std::cout << mono_string_to_utf8(mono_object_to_string(__native_object__, NULL)) << std::endl;


	std::cout << "Initial Count: " << list->Count << std::endl;

	list->Add("TEST");
	std::cout << "New Count: " << list->Count << std::endl;



}