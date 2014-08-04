#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_ITYPEINFO_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_ITYPEINFO_H

#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_IMPLTYPEFLAGS.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_INVOKEKIND.h>

namespace mscorlib
{
	namespace System
	{

		class IntPtr;
		class String;
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
				namespace ComTypes
				{

					class ITypeComp;
					class DISPPARAMS;
					class ITypeLib;
					

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

					class ITypeInfo
					{
					public:
						ITypeInfo(MonoObject *nativeObject)
						{
							__mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo = nativeObject;
						};
					
						~ITypeInfo()
						{
						};
					

						ITypeInfo & operator=(ITypeInfo &value) { __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo = value.__mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo; return value; };
						operator MonoObject*() { return __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo; };
						MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo = value; return value; };


						virtual void  GetTypeAttr(mscorlib::System::IntPtr ppTypeAttr);
						virtual void  GetTypeComp(mscorlib::System::Runtime::InteropServices::ComTypes::ITypeComp ppTComp);
						virtual void  GetFuncDesc(mscorlib::System::Int32 index, mscorlib::System::IntPtr ppFuncDesc);
						virtual void  GetVarDesc(mscorlib::System::Int32 index, mscorlib::System::IntPtr ppVarDesc);
						virtual void  GetNames(mscorlib::System::Int32 memid, std::vector<mscorlib::System::String*> rgBstrNames, mscorlib::System::Int32 cMaxNames, mscorlib::System::Int32 pcNames);
						virtual void  GetRefTypeOfImplType(mscorlib::System::Int32 index, mscorlib::System::Int32 href);
						virtual void  GetImplTypeFlags(mscorlib::System::Int32 index, mscorlib::System::Runtime::InteropServices::ComTypes::IMPLTYPEFLAGS::__ENUM__ pImplTypeFlags);
						virtual void  GetIDsOfNames(std::vector<mscorlib::System::String*> rgszNames, mscorlib::System::Int32 cNames, std::vector<mscorlib::System::Int32*> pMemId);
						virtual void  Invoke(mscorlib::System::Object pvInstance, mscorlib::System::Int32 memid, mscorlib::System::Int16 wFlags, mscorlib::System::Runtime::InteropServices::ComTypes::DISPPARAMS pDispParams, mscorlib::System::IntPtr pVarResult, mscorlib::System::IntPtr pExcepInfo, mscorlib::System::Int32 puArgErr);
						virtual void  GetDocumentation(mscorlib::System::Int32 index, mscorlib::System::String strName, mscorlib::System::String strDocString, mscorlib::System::Int32 dwHelpContext, mscorlib::System::String strHelpFile);
						virtual void  GetDllEntry(mscorlib::System::Int32 memid, mscorlib::System::Runtime::InteropServices::ComTypes::INVOKEKIND::__ENUM__ invKind, mscorlib::System::IntPtr pBstrDllName, mscorlib::System::IntPtr pBstrName, mscorlib::System::IntPtr pwOrdinal);
						virtual void  GetRefTypeInfo(mscorlib::System::Int32 hRef, mscorlib::System::Runtime::InteropServices::ComTypes::ITypeInfo ppTI);
						virtual void  AddressOfMember(mscorlib::System::Int32 memid, mscorlib::System::Runtime::InteropServices::ComTypes::INVOKEKIND::__ENUM__ invKind, mscorlib::System::IntPtr ppv);
						virtual void  CreateInstance(mscorlib::System::Object pUnkOuter, mscorlib::System::Guid riid, mscorlib::System::Object ppvObj);
						virtual void  GetMops(mscorlib::System::Int32 memid, mscorlib::System::String pBstrMops);
						virtual void  GetContainingTypeLib(mscorlib::System::Runtime::InteropServices::ComTypes::ITypeLib ppTLB, mscorlib::System::Int32 pIndex);
						virtual void  ReleaseTypeAttr(mscorlib::System::IntPtr pTypeAttr);
						virtual void  ReleaseFuncDesc(mscorlib::System::IntPtr pFuncDesc);
						virtual void  ReleaseVarDesc(mscorlib::System::IntPtr pVarDesc);


					
					protected:
						MonoObject *__mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo;
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
