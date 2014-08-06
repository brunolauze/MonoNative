#include <mscorlib/System/Runtime/Serialization/Formatters/mscorlib_System_Runtime_Serialization_Formatters_InternalRM.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Serialization
			{
				namespace Formatters
				{

					//Public Methods
					void InternalRM::InfoSoap(std::vector<mscorlib::System::Object*> messages)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
							__parameters__[0] = Global::FromArray<mscorlib::System::Object*>(messages, typeid(mscorlib::System::Object).name());
							Global::InvokeMethod("mscorlib", "System.Runtime.Serialization.Formatters", "InternalRM", 0, NULL, "InfoSoap", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					}

					mscorlib::System::Boolean InternalRM::SoapCheckEnabled()
					{
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization.Formatters", "InternalRM", 0, NULL, "SoapCheckEnabled", NullMonoObject, 0, NULL, NULL, NULL);
							return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					}


				}
			}
		}
	}
}
