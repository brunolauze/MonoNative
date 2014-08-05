#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_UCOMITYPELIB_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_UCOMITYPELIB_H

#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_TYPEKIND.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_UCOMITypeComp.h>

namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				class UCOMITypeInfo;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{

		class Guid;
		class IntPtr;
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

				class UCOMITypeLib
				{
				public:
					UCOMITypeLib(MonoObject *nativeObject)
					{
						__mscorlib_System_Runtime_InteropServices_UCOMITypeLib = nativeObject;
					};
				
					~UCOMITypeLib()
					{
					};
				

					UCOMITypeLib & operator=(UCOMITypeLib &value) { __mscorlib_System_Runtime_InteropServices_UCOMITypeLib = value.__mscorlib_System_Runtime_InteropServices_UCOMITypeLib; return value; };
					operator MonoObject*() { return __mscorlib_System_Runtime_InteropServices_UCOMITypeLib; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_InteropServices_UCOMITypeLib = value; return value; };


					virtual mscorlib::System::Int32  GetTypeInfoCount();
					virtual void  GetTypeInfo(mscorlib::System::Int32 index, mscorlib::System::Runtime::InteropServices::UCOMITypeInfo ppTI);
					virtual void  GetTypeInfoType(mscorlib::System::Int32 index, mscorlib::System::Runtime::InteropServices::TYPEKIND::__ENUM__ pTKind);
					virtual void  GetTypeInfoOfGuid(mscorlib::System::Guid guid, mscorlib::System::Runtime::InteropServices::UCOMITypeInfo ppTInfo);
					virtual void  GetLibAttr(mscorlib::System::IntPtr ppTLibAttr);
					virtual void  GetTypeComp(mscorlib::System::Runtime::InteropServices::UCOMITypeComp ppTComp);
					virtual void  GetDocumentation(mscorlib::System::Int32 index, mscorlib::System::String strName, mscorlib::System::String strDocString, mscorlib::System::Int32 dwHelpContext, mscorlib::System::String strHelpFile);
					virtual mscorlib::System::Boolean  IsName(mscorlib::System::String szNameBuf, mscorlib::System::Int32 lHashVal);
					virtual mscorlib::System::Boolean  IsName(const char *szNameBuf, mscorlib::System::Int32 lHashVal);
					virtual void  FindName(mscorlib::System::String szNameBuf, mscorlib::System::Int32 lHashVal, std::vector<mscorlib::System::Runtime::InteropServices::UCOMITypeInfo*> ppTInfo, std::vector<mscorlib::System::Int32*> rgMemId, mscorlib::System::Int16 pcFound);
					virtual void  FindName(const char *szNameBuf, mscorlib::System::Int32 lHashVal, std::vector<mscorlib::System::Runtime::InteropServices::UCOMITypeInfo*> ppTInfo, std::vector<mscorlib::System::Int32*> rgMemId, mscorlib::System::Int16 pcFound);
					virtual void  ReleaseTLibAttr(mscorlib::System::IntPtr pTLibAttr);


				
				protected:
					MonoObject *__mscorlib_System_Runtime_InteropServices_UCOMITypeLib;
				
				private:
				
				};

			}
		}
	}
}
#endif
