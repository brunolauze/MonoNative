#include <mscorlib/System/Runtime/Remoting/Lifetime/mscorlib_System_Runtime_Remoting_Lifetime_ClientSponsor.h>
#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_ObjRef.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



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
					void ClientSponsor::Close()
					{
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Lifetime", "ClientSponsor", 0, NULL, "Close", __native_object__, 0, NULL, NULL, NULL);
					}

					mscorlib::System::Object ClientSponsor::InitializeLifetimeService()
					{
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Lifetime", "ClientSponsor", 0, NULL, "InitializeLifetimeService", __native_object__, 0, NULL, NULL, NULL);
							return mscorlib::System::Object(__result__);
					}

					mscorlib::System::Boolean ClientSponsor::Register(mscorlib::System::MarshalByRefObject obj)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(obj).name());
							__parameters__[0] = (MonoObject*)obj;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Lifetime", "ClientSponsor", 0, NULL, "Register", __native_object__, 1, __parameter_types__, __parameters__, NULL);
							return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					}

					mscorlib::System::TimeSpan ClientSponsor::Renewal(mscorlib::System::Runtime::Remoting::Lifetime::ILease lease)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(lease).name());
							__parameters__[0] = (MonoObject*)lease;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Lifetime", "ClientSponsor", 0, NULL, "Renewal", __native_object__, 1, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::TimeSpan(__result__);
					}

					void ClientSponsor::Unregister(mscorlib::System::MarshalByRefObject obj)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(obj).name());
							__parameters__[0] = (MonoObject*)obj;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Lifetime", "ClientSponsor", 0, NULL, "Unregister", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}

					//Get Set Properties Methods
					//	Get/Set:RenewalTime
					mscorlib::System::TimeSpan  ClientSponsor::get_RenewalTime()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Lifetime", "ClientSponsor", 0, NULL, "get_RenewalTime", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::TimeSpan(__result__);
					}

					void ClientSponsor::set_RenewalTime(mscorlib::System::TimeSpan  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Lifetime", "ClientSponsor", 0, NULL, "set_RenewalTime", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}



				}
			}
		}
	}
}
