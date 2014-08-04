#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_UCOMITYPEINFO_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_UCOMITYPEINFO_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_INVOKEKIND.h>

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

				class UCOMITypeComp;
				class DISPPARAMS;
				class EXCEPINFO;
				class UCOMITypeLib;
				

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

				class UCOMITypeInfo
				{
				public:
					UCOMITypeInfo(MonoObject *nativeObject)
					{
						__mscorlib_System_Runtime_InteropServices_UCOMITypeInfo = nativeObject;
					};
				
					~UCOMITypeInfo()
					{
					};
				

					UCOMITypeInfo & operator=(UCOMITypeInfo &value) { __mscorlib_System_Runtime_InteropServices_UCOMITypeInfo = value.__mscorlib_System_Runtime_InteropServices_UCOMITypeInfo; return value; };
					operator MonoObject*() { return __mscorlib_System_Runtime_InteropServices_UCOMITypeInfo; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_InteropServices_UCOMITypeInfo = value; return value; };


					virtual void  GetTypeAttr(mscorlib::System::IntPtr ppTypeAttr);
					virtual void  GetTypeComp(mscorlib::System::Runtime::InteropServices::UCOMITypeComp ppTComp);
					virtual void  GetFuncDesc(mscorlib::System::Int32 index, mscorlib::System::IntPtr ppFuncDesc);
					virtual void  GetVarDesc(mscorlib::System::Int32 index, mscorlib::System::IntPtr ppVarDesc);
					virtual void  GetNames(mscorlib::System::Int32 memid, std::vector<mscorlib::System::String*> rgBstrNames, mscorlib::System::Int32 cMaxNames, mscorlib::System::Int32 pcNames);
					virtual void  GetRefTypeOfImplType(mscorlib::System::Int32 index, mscorlib::System::Int32 href);
					virtual void  GetImplTypeFlags(mscorlib::System::Int32 index, mscorlib::System::Int32 pImplTypeFlags);
					virtual void  GetIDsOfNames(std::vector<mscorlib::System::String*> rgszNames, mscorlib::System::Int32 cNames, std::vector<mscorlib::System::Int32*> pMemId);
					virtual void  Invoke(mscorlib::System::Object pvInstance, mscorlib::System::Int32 memid, mscorlib::System::Int16 wFlags, mscorlib::System::Runtime::InteropServices::DISPPARAMS pDispParams, mscorlib::System::Object pVarResult, mscorlib::System::Runtime::InteropServices::EXCEPINFO pExcepInfo, mscorlib::System::Int32 puArgErr);
					virtual void  GetDocumentation(mscorlib::System::Int32 index, mscorlib::System::String strName, mscorlib::System::String strDocString, mscorlib::System::Int32 dwHelpContext, mscorlib::System::String strHelpFile);
					virtual void  GetDllEntry(mscorlib::System::Int32 memid, mscorlib::System::Runtime::InteropServices::INVOKEKIND::__ENUM__ invKind, mscorlib::System::String pBstrDllName, mscorlib::System::String pBstrName, mscorlib::System::Int16 pwOrdinal);
					virtual void  GetRefTypeInfo(mscorlib::System::Int32 hRef, mscorlib::System::Runtime::InteropServices::UCOMITypeInfo ppTI);
					virtual void  AddressOfMember(mscorlib::System::Int32 memid, mscorlib::System::Runtime::InteropServices::INVOKEKIND::__ENUM__ invKind, mscorlib::System::IntPtr ppv);
					virtual void  CreateInstance(mscorlib::System::Object pUnkOuter, mscorlib::System::Guid riid, mscorlib::System::Object ppvObj);
					virtual void  GetMops(mscorlib::System::Int32 memid, mscorlib::System::String pBstrMops);
					virtual void  GetContainingTypeLib(mscorlib::System::Runtime::InteropServices::UCOMITypeLib ppTLB, mscorlib::System::Int32 pIndex);
					virtual void  ReleaseTypeAttr(mscorlib::System::IntPtr pTypeAttr);
					virtual void  ReleaseFuncDesc(mscorlib::System::IntPtr pFuncDesc);
					virtual void  ReleaseVarDesc(mscorlib::System::IntPtr pVarDesc);


				
				protected:
					MonoObject *__mscorlib_System_Runtime_InteropServices_UCOMITypeInfo;
				
				private:
				
				};

			}
		}
	}
}
#endif
