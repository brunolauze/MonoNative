#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES__CUSTOMATTRIBUTEBUILDER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES__CUSTOMATTRIBUTEBUILDER_H

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

				class _CustomAttributeBuilder
				{
				public:
					_CustomAttributeBuilder(MonoObject *nativeObject)
					{
						__mscorlib_System_Runtime_InteropServices__CustomAttributeBuilder = nativeObject;
					};
				
					~_CustomAttributeBuilder()
					{
					};
				

					_CustomAttributeBuilder & operator=(_CustomAttributeBuilder &value) { __mscorlib_System_Runtime_InteropServices__CustomAttributeBuilder = value.__mscorlib_System_Runtime_InteropServices__CustomAttributeBuilder; return value; };
					operator MonoObject*() { return __mscorlib_System_Runtime_InteropServices__CustomAttributeBuilder; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_InteropServices__CustomAttributeBuilder = value; return value; };


					virtual void  GetIDsOfNames(mscorlib::System::Guid riid, mscorlib::System::IntPtr rgszNames, mscorlib::System::UInt32 cNames, mscorlib::System::UInt32 lcid, mscorlib::System::IntPtr rgDispId);
					virtual void  GetTypeInfo(mscorlib::System::UInt32 iTInfo, mscorlib::System::UInt32 lcid, mscorlib::System::IntPtr ppTInfo);
					virtual void  GetTypeInfoCount(mscorlib::System::UInt32 pcTInfo);
					virtual void  Invoke(mscorlib::System::UInt32 dispIdMember, mscorlib::System::Guid riid, mscorlib::System::UInt32 lcid, mscorlib::System::Int16 wFlags, mscorlib::System::IntPtr pDispParams, mscorlib::System::IntPtr pVarResult, mscorlib::System::IntPtr pExcepInfo, mscorlib::System::IntPtr puArgErr);


				
				protected:
					MonoObject *__mscorlib_System_Runtime_InteropServices__CustomAttributeBuilder;
				
				private:
				
				};

			}
		}
	}
}
#endif
