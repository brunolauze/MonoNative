#include <mscorlib/System/Runtime/Serialization/Formatters/mscorlib_System_Runtime_Serialization_Formatters_InternalST.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Assembly.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_FieldInfo.h>



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
					void InternalST::InfoSoap(std::vector<mscorlib::System::Object*> messages)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
							__parameters__[0] = Global::FromArray<mscorlib::System::Object*>(messages, typeid(mscorlib::System::Object).name());
							Global::InvokeMethod("mscorlib", "System.Runtime.Serialization.Formatters", "InternalST", 0, NULL, "InfoSoap", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					}

					mscorlib::System::Reflection::Assembly InternalST::LoadAssemblyFromString(mscorlib::System::String assemblyString)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(assemblyString).name());
							__parameters__[0] = (MonoObject*)assemblyString;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization.Formatters", "InternalST", 0, NULL, "LoadAssemblyFromString", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::Reflection::Assembly(__result__);
					}

					mscorlib::System::Reflection::Assembly InternalST::LoadAssemblyFromString(const char *assemblyString)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
							__parameters__[0] = mono_string_new(Global::GetDomain(), assemblyString);
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization.Formatters", "InternalST", 0, NULL, "LoadAssemblyFromString", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::Reflection::Assembly(__result__);
					}

					void InternalST::SerializationSetValue(mscorlib::System::Reflection::FieldInfo fi, mscorlib::System::Object target, mscorlib::System::Object value)
					{
							MonoType *__parameter_types__[3];
							void *__parameters__[3];
							__parameter_types__[0] = Global::GetType(typeid(fi).name());
							__parameter_types__[1] = Global::GetType(typeid(target).name());
							__parameter_types__[2] = Global::GetType(typeid(value).name());
							__parameters__[0] = (MonoObject*)fi;
							__parameters__[1] = (MonoObject*)target;
							__parameters__[2] = (MonoObject*)value;
							Global::InvokeMethod("mscorlib", "System.Runtime.Serialization.Formatters", "InternalST", 0, NULL, "SerializationSetValue", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
					}

					void InternalST::Soap(std::vector<mscorlib::System::Object*> messages)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
							__parameters__[0] = Global::FromArray<mscorlib::System::Object*>(messages, typeid(mscorlib::System::Object).name());
							Global::InvokeMethod("mscorlib", "System.Runtime.Serialization.Formatters", "InternalST", 0, NULL, "Soap", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					}

					void InternalST::SoapAssert(mscorlib::System::Boolean condition, mscorlib::System::String message)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(condition).name());
							__parameter_types__[1] = Global::GetType(typeid(message).name());
							__parameters__[0] = reinterpret_cast<void*>(condition);
							__parameters__[1] = (MonoObject*)message;
							Global::InvokeMethod("mscorlib", "System.Runtime.Serialization.Formatters", "InternalST", 0, NULL, "SoapAssert", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					}

					void InternalST::SoapAssert(mscorlib::System::Boolean condition, const char *message)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(condition).name());
							__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
							__parameters__[0] = reinterpret_cast<void*>(condition);
							__parameters__[1] = mono_string_new(Global::GetDomain(), message);
							Global::InvokeMethod("mscorlib", "System.Runtime.Serialization.Formatters", "InternalST", 0, NULL, "SoapAssert", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					}

					mscorlib::System::Boolean InternalST::SoapCheckEnabled()
					{
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization.Formatters", "InternalST", 0, NULL, "SoapCheckEnabled", NullMonoObject, 0, NULL, NULL, NULL);
							return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					}


				}
			}
		}
	}
}
