#include <mscorlib/System/Runtime/Remoting/Lifetime/mscorlib_System_Runtime_Remoting_Lifetime_ILease.h>
#include <mscorlib/System/mscorlib_System_TimeSpan.h>
#include <mscorlib/System/Runtime/Remoting/Lifetime/mscorlib_System_Runtime_Remoting_Lifetime_ISponsor.h>



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
					void ILease::Register(mscorlib::System::Runtime::Remoting::Lifetime::ISponsor obj)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(obj).name());
							__parameters__[0] = (MonoObject*)obj;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Lifetime", "ILease", 0, NULL, "Register", __mscorlib_System_Runtime_Remoting_Lifetime_ILease, 1, __parameter_types__, __parameters__, NULL);
					}

					void ILease::Register(mscorlib::System::Runtime::Remoting::Lifetime::ISponsor obj, mscorlib::System::TimeSpan renewalTime)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(obj).name());
							__parameter_types__[1] = Global::GetType(typeid(renewalTime).name());
							__parameters__[0] = (MonoObject*)obj;
							__parameters__[1] = (MonoObject*)renewalTime;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Lifetime", "ILease", 0, NULL, "Register", __mscorlib_System_Runtime_Remoting_Lifetime_ILease, 2, __parameter_types__, __parameters__, NULL);
					}

					mscorlib::System::TimeSpan ILease::Renew(mscorlib::System::TimeSpan renewalTime)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(renewalTime).name());
							__parameters__[0] = (MonoObject*)renewalTime;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Lifetime", "ILease", 0, NULL, "Renew", __mscorlib_System_Runtime_Remoting_Lifetime_ILease, 1, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::TimeSpan(__result__);
					}

					void ILease::Unregister(mscorlib::System::Runtime::Remoting::Lifetime::ISponsor obj)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(obj).name());
							__parameters__[0] = (MonoObject*)obj;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Lifetime", "ILease", 0, NULL, "Unregister", __mscorlib_System_Runtime_Remoting_Lifetime_ILease, 1, __parameter_types__, __parameters__, NULL);
					}

					//Get Set Properties Methods
					//	Get:CurrentLeaseTime
					mscorlib::System::TimeSpan  ILease::get_CurrentLeaseTime() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Lifetime", "ILease", 0, NULL, "get_CurrentLeaseTime", __mscorlib_System_Runtime_Remoting_Lifetime_ILease, 0, NULL, NULL, NULL);
						return mscorlib::System::TimeSpan(__result__);
					}


					//	Get:CurrentState
					mscorlib::System::Runtime::Remoting::Lifetime::LeaseState::__ENUM__  ILease::get_CurrentState() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Lifetime", "ILease", 0, NULL, "get_CurrentState", __mscorlib_System_Runtime_Remoting_Lifetime_ILease, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Runtime::Remoting::Lifetime::LeaseState::__ENUM__*)mono_object_unbox(__result__);
					}


					//	Get/Set:InitialLeaseTime
					mscorlib::System::TimeSpan  ILease::get_InitialLeaseTime() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Lifetime", "ILease", 0, NULL, "get_InitialLeaseTime", __mscorlib_System_Runtime_Remoting_Lifetime_ILease, 0, NULL, NULL, NULL);
						return mscorlib::System::TimeSpan(__result__);
					}

					void ILease::set_InitialLeaseTime(mscorlib::System::TimeSpan  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Lifetime", "ILease", 0, NULL, "set_InitialLeaseTime", __mscorlib_System_Runtime_Remoting_Lifetime_ILease, 1, __parameter_types__, __parameters__, NULL);
					}


					//	Get/Set:RenewOnCallTime
					mscorlib::System::TimeSpan  ILease::get_RenewOnCallTime() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Lifetime", "ILease", 0, NULL, "get_RenewOnCallTime", __mscorlib_System_Runtime_Remoting_Lifetime_ILease, 0, NULL, NULL, NULL);
						return mscorlib::System::TimeSpan(__result__);
					}

					void ILease::set_RenewOnCallTime(mscorlib::System::TimeSpan  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Lifetime", "ILease", 0, NULL, "set_RenewOnCallTime", __mscorlib_System_Runtime_Remoting_Lifetime_ILease, 1, __parameter_types__, __parameters__, NULL);
					}


					//	Get/Set:SponsorshipTimeout
					mscorlib::System::TimeSpan  ILease::get_SponsorshipTimeout() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Lifetime", "ILease", 0, NULL, "get_SponsorshipTimeout", __mscorlib_System_Runtime_Remoting_Lifetime_ILease, 0, NULL, NULL, NULL);
						return mscorlib::System::TimeSpan(__result__);
					}

					void ILease::set_SponsorshipTimeout(mscorlib::System::TimeSpan  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Lifetime", "ILease", 0, NULL, "set_SponsorshipTimeout", __mscorlib_System_Runtime_Remoting_Lifetime_ILease, 1, __parameter_types__, __parameters__, NULL);
					}



				}
			}
		}
	}
}
