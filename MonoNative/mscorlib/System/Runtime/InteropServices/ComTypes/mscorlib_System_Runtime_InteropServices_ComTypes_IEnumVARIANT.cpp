#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_IEnumVARIANT.h>



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
					mscorlib::System::Int32 IEnumVARIANT::Next(mscorlib::System::Int32 celt, std::vector<mscorlib::System::Object*> rgVar, mscorlib::System::IntPtr pceltFetched)
					{
							MonoType *__parameter_types__[3];
							void *__parameters__[3];
							__parameter_types__[0] = Global::GetType(typeid(celt).name());
							__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
							__parameter_types__[2] = Global::GetType(typeid(pceltFetched).name());
							__parameters__[0] = &celt;
							__parameters__[1] = Global::FromArray<mscorlib::System::Object*>(rgVar, typeid(mscorlib::System::Object).name());
							__parameters__[2] = pceltFetched;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "IEnumVARIANT", 0, NULL, "Next", __mscorlib_System_Runtime_InteropServices_ComTypes_IEnumVARIANT, 3, __parameter_types__, __parameters__, NULL);
							return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					}

					mscorlib::System::Int32 IEnumVARIANT::Skip(mscorlib::System::Int32 celt)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(celt).name());
							__parameters__[0] = &celt;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "IEnumVARIANT", 0, NULL, "Skip", __mscorlib_System_Runtime_InteropServices_ComTypes_IEnumVARIANT, 1, __parameter_types__, __parameters__, NULL);
							return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					}

					mscorlib::System::Int32 IEnumVARIANT::Reset()
					{
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "IEnumVARIANT", 0, NULL, "Reset", __mscorlib_System_Runtime_InteropServices_ComTypes_IEnumVARIANT, 0, NULL, NULL, NULL);
							return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					}

					mscorlib::System::Runtime::InteropServices::ComTypes::IEnumVARIANT IEnumVARIANT::Clone()
					{
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "IEnumVARIANT", 0, NULL, "Clone", __mscorlib_System_Runtime_InteropServices_ComTypes_IEnumVARIANT, 0, NULL, NULL, NULL);
							return mscorlib::System::Runtime::InteropServices::ComTypes::IEnumVARIANT(__result__);
					}


				}
			}
		}
	}
}
