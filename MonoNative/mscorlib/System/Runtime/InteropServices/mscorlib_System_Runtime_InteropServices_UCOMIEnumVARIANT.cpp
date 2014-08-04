#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_UCOMIEnumVARIANT.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				//Public Methods
				mscorlib::System::Int32 UCOMIEnumVARIANT::Next(mscorlib::System::Int32 celt, mscorlib::System::Int32 rgvar, mscorlib::System::Int32 pceltFetched)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(celt).name());
						__parameter_types__[1] = Global::GetType(typeid(rgvar).name());
						__parameter_types__[2] = Global::GetType(typeid(pceltFetched).name());
						__parameters__[0] = &celt;
						__parameters__[1] = &rgvar;
						__parameters__[2] = &pceltFetched;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIEnumVARIANT", 0, NULL, "Next", __mscorlib_System_Runtime_InteropServices_UCOMIEnumVARIANT, 3, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				mscorlib::System::Int32 UCOMIEnumVARIANT::Skip(mscorlib::System::Int32 celt)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(celt).name());
						__parameters__[0] = &celt;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIEnumVARIANT", 0, NULL, "Skip", __mscorlib_System_Runtime_InteropServices_UCOMIEnumVARIANT, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				mscorlib::System::Int32 UCOMIEnumVARIANT::Reset()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIEnumVARIANT", 0, NULL, "Reset", __mscorlib_System_Runtime_InteropServices_UCOMIEnumVARIANT, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				void UCOMIEnumVARIANT::Clone(mscorlib::System::Int32 ppenum)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(ppenum).name());
						__parameters__[0] = &ppenum;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIEnumVARIANT", 0, NULL, "Clone", __mscorlib_System_Runtime_InteropServices_UCOMIEnumVARIANT, 1, __parameter_types__, __parameters__, NULL);
				}


			}
		}
	}
}
