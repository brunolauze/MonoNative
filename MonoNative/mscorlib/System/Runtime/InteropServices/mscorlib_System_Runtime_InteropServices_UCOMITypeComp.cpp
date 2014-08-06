#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_UCOMITypeComp.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_UCOMITypeInfo.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_BINDPTR.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				//Public Methods
				void UCOMITypeComp::Bind(mscorlib::System::String szName, mscorlib::System::Int32 lHashVal, mscorlib::System::Int16 wFlags, mscorlib::System::Runtime::InteropServices::UCOMITypeInfo ppTInfo, mscorlib::System::Runtime::InteropServices::DESCKIND::__ENUM__ pDescKind, mscorlib::System::Runtime::InteropServices::BINDPTR pBindPtr)
				{
						MonoType *__parameter_types__[6];
						void *__parameters__[6];
						__parameter_types__[0] = Global::GetType(typeid(szName).name());
						__parameter_types__[1] = Global::GetType(typeid(lHashVal).name());
						__parameter_types__[2] = Global::GetType(typeid(wFlags).name());
						__parameter_types__[3] = Global::GetType(typeid(ppTInfo).name());
						__parameter_types__[4] = Global::GetType(typeid(pDescKind).name());
						__parameter_types__[5] = Global::GetType(typeid(pBindPtr).name());
						__parameters__[0] = (MonoObject*)szName;
						__parameters__[1] = &lHashVal;
						__parameters__[2] = &wFlags;
						__parameters__[3] = (MonoObject*)ppTInfo;
						mscorlib::System::Int32 __param_pDescKind__ = pDescKind;
						__parameters__[4] = &__param_pDescKind__;
						__parameters__[5] = (MonoObject*)pBindPtr;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMITypeComp", 0, NULL, "Bind", __mscorlib_System_Runtime_InteropServices_UCOMITypeComp, 6, __parameter_types__, __parameters__, NULL);
				}

				void UCOMITypeComp::Bind(const char *szName, mscorlib::System::Int32 lHashVal, mscorlib::System::Int16 wFlags, mscorlib::System::Runtime::InteropServices::UCOMITypeInfo ppTInfo, mscorlib::System::Runtime::InteropServices::DESCKIND::__ENUM__ pDescKind, mscorlib::System::Runtime::InteropServices::BINDPTR pBindPtr)
				{
						MonoType *__parameter_types__[6];
						void *__parameters__[6];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType(typeid(lHashVal).name());
						__parameter_types__[2] = Global::GetType(typeid(wFlags).name());
						__parameter_types__[3] = Global::GetType(typeid(ppTInfo).name());
						__parameter_types__[4] = Global::GetType(typeid(pDescKind).name());
						__parameter_types__[5] = Global::GetType(typeid(pBindPtr).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), szName);
						__parameters__[1] = &lHashVal;
						__parameters__[2] = &wFlags;
						__parameters__[3] = (MonoObject*)ppTInfo;
						mscorlib::System::Int32 __param_pDescKind__ = pDescKind;
						__parameters__[4] = &__param_pDescKind__;
						__parameters__[5] = (MonoObject*)pBindPtr;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMITypeComp", 0, NULL, "Bind", __mscorlib_System_Runtime_InteropServices_UCOMITypeComp, 6, __parameter_types__, __parameters__, NULL);
				}

				void UCOMITypeComp::BindType(mscorlib::System::String szName, mscorlib::System::Int32 lHashVal, mscorlib::System::Runtime::InteropServices::UCOMITypeInfo ppTInfo, mscorlib::System::Runtime::InteropServices::UCOMITypeComp ppTComp)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType(typeid(szName).name());
						__parameter_types__[1] = Global::GetType(typeid(lHashVal).name());
						__parameter_types__[2] = Global::GetType(typeid(ppTInfo).name());
						__parameter_types__[3] = Global::GetType(typeid(ppTComp).name());
						__parameters__[0] = (MonoObject*)szName;
						__parameters__[1] = &lHashVal;
						__parameters__[2] = (MonoObject*)ppTInfo;
						__parameters__[3] = (MonoObject*)ppTComp;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMITypeComp", 0, NULL, "BindType", __mscorlib_System_Runtime_InteropServices_UCOMITypeComp, 4, __parameter_types__, __parameters__, NULL);
				}

				void UCOMITypeComp::BindType(const char *szName, mscorlib::System::Int32 lHashVal, mscorlib::System::Runtime::InteropServices::UCOMITypeInfo ppTInfo, mscorlib::System::Runtime::InteropServices::UCOMITypeComp ppTComp)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType(typeid(lHashVal).name());
						__parameter_types__[2] = Global::GetType(typeid(ppTInfo).name());
						__parameter_types__[3] = Global::GetType(typeid(ppTComp).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), szName);
						__parameters__[1] = &lHashVal;
						__parameters__[2] = (MonoObject*)ppTInfo;
						__parameters__[3] = (MonoObject*)ppTComp;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMITypeComp", 0, NULL, "BindType", __mscorlib_System_Runtime_InteropServices_UCOMITypeComp, 4, __parameter_types__, __parameters__, NULL);
				}


			}
		}
	}
}
