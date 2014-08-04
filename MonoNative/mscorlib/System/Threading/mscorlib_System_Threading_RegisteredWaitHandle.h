#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_REGISTEREDWAITHANDLE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_REGISTEREDWAITHANDLE_H

#include <mscorlib/System/mscorlib_System_MarshalByRefObject.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			class WaitHandle;
			

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

				class ObjRef;
				

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

			class RegisteredWaitHandle
				: public mscorlib::System::MarshalByRefObject
			{
			public:
				RegisteredWaitHandle(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::MarshalByRefObject(nativeTypeInfo)
				{
				};
			
				RegisteredWaitHandle(MonoObject *nativeObject)
				: mscorlib::System::MarshalByRefObject(nativeObject)
				{
				};
			
				~RegisteredWaitHandle()
				{
				};
			

				RegisteredWaitHandle & operator=(RegisteredWaitHandle &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				mscorlib::System::Boolean  Unregister(mscorlib::System::Threading::WaitHandle waitObject);
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
