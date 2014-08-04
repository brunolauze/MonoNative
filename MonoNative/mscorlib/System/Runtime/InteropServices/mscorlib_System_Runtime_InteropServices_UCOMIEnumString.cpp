#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_UCOMIEnumString.h>
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
				mscorlib::System::Int32 UCOMIEnumString::Next(mscorlib::System::Int32 celt, std::vector<mscorlib::System::String*> rgelt, mscorlib::System::Int32 pceltFetched)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(celt).name());
						__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(rgelt).name()))->eklass);
						__parameter_types__[2] = Global::GetType(typeid(pceltFetched).name());
						__parameters__[0] = &celt;
						__parameters__[1] = Global::FromArray<mscorlib::System::String*>(rgelt, typeid(mscorlib::System::String).name());
						__parameters__[2] = &pceltFetched;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIEnumString", 0, NULL, "Next", __mscorlib_System_Runtime_InteropServices_UCOMIEnumString, 3, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				mscorlib::System::Int32 UCOMIEnumString::Skip(mscorlib::System::Int32 celt)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(celt).name());
						__parameters__[0] = &celt;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIEnumString", 0, NULL, "Skip", __mscorlib_System_Runtime_InteropServices_UCOMIEnumString, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				mscorlib::System::Int32 UCOMIEnumString::Reset()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIEnumString", 0, NULL, "Reset", __mscorlib_System_Runtime_InteropServices_UCOMIEnumString, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				void UCOMIEnumString::Clone(mscorlib::System::Runtime::InteropServices::UCOMIEnumString ppenum)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(ppenum).name());
						__parameters__[0] = (MonoObject*)ppenum;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIEnumString", 0, NULL, "Clone", __mscorlib_System_Runtime_InteropServices_UCOMIEnumString, 1, __parameter_types__, __parameters__, NULL);
				}


			}
		}
	}
}
