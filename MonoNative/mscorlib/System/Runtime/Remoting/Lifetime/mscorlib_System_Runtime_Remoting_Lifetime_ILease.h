#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_LIFETIME_ILEASE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_LIFETIME_ILEASE_H

#include <mscorlib/System/Runtime/Remoting/Lifetime/mscorlib_System_Runtime_Remoting_Lifetime_LeaseState.h>
#include <Global.h>

namespace mscorlib
{
	namespace System
	{

		class TimeSpan;
		

	}
}
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

					class ISponsor;
					

				}
			}
		}
	}
}
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

					class ILease
					{
					public:
						ILease(MonoObject *nativeObject)
						{
							__mscorlib_System_Runtime_Remoting_Lifetime_ILease = nativeObject;
						};
					
						~ILease()
						{
						};
					

						ILease & operator=(ILease &value) { __mscorlib_System_Runtime_Remoting_Lifetime_ILease = value.__mscorlib_System_Runtime_Remoting_Lifetime_ILease; return value; };
						operator MonoObject*() { return __mscorlib_System_Runtime_Remoting_Lifetime_ILease; };
						MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_Remoting_Lifetime_ILease = value; return value; };


						virtual void  Register(mscorlib::System::Runtime::Remoting::Lifetime::ISponsor obj);
						virtual void  Register(mscorlib::System::Runtime::Remoting::Lifetime::ISponsor obj, mscorlib::System::TimeSpan renewalTime);
						virtual mscorlib::System::TimeSpan  Renew(mscorlib::System::TimeSpan renewalTime);
						virtual void  Unregister(mscorlib::System::Runtime::Remoting::Lifetime::ISponsor obj);


						//Public Properties
						__declspec(property(get=get_CurrentLeaseTime)) mscorlib::System::TimeSpan  CurrentLeaseTime;
						__declspec(property(get=get_CurrentState)) mscorlib::System::Runtime::Remoting::Lifetime::LeaseState::__ENUM__  CurrentState;
						__declspec(property(get=get_InitialLeaseTime, put=set_InitialLeaseTime)) mscorlib::System::TimeSpan  InitialLeaseTime;
						__declspec(property(get=get_RenewOnCallTime, put=set_RenewOnCallTime)) mscorlib::System::TimeSpan  RenewOnCallTime;
						__declspec(property(get=get_SponsorshipTimeout, put=set_SponsorshipTimeout)) mscorlib::System::TimeSpan  SponsorshipTimeout;

						//Get Set Properties Methods
						//	Get:CurrentLeaseTime
						mscorlib::System::TimeSpan  get_CurrentLeaseTime() const;

						//	Get:CurrentState
						mscorlib::System::Runtime::Remoting::Lifetime::LeaseState::__ENUM__  get_CurrentState() const;

						//	Get/Set:InitialLeaseTime
						mscorlib::System::TimeSpan  get_InitialLeaseTime() const;
						void set_InitialLeaseTime(mscorlib::System::TimeSpan  value);

						//	Get/Set:RenewOnCallTime
						mscorlib::System::TimeSpan  get_RenewOnCallTime() const;
						void set_RenewOnCallTime(mscorlib::System::TimeSpan  value);

						//	Get/Set:SponsorshipTimeout
						mscorlib::System::TimeSpan  get_SponsorshipTimeout() const;
						void set_SponsorshipTimeout(mscorlib::System::TimeSpan  value);

					
					protected:
						MonoObject *__mscorlib_System_Runtime_Remoting_Lifetime_ILease;
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
