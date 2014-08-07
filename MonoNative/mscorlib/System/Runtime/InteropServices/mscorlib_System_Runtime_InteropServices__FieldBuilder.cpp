#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__FieldBuilder.h>
#include <mscorlib/System/mscorlib_System_Guid.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				//Public Methods
				void _FieldBuilder::GetIDsOfNames(mscorlib::System::Guid riid, mscorlib::System::IntPtr rgszNames, mscorlib::System::UInt32 cNames, mscorlib::System::UInt32 lcid, mscorlib::System::IntPtr rgDispId)
				{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType(typeid(riid).name());
						__parameter_types__[1] = Global::GetType(typeid(rgszNames).name());
						__parameter_types__[2] = Global::GetType(typeid(cNames).name());
						__parameter_types__[3] = Global::GetType(typeid(lcid).name());
						__parameter_types__[4] = Global::GetType(typeid(rgDispId).name());
						__parameters__[0] = (MonoObject*)riid;
						__parameters__[1] = rgszNames;
						__parameters__[2] = &cNames;
						__parameters__[3] = &lcid;
						__parameters__[4] = rgDispId;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_FieldBuilder", 0, NULL, "GetIDsOfNames", __mscorlib_System_Runtime_InteropServices__FieldBuilder, 5, __parameter_types__, __parameters__, NULL);
				}

				void _FieldBuilder::GetTypeInfo(mscorlib::System::UInt32 iTInfo, mscorlib::System::UInt32 lcid, mscorlib::System::IntPtr ppTInfo)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(iTInfo).name());
						__parameter_types__[1] = Global::GetType(typeid(lcid).name());
						__parameter_types__[2] = Global::GetType(typeid(ppTInfo).name());
						__parameters__[0] = &iTInfo;
						__parameters__[1] = &lcid;
						__parameters__[2] = ppTInfo;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_FieldBuilder", 0, NULL, "GetTypeInfo", __mscorlib_System_Runtime_InteropServices__FieldBuilder, 3, __parameter_types__, __parameters__, NULL);
				}

				void _FieldBuilder::GetTypeInfoCount(mscorlib::System::UInt32 pcTInfo)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(pcTInfo).name());
						__parameters__[0] = &pcTInfo;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_FieldBuilder", 0, NULL, "GetTypeInfoCount", __mscorlib_System_Runtime_InteropServices__FieldBuilder, 1, __parameter_types__, __parameters__, NULL);
				}

				void _FieldBuilder::Invoke(mscorlib::System::UInt32 dispIdMember, mscorlib::System::Guid riid, mscorlib::System::UInt32 lcid, mscorlib::System::Int16 wFlags, mscorlib::System::IntPtr pDispParams, mscorlib::System::IntPtr pVarResult, mscorlib::System::IntPtr pExcepInfo, mscorlib::System::IntPtr puArgErr)
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
						__parameters__[4] = pDispParams;
						__parameters__[5] = pVarResult;
						__parameters__[6] = pExcepInfo;
						__parameters__[7] = puArgErr;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_FieldBuilder", 0, NULL, "Invoke", __mscorlib_System_Runtime_InteropServices__FieldBuilder, 8, __parameter_types__, __parameters__, NULL);
				}


			}
		}
	}
}
