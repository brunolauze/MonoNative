#ifndef __MONO_NATIVE_MSCORLIB_MICROSOFT_WIN32_SAFEHANDLES_SAFEHANDLEZEROORMINUSONEISINVALID_H
#define __MONO_NATIVE_MSCORLIB_MICROSOFT_WIN32_SAFEHANDLES_SAFEHANDLEZEROORMINUSONEISINVALID_H

#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_SafeHandle.h>
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
	namespace Microsoft
	{
		namespace Win32
		{
			namespace SafeHandles
			{

				class SafeHandleZeroOrMinusOneIsInvalid
					: public mscorlib::System::Runtime::InteropServices::SafeHandle
					, public virtual mscorlib::System::IDisposable
				{
				public:
					SafeHandleZeroOrMinusOneIsInvalid(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Runtime::InteropServices::SafeHandle(nativeTypeInfo)
					, mscorlib::System::IDisposable(NULL)
					{
					};
				
					SafeHandleZeroOrMinusOneIsInvalid(MonoObject *nativeObject)
					: mscorlib::System::Runtime::InteropServices::SafeHandle(nativeObject)
					, mscorlib::System::IDisposable(nativeObject)
					{
					};
				
					~SafeHandleZeroOrMinusOneIsInvalid()
					{
					};
				

					SafeHandleZeroOrMinusOneIsInvalid & operator=(SafeHandleZeroOrMinusOneIsInvalid &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_IsInvalid)) mscorlib::System::Boolean  IsInvalid;
					__declspec(property(get=get_IsClosed)) mscorlib::System::Boolean  IsClosed;

					//Get Set Properties Methods
					//	Get:IsInvalid
					mscorlib::System::Boolean  get_IsInvalid();

					//	Get:IsClosed
					mscorlib::System::Boolean  get_IsClosed();

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
