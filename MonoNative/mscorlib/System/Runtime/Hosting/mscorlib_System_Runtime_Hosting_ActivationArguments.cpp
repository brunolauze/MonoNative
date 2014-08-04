#include <mscorlib/System/Runtime/Hosting/mscorlib_System_Runtime_Hosting_ActivationArguments.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Hosting
			{

				//Public Methods
				//Get Set Properties Methods
				//	Get:ActivationContext
				mscorlib::System::ActivationContext  ActivationArguments::get_ActivationContext()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Hosting", "ActivationArguments", 0, NULL, "get_ActivationContext", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::ActivationContext(__result__);
				}


				//	Get:ActivationData
				std::vector<mscorlib::System::String*>  ActivationArguments::get_ActivationData()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Hosting", "ActivationArguments", 0, NULL, "get_ActivationData", __native_object__, 0, NULL, NULL, NULL);
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


				//	Get:ApplicationIdentity
				mscorlib::System::ApplicationIdentity  ActivationArguments::get_ApplicationIdentity()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Hosting", "ActivationArguments", 0, NULL, "get_ApplicationIdentity", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::ApplicationIdentity(__result__);
				}



			}
		}
	}
}
