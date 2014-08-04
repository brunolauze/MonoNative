#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_SAFEHANDLE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_SAFEHANDLE_H

#include <mscorlib/System/Runtime/ConstrainedExecution/mscorlib_System_Runtime_ConstrainedExecution_CriticalFinalizerObject.h>
#include <mscorlib/System/mscorlib_System_IDisposable.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class IntPtr;
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
			namespace InteropServices
			{

				class SafeHandle
					: public mscorlib::System::Runtime::ConstrainedExecution::CriticalFinalizerObject
					, public virtual mscorlib::System::IDisposable
				{
				public:
					SafeHandle(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Runtime::ConstrainedExecution::CriticalFinalizerObject(nativeTypeInfo)
					, mscorlib::System::IDisposable(NULL)
					{
					};
				
					SafeHandle(MonoObject *nativeObject)
					: mscorlib::System::Runtime::ConstrainedExecution::CriticalFinalizerObject(nativeObject)
					, mscorlib::System::IDisposable(nativeObject)
					{
					};
				
					~SafeHandle()
					{
					};
				

					SafeHandle & operator=(SafeHandle &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					void  Close();
					void  DangerousAddRef(mscorlib::System::Boolean success);
					mscorlib::System::IntPtr  DangerousGetHandle();
					void  DangerousRelease();
					virtual void  Dispose();
					void  SetHandleAsInvalid();
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_IsClosed)) mscorlib::System::Boolean  IsClosed;
					__declspec(property(get=get_IsInvalid)) mscorlib::System::Boolean  IsInvalid;

					//Get Set Properties Methods
					//	Get:IsClosed
					mscorlib::System::Boolean  get_IsClosed();

					//	Get:IsInvalid
					mscorlib::System::Boolean  get_IsInvalid();

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
