#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_SERIALIZATION_OBJECTMANAGER_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ISurrogateSelector.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_StreamingContext.h>

namespace mscorlib
{
	namespace System
	{

		class String;
		class Type;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class MemberInfo;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Serialization
			{

				class SerializationInfo;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Serialization
			{

				class ObjectManager
					: public mscorlib::System::Object
				{
				public:
					ObjectManager(mscorlib::System::Runtime::Serialization::ISurrogateSelector selector, mscorlib::System::Runtime::Serialization::StreamingContext context)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Serialization.ObjectManager"))
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Runtime.Serialization", "ISurrogateSelector");
						__parameter_types__[1] = Global::GetType("mscorlib", "System.Runtime.Serialization", "StreamingContext");
						__parameters__[0] = (MonoObject*)selector;
						__parameters__[1] = (MonoObject*)context;
						__native_object__ = Global::New("mscorlib", "System.Runtime.Serialization", "ObjectManager", 2, __parameter_types__, __parameters__);
					};
				
					ObjectManager(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					ObjectManager(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~ObjectManager()
					{
					};
				

					ObjectManager & operator=(ObjectManager &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual void  DoFixups();
					virtual mscorlib::System::Object  GetObject(mscorlib::System::Int64 objectID);
					virtual void  RaiseDeserializationEvent();
					void  RaiseOnDeserializingEvent(mscorlib::System::Object obj);
					virtual void  RecordArrayElementFixup(mscorlib::System::Int64 arrayToBeFixed, mscorlib::System::Int32 index, mscorlib::System::Int64 objectRequired);
					virtual void  RecordArrayElementFixup(mscorlib::System::Int64 arrayToBeFixed, std::vector<mscorlib::System::Int32*> indices, mscorlib::System::Int64 objectRequired);
					virtual void  RecordDelayedFixup(mscorlib::System::Int64 objectToBeFixed, mscorlib::System::String memberName, mscorlib::System::Int64 objectRequired);
					virtual void  RecordFixup(mscorlib::System::Int64 objectToBeFixed, mscorlib::System::Reflection::MemberInfo member, mscorlib::System::Int64 objectRequired);
					virtual void  RegisterObject(mscorlib::System::Object obj, mscorlib::System::Int64 objectID);
					void  RegisterObject(mscorlib::System::Object obj, mscorlib::System::Int64 objectID, mscorlib::System::Runtime::Serialization::SerializationInfo info);
					void  RegisterObject(mscorlib::System::Object obj, mscorlib::System::Int64 objectID, mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Int64 idOfContainingObj, mscorlib::System::Reflection::MemberInfo member);
					void  RegisterObject(mscorlib::System::Object obj, mscorlib::System::Int64 objectID, mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Int64 idOfContainingObj, mscorlib::System::Reflection::MemberInfo member, std::vector<mscorlib::System::Int32*> arrayIndex);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
