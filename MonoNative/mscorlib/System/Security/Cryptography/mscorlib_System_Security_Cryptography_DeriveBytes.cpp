#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_DeriveBytes.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Cryptography
			{

				//Public Methods
				std::vector<mscorlib::System::Byte*> DeriveBytes::GetBytes(mscorlib::System::Int32 cb)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(cb).name());
						__parameters__[0] = &cb;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "DeriveBytes", 0, NULL, "GetBytes", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						MonoArray *__array_ptr__ = (MonoArray*)__result__;
						uintptr_t __array_length__ = mono_array_length(__array_ptr__);
						std::vector<mscorlib::System::Byte*>  __array_result__(__array_length__);
						for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
						{
							MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
							__array_result__.push_back(new mscorlib::System::Byte (__array_item__));
						}
						return __array_result__;
				}

				void DeriveBytes::Reset()
				{
						Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "DeriveBytes", 0, NULL, "Reset", __native_object__, 0, NULL, NULL, NULL);
				}

				void DeriveBytes::Dispose()
				{
						Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "DeriveBytes", 0, NULL, "Dispose", __native_object__, 0, NULL, NULL, NULL);
				}


			}
		}
	}
}
