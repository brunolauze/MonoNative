#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__SignatureHelper.h>
#include <mscorlib/System/mscorlib_System_Guid.h>
#include <mscorlib/System/mscorlib_System_IntPtr.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				//Public Methods
				void _SignatureHelper::GetIDsOfNames(mscorlib::System::Guid riid, mscorlib::System::IntPtr rgszNames, mscorlib::System::UInt32 cNames, mscorlib::System::UInt32 lcid, mscorlib::System::IntPtr rgDispId)
				{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType(typeid(riid).name());
						__parameter_types__[1] = Global::GetType(typeid(rgszNames).name());
						__parameter_types__[2] = Global::GetType(typeid(cNames).name());
						__parameter_types__[3] = Global::GetType(typeid(lcid).name());
						__parameter_types__[4] = Global::GetType(typeid(rgDispId).name());
						__parameters__[0] = (MonoObject*)riid;
						__parameters__[1] = (MonoObject*)rgszNames;
						__parameters__[2] = &cNames;
						__parameters__[3] = &lcid;
						__parameters__[4] = (MonoObject*)rgDispId;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_SignatureHelper", 0, NULL, "GetIDsOfNames", __mscorlib_System_Runtime_InteropServices__SignatureHelper, 5, __parameter_types__, __parameters__, NULL);
				}

				void _SignatureHelper::GetTypeInfo(mscorlib::System::UInt32 iTInfo, mscorlib::System::UInt32 lcid, mscorlib::System::IntPtr ppTInfo)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(iTInfo).name());
						__parameter_types__[1] = Global::GetType(typeid(lcid).name());
						__parameter_types__[2] = Global::GetType(typeid(ppTInfo).name());
						__parameters__[0] = &iTInfo;
						__parameters__[1] = &lcid;
						__parameters__[2] = (MonoObject*)ppTInfo;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_SignatureHelper", 0, NULL, "GetTypeInfo", __mscorlib_System_Runtime_InteropServices__SignatureHelper, 3, __parameter_types__, __parameters__, NULL);
				}

				void _SignatureHelper::GetTypeInfoCount(mscorlib::System::UInt32 pcTInfo)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(pcTInfo).name());
						__parameters__[0] = &pcTInfo;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_SignatureHelper", 0, NULL, "GetTypeInfoCount", __mscorlib_System_Runtime_InteropServices__SignatureHelper, 1, __parameter_types__, __parameters__, NULL);
				}

				void _SignatureHelper::Invoke(mscorlib::System::UInt32 dispIdMember, mscorlib::System::Guid riid, mscorlib::System::UInt32 lcid, mscorlib::System::Int16 wFlags, mscorlib::System::IntPtr pDispParams, mscorlib::System::IntPtr pVarResult, mscorlib::System::IntPtr pExcepInfo, mscorlib::System::IntPtr puArgErr)
				{
						MonoType *__parameter_types__[8];
						void *__parameters__[8];
						__parameter_types__[0] = Global::GetType(typeid(dispIdMember).name());
						__parameter_types__[1] = Global::GetType(typeid(riid).name());
						__parameter_types__[2] = Global::GetType(typeid(lcid).name());
						__parameter_types__[3] = Global::GetType(typeid(wFlags).name());
						__parameter_types__[4] = Global::GetType(typeid(pDispParams).name());
						__parameter_types__[5] = Global::GetType(typeid(pVarResult).name());
						__parameter_types__[6] = Global::GetType(typeid(pExcepInfo).name());
						__parameter_types__[7] = Global::GetType(typeid(puArgErr).name());
						__parameters__[0] = &dispIdMember;
						__parameters__[1] = (MonoObject*)riid;
						__parameters__[2] = &lcid;
						__parameters__[3] = &wFlags;
						__parameters__[4] = (MonoObject*)pDispParams;
						__parameters__[5] = (MonoObject*)pVarResult;
						__parameters__[6] = (MonoObject*)pExcepInfo;
						__parameters__[7] = (MonoObject*)puArgErr;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_SignatureHelper", 0, NULL, "Invoke", __mscorlib_System_Runtime_InteropServices__SignatureHelper, 8, __parameter_types__, __parameters__, NULL);
				}


			}
		}
	}
}
