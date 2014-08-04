#include <mscorlib/System/Runtime/Remoting/Lifetime/mscorlib_System_Runtime_Remoting_Lifetime_ISponsor.h>
#include <mscorlib/System/mscorlib_System_TimeSpan.h>
#include <mscorlib/System/Runtime/Remoting/Lifetime/mscorlib_System_Runtime_Remoting_Lifetime_ILease.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Remoting
			{
				namespace Lifetime
				{

					//Public Methods
					mscorlib::System::TimeSpan ISponsor::Renewal(mscorlib::System::Runtime::Remoting::Lifetime::ILease lease)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(lease).name());
							__parameters__[0] = (MonoObject*)lease;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Lifetime", "ISponsor", 0, NULL, "Renewal", __mscorlib_System_Runtime_Remoting_Lifetime_ISponsor, 1, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::TimeSpan(__result__);
					}


				}
			}
		}
	}
}
