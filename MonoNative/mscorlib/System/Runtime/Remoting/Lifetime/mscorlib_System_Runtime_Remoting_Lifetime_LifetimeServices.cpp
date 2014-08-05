#include <mscorlib/System/Runtime/Remoting/Lifetime/mscorlib_System_Runtime_Remoting_Lifetime_LifetimeServices.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_TimeSpan.h>



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

					Property<mscorlib::System::TimeSpan , mscorlib::System::Runtime::Remoting::Lifetime::LifetimeServices> mscorlib::System::Runtime::Remoting::Lifetime::LifetimeServices::LeaseManagerPollTime(&mscorlib::System::Runtime::Remoting::Lifetime::LifetimeServices::get_LeaseManagerPollTime, &mscorlib::System::Runtime::Remoting::Lifetime::LifetimeServices::set_LeaseManagerPollTime);
					Property<mscorlib::System::TimeSpan , mscorlib::System::Runtime::Remoting::Lifetime::LifetimeServices> mscorlib::System::Runtime::Remoting::Lifetime::LifetimeServices::LeaseTime(&mscorlib::System::Runtime::Remoting::Lifetime::LifetimeServices::get_LeaseTime, &mscorlib::System::Runtime::Remoting::Lifetime::LifetimeServices::set_LeaseTime);
					Property<mscorlib::System::TimeSpan , mscorlib::System::Runtime::Remoting::Lifetime::LifetimeServices> mscorlib::System::Runtime::Remoting::Lifetime::LifetimeServices::RenewOnCallTime(&mscorlib::System::Runtime::Remoting::Lifetime::LifetimeServices::get_RenewOnCallTime, &mscorlib::System::Runtime::Remoting::Lifetime::LifetimeServices::set_RenewOnCallTime);
					Property<mscorlib::System::TimeSpan , mscorlib::System::Runtime::Remoting::Lifetime::LifetimeServices> mscorlib::System::Runtime::Remoting::Lifetime::LifetimeServices::SponsorshipTimeout(&mscorlib::System::Runtime::Remoting::Lifetime::LifetimeServices::get_SponsorshipTimeout, &mscorlib::System::Runtime::Remoting::Lifetime::LifetimeServices::set_SponsorshipTimeout);
					//Public Methods
					//Get Set Static Properties Methods
					//	Get/Set:LeaseManagerPollTime
					mscorlib::System::TimeSpan  LifetimeServices::get_LeaseManagerPollTime()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Lifetime", "LifetimeServices", 0, NULL, "get_LeaseManagerPollTime", NullMonoObject, 0, NULL, NULL, NULL);
						return mscorlib::System::TimeSpan(__result__);
					}

					void LifetimeServices::set_LeaseManagerPollTime(mscorlib::System::TimeSpan  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Lifetime", "LifetimeServices", 0, NULL, "set_LeaseManagerPollTime", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					}


					//	Get/Set:LeaseTime
					mscorlib::System::TimeSpan  LifetimeServices::get_LeaseTime()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Lifetime", "LifetimeServices", 0, NULL, "get_LeaseTime", NullMonoObject, 0, NULL, NULL, NULL);
						return mscorlib::System::TimeSpan(__result__);
					}

					void LifetimeServices::set_LeaseTime(mscorlib::System::TimeSpan  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Lifetime", "LifetimeServices", 0, NULL, "set_LeaseTime", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					}


					//	Get/Set:RenewOnCallTime
					mscorlib::System::TimeSpan  LifetimeServices::get_RenewOnCallTime()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Lifetime", "LifetimeServices", 0, NULL, "get_RenewOnCallTime", NullMonoObject, 0, NULL, NULL, NULL);
						return mscorlib::System::TimeSpan(__result__);
					}

					void LifetimeServices::set_RenewOnCallTime(mscorlib::System::TimeSpan  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Lifetime", "LifetimeServices", 0, NULL, "set_RenewOnCallTime", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					}


					//	Get/Set:SponsorshipTimeout
					mscorlib::System::TimeSpan  LifetimeServices::get_SponsorshipTimeout()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Lifetime", "LifetimeServices", 0, NULL, "get_SponsorshipTimeout", NullMonoObject, 0, NULL, NULL, NULL);
						return mscorlib::System::TimeSpan(__result__);
					}

					void LifetimeServices::set_SponsorshipTimeout(mscorlib::System::TimeSpan  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Lifetime", "LifetimeServices", 0, NULL, "set_SponsorshipTimeout", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					}




				}
			}
		}
	}
}
