#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_ICloneable.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ISerializable.h>

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
		namespace Runtime
		{
			namespace Serialization
			{

				class SerializationInfo;
				class StreamingContext;
				

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
			namespace Remoting
			{
				namespace Messaging
				{

					class LogicalCallContext
						: public mscorlib::System::Object
						, public virtual mscorlib::System::ICloneable
						, public virtual mscorlib::System::Runtime::Serialization::ISerializable
					{
					public:
						LogicalCallContext(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::Object(nativeTypeInfo)
						, mscorlib::System::ICloneable(NULL)
						, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
						{
						};
					
						LogicalCallContext(MonoObject *nativeObject)
						: mscorlib::System::Object(nativeObject)
						, mscorlib::System::ICloneable(nativeObject)
						, mscorlib::System::Runtime::Serialization::ISerializable(nativeObject)
						{
						};
					
						~LogicalCallContext()
						{
						};
					

						LogicalCallContext & operator=(LogicalCallContext &value) { __native_object__ = value.GetNativeObject(); return value; };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						void  FreeNamedDataSlot(mscorlib::System::String name);
						mscorlib::System::Object  GetData(mscorlib::System::String name);
						virtual void  GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context);
						void  SetData(mscorlib::System::String name, mscorlib::System::Object data);
						virtual mscorlib::System::Object  Clone();
						virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


						//Public Properties
						__declspec(property(get=get_HasInfo)) mscorlib::System::Boolean  HasInfo;

						//Get Set Properties Methods
						//	Get:HasInfo
						mscorlib::System::Boolean  get_HasInfo() const;

					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
