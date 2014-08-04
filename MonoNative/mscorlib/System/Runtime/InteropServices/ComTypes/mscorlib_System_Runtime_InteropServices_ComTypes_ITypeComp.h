#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_ITYPECOMP_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_ITYPECOMP_H

#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_DESCKIND.h>
#include <Global.h>

namespace mscorlib
{
	namespace System
	{

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
				namespace ComTypes
				{

					class ITypeInfo;
					class BINDPTR;
					

				}
			}
		}
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
				namespace ComTypes
				{

					class ITypeComp
					{
					public:
						ITypeComp(MonoObject *nativeObject)
						{
							__mscorlib_System_Runtime_InteropServices_ComTypes_ITypeComp = nativeObject;
						};
					
						~ITypeComp()
						{
						};
					

						ITypeComp & operator=(ITypeComp &value) { __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeComp = value.__mscorlib_System_Runtime_InteropServices_ComTypes_ITypeComp; return value; };
						operator MonoObject*() { return __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeComp; };
						MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeComp = value; return value; };


						virtual void  Bind(mscorlib::System::String szName, mscorlib::System::Int32 lHashVal, mscorlib::System::Int16 wFlags, mscorlib::System::Runtime::InteropServices::ComTypes::ITypeInfo ppTInfo, mscorlib::System::Runtime::InteropServices::ComTypes::DESCKIND::__ENUM__ pDescKind, mscorlib::System::Runtime::InteropServices::ComTypes::BINDPTR pBindPtr);
						virtual void  BindType(mscorlib::System::String szName, mscorlib::System::Int32 lHashVal, mscorlib::System::Runtime::InteropServices::ComTypes::ITypeInfo ppTInfo, mscorlib::System::Runtime::InteropServices::ComTypes::ITypeComp ppTComp);


					
					protected:
						MonoObject *__mscorlib_System_Runtime_InteropServices_ComTypes_ITypeComp;
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
