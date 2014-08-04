#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_UCOMITypeLib.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_UCOMITypeInfo.h>
#include <mscorlib/System/mscorlib_System_Guid.h>
#include <mscorlib/System/mscorlib_System_IntPtr.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				//Public Methods
				mscorlib::System::Int32 UCOMITypeLib::GetTypeInfoCount()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMITypeLib", 0, NULL, "GetTypeInfoCount", __mscorlib_System_Runtime_InteropServices_UCOMITypeLib, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				void UCOMITypeLib::GetTypeInfo(mscorlib::System::Int32 index, mscorlib::System::Runtime::InteropServices::UCOMITypeInfo ppTI)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(index).name());
						__parameter_types__[1] = Global::GetType(typeid(ppTI).name());
						__parameters__[0] = &index;
						__parameters__[1] = (MonoObject*)ppTI;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMITypeLib", 0, NULL, "GetTypeInfo", __mscorlib_System_Runtime_InteropServices_UCOMITypeLib, 2, __parameter_types__, __parameters__, NULL);
				}

				void UCOMITypeLib::GetTypeInfoType(mscorlib::System::Int32 index, mscorlib::System::Runtime::InteropServices::TYPEKIND::__ENUM__ pTKind)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(index).name());
						__parameter_types__[1] = Global::GetType(typeid(pTKind).name());
						__parameters__[0] = &index;
						__parameters__[1] = reinterpret_cast<void*>(pTKind);
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMITypeLib", 0, NULL, "GetTypeInfoType", __mscorlib_System_Runtime_InteropServices_UCOMITypeLib, 2, __parameter_types__, __parameters__, NULL);
				}

				void UCOMITypeLib::GetTypeInfoOfGuid(mscorlib::System::Guid guid, mscorlib::System::Runtime::InteropServices::UCOMITypeInfo ppTInfo)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(guid).name());
						__parameter_types__[1] = Global::GetType(typeid(ppTInfo).name());
						__parameters__[0] = (MonoObject*)guid;
						__parameters__[1] = (MonoObject*)ppTInfo;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMITypeLib", 0, NULL, "GetTypeInfoOfGuid", __mscorlib_System_Runtime_InteropServices_UCOMITypeLib, 2, __parameter_types__, __parameters__, NULL);
				}

				void UCOMITypeLib::GetLibAttr(mscorlib::System::IntPtr ppTLibAttr)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(ppTLibAttr).name());
						__parameters__[0] = (MonoObject*)ppTLibAttr;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMITypeLib", 0, NULL, "GetLibAttr", __mscorlib_System_Runtime_InteropServices_UCOMITypeLib, 1, __parameter_types__, __parameters__, NULL);
				}

				void UCOMITypeLib::GetTypeComp(mscorlib::System::Runtime::InteropServices::UCOMITypeComp ppTComp)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(ppTComp).name());
						__parameters__[0] = (MonoObject*)ppTComp;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMITypeLib", 0, NULL, "GetTypeComp", __mscorlib_System_Runtime_InteropServices_UCOMITypeLib, 1, __parameter_types__, __parameters__, NULL);
				}

				void UCOMITypeLib::GetDocumentation(mscorlib::System::Int32 index, mscorlib::System::String strName, mscorlib::System::String strDocString, mscorlib::System::Int32 dwHelpContext, mscorlib::System::String strHelpFile)
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
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMITypeLib", 0, NULL, "GetDocumentation", __mscorlib_System_Runtime_InteropServices_UCOMITypeLib, 5, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Boolean UCOMITypeLib::IsName(mscorlib::System::String szNameBuf, mscorlib::System::Int32 lHashVal)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(szNameBuf).name());
						__parameter_types__[1] = Global::GetType(typeid(lHashVal).name());
						__parameters__[0] = (MonoObject*)szNameBuf;
						__parameters__[1] = &lHashVal;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMITypeLib", 0, NULL, "IsName", __mscorlib_System_Runtime_InteropServices_UCOMITypeLib, 2, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void UCOMITypeLib::FindName(mscorlib::System::String szNameBuf, mscorlib::System::Int32 lHashVal, std::vector<mscorlib::System::Runtime::InteropServices::UCOMITypeInfo*> ppTInfo, std::vector<mscorlib::System::Int32*> rgMemId, mscorlib::System::Int16 pcFound)
				{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType(typeid(szNameBuf).name());
						__parameter_types__[1] = Global::GetType(typeid(lHashVal).name());
						__parameter_types__[2] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(ppTInfo).name()))->eklass);
						__parameter_types__[3] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(rgMemId).name()))->eklass);
						__parameter_types__[4] = Global::GetType(typeid(pcFound).name());
						__parameters__[0] = (MonoObject*)szNameBuf;
						__parameters__[1] = &lHashVal;
						__parameters__[2] = Global::FromArray<mscorlib::System::Runtime::InteropServices::UCOMITypeInfo*>(ppTInfo, typeid(mscorlib::System::Runtime::InteropServices::UCOMITypeInfo).name());
						__parameters__[3] = Global::FromArray<mscorlib::System::Int32*>(rgMemId, typeid(mscorlib::System::Int32).name());
						__parameters__[4] = &pcFound;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMITypeLib", 0, NULL, "FindName", __mscorlib_System_Runtime_InteropServices_UCOMITypeLib, 5, __parameter_types__, __parameters__, NULL);
				}

				void UCOMITypeLib::ReleaseTLibAttr(mscorlib::System::IntPtr pTLibAttr)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(pTLibAttr).name());
						__parameters__[0] = (MonoObject*)pTLibAttr;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMITypeLib", 0, NULL, "ReleaseTLibAttr", __mscorlib_System_Runtime_InteropServices_UCOMITypeLib, 1, __parameter_types__, __parameters__, NULL);
				}


			}
		}
	}
}
