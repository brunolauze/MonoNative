MonoNative
==========

Mono C++ Bindings


This solution include a C++ code generator which parse an assembly and output header and implemenation of each .NET types wrapping mono calls.

The solution use MonoDevelop CBinding (modified to support clang), revert it to gcc if it's the compiler you want.
Also it is linked to LLVM, if you don't use LLVM, remove the references.

The generic types are 100% templated to avoid declaring any speciality explicitly.

Then an end result example is:


using namespace mscorlib::System;
using namespace mscorlib::System::Collections::Generic;

var *list = new List<String>();
list->Add(String("TEST"));
int count = list->Count;
if (count == 0)
{
   Console::WriteLine("Added TEST String");
}
list->Clear();
count = list->Count;
if (count == 0)
{
   Console::WriteLine("Clear done");
}

