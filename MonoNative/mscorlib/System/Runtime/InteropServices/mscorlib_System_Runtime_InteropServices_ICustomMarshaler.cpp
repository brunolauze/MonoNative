#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_ICustomMarshaler.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				//Public Methods
				void ICustomMarshaler::CleanUpManagedData(mscorlib::System::Object ManagedObj)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(ManagedObj).name());
						__parameters__[0] = (MonoObject*)ManagedObj;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "ICustomMarshaler", 0, NULL, "CleanUpManagedData", __mscorlib_System_Runtime_InteropServices_ICustomMarshaler, 1, __parameter_types__, __parameters__, NULL);
				}

				void ICustomMarshaler::CleanUpNativeData(mscorlib::System::IntPtr pNativeData)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(pNativeData).name());
						__parameters__[0] = pNativeData;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "ICustomMarshaler", 0, NULL, "CleanUpNativeData", __mscorlib_System_Runtime_InteropServices_ICustomMarshaler, 1, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Int32 ICustomMarshaler::GetNativeDataSize()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "ICustomMarshaler", 0, NULL, "GetNativeDataSize", __mscorlib_System_Runtime_InteropServices_ICustomMarshaler, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				mscorlib::System::IntPtr ICustomMarshaler::MarshalManagedToNative(mscorlib::System::Object ManagedObj)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(ManagedObj).name());
						__parameters__[0] = (MonoObject*)ManagedObj;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "ICustomMarshaler", 0, NULL, "MarshalManagedToNative", __mscorlib_System_Runtime_InteropServices_ICustomMarshaler, 1, __parameter_types__, __parameters__, NULL);
						return mono_object_unbox (__result__);
				}

				mscorlib::System::Object ICustomMarshaler::MarshalNativeToManaged(mscorlib::System::IntPtr pNativeData)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(pNativeData).name());
						__parameters__[0] = pNativeData;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "ICustomMarshaler", 0, NULL, "MarshalNativeToManaged", __mscorlib_System_Runtime_InteropServices_ICustomMarshaler, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Object(__result__);
				}


			}
		}
	}
}
