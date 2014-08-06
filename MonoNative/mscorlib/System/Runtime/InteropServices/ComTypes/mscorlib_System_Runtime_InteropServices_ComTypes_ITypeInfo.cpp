#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo.h>
#include <mscorlib/System/mscorlib_System_IntPtr.h>
#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_ITypeComp.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_DISPPARAMS.h>
#include <mscorlib/System/mscorlib_System_Guid.h>
#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_ITypeLib.h>



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

					//Public Methods
					void ITypeInfo::GetTypeAttr(mscorlib::System::IntPtr ppTypeAttr)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(ppTypeAttr).name());
							__parameters__[0] = (MonoObject*)ppTypeAttr;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeInfo", 0, NULL, "GetTypeAttr", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo, 1, __parameter_types__, __parameters__, NULL);
					}

					void ITypeInfo::GetTypeComp(mscorlib::System::Runtime::InteropServices::ComTypes::ITypeComp ppTComp)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(ppTComp).name());
							__parameters__[0] = (MonoObject*)ppTComp;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeInfo", 0, NULL, "GetTypeComp", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo, 1, __parameter_types__, __parameters__, NULL);
					}

					void ITypeInfo::GetFuncDesc(mscorlib::System::Int32 index, mscorlib::System::IntPtr ppFuncDesc)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(index).name());
							__parameter_types__[1] = Global::GetType(typeid(ppFuncDesc).name());
							__parameters__[0] = &index;
							__parameters__[1] = (MonoObject*)ppFuncDesc;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeInfo", 0, NULL, "GetFuncDesc", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo, 2, __parameter_types__, __parameters__, NULL);
					}

					void ITypeInfo::GetVarDesc(mscorlib::System::Int32 index, mscorlib::System::IntPtr ppVarDesc)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(index).name());
							__parameter_types__[1] = Global::GetType(typeid(ppVarDesc).name());
							__parameters__[0] = &index;
							__parameters__[1] = (MonoObject*)ppVarDesc;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeInfo", 0, NULL, "GetVarDesc", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo, 2, __parameter_types__, __parameters__, NULL);
					}

					void ITypeInfo::GetNames(mscorlib::System::Int32 memid, std::vector<mscorlib::System::String*> rgBstrNames, mscorlib::System::Int32 cMaxNames, mscorlib::System::Int32 pcNames)
					{
							MonoType *__parameter_types__[4];
							void *__parameters__[4];
							__parameter_types__[0] = Global::GetType(typeid(memid).name());
							__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "String")), 1));
							__parameter_types__[2] = Global::GetType(typeid(cMaxNames).name());
							__parameter_types__[3] = Global::GetType(typeid(pcNames).name());
							__parameters__[0] = &memid;
							__parameters__[1] = Global::FromArray<mscorlib::System::String*>(rgBstrNames, typeid(mscorlib::System::String).name());
							__parameters__[2] = &cMaxNames;
							__parameters__[3] = &pcNames;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeInfo", 0, NULL, "GetNames", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo, 4, __parameter_types__, __parameters__, NULL);
					}

					void ITypeInfo::GetRefTypeOfImplType(mscorlib::System::Int32 index, mscorlib::System::Int32 href)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(index).name());
							__parameter_types__[1] = Global::GetType(typeid(href).name());
							__parameters__[0] = &index;
							__parameters__[1] = &href;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeInfo", 0, NULL, "GetRefTypeOfImplType", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo, 2, __parameter_types__, __parameters__, NULL);
					}

					void ITypeInfo::GetImplTypeFlags(mscorlib::System::Int32 index, mscorlib::System::Runtime::InteropServices::ComTypes::IMPLTYPEFLAGS::__ENUM__ pImplTypeFlags)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(index).name());
							__parameter_types__[1] = Global::GetType(typeid(pImplTypeFlags).name());
							__parameters__[0] = &index;
							mscorlib::System::Int32 __param_pImplTypeFlags__ = pImplTypeFlags;
							__parameters__[1] = &__param_pImplTypeFlags__;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeInfo", 0, NULL, "GetImplTypeFlags", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo, 2, __parameter_types__, __parameters__, NULL);
					}

					void ITypeInfo::GetIDsOfNames(std::vector<mscorlib::System::String*> rgszNames, mscorlib::System::Int32 cNames, std::vector<mscorlib::System::Int32*> pMemId)
					{
							MonoType *__parameter_types__[3];
							void *__parameters__[3];
							__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "String")), 1));
							__parameter_types__[1] = Global::GetType(typeid(cNames).name());
							__parameter_types__[2] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Int32")), 1));
							__parameters__[0] = Global::FromArray<mscorlib::System::String*>(rgszNames, typeid(mscorlib::System::String).name());
							__parameters__[1] = &cNames;
							__parameters__[2] = Global::FromArray<mscorlib::System::Int32*>(pMemId, typeid(mscorlib::System::Int32).name());
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeInfo", 0, NULL, "GetIDsOfNames", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo, 3, __parameter_types__, __parameters__, NULL);
					}

					void ITypeInfo::Invoke(mscorlib::System::Object pvInstance, mscorlib::System::Int32 memid, mscorlib::System::Int16 wFlags, mscorlib::System::Runtime::InteropServices::ComTypes::DISPPARAMS pDispParams, mscorlib::System::IntPtr pVarResult, mscorlib::System::IntPtr pExcepInfo, mscorlib::System::Int32 puArgErr)
					{
							MonoType *__parameter_types__[7];
							void *__parameters__[7];
							__parameter_types__[0] = Global::GetType(typeid(pvInstance).name());
							__parameter_types__[1] = Global::GetType(typeid(memid).name());
							__parameter_types__[2] = Global::GetType(typeid(wFlags).name());
							__parameter_types__[3] = Global::GetType(typeid(pDispParams).name());
							__parameter_types__[4] = Global::GetType(typeid(pVarResult).name());
							__parameter_types__[5] = Global::GetType(typeid(pExcepInfo).name());
							__parameter_types__[6] = Global::GetType(typeid(puArgErr).name());
							__parameters__[0] = (MonoObject*)pvInstance;
							__parameters__[1] = &memid;
							__parameters__[2] = &wFlags;
							__parameters__[3] = (MonoObject*)pDispParams;
							__parameters__[4] = (MonoObject*)pVarResult;
							__parameters__[5] = (MonoObject*)pExcepInfo;
							__parameters__[6] = &puArgErr;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeInfo", 0, NULL, "Invoke", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo, 7, __parameter_types__, __parameters__, NULL);
					}

					void ITypeInfo::GetDocumentation(mscorlib::System::Int32 index, mscorlib::System::String strName, mscorlib::System::String strDocString, mscorlib::System::Int32 dwHelpContext, mscorlib::System::String strHelpFile)
					{
							MonoType *__parameter_types__[5];
							void *__parameters__[5];
							__parameter_types__[0] = Global::GetType(typeid(index).name());
							__parameter_types__[1] = Global::GetType(typeid(strName).name());
							__parameter_types__[2] = Global::GetType(typeid(strDocString).name());
							__parameter_types__[3] = Global::GetType(typeid(dwHelpContext).name());
							__parameter_types__[4] = Global::GetType(typeid(strHelpFile).name());
							__parameters__[0] = &index;
							__parameters__[1] = (MonoObject*)strName;
							__parameters__[2] = (MonoObject*)strDocString;
							__parameters__[3] = &dwHelpContext;
							__parameters__[4] = (MonoObject*)strHelpFile;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeInfo", 0, NULL, "GetDocumentation", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo, 5, __parameter_types__, __parameters__, NULL);
					}

					void ITypeInfo::GetDllEntry(mscorlib::System::Int32 memid, mscorlib::System::Runtime::InteropServices::ComTypes::INVOKEKIND::__ENUM__ invKind, mscorlib::System::IntPtr pBstrDllName, mscorlib::System::IntPtr pBstrName, mscorlib::System::IntPtr pwOrdinal)
					{
							MonoType *__parameter_types__[5];
							void *__parameters__[5];
							__parameter_types__[0] = Global::GetType(typeid(memid).name());
							__parameter_types__[1] = Global::GetType(typeid(invKind).name());
							__parameter_types__[2] = Global::GetType(typeid(pBstrDllName).name());
							__parameter_types__[3] = Global::GetType(typeid(pBstrName).name());
							__parameter_types__[4] = Global::GetType(typeid(pwOrdinal).name());
							__parameters__[0] = &memid;
							mscorlib::System::Int32 __param_invKind__ = invKind;
							__parameters__[1] = &__param_invKind__;
							__parameters__[2] = (MonoObject*)pBstrDllName;
							__parameters__[3] = (MonoObject*)pBstrName;
							__parameters__[4] = (MonoObject*)pwOrdinal;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeInfo", 0, NULL, "GetDllEntry", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo, 5, __parameter_types__, __parameters__, NULL);
					}

					void ITypeInfo::GetRefTypeInfo(mscorlib::System::Int32 hRef, mscorlib::System::Runtime::InteropServices::ComTypes::ITypeInfo ppTI)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(hRef).name());
							__parameter_types__[1] = Global::GetType(typeid(ppTI).name());
							__parameters__[0] = &hRef;
							__parameters__[1] = (MonoObject*)ppTI;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeInfo", 0, NULL, "GetRefTypeInfo", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo, 2, __parameter_types__, __parameters__, NULL);
					}

					void ITypeInfo::AddressOfMember(mscorlib::System::Int32 memid, mscorlib::System::Runtime::InteropServices::ComTypes::INVOKEKIND::__ENUM__ invKind, mscorlib::System::IntPtr ppv)
					{
							MonoType *__parameter_types__[3];
							void *__parameters__[3];
							__parameter_types__[0] = Global::GetType(typeid(memid).name());
							__parameter_types__[1] = Global::GetType(typeid(invKind).name());
							__parameter_types__[2] = Global::GetType(typeid(ppv).name());
							__parameters__[0] = &memid;
							mscorlib::System::Int32 __param_invKind__ = invKind;
							__parameters__[1] = &__param_invKind__;
							__parameters__[2] = (MonoObject*)ppv;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeInfo", 0, NULL, "AddressOfMember", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo, 3, __parameter_types__, __parameters__, NULL);
					}

					void ITypeInfo::CreateInstance(mscorlib::System::Object pUnkOuter, mscorlib::System::Guid riid, mscorlib::System::Object ppvObj)
					{
							MonoType *__parameter_types__[3];
							void *__parameters__[3];
							__parameter_types__[0] = Global::GetType(typeid(pUnkOuter).name());
							__parameter_types__[1] = Global::GetType(typeid(riid).name());
							__parameter_types__[2] = Global::GetType(typeid(ppvObj).name());
							__parameters__[0] = (MonoObject*)pUnkOuter;
							__parameters__[1] = (MonoObject*)riid;
							__parameters__[2] = (MonoObject*)ppvObj;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeInfo", 0, NULL, "CreateInstance", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo, 3, __parameter_types__, __parameters__, NULL);
					}

					void ITypeInfo::GetMops(mscorlib::System::Int32 memid, mscorlib::System::String pBstrMops)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(memid).name());
							__parameter_types__[1] = Global::GetType(typeid(pBstrMops).name());
							__parameters__[0] = &memid;
							__parameters__[1] = (MonoObject*)pBstrMops;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeInfo", 0, NULL, "GetMops", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo, 2, __parameter_types__, __parameters__, NULL);
					}

					void ITypeInfo::GetContainingTypeLib(mscorlib::System::Runtime::InteropServices::ComTypes::ITypeLib ppTLB, mscorlib::System::Int32 pIndex)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(ppTLB).name());
							__parameter_types__[1] = Global::GetType(typeid(pIndex).name());
							__parameters__[0] = (MonoObject*)ppTLB;
							__parameters__[1] = &pIndex;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeInfo", 0, NULL, "GetContainingTypeLib", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo, 2, __parameter_types__, __parameters__, NULL);
					}

					void ITypeInfo::ReleaseTypeAttr(mscorlib::System::IntPtr pTypeAttr)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(pTypeAttr).name());
							__parameters__[0] = (MonoObject*)pTypeAttr;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeInfo", 0, NULL, "ReleaseTypeAttr", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo, 1, __parameter_types__, __parameters__, NULL);
					}

					void ITypeInfo::ReleaseFuncDesc(mscorlib::System::IntPtr pFuncDesc)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(pFuncDesc).name());
							__parameters__[0] = (MonoObject*)pFuncDesc;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeInfo", 0, NULL, "ReleaseFuncDesc", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo, 1, __parameter_types__, __parameters__, NULL);
					}

					void ITypeInfo::ReleaseVarDesc(mscorlib::System::IntPtr pVarDesc)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(pVarDesc).name());
							__parameters__[0] = (MonoObject*)pVarDesc;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeInfo", 0, NULL, "ReleaseVarDesc", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo, 1, __parameter_types__, __parameters__, NULL);
					}


				}
			}
		}
	}
}
