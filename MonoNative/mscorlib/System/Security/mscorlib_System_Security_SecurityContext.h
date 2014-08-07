#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_SECURITYCONTEXT_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_SECURITYCONTEXT_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_IDisposable.h>

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
		namespace Security
		{

			class SecurityContext
				: public mscorlib::System::Object
				, public virtual mscorlib::System::IDisposable
			{
			public:
				SecurityContext(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				, mscorlib::System::IDisposable(NULL)
				{
				};
			
				SecurityContext(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				, mscorlib::System::IDisposable(nativeObject)
				{
				};
			
				~SecurityContext()
				{
				};
			

				SecurityContext & operator=(SecurityContext &value) { __native_object__ = value.GetNativeObject(); return value; };
				bool operator==(SecurityContext &value) { return mscorlib::System::Object::Equals(value); };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				mscorlib::System::Security::SecurityContext  CreateCopy();
				static mscorlib::System::Security::SecurityContext  Capture();
				virtual void  Dispose();
				static mscorlib::System::Boolean  IsFlowSuppressed();
				static mscorlib::System::Boolean  IsWindowsIdentityFlowSuppressed();
				static void  RestoreFlow();
				static void  Run(mscorlib::System::Security::SecurityContext securityContext, mscorlib::Callback<void  (mscorlib::System::Object )> callback, mscorlib::System::Object state);
				static mscorlib::System::Threading::AsyncFlowControl  SuppressFlow();
				static mscorlib::System::Threading::AsyncFlowControl  SuppressFlowWindowsIdentity();
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
