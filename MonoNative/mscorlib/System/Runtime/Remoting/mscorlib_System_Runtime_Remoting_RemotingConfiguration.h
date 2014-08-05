#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_CustomErrorsModes.h>
#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_WellKnownObjectMode.h>

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

				class ActivatedClientTypeEntry;
				class ActivatedServiceTypeEntry;
				class WellKnownClientTypeEntry;
				class WellKnownServiceTypeEntry;
				

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

				class RemotingConfiguration
					: public mscorlib::System::Object
				{
				public:
					RemotingConfiguration(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					RemotingConfiguration(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~RemotingConfiguration()
					{
					};
				

					RemotingConfiguration & operator=(RemotingConfiguration &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					static void  Configure(mscorlib::System::String filename, mscorlib::System::Boolean ensureSecurity);
					static void  Configure(const char *filename, mscorlib::System::Boolean ensureSecurity);
					static void  Configure(mscorlib::System::String filename);
					static void  Configure(const char *filename);
					static std::vector<mscorlib::System::Runtime::Remoting::ActivatedClientTypeEntry*>  GetRegisteredActivatedClientTypes();
					static std::vector<mscorlib::System::Runtime::Remoting::ActivatedServiceTypeEntry*>  GetRegisteredActivatedServiceTypes();
					static std::vector<mscorlib::System::Runtime::Remoting::WellKnownClientTypeEntry*>  GetRegisteredWellKnownClientTypes();
					static std::vector<mscorlib::System::Runtime::Remoting::WellKnownServiceTypeEntry*>  GetRegisteredWellKnownServiceTypes();
					static mscorlib::System::Boolean  IsActivationAllowed(mscorlib::System::Type svrType);
					static mscorlib::System::Runtime::Remoting::ActivatedClientTypeEntry  IsRemotelyActivatedClientType(mscorlib::System::Type svrType);
					static mscorlib::System::Runtime::Remoting::ActivatedClientTypeEntry  IsRemotelyActivatedClientType(mscorlib::System::String typeName, mscorlib::System::String assemblyName);
					static mscorlib::System::Runtime::Remoting::ActivatedClientTypeEntry  IsRemotelyActivatedClientType(const char *typeName, const char *assemblyName);
					static mscorlib::System::Runtime::Remoting::WellKnownClientTypeEntry  IsWellKnownClientType(mscorlib::System::Type svrType);
					static mscorlib::System::Runtime::Remoting::WellKnownClientTypeEntry  IsWellKnownClientType(mscorlib::System::String typeName, mscorlib::System::String assemblyName);
					static mscorlib::System::Runtime::Remoting::WellKnownClientTypeEntry  IsWellKnownClientType(const char *typeName, const char *assemblyName);
					static void  RegisterActivatedClientType(mscorlib::System::Runtime::Remoting::ActivatedClientTypeEntry entry);
					static void  RegisterActivatedClientType(mscorlib::System::Type type, mscorlib::System::String appUrl);
					static void  RegisterActivatedClientType(mscorlib::System::Type type, const char *appUrl);
					static void  RegisterActivatedServiceType(mscorlib::System::Runtime::Remoting::ActivatedServiceTypeEntry entry);
					static void  RegisterActivatedServiceType(mscorlib::System::Type type);
					static void  RegisterWellKnownClientType(mscorlib::System::Type type, mscorlib::System::String objectUrl);
					static void  RegisterWellKnownClientType(mscorlib::System::Type type, const char *objectUrl);
					static void  RegisterWellKnownClientType(mscorlib::System::Runtime::Remoting::WellKnownClientTypeEntry entry);
					static void  RegisterWellKnownServiceType(mscorlib::System::Type type, mscorlib::System::String objectUri, mscorlib::System::Runtime::Remoting::WellKnownObjectMode::__ENUM__ mode);
					static void  RegisterWellKnownServiceType(mscorlib::System::Type type, const char *objectUri, mscorlib::System::Runtime::Remoting::WellKnownObjectMode::__ENUM__ mode);
					static void  RegisterWellKnownServiceType(mscorlib::System::Runtime::Remoting::WellKnownServiceTypeEntry entry);
					static mscorlib::System::Boolean  CustomErrorsEnabled(mscorlib::System::Boolean isLocalRequest);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Static Properties
					static Property<mscorlib::System::String , mscorlib::System::Runtime::Remoting::RemotingConfiguration> ApplicationId;
					static Property<mscorlib::System::String , mscorlib::System::Runtime::Remoting::RemotingConfiguration> ApplicationName;
					static Property<mscorlib::System::Runtime::Remoting::CustomErrorsModes::__ENUM__ , mscorlib::System::Runtime::Remoting::RemotingConfiguration> CustomErrorsMode;
					static Property<mscorlib::System::String , mscorlib::System::Runtime::Remoting::RemotingConfiguration> ProcessId;

					//Get Set Static Properties Methods
					//	Get:ApplicationId
					static mscorlib::System::String  get_ApplicationId();
					static void set_ApplicationId(mscorlib::System::String  value);

					//	Get/Set:ApplicationName
					static mscorlib::System::String  get_ApplicationName();
					static void set_ApplicationName(mscorlib::System::String  value);

					//	Get/Set:CustomErrorsMode
					static mscorlib::System::Runtime::Remoting::CustomErrorsModes::__ENUM__  get_CustomErrorsMode();
					static void set_CustomErrorsMode(mscorlib::System::Runtime::Remoting::CustomErrorsModes::__ENUM__  value);

					//	Get:ProcessId
					static mscorlib::System::String  get_ProcessId();
					static void set_ProcessId(mscorlib::System::String  value);


				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
