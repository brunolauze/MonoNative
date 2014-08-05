#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_APPLICATIONID_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_APPLICATIONID_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Version.h>

namespace mscorlib
{
	namespace System
	{

		class Byte;
		class Type;
		

	}
}
namespace mscorlib
{
	namespace System
	{

		class ApplicationId
			: public mscorlib::System::Object
		{
		public:
			ApplicationId(std::vector<mscorlib::System::Byte*> publicKeyToken, mscorlib::System::String name, mscorlib::System::Version version, mscorlib::System::String processorArchitecture, mscorlib::System::String culture)
			: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.ApplicationId"))
			{
				MonoType *__parameter_types__[5];
				void *__parameters__[5];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType("mscorlib", "System", "Byte"))->eklass);
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[2] = Global::GetType("mscorlib", "System", "Version");
				__parameter_types__[3] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[4] = Global::GetType("mscorlib", "System", "String");
				__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(publicKeyToken, "mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089", "System", "Byte");
				__parameters__[1] = (MonoObject*)name;
				__parameters__[2] = (MonoObject*)version;
				__parameters__[3] = (MonoObject*)processorArchitecture;
				__parameters__[4] = (MonoObject*)culture;
				__native_object__ = Global::New("mscorlib", "System", "ApplicationId", 5, __parameter_types__, __parameters__);
			};
		
			ApplicationId(mscorlib::NativeTypeInfo *nativeTypeInfo)
			: mscorlib::System::Object(nativeTypeInfo)
			{
			};
		
			ApplicationId(MonoObject *nativeObject)
			: mscorlib::System::Object(nativeObject)
			{
			};
		
			~ApplicationId()
			{
			};
		

			ApplicationId & operator=(ApplicationId &value) { __native_object__ = value.GetNativeObject(); return value; };
			operator MonoObject*() { return __native_object__; };
			MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


			mscorlib::System::ApplicationId  Copy();
			virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object o) override;
			virtual mscorlib::System::Int32  GetHashCode() override;
			virtual mscorlib::System::String  ToString() override;
			virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			//Public Properties
			__declspec(property(get=get_Culture)) mscorlib::System::String  Culture;
			__declspec(property(get=get_Name)) mscorlib::System::String  Name;
			__declspec(property(get=get_ProcessorArchitecture)) mscorlib::System::String  ProcessorArchitecture;
			__declspec(property(get=get_PublicKeyToken)) std::vector<mscorlib::System::Byte*>  PublicKeyToken;
			__declspec(property(get=get_Version)) mscorlib::System::Version  Version;

			//Get Set Properties Methods
			//	Get:Culture
			mscorlib::System::String  get_Culture() const;

			//	Get:Name
			mscorlib::System::String  get_Name() const;

			//	Get:ProcessorArchitecture
			mscorlib::System::String  get_ProcessorArchitecture() const;

			//	Get:PublicKeyToken
			std::vector<mscorlib::System::Byte*>  get_PublicKeyToken() const;

			//	Get:Version
			mscorlib::System::Version  get_Version() const;

		
		protected:
		
		private:
		
		};

	}
}
#endif
