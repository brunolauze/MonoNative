#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_EXECUTIONCONTEXT_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_EXECUTIONCONTEXT_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ISerializable.h>
#include <mscorlib/System/mscorlib_System_IDisposable.h>

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

			class AsyncFlowControl;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			class ExecutionContext
				: public mscorlib::System::Object
				, public virtual mscorlib::System::Runtime::Serialization::ISerializable
				, public virtual mscorlib::System::IDisposable
			{
			public:
				ExecutionContext(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				, mscorlib::System::IDisposable(NULL)
				{
				};
			
				ExecutionContext(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				, mscorlib::System::Runtime::Serialization::ISerializable(nativeObject)
				, mscorlib::System::IDisposable(nativeObject)
				{
				};
			
				~ExecutionContext()
				{
				};
			

				ExecutionContext & operator=(ExecutionContext &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				static mscorlib::System::Threading::ExecutionContext  Capture();
				mscorlib::System::Threading::ExecutionContext  CreateCopy();
				virtual void  Dispose();
				virtual void  GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context);
				static mscorlib::System::Boolean  IsFlowSuppressed();
				static void  RestoreFlow();
				static void  Run(mscorlib::System::Threading::ExecutionContext executionContext, mscorlib::Callback<void  (mscorlib::System::Object )> callback, mscorlib::System::Object state);
				static mscorlib::System::Threading::AsyncFlowControl  SuppressFlow();
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
