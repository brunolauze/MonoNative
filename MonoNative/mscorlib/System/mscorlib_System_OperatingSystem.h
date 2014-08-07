#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_OPERATINGSYSTEM_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_OPERATINGSYSTEM_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_PlatformID.h>
#include <mscorlib/System/mscorlib_System_Version.h>
#include <mscorlib/System/mscorlib_System_ICloneable.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ISerializable.h>

namespace mscorlib
{
	namespace System
	{

		class String;
		class Type;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Serialization
			{

				class SerializationInfo;
				class StreamingContext;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{

		class OperatingSystem
			: public mscorlib::System::Object
			, public virtual mscorlib::System::ICloneable
			, public virtual mscorlib::System::Runtime::Serialization::ISerializable
		{
		public:
			OperatingSystem(mscorlib::System::PlatformID::__ENUM__ platform, mscorlib::System::Version version)
			: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.OperatingSystem"))
			, mscorlib::System::ICloneable(NULL)
			, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
			{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "PlatformID");
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "Version");
				mscorlib::System::Int32 __param_platform__ = platform;
				__parameters__[0] = &__param_platform__;
				__parameters__[1] = (MonoObject*)version;
				__native_object__ = Global::New("mscorlib", "System", "OperatingSystem", 2, __parameter_types__, __parameters__);
			};
		
			OperatingSystem(mscorlib::NativeTypeInfo *nativeTypeInfo)
			: mscorlib::System::Object(nativeTypeInfo)
			, mscorlib::System::ICloneable(NULL)
			, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
			{
			};
		
			OperatingSystem(MonoObject *nativeObject)
			: mscorlib::System::Object(nativeObject)
			, mscorlib::System::ICloneable(nativeObject)
			, mscorlib::System::Runtime::Serialization::ISerializable(nativeObject)
			{
			};
		
			~OperatingSystem()
			{
			};
		

			OperatingSystem & operator=(OperatingSystem &value) { __native_object__ = value.GetNativeObject(); return value; };
			bool operator==(OperatingSystem &value) { return mscorlib::System::Object::Equals(value); };
			operator MonoObject*() { return __native_object__; };
			MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


			virtual mscorlib::System::Object  Clone();
			virtual void  GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context);
			virtual mscorlib::System::String  ToString() override;
			virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			//Public Properties
			__declspec(property(get=get_Platform)) mscorlib::System::PlatformID::__ENUM__  Platform;
			__declspec(property(get=get_Version)) mscorlib::System::Version  Version;
			__declspec(property(get=get_ServicePack)) mscorlib::System::String  ServicePack;
			__declspec(property(get=get_VersionString)) mscorlib::System::String  VersionString;

			//Get Set Properties Methods
			//	Get:Platform
			mscorlib::System::PlatformID::__ENUM__  get_Platform() const;

			//	Get:Version
			mscorlib::System::Version  get_Version() const;

			//	Get:ServicePack
			mscorlib::System::String  get_ServicePack() const;

			//	Get:VersionString
			mscorlib::System::String  get_VersionString() const;

		
		protected:
		
		private:
		
		};

	}
}
#endif
