#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_ITYPEINFO2_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_ITYPEINFO2_H

#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo.h>
#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_INVOKEKIND.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_ITypeLib.h>
#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_IMPLTYPEFLAGS.h>
#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_TYPEKIND.h>
#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_ITypeComp.h>

namespace mscorlib
{
	namespace System
	{

		class IntPtr;
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

					class DISPPARAMS;
					

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

					class ITypeInfo2
						: public virtual mscorlib::System::Runtime::InteropServices::ComTypes::ITypeInfo
					{
					public:
						ITypeInfo2(MonoObject *nativeObject)
						: mscorlib::System::Runtime::InteropServices::ComTypes::ITypeInfo(nativeObject)
						{
						};
					
						~ITypeInfo2()
						{
						};
					

						__declspec(property(get=get___mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo2, put=set___mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo2)) MonoObject *__mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo2;
						MonoObject* get___mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo2() const
						{
							return ITypeInfo2::__mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo;
						}
						void set___mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo2(MonoObject *value)
						{
							ITypeInfo2::__mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo = value;
						}
						ITypeInfo2 & operator=(ITypeInfo2 &value) { __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo2 = value.__mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo2; return value; };
						operator MonoObject*() { return __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo2; };
						MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo2 = value; return value; };


						virtual void  AddressOfMember(mscorlib::System::Int32 memid, mscorlib::System::Runtime::InteropServices::ComTypes::INVOKEKIND::__ENUM__ invKind, mscorlib::System::IntPtr ppv);
						virtual void  CreateInstance(mscorlib::System::Object pUnkOuter, mscorlib::System::Guid riid, mscorlib::System::Object ppvObj);
						virtual void  GetContainingTypeLib(mscorlib::System::Runtime::InteropServices::ComTypes::ITypeLib ppTLB, mscorlib::System::Int32 pIndex);
						virtual void  GetDllEntry(mscorlib::System::Int32 memid, mscorlib::System::Runtime::InteropServices::ComTypes::INVOKEKIND::__ENUM__ invKind, mscorlib::System::IntPtr pBstrDllName, mscorlib::System::IntPtr pBstrName, mscorlib::System::IntPtr pwOrdinal);
						virtual void  GetDocumentation(mscorlib::System::Int32 index, mscorlib::System::String strName, mscorlib::System::String strDocString, mscorlib::System::Int32 dwHelpContext, mscorlib::System::String strHelpFile);
						virtual void  GetIDsOfNames(std::vector<mscorlib::System::String*> rgszNames, mscorlib::System::Int32 cNames, std::vector<mscorlib::System::Int32*> pMemId);
						virtual void  GetImplTypeFlags(mscorlib::System::Int32 index, mscorlib::System::Runtime::InteropServices::ComTypes::IMPLTYPEFLAGS::__ENUM__ pImplTypeFlags);
						virtual void  GetTypeKind(mscorlib::System::Runtime::InteropServices::ComTypes::TYPEKIND::__ENUM__ pTypeKind);
						virtual void  GetTypeFlags(mscorlib::System::Int32 pTypeFlags);
						virtual void  GetFuncDesc(mscorlib::System::Int32 index, mscorlib::System::IntPtr ppFuncDesc);
						virtual void  GetMops(mscorlib::System::Int32 memid, mscorlib::System::String pBstrMops);
						virtual void  GetNames(mscorlib::System::Int32 memid, std::vector<mscorlib::System::String*> rgBstrNames, mscorlib::System::Int32 cMaxNames, mscorlib::System::Int32 pcNames);
						virtual void  GetRefTypeInfo(mscorlib::System::Int32 hRef, mscorlib::System::Runtime::InteropServices::ComTypes::ITypeInfo ppTI);
						virtual void  GetRefTypeOfImplType(mscorlib::System::Int32 index, mscorlib::System::Int32 href);
						virtual void  GetTypeAttr(mscorlib::System::IntPtr ppTypeAttr);
						virtual void  GetTypeComp(mscorlib::System::Runtime::InteropServices::ComTypes::ITypeComp ppTComp);
						virtual void  GetVarDesc(mscorlib::System::Int32 index, mscorlib::System::IntPtr ppVarDesc);
						virtual void  GetFuncIndexOfMemId(mscorlib::System::Int32 memid, mscorlib::System::Runtime::InteropServices::ComTypes::INVOKEKIND::__ENUM__ invKind, mscorlib::System::Int32 pFuncIndex);
						virtual void  GetVarIndexOfMemId(mscorlib::System::Int32 memid, mscorlib::System::Int32 pVarIndex);
						virtual void  GetCustData(mscorlib::System::Guid guid, mscorlib::System::Object pVarVal);
						virtual void  GetFuncCustData(mscorlib::System::Int32 index, mscorlib::System::Guid guid, mscorlib::System::Object pVarVal);
						virtual void  GetParamCustData(mscorlib::System::Int32 indexFunc, mscorlib::System::Int32 indexParam, mscorlib::System::Guid guid, mscorlib::System::Object pVarVal);
						virtual void  GetVarCustData(mscorlib::System::Int32 index, mscorlib::System::Guid guid, mscorlib::System::Object pVarVal);
						virtual void  GetImplTypeCustData(mscorlib::System::Int32 index, mscorlib::System::Guid guid, mscorlib::System::Object pVarVal);
						virtual void  GetDocumentation2(mscorlib::System::Int32 memid, mscorlib::System::String pbstrHelpString, mscorlib::System::Int32 pdwHelpStringContext, mscorlib::System::String pbstrHelpStringDll);
						virtual void  GetAllCustData(mscorlib::System::IntPtr pCustData);
						virtual void  GetAllFuncCustData(mscorlib::System::Int32 index, mscorlib::System::IntPtr pCustData);
						virtual void  GetAllParamCustData(mscorlib::System::Int32 indexFunc, mscorlib::System::Int32 indexParam, mscorlib::System::IntPtr pCustData);
						virtual void  GetAllVarCustData(mscorlib::System::Int32 index, mscorlib::System::IntPtr pCustData);
						virtual void  GetAllImplTypeCustData(mscorlib::System::Int32 index, mscorlib::System::IntPtr pCustData);
						virtual void  Invoke(mscorlib::System::Object pvInstance, mscorlib::System::Int32 memid, mscorlib::System::Int16 wFlags, mscorlib::System::Runtime::InteropServices::ComTypes::DISPPARAMS pDispParams, mscorlib::System::IntPtr pVarResult, mscorlib::System::IntPtr pExcepInfo, mscorlib::System::Int32 puArgErr);
						virtual void  ReleaseTypeAttr(mscorlib::System::IntPtr pTypeAttr);
						virtual void  ReleaseFuncDesc(mscorlib::System::IntPtr pFuncDesc);
						virtual void  ReleaseVarDesc(mscorlib::System::IntPtr pVarDesc);


					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
