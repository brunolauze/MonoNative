#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_IEnumConnectionPoints.h>
#include <mscorlib/System/mscorlib_System_IntPtr.h>



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
					mscorlib::System::Int32 IEnumConnectionPoints::Next(mscorlib::System::Int32 celt, std::vector<mscorlib::System::Runtime::InteropServices::ComTypes::IConnectionPoint*> rgelt, mscorlib::System::IntPtr pceltFetched)
					{
							MonoType *__parameter_types__[3];
							void *__parameters__[3];
							__parameter_types__[0] = Global::GetType(typeid(celt).name());
							__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System.Runtime.InteropServices.ComTypes", "IConnectionPoint")), 1));
							__parameter_types__[2] = Global::GetType(typeid(pceltFetched).name());
							__parameters__[0] = &celt;
							__parameters__[1] = Global::FromArray<mscorlib::System::Runtime::InteropServices::ComTypes::IConnectionPoint*>(rgelt, typeid(mscorlib::System::Runtime::InteropServices::ComTypes::IConnectionPoint).name());
							__parameters__[2] = (MonoObject*)pceltFetched;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "IEnumConnectionPoints", 0, NULL, "Next", __mscorlib_System_Runtime_InteropServices_ComTypes_IEnumConnectionPoints, 3, __parameter_types__, __parameters__, NULL);
							return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					}

					mscorlib::System::Int32 IEnumConnectionPoints::Skip(mscorlib::System::Int32 celt)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(celt).name());
							__parameters__[0] = &celt;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "IEnumConnectionPoints", 0, NULL, "Skip", __mscorlib_System_Runtime_InteropServices_ComTypes_IEnumConnectionPoints, 1, __parameter_types__, __parameters__, NULL);
							return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					}

					void IEnumConnectionPoints::Reset()
					{
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "IEnumConnectionPoints", 0, NULL, "Reset", __mscorlib_System_Runtime_InteropServices_ComTypes_IEnumConnectionPoints, 0, NULL, NULL, NULL);
					}

					void IEnumConnectionPoints::Clone(mscorlib::System::Runtime::InteropServices::ComTypes::IEnumConnectionPoints ppenum)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(ppenum).name());
							__parameters__[0] = (MonoObject*)ppenum;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "IEnumConnectionPoints", 0, NULL, "Clone", __mscorlib_System_Runtime_InteropServices_ComTypes_IEnumConnectionPoints, 1, __parameter_types__, __parameters__, NULL);
					}


				}
			}
		}
	}
}
