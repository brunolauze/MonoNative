#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo2.h>
#include <mscorlib/System/mscorlib_System_IntPtr.h>
#include <mscorlib/System/mscorlib_System_Guid.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_DISPPARAMS.h>



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
					void ITypeInfo2::AddressOfMember(mscorlib::System::Int32 memid, mscorlib::System::Runtime::InteropServices::ComTypes::INVOKEKIND::__ENUM__ invKind, mscorlib::System::IntPtr ppv)
					{
							MonoType *__parameter_types__[3];
							void *__parameters__[3];
							__parameter_types__[0] = Global::GetType(typeid(memid).name());
							__parameter_types__[1] = Global::GetType(typeid(invKind).name());
							__parameter_types__[2] = Global::GetType(typeid(ppv).name());
							__parameters__[0] = &memid;
							__parameters__[1] = reinterpret_cast<void*>(invKind);
							__parameters__[2] = (MonoObject*)ppv;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeInfo2", 0, NULL, "AddressOfMember", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo2, 3, __parameter_types__, __parameters__, NULL);
					}

					void ITypeInfo2::CreateInstance(mscorlib::System::Object pUnkOuter, mscorlib::System::Guid riid, mscorlib::System::Object ppvObj)
					{
							MonoType *__parameter_types__[3];
							void *__parameters__[3];
							__parameter_types__[0] = Global::GetType(typeid(pUnkOuter).name());
							__parameter_types__[1] = Global::GetType(typeid(riid).name());
							__parameter_types__[2] = Global::GetType(typeid(ppvObj).name());
							__parameters__[0] = (MonoObject*)pUnkOuter;
							__parameters__[1] = (MonoObject*)riid;
							__parameters__[2] = (MonoObject*)ppvObj;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeInfo2", 0, NULL, "CreateInstance", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo2, 3, __parameter_types__, __parameters__, NULL);
					}

					void ITypeInfo2::GetContainingTypeLib(mscorlib::System::Runtime::InteropServices::ComTypes::ITypeLib ppTLB, mscorlib::System::Int32 pIndex)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(ppTLB).name());
							__parameter_types__[1] = Global::GetType(typeid(pIndex).name());
							__parameters__[0] = (MonoObject*)ppTLB;
							__parameters__[1] = &pIndex;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeInfo2", 0, NULL, "GetContainingTypeLib", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo2, 2, __parameter_types__, __parameters__, NULL);
					}

					void ITypeInfo2::GetDllEntry(mscorlib::System::Int32 memid, mscorlib::System::Runtime::InteropServices::ComTypes::INVOKEKIND::__ENUM__ invKind, mscorlib::System::IntPtr pBstrDllName, mscorlib::System::IntPtr pBstrName, mscorlib::System::IntPtr pwOrdinal)
					{
							MonoType *__parameter_types__[5];
							void *__parameters__[5];
							__parameter_types__[0] = Global::GetType(typeid(memid).name());
							__parameter_types__[1] = Global::GetType(typeid(invKind).name());
							__parameter_types__[2] = Global::GetType(typeid(pBstrDllName).name());
							__parameter_types__[3] = Global::GetType(typeid(pBstrName).name());
							__parameter_types__[4] = Global::GetType(typeid(pwOrdinal).name());
							__parameters__[0] = &memid;
							__parameters__[1] = reinterpret_cast<void*>(invKind);
							__parameters__[2] = (MonoObject*)pBstrDllName;
							__parameters__[3] = (MonoObject*)pBstrName;
							__parameters__[4] = (MonoObject*)pwOrdinal;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeInfo2", 0, NULL, "GetDllEntry", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo2, 5, __parameter_types__, __parameters__, NULL);
					}

					void ITypeInfo2::GetDocumentation(mscorlib::System::Int32 index, mscorlib::System::String strName, mscorlib::System::String strDocString, mscorlib::System::Int32 dwHelpContext, mscorlib::System::String strHelpFile)
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
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeInfo2", 0, NULL, "GetDocumentation", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo2, 5, __parameter_types__, __parameters__, NULL);
					}

					void ITypeInfo2::GetIDsOfNames(std::vector<mscorlib::System::String*> rgszNames, mscorlib::System::Int32 cNames, std::vector<mscorlib::System::Int32*> pMemId)
					{
							MonoType *__parameter_types__[3];
							void *__parameters__[3];
							__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(rgszNames).name()))->eklass);
							__parameter_types__[1] = Global::GetType(typeid(cNames).name());
							__parameter_types__[2] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(pMemId).name()))->eklass);
							__parameters__[0] = Global::FromArray<mscorlib::System::String*>(rgszNames, typeid(mscorlib::System::String).name());
							__parameters__[1] = &cNames;
							__parameters__[2] = Global::FromArray<mscorlib::System::Int32*>(pMemId, typeid(mscorlib::System::Int32).name());
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeInfo2", 0, NULL, "GetIDsOfNames", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo2, 3, __parameter_types__, __parameters__, NULL);
					}

					void ITypeInfo2::GetImplTypeFlags(mscorlib::System::Int32 index, mscorlib::System::Runtime::InteropServices::ComTypes::IMPLTYPEFLAGS::__ENUM__ pImplTypeFlags)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(index).name());
							__parameter_types__[1] = Global::GetType(typeid(pImplTypeFlags).name());
							__parameters__[0] = &index;
							__parameters__[1] = reinterpret_cast<void*>(pImplTypeFlags);
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeInfo2", 0, NULL, "GetImplTypeFlags", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo2, 2, __parameter_types__, __parameters__, NULL);
					}

					void ITypeInfo2::GetTypeKind(mscorlib::System::Runtime::InteropServices::ComTypes::TYPEKIND::__ENUM__ pTypeKind)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(pTypeKind).name());
							__parameters__[0] = reinterpret_cast<void*>(pTypeKind);
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeInfo2", 0, NULL, "GetTypeKind", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo2, 1, __parameter_types__, __parameters__, NULL);
					}

					void ITypeInfo2::GetTypeFlags(mscorlib::System::Int32 pTypeFlags)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(pTypeFlags).name());
							__parameters__[0] = &pTypeFlags;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeInfo2", 0, NULL, "GetTypeFlags", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo2, 1, __parameter_types__, __parameters__, NULL);
					}

					void ITypeInfo2::GetFuncDesc(mscorlib::System::Int32 index, mscorlib::System::IntPtr ppFuncDesc)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(index).name());
							__parameter_types__[1] = Global::GetType(typeid(ppFuncDesc).name());
							__parameters__[0] = &index;
							__parameters__[1] = (MonoObject*)ppFuncDesc;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeInfo2", 0, NULL, "GetFuncDesc", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo2, 2, __parameter_types__, __parameters__, NULL);
					}

					void ITypeInfo2::GetMops(mscorlib::System::Int32 memid, mscorlib::System::String pBstrMops)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(memid).name());
							__parameter_types__[1] = Global::GetType(typeid(pBstrMops).name());
							__parameters__[0] = &memid;
							__parameters__[1] = (MonoObject*)pBstrMops;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeInfo2", 0, NULL, "GetMops", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo2, 2, __parameter_types__, __parameters__, NULL);
					}

					void ITypeInfo2::GetNames(mscorlib::System::Int32 memid, std::vector<mscorlib::System::String*> rgBstrNames, mscorlib::System::Int32 cMaxNames, mscorlib::System::Int32 pcNames)
					{
							MonoType *__parameter_types__[4];
							void *__parameters__[4];
							__parameter_types__[0] = Global::GetType(typeid(memid).name());
							__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(rgBstrNames).name()))->eklass);
							__parameter_types__[2] = Global::GetType(typeid(cMaxNames).name());
							__parameter_types__[3] = Global::GetType(typeid(pcNames).name());
							__parameters__[0] = &memid;
							__parameters__[1] = Global::FromArray<mscorlib::System::String*>(rgBstrNames, typeid(mscorlib::System::String).name());
							__parameters__[2] = &cMaxNames;
							__parameters__[3] = &pcNames;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeInfo2", 0, NULL, "GetNames", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo2, 4, __parameter_types__, __parameters__, NULL);
					}

					void ITypeInfo2::GetRefTypeInfo(mscorlib::System::Int32 hRef, mscorlib::System::Runtime::InteropServices::ComTypes::ITypeInfo ppTI)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(hRef).name());
							__parameter_types__[1] = Global::GetType(typeid(ppTI).name());
							__parameters__[0] = &hRef;
							__parameters__[1] = (MonoObject*)ppTI;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeInfo2", 0, NULL, "GetRefTypeInfo", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo2, 2, __parameter_types__, __parameters__, NULL);
					}

					void ITypeInfo2::GetRefTypeOfImplType(mscorlib::System::Int32 index, mscorlib::System::Int32 href)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(index).name());
							__parameter_types__[1] = Global::GetType(typeid(href).name());
							__parameters__[0] = &index;
							__parameters__[1] = &href;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeInfo2", 0, NULL, "GetRefTypeOfImplType", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo2, 2, __parameter_types__, __parameters__, NULL);
					}

					void ITypeInfo2::GetTypeAttr(mscorlib::System::IntPtr ppTypeAttr)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(ppTypeAttr).name());
							__parameters__[0] = (MonoObject*)ppTypeAttr;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeInfo2", 0, NULL, "GetTypeAttr", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo2, 1, __parameter_types__, __parameters__, NULL);
					}

					void ITypeInfo2::GetTypeComp(mscorlib::System::Runtime::InteropServices::ComTypes::ITypeComp ppTComp)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(ppTComp).name());
							__parameters__[0] = (MonoObject*)ppTComp;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeInfo2", 0, NULL, "GetTypeComp", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo2, 1, __parameter_types__, __parameters__, NULL);
					}

					void ITypeInfo2::GetVarDesc(mscorlib::System::Int32 index, mscorlib::System::IntPtr ppVarDesc)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(index).name());
							__parameter_types__[1] = Global::GetType(typeid(ppVarDesc).name());
							__parameters__[0] = &index;
							__parameters__[1] = (MonoObject*)ppVarDesc;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeInfo2", 0, NULL, "GetVarDesc", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo2, 2, __parameter_types__, __parameters__, NULL);
					}

					void ITypeInfo2::GetFuncIndexOfMemId(mscorlib::System::Int32 memid, mscorlib::System::Runtime::InteropServices::ComTypes::INVOKEKIND::__ENUM__ invKind, mscorlib::System::Int32 pFuncIndex)
					{
							MonoType *__parameter_types__[3];
							void *__parameters__[3];
							__parameter_types__[0] = Global::GetType(typeid(memid).name());
							__parameter_types__[1] = Global::GetType(typeid(invKind).name());
							__parameter_types__[2] = Global::GetType(typeid(pFuncIndex).name());
							__parameters__[0] = &memid;
							__parameters__[1] = reinterpret_cast<void*>(invKind);
							__parameters__[2] = &pFuncIndex;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeInfo2", 0, NULL, "GetFuncIndexOfMemId", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo2, 3, __parameter_types__, __parameters__, NULL);
					}

					void ITypeInfo2::GetVarIndexOfMemId(mscorlib::System::Int32 memid, mscorlib::System::Int32 pVarIndex)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(memid).name());
							__parameter_types__[1] = Global::GetType(typeid(pVarIndex).name());
							__parameters__[0] = &memid;
							__parameters__[1] = &pVarIndex;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeInfo2", 0, NULL, "GetVarIndexOfMemId", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo2, 2, __parameter_types__, __parameters__, NULL);
					}

					void ITypeInfo2::GetCustData(mscorlib::System::Guid guid, mscorlib::System::Object pVarVal)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(guid).name());
							__parameter_types__[1] = Global::GetType(typeid(pVarVal).name());
							__parameters__[0] = (MonoObject*)guid;
							__parameters__[1] = (MonoObject*)pVarVal;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeInfo2", 0, NULL, "GetCustData", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo2, 2, __parameter_types__, __parameters__, NULL);
					}

					void ITypeInfo2::GetFuncCustData(mscorlib::System::Int32 index, mscorlib::System::Guid guid, mscorlib::System::Object pVarVal)
					{
							MonoType *__parameter_types__[3];
							void *__parameters__[3];
							__parameter_types__[0] = Global::GetType(typeid(index).name());
							__parameter_types__[1] = Global::GetType(typeid(guid).name());
							__parameter_types__[2] = Global::GetType(typeid(pVarVal).name());
							__parameters__[0] = &index;
							__parameters__[1] = (MonoObject*)guid;
							__parameters__[2] = (MonoObject*)pVarVal;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeInfo2", 0, NULL, "GetFuncCustData", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo2, 3, __parameter_types__, __parameters__, NULL);
					}

					void ITypeInfo2::GetParamCustData(mscorlib::System::Int32 indexFunc, mscorlib::System::Int32 indexParam, mscorlib::System::Guid guid, mscorlib::System::Object pVarVal)
					{
							MonoType *__parameter_types__[4];
							void *__parameters__[4];
							__parameter_types__[0] = Global::GetType(typeid(indexFunc).name());
							__parameter_types__[1] = Global::GetType(typeid(indexParam).name());
							__parameter_types__[2] = Global::GetType(typeid(guid).name());
							__parameter_types__[3] = Global::GetType(typeid(pVarVal).name());
							__parameters__[0] = &indexFunc;
							__parameters__[1] = &indexParam;
							__parameters__[2] = (MonoObject*)guid;
							__parameters__[3] = (MonoObject*)pVarVal;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeInfo2", 0, NULL, "GetParamCustData", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo2, 4, __parameter_types__, __parameters__, NULL);
					}

					void ITypeInfo2::GetVarCustData(mscorlib::System::Int32 index, mscorlib::System::Guid guid, mscorlib::System::Object pVarVal)
					{
							MonoType *__parameter_types__[3];
							void *__parameters__[3];
							__parameter_types__[0] = Global::GetType(typeid(index).name());
							__parameter_types__[1] = Global::GetType(typeid(guid).name());
							__parameter_types__[2] = Global::GetType(typeid(pVarVal).name());
							__parameters__[0] = &index;
							__parameters__[1] = (MonoObject*)guid;
							__parameters__[2] = (MonoObject*)pVarVal;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeInfo2", 0, NULL, "GetVarCustData", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo2, 3, __parameter_types__, __parameters__, NULL);
					}

					void ITypeInfo2::GetImplTypeCustData(mscorlib::System::Int32 index, mscorlib::System::Guid guid, mscorlib::System::Object pVarVal)
					{
							MonoType *__parameter_types__[3];
							void *__parameters__[3];
							__parameter_types__[0] = Global::GetType(typeid(index).name());
							__parameter_types__[1] = Global::GetType(typeid(guid).name());
							__parameter_types__[2] = Global::GetType(typeid(pVarVal).name());
							__parameters__[0] = &index;
							__parameters__[1] = (MonoObject*)guid;
							__parameters__[2] = (MonoObject*)pVarVal;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeInfo2", 0, NULL, "GetImplTypeCustData", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo2, 3, __parameter_types__, __parameters__, NULL);
					}

					void ITypeInfo2::GetDocumentation2(mscorlib::System::Int32 memid, mscorlib::System::String pbstrHelpString, mscorlib::System::Int32 pdwHelpStringContext, mscorlib::System::String pbstrHelpStringDll)
					{
							MonoType *__parameter_types__[4];
							void *__parameters__[4];
							__parameter_types__[0] = Global::GetType(typeid(memid).name());
							__parameter_types__[1] = Global::GetType(typeid(pbstrHelpString).name());
							__parameter_types__[2] = Global::GetType(typeid(pdwHelpStringContext).name());
							__parameter_types__[3] = Global::GetType(typeid(pbstrHelpStringDll).name());
							__parameters__[0] = &memid;
							__parameters__[1] = (MonoObject*)pbstrHelpString;
							__parameters__[2] = &pdwHelpStringContext;
							__parameters__[3] = (MonoObject*)pbstrHelpStringDll;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeInfo2", 0, NULL, "GetDocumentation2", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo2, 4, __parameter_types__, __parameters__, NULL);
					}

					void ITypeInfo2::GetAllCustData(mscorlib::System::IntPtr pCustData)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(pCustData).name());
							__parameters__[0] = (MonoObject*)pCustData;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeInfo2", 0, NULL, "GetAllCustData", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo2, 1, __parameter_types__, __parameters__, NULL);
					}

					void ITypeInfo2::GetAllFuncCustData(mscorlib::System::Int32 index, mscorlib::System::IntPtr pCustData)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(index).name());
							__parameter_types__[1] = Global::GetType(typeid(pCustData).name());
							__parameters__[0] = &index;
							__parameters__[1] = (MonoObject*)pCustData;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeInfo2", 0, NULL, "GetAllFuncCustData", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo2, 2, __parameter_types__, __parameters__, NULL);
					}

					void ITypeInfo2::GetAllParamCustData(mscorlib::System::Int32 indexFunc, mscorlib::System::Int32 indexParam, mscorlib::System::IntPtr pCustData)
					{
							MonoType *__parameter_types__[3];
							void *__parameters__[3];
							__parameter_types__[0] = Global::GetType(typeid(indexFunc).name());
							__parameter_types__[1] = Global::GetType(typeid(indexParam).name());
							__parameter_types__[2] = Global::GetType(typeid(pCustData).name());
							__parameters__[0] = &indexFunc;
							__parameters__[1] = &indexParam;
							__parameters__[2] = (MonoObject*)pCustData;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeInfo2", 0, NULL, "GetAllParamCustData", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo2, 3, __parameter_types__, __parameters__, NULL);
					}

					void ITypeInfo2::GetAllVarCustData(mscorlib::System::Int32 index, mscorlib::System::IntPtr pCustData)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(index).name());
							__parameter_types__[1] = Global::GetType(typeid(pCustData).name());
							__parameters__[0] = &index;
							__parameters__[1] = (MonoObject*)pCustData;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeInfo2", 0, NULL, "GetAllVarCustData", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo2, 2, __parameter_types__, __parameters__, NULL);
					}

					void ITypeInfo2::GetAllImplTypeCustData(mscorlib::System::Int32 index, mscorlib::System::IntPtr pCustData)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(index).name());
							__parameter_types__[1] = Global::GetType(typeid(pCustData).name());
							__parameters__[0] = &index;
							__parameters__[1] = (MonoObject*)pCustData;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeInfo2", 0, NULL, "GetAllImplTypeCustData", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo2, 2, __parameter_types__, __parameters__, NULL);
					}

					void ITypeInfo2::Invoke(mscorlib::System::Object pvInstance, mscorlib::System::Int32 memid, mscorlib::System::Int16 wFlags, mscorlib::System::Runtime::InteropServices::ComTypes::DISPPARAMS pDispParams, mscorlib::System::IntPtr pVarResult, mscorlib::System::IntPtr pExcepInfo, mscorlib::System::Int32 puArgErr)
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
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeInfo2", 0, NULL, "Invoke", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo2, 7, __parameter_types__, __parameters__, NULL);
					}

					void ITypeInfo2::ReleaseTypeAttr(mscorlib::System::IntPtr pTypeAttr)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(pTypeAttr).name());
							__parameters__[0] = (MonoObject*)pTypeAttr;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeInfo2", 0, NULL, "ReleaseTypeAttr", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo2, 1, __parameter_types__, __parameters__, NULL);
					}

					void ITypeInfo2::ReleaseFuncDesc(mscorlib::System::IntPtr pFuncDesc)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(pFuncDesc).name());
							__parameters__[0] = (MonoObject*)pFuncDesc;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeInfo2", 0, NULL, "ReleaseFuncDesc", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo2, 1, __parameter_types__, __parameters__, NULL);
					}

					void ITypeInfo2::ReleaseVarDesc(mscorlib::System::IntPtr pVarDesc)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(pVarDesc).name());
							__parameters__[0] = (MonoObject*)pVarDesc;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeInfo2", 0, NULL, "ReleaseVarDesc", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeInfo2, 1, __parameter_types__, __parameters__, NULL);
					}


				}
			}
		}
	}
}
