#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES__ACTIVATOR_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES__ACTIVATOR_H

#include <Global.h>

namespace mscorlib
{
	namespace System
	{

		class Guid;
		

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

				class _Activator
				{
				public:
					_Activator(MonoObject *nativeObject)
					{
						__mscorlib_System_Runtime_InteropServices__Activator = nativeObject;
					};
				
					~_Activator()
					{
					};
				

					_Activator & operator=(_Activator &value) { __mscorlib_System_Runtime_InteropServices__Activator = value.__mscorlib_System_Runtime_InteropServices__Activator; return value; };
					operator MonoObject*() { return __mscorlib_System_Runtime_InteropServices__Activator; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_InteropServices__Activator = value; return value; };


					virtual void  GetIDsOfNames(mscorlib::System::Guid riid, mscorlib::System::IntPtr rgszNames, mscorlib::System::UInt32 cNames, mscorlib::System::UInt32 lcid, mscorlib::System::IntPtr rgDispId);
					virtual void  GetTypeInfo(mscorlib::System::UInt32 iTInfo, mscorlib::System::UInt32 lcid, mscorlib::System::IntPtr ppTInfo);
					virtual void  GetTypeInfoCount(mscorlib::System::UInt32 pcTInfo);
					virtual void  Invoke(mscorlib::System::UInt32 dispIdMember, mscorlib::System::Guid riid, mscorlib::System::UInt32 lcid, mscorlib::System::Int16 wFlags, mscorlib::System::IntPtr pDispParams, mscorlib::System::IntPtr pVarResult, mscorlib::System::IntPtr pExcepInfo, mscorlib::System::IntPtr puArgErr);


				
				protected:
					MonoObject *__mscorlib_System_Runtime_InteropServices__Activator;
				
				private:
				
				};

			}
		}
	}
}
#endif
