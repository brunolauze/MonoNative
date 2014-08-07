#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONEVENTARGS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONEVENTARGS_H

#include <mscorlib/System/mscorlib_System_EventArgs.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ISafeSerializationData.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Serialization
			{

				class StreamingContext;
				

			}
		}
	}
}
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

				class SafeSerializationEventArgs
					: public mscorlib::System::EventArgs
				{
				public:
					SafeSerializationEventArgs(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::EventArgs(nativeTypeInfo)
					{
					};
				
					SafeSerializationEventArgs(MonoObject *nativeObject)
					: mscorlib::System::EventArgs(nativeObject)
					{
					};
				
					~SafeSerializationEventArgs()
					{
					};
				

					SafeSerializationEventArgs & operator=(SafeSerializationEventArgs &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(SafeSerializationEventArgs &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					void  AddSerializedState(mscorlib::System::Runtime::Serialization::ISafeSerializationData serializedState);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_StreamingContext)) mscorlib::System::Runtime::Serialization::StreamingContext  StreamingContext;

					//Get Set Properties Methods
					//	Get:StreamingContext
					mscorlib::System::Runtime::Serialization::StreamingContext  get_StreamingContext() const;

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
