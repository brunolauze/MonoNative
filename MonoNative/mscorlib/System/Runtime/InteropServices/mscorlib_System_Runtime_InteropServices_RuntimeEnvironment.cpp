#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_RuntimeEnvironment.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Assembly.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				//Public Methods
				mscorlib::System::Boolean RuntimeEnvironment::FromGlobalAccessCache(mscorlib::System::Reflection::Assembly a)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(a).name());
						__parameters__[0] = (MonoObject*)a;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "RuntimeEnvironment", 0, NULL, "FromGlobalAccessCache", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::String RuntimeEnvironment::GetRuntimeDirectory()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "RuntimeEnvironment", 0, NULL, "GetRuntimeDirectory", NullMonoObject, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
				}

				mscorlib::System::String RuntimeEnvironment::GetSystemVersion()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "RuntimeEnvironment", 0, NULL, "GetSystemVersion", NullMonoObject, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
				}

				//Get Set Static Properties Methods
				//	Get:SystemConfigurationFile
				mscorlib::System::String  RuntimeEnvironment::get_SystemConfigurationFile()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "RuntimeEnvironment", 0, NULL, "get_SystemConfigurationFile", NullMonoObject, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}




			}
		}
	}
}
