#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_H

#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		class String;
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

					class LifetimeServices
						: public mscorlib::System::Object
					{
					public:
						LifetimeServices()
						: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Remoting.Lifetime.LifetimeServices"))
						{
							__native_object__ = Global::New("mscorlib", "System.Runtime.Remoting.Lifetime", "LifetimeServices");
						};
					
						LifetimeServices(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::Object(nativeTypeInfo)
						{
						};
					
						LifetimeServices(MonoObject *nativeObject)
						: mscorlib::System::Object(nativeObject)
						{
						};
					
						~LifetimeServices()
						{
						};
					

						LifetimeServices & operator=(LifetimeServices &value) { __native_object__ = value.GetNativeObject(); return value; };
						bool operator==(LifetimeServices &value) { return mscorlib::System::Object::Equals(value); };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


						//Public Static Properties
						static Property<mscorlib::System::TimeSpan , mscorlib::System::Runtime::Remoting::Lifetime::LifetimeServices> LeaseManagerPollTime;
						static Property<mscorlib::System::TimeSpan , mscorlib::System::Runtime::Remoting::Lifetime::LifetimeServices> LeaseTime;
						static Property<mscorlib::System::TimeSpan , mscorlib::System::Runtime::Remoting::Lifetime::LifetimeServices> RenewOnCallTime;
						static Property<mscorlib::System::TimeSpan , mscorlib::System::Runtime::Remoting::Lifetime::LifetimeServices> SponsorshipTimeout;

						//Get Set Static Properties Methods
						//	Get/Set:LeaseManagerPollTime
						static mscorlib::System::TimeSpan  get_LeaseManagerPollTime();
						static void set_LeaseManagerPollTime(mscorlib::System::TimeSpan  value);

						//	Get/Set:LeaseTime
						static mscorlib::System::TimeSpan  get_LeaseTime();
						static void set_LeaseTime(mscorlib::System::TimeSpan  value);

						//	Get/Set:RenewOnCallTime
						static mscorlib::System::TimeSpan  get_RenewOnCallTime();
						static void set_RenewOnCallTime(mscorlib::System::TimeSpan  value);

						//	Get/Set:SponsorshipTimeout
						static mscorlib::System::TimeSpan  get_SponsorshipTimeout();
						static void set_SponsorshipTimeout(mscorlib::System::TimeSpan  value);


					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
