#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_COMPRESSEDSTACK_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_COMPRESSEDSTACK_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ISerializable.h>

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

		class Type;
		class String;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			class CompressedStack
				: public mscorlib::System::Object
				, public virtual mscorlib::System::Runtime::Serialization::ISerializable
			{
			public:
				CompressedStack(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				{
				};
			
				CompressedStack(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				, mscorlib::System::Runtime::Serialization::ISerializable(nativeObject)
				{
				};
			
				~CompressedStack()
				{
				};
			

				CompressedStack & operator=(CompressedStack &value) { __native_object__ = value.GetNativeObject(); return value; };
				bool operator==(CompressedStack &value) { return mscorlib::System::Object::Equals(value); };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				mscorlib::System::Threading::CompressedStack  CreateCopy();
				static mscorlib::System::Threading::CompressedStack  Capture();
				static mscorlib::System::Threading::CompressedStack  GetCompressedStack();
				virtual void  GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context);
				static void  Run(mscorlib::System::Threading::CompressedStack compressedStack, mscorlib::Callback<void  (mscorlib::System::Object )> callback, mscorlib::System::Object state);
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
