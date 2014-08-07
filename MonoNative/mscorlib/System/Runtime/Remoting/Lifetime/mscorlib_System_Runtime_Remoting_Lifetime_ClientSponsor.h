#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_LIFETIME_CLIENTSPONSOR_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_LIFETIME_CLIENTSPONSOR_H

#include <mscorlib/System/mscorlib_System_MarshalByRefObject.h>
#include <mscorlib/System/mscorlib_System_TimeSpan.h>
#include <mscorlib/System/Runtime/Remoting/Lifetime/mscorlib_System_Runtime_Remoting_Lifetime_ISponsor.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/Remoting/Lifetime/mscorlib_System_Runtime_Remoting_Lifetime_ILease.h>

namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Remoting
			{

				class ObjRef;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{

		class Type;
		class String;
		

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

					class ClientSponsor
						: public mscorlib::System::MarshalByRefObject
						, public virtual mscorlib::System::Runtime::Remoting::Lifetime::ISponsor
					{
					public:
						ClientSponsor()
						: mscorlib::System::MarshalByRefObject(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Remoting.Lifetime.ClientSponsor"))
						, mscorlib::System::Runtime::Remoting::Lifetime::ISponsor(NULL)
						{
							__native_object__ = Global::New("mscorlib", "System.Runtime.Remoting.Lifetime", "ClientSponsor");
						};
					
						ClientSponsor(mscorlib::System::TimeSpan renewalTime)
						: mscorlib::System::MarshalByRefObject(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Remoting.Lifetime.ClientSponsor"))
						, mscorlib::System::Runtime::Remoting::Lifetime::ISponsor(NULL)
						{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType("mscorlib", "System", "TimeSpan");
							__parameters__[0] = (MonoObject*)renewalTime;
							__native_object__ = Global::New("mscorlib", "System.Runtime.Remoting.Lifetime", "ClientSponsor", 1, __parameter_types__, __parameters__);
						};
					
						ClientSponsor(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::MarshalByRefObject(nativeTypeInfo)
						, mscorlib::System::Runtime::Remoting::Lifetime::ISponsor(NULL)
						{
						};
					
						ClientSponsor(MonoObject *nativeObject)
						: mscorlib::System::MarshalByRefObject(nativeObject)
						, mscorlib::System::Runtime::Remoting::Lifetime::ISponsor(nativeObject)
						{
						};
					
						~ClientSponsor()
						{
						};
					

						ClientSponsor & operator=(ClientSponsor &value) { __native_object__ = value.GetNativeObject(); return value; };
						bool operator==(ClientSponsor &value) { return mscorlib::System::Object::Equals(value); };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						void  Close();
						virtual mscorlib::System::Object  InitializeLifetimeService() override;
						mscorlib::System::Boolean  Register(mscorlib::System::MarshalByRefObject obj);
						virtual mscorlib::System::TimeSpan  Renewal(mscorlib::System::Runtime::Remoting::Lifetime::ILease lease);
						void  Unregister(mscorlib::System::MarshalByRefObject obj);
						virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


						//Public Properties
						__declspec(property(get=get_RenewalTime, put=set_RenewalTime)) mscorlib::System::TimeSpan  RenewalTime;

						//Get Set Properties Methods
						//	Get/Set:RenewalTime
						mscorlib::System::TimeSpan  get_RenewalTime() const;
						void set_RenewalTime(mscorlib::System::TimeSpan  value);

					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
