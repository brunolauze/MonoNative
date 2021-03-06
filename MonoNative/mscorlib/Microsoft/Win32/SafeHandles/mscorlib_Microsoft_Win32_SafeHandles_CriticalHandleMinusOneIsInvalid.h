#ifndef __MONO_NATIVE_MSCORLIB_MICROSOFT_WIN32_SAFEHANDLES_CRITICALHANDLEMINUSONEISINVALID_H
#define __MONO_NATIVE_MSCORLIB_MICROSOFT_WIN32_SAFEHANDLES_CRITICALHANDLEMINUSONEISINVALID_H

#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_CriticalHandle.h>
#include <mscorlib/System/mscorlib_System_IDisposable.h>
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
	namespace Microsoft
	{
		namespace Win32
		{
			namespace SafeHandles
			{

				class CriticalHandleMinusOneIsInvalid
					: public mscorlib::System::Runtime::InteropServices::CriticalHandle
					, public virtual mscorlib::System::IDisposable
				{
				public:
					CriticalHandleMinusOneIsInvalid(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Runtime::InteropServices::CriticalHandle(nativeTypeInfo)
					, mscorlib::System::IDisposable(NULL)
					{
					};
				
					CriticalHandleMinusOneIsInvalid(MonoObject *nativeObject)
					: mscorlib::System::Runtime::InteropServices::CriticalHandle(nativeObject)
					, mscorlib::System::IDisposable(nativeObject)
					{
					};
				
					~CriticalHandleMinusOneIsInvalid()
					{
					};
				

					CriticalHandleMinusOneIsInvalid & operator=(CriticalHandleMinusOneIsInvalid &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(CriticalHandleMinusOneIsInvalid &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_IsInvalid)) mscorlib::System::Boolean  IsInvalid;
					__declspec(property(get=get_IsClosed)) mscorlib::System::Boolean  IsClosed;

					//Get Set Properties Methods
					//	Get:IsInvalid
					mscorlib::System::Boolean  get_IsInvalid() const;

					//	Get:IsClosed
					mscorlib::System::Boolean  get_IsClosed() const;

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
