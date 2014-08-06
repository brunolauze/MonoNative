#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_IEnumConnections.h>
#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_CONNECTDATA.h>
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
					mscorlib::System::Int32 IEnumConnections::Next(mscorlib::System::Int32 celt, std::vector<mscorlib::System::Runtime::InteropServices::ComTypes::CONNECTDATA*> rgelt, mscorlib::System::IntPtr pceltFetched)
					{
							MonoType *__parameter_types__[3];
							void *__parameters__[3];
							__parameter_types__[0] = Global::GetType(typeid(celt).name());
							__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System.Runtime.InteropServices.ComTypes", "CONNECTDATA")), 1));
							__parameter_types__[2] = Global::GetType(typeid(pceltFetched).name());
							__parameters__[0] = &celt;
							__parameters__[1] = Global::FromArray<mscorlib::System::Runtime::InteropServices::ComTypes::CONNECTDATA*>(rgelt, typeid(mscorlib::System::Runtime::InteropServices::ComTypes::CONNECTDATA).name());
							__parameters__[2] = (MonoObject*)pceltFetched;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "IEnumConnections", 0, NULL, "Next", __mscorlib_System_Runtime_InteropServices_ComTypes_IEnumConnections, 3, __parameter_types__, __parameters__, NULL);
							return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					}

					mscorlib::System::Int32 IEnumConnections::Skip(mscorlib::System::Int32 celt)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(celt).name());
							__parameters__[0] = &celt;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "IEnumConnections", 0, NULL, "Skip", __mscorlib_System_Runtime_InteropServices_ComTypes_IEnumConnections, 1, __parameter_types__, __parameters__, NULL);
							return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					}

					void IEnumConnections::Reset()
					{
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "IEnumConnections", 0, NULL, "Reset", __mscorlib_System_Runtime_InteropServices_ComTypes_IEnumConnections, 0, NULL, NULL, NULL);
					}

					void IEnumConnections::Clone(mscorlib::System::Runtime::InteropServices::ComTypes::IEnumConnections ppenum)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(ppenum).name());
							__parameters__[0] = (MonoObject*)ppenum;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "IEnumConnections", 0, NULL, "Clone", __mscorlib_System_Runtime_InteropServices_ComTypes_IEnumConnections, 1, __parameter_types__, __parameters__, NULL);
					}


				}
			}
		}
	}
}
