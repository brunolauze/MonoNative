#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_ITYPELIB_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_ITYPELIB_H

#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_TYPEKIND.h>
#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_ITypeComp.h>

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
					

				}
			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{

		class Guid;
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

					class ITypeLib
					{
					public:
						ITypeLib(MonoObject *nativeObject)
						{
							__mscorlib_System_Runtime_InteropServices_ComTypes_ITypeLib = nativeObject;
						};
					
						~ITypeLib()
						{
						};
					

						ITypeLib & operator=(ITypeLib &value) { __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeLib = value.__mscorlib_System_Runtime_InteropServices_ComTypes_ITypeLib; return value; };
						operator MonoObject*() { return __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeLib; };
						MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeLib = value; return value; };


						virtual mscorlib::System::Int32  GetTypeInfoCount();
						virtual void  GetTypeInfo(mscorlib::System::Int32 index, mscorlib::System::Runtime::InteropServices::ComTypes::ITypeInfo ppTI);
						virtual void  GetTypeInfoType(mscorlib::System::Int32 index, mscorlib::System::Runtime::InteropServices::ComTypes::TYPEKIND::__ENUM__ pTKind);
						virtual void  GetTypeInfoOfGuid(mscorlib::System::Guid guid, mscorlib::System::Runtime::InteropServices::ComTypes::ITypeInfo ppTInfo);
						virtual void  GetLibAttr(mscorlib::System::IntPtr ppTLibAttr);
						virtual void  GetTypeComp(mscorlib::System::Runtime::InteropServices::ComTypes::ITypeComp ppTComp);
						virtual void  GetDocumentation(mscorlib::System::Int32 index, mscorlib::System::String strName, mscorlib::System::String strDocString, mscorlib::System::Int32 dwHelpContext, mscorlib::System::String strHelpFile);
						virtual mscorlib::System::Boolean  IsName(mscorlib::System::String szNameBuf, mscorlib::System::Int32 lHashVal);
						virtual mscorlib::System::Boolean  IsName(const char *szNameBuf, mscorlib::System::Int32 lHashVal);
						virtual void  FindName(mscorlib::System::String szNameBuf, mscorlib::System::Int32 lHashVal, std::vector<mscorlib::System::Runtime::InteropServices::ComTypes::ITypeInfo*> ppTInfo, std::vector<mscorlib::System::Int32*> rgMemId, mscorlib::System::Int16 pcFound);
						virtual void  FindName(const char *szNameBuf, mscorlib::System::Int32 lHashVal, std::vector<mscorlib::System::Runtime::InteropServices::ComTypes::ITypeInfo*> ppTInfo, std::vector<mscorlib::System::Int32*> rgMemId, mscorlib::System::Int16 pcFound);
						virtual void  ReleaseTLibAttr(mscorlib::System::IntPtr pTLibAttr);


					
					protected:
						MonoObject *__mscorlib_System_Runtime_InteropServices_ComTypes_ITypeLib;
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
