#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ObjectManager.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MemberInfo.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_SerializationInfo.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Serialization
			{

				//Public Methods
				void ObjectManager::DoFixups()
				{
						Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "ObjectManager", 0, NULL, "DoFixups", __native_object__, 0, NULL, NULL, NULL);
				}

				mscorlib::System::Object ObjectManager::GetObject(mscorlib::System::Int64 objectID)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(objectID).name());
						__parameters__[0] = &objectID;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "ObjectManager", 0, NULL, "GetObject", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Object(__result__);
				}

				void ObjectManager::RaiseDeserializationEvent()
				{
						Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "ObjectManager", 0, NULL, "RaiseDeserializationEvent", __native_object__, 0, NULL, NULL, NULL);
				}

				void ObjectManager::RaiseOnDeserializingEvent(mscorlib::System::Object obj)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(obj).name());
						__parameters__[0] = (MonoObject*)obj;
						Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "ObjectManager", 0, NULL, "RaiseOnDeserializingEvent", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void ObjectManager::RecordArrayElementFixup(mscorlib::System::Int64 arrayToBeFixed, mscorlib::System::Int32 index, mscorlib::System::Int64 objectRequired)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(arrayToBeFixed).name());
						__parameter_types__[1] = Global::GetType(typeid(index).name());
						__parameter_types__[2] = Global::GetType(typeid(objectRequired).name());
						__parameters__[0] = &arrayToBeFixed;
						__parameters__[1] = &index;
						__parameters__[2] = &objectRequired;
						Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "ObjectManager", 0, NULL, "RecordArrayElementFixup", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				}

				void ObjectManager::RecordArrayElementFixup(mscorlib::System::Int64 arrayToBeFixed, std::vector<mscorlib::System::Int32*> indices, mscorlib::System::Int64 objectRequired)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(arrayToBeFixed).name());
						__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Int32")), 1));
						__parameter_types__[2] = Global::GetType(typeid(objectRequired).name());
						__parameters__[0] = &arrayToBeFixed;
						__parameters__[1] = Global::FromArray<mscorlib::System::Int32*>(indices, typeid(mscorlib::System::Int32).name());
						__parameters__[2] = &objectRequired;
						Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "ObjectManager", 0, NULL, "RecordArrayElementFixup", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				}

				void ObjectManager::RecordDelayedFixup(mscorlib::System::Int64 objectToBeFixed, mscorlib::System::String memberName, mscorlib::System::Int64 objectRequired)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(objectToBeFixed).name());
						__parameter_types__[1] = Global::GetType(typeid(memberName).name());
						__parameter_types__[2] = Global::GetType(typeid(objectRequired).name());
						__parameters__[0] = &objectToBeFixed;
						__parameters__[1] = (MonoObject*)memberName;
						__parameters__[2] = &objectRequired;
						Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "ObjectManager", 0, NULL, "RecordDelayedFixup", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				}

				void ObjectManager::RecordDelayedFixup(mscorlib::System::Int64 objectToBeFixed, const char *memberName, mscorlib::System::Int64 objectRequired)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(objectToBeFixed).name());
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[2] = Global::GetType(typeid(objectRequired).name());
						__parameters__[0] = &objectToBeFixed;
						__parameters__[1] = mono_string_new(Global::GetDomain(), memberName);
						__parameters__[2] = &objectRequired;
						Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "ObjectManager", 0, NULL, "RecordDelayedFixup", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				}

				void ObjectManager::RecordFixup(mscorlib::System::Int64 objectToBeFixed, mscorlib::System::Reflection::MemberInfo member, mscorlib::System::Int64 objectRequired)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(objectToBeFixed).name());
						__parameter_types__[1] = Global::GetType(typeid(member).name());
						__parameter_types__[2] = Global::GetType(typeid(objectRequired).name());
						__parameters__[0] = &objectToBeFixed;
						__parameters__[1] = (MonoObject*)member;
						__parameters__[2] = &objectRequired;
						Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "ObjectManager", 0, NULL, "RecordFixup", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				}

				void ObjectManager::RegisterObject(mscorlib::System::Object obj, mscorlib::System::Int64 objectID)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(obj).name());
						__parameter_types__[1] = Global::GetType(typeid(objectID).name());
						__parameters__[0] = (MonoObject*)obj;
						__parameters__[1] = &objectID;
						Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "ObjectManager", 0, NULL, "RegisterObject", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void ObjectManager::RegisterObject(mscorlib::System::Object obj, mscorlib::System::Int64 objectID, mscorlib::System::Runtime::Serialization::SerializationInfo info)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(obj).name());
						__parameter_types__[1] = Global::GetType(typeid(objectID).name());
						__parameter_types__[2] = Global::GetType(typeid(info).name());
						__parameters__[0] = (MonoObject*)obj;
						__parameters__[1] = &objectID;
						__parameters__[2] = (MonoObject*)info;
						Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "ObjectManager", 0, NULL, "RegisterObject", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				}

				void ObjectManager::RegisterObject(mscorlib::System::Object obj, mscorlib::System::Int64 objectID, mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Int64 idOfContainingObj, mscorlib::System::Reflection::MemberInfo member)
				{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType(typeid(obj).name());
						__parameter_types__[1] = Global::GetType(typeid(objectID).name());
						__parameter_types__[2] = Global::GetType(typeid(info).name());
						__parameter_types__[3] = Global::GetType(typeid(idOfContainingObj).name());
						__parameter_types__[4] = Global::GetType(typeid(member).name());
						__parameters__[0] = (MonoObject*)obj;
						__parameters__[1] = &objectID;
						__parameters__[2] = (MonoObject*)info;
						__parameters__[3] = &idOfContainingObj;
						__parameters__[4] = (MonoObject*)member;
						Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "ObjectManager", 0, NULL, "RegisterObject", __native_object__, 5, __parameter_types__, __parameters__, NULL);
				}

				void ObjectManager::RegisterObject(mscorlib::System::Object obj, mscorlib::System::Int64 objectID, mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Int64 idOfContainingObj, mscorlib::System::Reflection::MemberInfo member, std::vector<mscorlib::System::Int32*> arrayIndex)
				{
						MonoType *__parameter_types__[6];
						void *__parameters__[6];
						__parameter_types__[0] = Global::GetType(typeid(obj).name());
						__parameter_types__[1] = Global::GetType(typeid(objectID).name());
						__parameter_types__[2] = Global::GetType(typeid(info).name());
						__parameter_types__[3] = Global::GetType(typeid(idOfContainingObj).name());
						__parameter_types__[4] = Global::GetType(typeid(member).name());
						__parameter_types__[5] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Int32")), 1));
						__parameters__[0] = (MonoObject*)obj;
						__parameters__[1] = &objectID;
						__parameters__[2] = (MonoObject*)info;
						__parameters__[3] = &idOfContainingObj;
						__parameters__[4] = (MonoObject*)member;
						__parameters__[5] = Global::FromArray<mscorlib::System::Int32*>(arrayIndex, typeid(mscorlib::System::Int32).name());
						Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "ObjectManager", 0, NULL, "RegisterObject", __native_object__, 6, __parameter_types__, __parameters__, NULL);
				}


			}
		}
	}
}
