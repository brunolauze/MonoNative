#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_UCOMIEnumConnectionPoints.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				//Public Methods
				mscorlib::System::Int32 UCOMIEnumConnectionPoints::Next(mscorlib::System::Int32 celt, std::vector<mscorlib::System::Runtime::InteropServices::UCOMIConnectionPoint*> rgelt, mscorlib::System::Int32 pceltFetched)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(celt).name());
						__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(rgelt).name()))->eklass);
						__parameter_types__[2] = Global::GetType(typeid(pceltFetched).name());
						__parameters__[0] = &celt;
						__parameters__[1] = Global::FromArray<mscorlib::System::Runtime::InteropServices::UCOMIConnectionPoint*>(rgelt, typeid(mscorlib::System::Runtime::InteropServices::UCOMIConnectionPoint).name());
						__parameters__[2] = &pceltFetched;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIEnumConnectionPoints", 0, NULL, "Next", __mscorlib_System_Runtime_InteropServices_UCOMIEnumConnectionPoints, 3, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				mscorlib::System::Int32 UCOMIEnumConnectionPoints::Skip(mscorlib::System::Int32 celt)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(celt).name());
						__parameters__[0] = &celt;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIEnumConnectionPoints", 0, NULL, "Skip", __mscorlib_System_Runtime_InteropServices_UCOMIEnumConnectionPoints, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				mscorlib::System::Int32 UCOMIEnumConnectionPoints::Reset()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIEnumConnectionPoints", 0, NULL, "Reset", __mscorlib_System_Runtime_InteropServices_UCOMIEnumConnectionPoints, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				void UCOMIEnumConnectionPoints::Clone(mscorlib::System::Runtime::InteropServices::UCOMIEnumConnectionPoints ppenum)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(ppenum).name());
						__parameters__[0] = (MonoObject*)ppenum;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIEnumConnectionPoints", 0, NULL, "Clone", __mscorlib_System_Runtime_InteropServices_UCOMIEnumConnectionPoints, 1, __parameter_types__, __parameters__, NULL);
				}


			}
		}
	}
}
