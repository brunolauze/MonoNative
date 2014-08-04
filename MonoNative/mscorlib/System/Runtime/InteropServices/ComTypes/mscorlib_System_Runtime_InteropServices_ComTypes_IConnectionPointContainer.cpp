#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_IConnectionPointContainer.h>
#include <mscorlib/System/mscorlib_System_Guid.h>
#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_IConnectionPoint.h>



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
					void IConnectionPointContainer::EnumConnectionPoints(mscorlib::System::Runtime::InteropServices::ComTypes::IEnumConnectionPoints ppEnum)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(ppEnum).name());
							__parameters__[0] = (MonoObject*)ppEnum;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "IConnectionPointContainer", 0, NULL, "EnumConnectionPoints", __mscorlib_System_Runtime_InteropServices_ComTypes_IConnectionPointContainer, 1, __parameter_types__, __parameters__, NULL);
					}

					void IConnectionPointContainer::FindConnectionPoint(mscorlib::System::Guid riid, mscorlib::System::Runtime::InteropServices::ComTypes::IConnectionPoint ppCP)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(riid).name());
							__parameter_types__[1] = Global::GetType(typeid(ppCP).name());
							__parameters__[0] = (MonoObject*)riid;
							__parameters__[1] = (MonoObject*)ppCP;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "IConnectionPointContainer", 0, NULL, "FindConnectionPoint", __mscorlib_System_Runtime_InteropServices_ComTypes_IConnectionPointContainer, 2, __parameter_types__, __parameters__, NULL);
					}


				}
			}
		}
	}
}
