#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_UCOMITYPECOMP_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_UCOMITYPECOMP_H

#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_DESCKIND.h>
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

				class UCOMITypeInfo;
				class BINDPTR;
				

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

				class UCOMITypeComp
				{
				public:
					UCOMITypeComp(MonoObject *nativeObject)
					{
						__mscorlib_System_Runtime_InteropServices_UCOMITypeComp = nativeObject;
					};
				
					~UCOMITypeComp()
					{
					};
				

					UCOMITypeComp & operator=(UCOMITypeComp &value) { __mscorlib_System_Runtime_InteropServices_UCOMITypeComp = value.__mscorlib_System_Runtime_InteropServices_UCOMITypeComp; return value; };
					operator MonoObject*() { return __mscorlib_System_Runtime_InteropServices_UCOMITypeComp; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_InteropServices_UCOMITypeComp = value; return value; };


					virtual void  Bind(mscorlib::System::String szName, mscorlib::System::Int32 lHashVal, mscorlib::System::Int16 wFlags, mscorlib::System::Runtime::InteropServices::UCOMITypeInfo ppTInfo, mscorlib::System::Runtime::InteropServices::DESCKIND::__ENUM__ pDescKind, mscorlib::System::Runtime::InteropServices::BINDPTR pBindPtr);
					virtual void  Bind(const char *szName, mscorlib::System::Int32 lHashVal, mscorlib::System::Int16 wFlags, mscorlib::System::Runtime::InteropServices::UCOMITypeInfo ppTInfo, mscorlib::System::Runtime::InteropServices::DESCKIND::__ENUM__ pDescKind, mscorlib::System::Runtime::InteropServices::BINDPTR pBindPtr);
					virtual void  BindType(mscorlib::System::String szName, mscorlib::System::Int32 lHashVal, mscorlib::System::Runtime::InteropServices::UCOMITypeInfo ppTInfo, mscorlib::System::Runtime::InteropServices::UCOMITypeComp ppTComp);
					virtual void  BindType(const char *szName, mscorlib::System::Int32 lHashVal, mscorlib::System::Runtime::InteropServices::UCOMITypeInfo ppTInfo, mscorlib::System::Runtime::InteropServices::UCOMITypeComp ppTComp);


				
				protected:
					MonoObject *__mscorlib_System_Runtime_InteropServices_UCOMITypeComp;
				
				private:
				
				};

			}
		}
	}
}
#endif
