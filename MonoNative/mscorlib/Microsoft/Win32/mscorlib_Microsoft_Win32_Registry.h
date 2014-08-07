#ifndef __MONO_NATIVE_MSCORLIB_MICROSOFT_WIN32_REGISTRY_H
#define __MONO_NATIVE_MSCORLIB_MICROSOFT_WIN32_REGISTRY_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/Microsoft/Win32/mscorlib_Microsoft_Win32_RegistryValueKind.h>

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
	namespace Microsoft
	{
		namespace Win32
		{

			class RegistryKey;
			

		}
	}
}
namespace mscorlib
{
	namespace Microsoft
	{
		namespace Win32
		{

			class Registry
				: public mscorlib::System::Object
			{
			public:
				Registry(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				{
				};
			
				Registry(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				{
				};
			
				~Registry()
				{
				};
			

				Registry & operator=(Registry &value) { __native_object__ = value.GetNativeObject(); return value; };
				bool operator==(Registry &value) { return mscorlib::System::Object::Equals(value); };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				static void  SetValue(mscorlib::System::String keyName, mscorlib::System::String valueName, mscorlib::System::Object value);
				static void  SetValue(const char *keyName, const char *valueName, mscorlib::System::Object value);
				static void  SetValue(mscorlib::System::String keyName, mscorlib::System::String valueName, mscorlib::System::Object value, mscorlib::Microsoft::Win32::RegistryValueKind::__ENUM__ valueKind);
				static void  SetValue(const char *keyName, const char *valueName, mscorlib::System::Object value, mscorlib::Microsoft::Win32::RegistryValueKind::__ENUM__ valueKind);
				static mscorlib::System::Object  GetValue(mscorlib::System::String keyName, mscorlib::System::String valueName, mscorlib::System::Object defaultValue);
				static mscorlib::System::Object  GetValue(const char *keyName, const char *valueName, mscorlib::System::Object defaultValue);
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Static Fields
				static Property<mscorlib::Microsoft::Win32::RegistryKey , mscorlib::Microsoft::Win32::Registry> ClassesRoot;
				static Property<mscorlib::Microsoft::Win32::RegistryKey , mscorlib::Microsoft::Win32::Registry> CurrentConfig;
				static Property<mscorlib::Microsoft::Win32::RegistryKey , mscorlib::Microsoft::Win32::Registry> CurrentUser;
				static Property<mscorlib::Microsoft::Win32::RegistryKey , mscorlib::Microsoft::Win32::Registry> DynData;
				static Property<mscorlib::Microsoft::Win32::RegistryKey , mscorlib::Microsoft::Win32::Registry> LocalMachine;
				static Property<mscorlib::Microsoft::Win32::RegistryKey , mscorlib::Microsoft::Win32::Registry> PerformanceData;
				static Property<mscorlib::Microsoft::Win32::RegistryKey , mscorlib::Microsoft::Win32::Registry> Users;

				//	Get/Set:ClassesRoot
				static mscorlib::Microsoft::Win32::RegistryKey  get_ClassesRoot();
				static void set_ClassesRoot(mscorlib::Microsoft::Win32::RegistryKey  value);

				//	Get/Set:CurrentConfig
				static mscorlib::Microsoft::Win32::RegistryKey  get_CurrentConfig();
				static void set_CurrentConfig(mscorlib::Microsoft::Win32::RegistryKey  value);

				//	Get/Set:CurrentUser
				static mscorlib::Microsoft::Win32::RegistryKey  get_CurrentUser();
				static void set_CurrentUser(mscorlib::Microsoft::Win32::RegistryKey  value);

				//	Get/Set:DynData
				static mscorlib::Microsoft::Win32::RegistryKey  get_DynData();
				static void set_DynData(mscorlib::Microsoft::Win32::RegistryKey  value);

				//	Get/Set:LocalMachine
				static mscorlib::Microsoft::Win32::RegistryKey  get_LocalMachine();
				static void set_LocalMachine(mscorlib::Microsoft::Win32::RegistryKey  value);

				//	Get/Set:PerformanceData
				static mscorlib::Microsoft::Win32::RegistryKey  get_PerformanceData();
				static void set_PerformanceData(mscorlib::Microsoft::Win32::RegistryKey  value);

				//	Get/Set:Users
				static mscorlib::Microsoft::Win32::RegistryKey  get_Users();
				static void set_Users(mscorlib::Microsoft::Win32::RegistryKey  value);

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
