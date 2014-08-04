#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_HOSTEXECUTIONCONTEXT_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_HOSTEXECUTIONCONTEXT_H

#include <mscorlib/System/mscorlib_System_Object.h>

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

			class HostExecutionContext
				: public mscorlib::System::Object
			{
			public:
				HostExecutionContext()
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.HostExecutionContext"))
				{
					__native_object__ = Global::New("mscorlib", "System.Threading", "HostExecutionContext");
				};
			
				HostExecutionContext(mscorlib::System::Object state)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.HostExecutionContext"))
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Object");
					__parameters__[0] = (MonoObject*)state;
					__native_object__ = Global::New("mscorlib", "System.Threading", "HostExecutionContext", 1, __parameter_types__, __parameters__);
				};
			
				HostExecutionContext(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				{
				};
			
				HostExecutionContext(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				{
				};
			
				~HostExecutionContext()
				{
				};
			

				HostExecutionContext & operator=(HostExecutionContext &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual mscorlib::System::Threading::HostExecutionContext  CreateCopy();
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
