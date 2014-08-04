#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONOBJECTMANAGER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONOBJECTMANAGER_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_StreamingContext.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		class String;
		

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

				class SerializationObjectManager
					: public mscorlib::System::Object
				{
				public:
					SerializationObjectManager(mscorlib::System::Runtime::Serialization::StreamingContext context)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Serialization.SerializationObjectManager"))
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Runtime.Serialization", "StreamingContext");
						__parameters__[0] = (MonoObject*)context;
						__native_object__ = Global::New("mscorlib", "System.Runtime.Serialization", "SerializationObjectManager", 1, __parameter_types__, __parameters__);
					};
				
					SerializationObjectManager(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					SerializationObjectManager(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~SerializationObjectManager()
					{
					};
				

					SerializationObjectManager & operator=(SerializationObjectManager &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					void  RegisterObject(mscorlib::System::Object obj);
					void  RaiseOnSerializedEvent();
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
