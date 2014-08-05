#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_ITYPELIB2_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_ITYPELIB2_H

#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_ITypeLib.h>
#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_ITypeComp.h>
#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_TYPEKIND.h>

namespace mscorlib
{
	namespace System
	{

		class String;
		class Guid;
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
				namespace ComTypes
				{

					class ITypeLib2
						: public virtual mscorlib::System::Runtime::InteropServices::ComTypes::ITypeLib
					{
					public:
						ITypeLib2(MonoObject *nativeObject)
						: mscorlib::System::Runtime::InteropServices::ComTypes::ITypeLib(nativeObject)
						{
						};
					
						~ITypeLib2()
						{
						};
					

						__declspec(property(get=get___mscorlib_System_Runtime_InteropServices_ComTypes_ITypeLib2, put=set___mscorlib_System_Runtime_InteropServices_ComTypes_ITypeLib2)) MonoObject *__mscorlib_System_Runtime_InteropServices_ComTypes_ITypeLib2;
						MonoObject* get___mscorlib_System_Runtime_InteropServices_ComTypes_ITypeLib2() const
						{
							return ITypeLib2::__mscorlib_System_Runtime_InteropServices_ComTypes_ITypeLib;
						}
						void set___mscorlib_System_Runtime_InteropServices_ComTypes_ITypeLib2(MonoObject *value)
						{
							ITypeLib2::__mscorlib_System_Runtime_InteropServices_ComTypes_ITypeLib = value;
						}
						ITypeLib2 & operator=(ITypeLib2 &value) { __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeLib2 = value.__mscorlib_System_Runtime_InteropServices_ComTypes_ITypeLib2; return value; };
						operator MonoObject*() { return __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeLib2; };
						MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeLib2 = value; return value; };


						virtual void  FindName(mscorlib::System::String szNameBuf, mscorlib::System::Int32 lHashVal, std::vector<mscorlib::System::Runtime::InteropServices::ComTypes::ITypeInfo*> ppTInfo, std::vector<mscorlib::System::Int32*> rgMemId, mscorlib::System::Int16 pcFound);
						virtual void  GetCustData(mscorlib::System::Guid guid, mscorlib::System::Object pVarVal);
						virtual void  GetDocumentation(mscorlib::System::Int32 index, mscorlib::System::String strName, mscorlib::System::String strDocString, mscorlib::System::Int32 dwHelpContext, mscorlib::System::String strHelpFile);
						virtual void  GetLibAttr(mscorlib::System::IntPtr ppTLibAttr);
						virtual void  GetLibStatistics(mscorlib::System::IntPtr pcUniqueNames, mscorlib::System::Int32 pcchUniqueNames);
						virtual void  GetDocumentation2(mscorlib::System::Int32 index, mscorlib::System::String pbstrHelpString, mscorlib::System::Int32 pdwHelpStringContext, mscorlib::System::String pbstrHelpStringDll);
						virtual void  GetAllCustData(mscorlib::System::IntPtr pCustData);
						virtual void  GetTypeComp(mscorlib::System::Runtime::InteropServices::ComTypes::ITypeComp ppTComp);
						virtual void  GetTypeInfo(mscorlib::System::Int32 index, mscorlib::System::Runtime::InteropServices::ComTypes::ITypeInfo ppTI);
						virtual void  GetTypeInfoOfGuid(mscorlib::System::Guid guid, mscorlib::System::Runtime::InteropServices::ComTypes::ITypeInfo ppTInfo);
						virtual void  GetTypeInfoType(mscorlib::System::Int32 index, mscorlib::System::Runtime::InteropServices::ComTypes::TYPEKIND::__ENUM__ pTKind);
						virtual mscorlib::System::Boolean  IsName(mscorlib::System::String szNameBuf, mscorlib::System::Int32 lHashVal);
						virtual void  ReleaseTLibAttr(mscorlib::System::IntPtr pTLibAttr);
						virtual mscorlib::System::Int32  GetTypeInfoCount();


					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
