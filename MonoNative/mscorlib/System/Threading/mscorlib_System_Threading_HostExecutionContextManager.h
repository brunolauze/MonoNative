#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_HOSTEXECUTIONCONTEXTMANAGER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_HOSTEXECUTIONCONTEXTMANAGER_H

#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			class HostExecutionContext;
			

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

			class HostExecutionContextManager
				: public mscorlib::System::Object
			{
			public:
				HostExecutionContextManager()
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.HostExecutionContextManager"))
				{
					__native_object__ = Global::New("mscorlib", "System.Threading", "HostExecutionContextManager");
				};
			
				HostExecutionContextManager(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				{
				};
			
				HostExecutionContextManager(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				{
				};
			
				~HostExecutionContextManager()
				{
				};
			

				HostExecutionContextManager & operator=(HostExecutionContextManager &value) { __native_object__ = value.GetNativeObject(); return value; };
				bool operator==(HostExecutionContextManager &value) { return mscorlib::System::Object::Equals(value); };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual mscorlib::System::Threading::HostExecutionContext  Capture();
				virtual void  Revert(mscorlib::System::Object previousState);
				virtual mscorlib::System::Object  SetHostExecutionContext(mscorlib::System::Threading::HostExecutionContext hostExecutionContext);
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
