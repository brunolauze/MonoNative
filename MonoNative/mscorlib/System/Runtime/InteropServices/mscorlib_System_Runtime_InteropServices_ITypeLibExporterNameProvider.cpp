#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_ITypeLibExporterNameProvider.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				//Public Methods
				std::vector<mscorlib::System::String*> ITypeLibExporterNameProvider::GetNames()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "ITypeLibExporterNameProvider", 0, NULL, "GetNames", __mscorlib_System_Runtime_InteropServices_ITypeLibExporterNameProvider, 0, NULL, NULL, NULL);
						MonoArray *__array_ptr__ = (MonoArray*)__result__;
						uintptr_t __array_length__ = mono_array_length(__array_ptr__);
						std::vector<mscorlib::System::String*>  __array_result__(__array_length__);
						for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
						{
							MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
							__array_result__.push_back(new mscorlib::System::String (__array_item__));
						}
						return __array_result__;
				}


			}
		}
	}
}
