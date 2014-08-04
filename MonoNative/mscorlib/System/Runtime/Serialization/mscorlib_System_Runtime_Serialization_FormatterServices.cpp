#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_FormatterServices.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MemberInfo.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_StreamingContext.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Assembly.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Serialization
			{

				//Public Methods
				std::vector<mscorlib::System::Object*> FormatterServices::GetObjectData(mscorlib::System::Object obj, std::vector<mscorlib::System::Reflection::MemberInfo*> members)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(obj).name());
						__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(members).name()))->eklass);
						__parameters__[0] = (MonoObject*)obj;
						__parameters__[1] = Global::FromArray<mscorlib::System::Reflection::MemberInfo*>(members, typeid(mscorlib::System::Reflection::MemberInfo).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "FormatterServices", 0, NULL, "GetObjectData", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						MonoArray *__array_ptr__ = (MonoArray*)__result__;
						uintptr_t __array_length__ = mono_array_length(__array_ptr__);
						std::vector<mscorlib::System::Object*>  __array_result__(__array_length__);
						for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
						{
							MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
							__array_result__.push_back(new mscorlib::System::Object (__array_item__));
						}
						return __array_result__;
				}

				std::vector<mscorlib::System::Reflection::MemberInfo*> FormatterServices::GetSerializableMembers(mscorlib::System::Type type)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(type).name());
						__parameters__[0] = (MonoObject*)type;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "FormatterServices", 0, NULL, "GetSerializableMembers", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						MonoArray *__array_ptr__ = (MonoArray*)__result__;
						uintptr_t __array_length__ = mono_array_length(__array_ptr__);
						std::vector<mscorlib::System::Reflection::MemberInfo*>  __array_result__(__array_length__);
						for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
						{
							MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
							__array_result__.push_back(new mscorlib::System::Reflection::MemberInfo (__array_item__));
						}
						return __array_result__;
				}

				std::vector<mscorlib::System::Reflection::MemberInfo*> FormatterServices::GetSerializableMembers(mscorlib::System::Type type, mscorlib::System::Runtime::Serialization::StreamingContext context)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(type).name());
						__parameter_types__[1] = Global::GetType(typeid(context).name());
						__parameters__[0] = (MonoObject*)type;
						__parameters__[1] = (MonoObject*)context;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "FormatterServices", 0, NULL, "GetSerializableMembers", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						MonoArray *__array_ptr__ = (MonoArray*)__result__;
						uintptr_t __array_length__ = mono_array_length(__array_ptr__);
						std::vector<mscorlib::System::Reflection::MemberInfo*>  __array_result__(__array_length__);
						for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
						{
							MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
							__array_result__.push_back(new mscorlib::System::Reflection::MemberInfo (__array_item__));
						}
						return __array_result__;
				}

				mscorlib::System::Type FormatterServices::GetTypeFromAssembly(mscorlib::System::Reflection::Assembly assem, mscorlib::System::String name)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(assem).name());
						__parameter_types__[1] = Global::GetType(typeid(name).name());
						__parameters__[0] = (MonoObject*)assem;
						__parameters__[1] = (MonoObject*)name;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "FormatterServices", 0, NULL, "GetTypeFromAssembly", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Type(__result__);
				}

				mscorlib::System::Object FormatterServices::GetUninitializedObject(mscorlib::System::Type type)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(type).name());
						__parameters__[0] = (MonoObject*)type;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "FormatterServices", 0, NULL, "GetUninitializedObject", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Object(__result__);
				}

				mscorlib::System::Object FormatterServices::PopulateObjectMembers(mscorlib::System::Object obj, std::vector<mscorlib::System::Reflection::MemberInfo*> members, std::vector<mscorlib::System::Object*> data)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(obj).name());
						__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(members).name()))->eklass);
						__parameter_types__[2] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(data).name()))->eklass);
						__parameters__[0] = (MonoObject*)obj;
						__parameters__[1] = Global::FromArray<mscorlib::System::Reflection::MemberInfo*>(members, typeid(mscorlib::System::Reflection::MemberInfo).name());
						__parameters__[2] = Global::FromArray<mscorlib::System::Object*>(data, typeid(mscorlib::System::Object).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "FormatterServices", 0, NULL, "PopulateObjectMembers", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Object(__result__);
				}

				void FormatterServices::CheckTypeSecurity(mscorlib::System::Type t, mscorlib::System::Runtime::Serialization::Formatters::TypeFilterLevel::__ENUM__ securityLevel)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(t).name());
						__parameter_types__[1] = Global::GetType(typeid(securityLevel).name());
						__parameters__[0] = (MonoObject*)t;
						__parameters__[1] = reinterpret_cast<void*>(securityLevel);
						Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "FormatterServices", 0, NULL, "CheckTypeSecurity", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Object FormatterServices::GetSafeUninitializedObject(mscorlib::System::Type type)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(type).name());
						__parameters__[0] = (MonoObject*)type;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "FormatterServices", 0, NULL, "GetSafeUninitializedObject", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Object(__result__);
				}

				mscorlib::System::Runtime::Serialization::ISerializationSurrogate FormatterServices::GetSurrogateForCyclicalReference(mscorlib::System::Runtime::Serialization::ISerializationSurrogate innerSurrogate)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(innerSurrogate).name());
						__parameters__[0] = (MonoObject*)innerSurrogate;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "FormatterServices", 0, NULL, "GetSurrogateForCyclicalReference", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Runtime::Serialization::ISerializationSurrogate(__result__);
				}


			}
		}
	}
}
