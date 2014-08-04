#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_ICUSTOMMARSHALER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_ICUSTOMMARSHALER_H

#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class IntPtr;
		

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

				class ICustomMarshaler
				{
				public:
					ICustomMarshaler(MonoObject *nativeObject)
					{
						__mscorlib_System_Runtime_InteropServices_ICustomMarshaler = nativeObject;
					};
				
					~ICustomMarshaler()
					{
					};
				

					ICustomMarshaler & operator=(ICustomMarshaler &value) { __mscorlib_System_Runtime_InteropServices_ICustomMarshaler = value.__mscorlib_System_Runtime_InteropServices_ICustomMarshaler; return value; };
					operator MonoObject*() { return __mscorlib_System_Runtime_InteropServices_ICustomMarshaler; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_InteropServices_ICustomMarshaler = value; return value; };


					virtual void  CleanUpManagedData(mscorlib::System::Object ManagedObj);
					virtual void  CleanUpNativeData(mscorlib::System::IntPtr pNativeData);
					virtual mscorlib::System::Int32  GetNativeDataSize();
					virtual mscorlib::System::IntPtr  MarshalManagedToNative(mscorlib::System::Object ManagedObj);
					virtual mscorlib::System::Object  MarshalNativeToManaged(mscorlib::System::IntPtr pNativeData);


				
				protected:
					MonoObject *__mscorlib_System_Runtime_InteropServices_ICustomMarshaler;
				
				private:
				
				};

			}
		}
	}
}
#endif
