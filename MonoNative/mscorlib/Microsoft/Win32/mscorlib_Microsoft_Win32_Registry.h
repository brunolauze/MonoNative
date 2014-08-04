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
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				static void  SetValue(mscorlib::System::String keyName, mscorlib::System::String valueName, mscorlib::System::Object value);
				static void  SetValue(mscorlib::System::String keyName, mscorlib::System::String valueName, mscorlib::System::Object value, mscorlib::Microsoft::Win32::RegistryValueKind::__ENUM__ valueKind);
				static mscorlib::System::Object  GetValue(mscorlib::System::String keyName, mscorlib::System::String valueName, mscorlib::System::Object defaultValue);
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Static Fields
				static Property<mscorlib::Microsoft::Win32::RegistryKey> ClassesRoot;
				static Property<mscorlib::Microsoft::Win32::RegistryKey> CurrentConfig;
				static Property<mscorlib::Microsoft::Win32::RegistryKey> CurrentUser;
				static Property<mscorlib::Microsoft::Win32::RegistryKey> DynData;
				static Property<mscorlib::Microsoft::Win32::RegistryKey> LocalMachine;
				static Property<mscorlib::Microsoft::Win32::RegistryKey> PerformanceData;
				static Property<mscorlib::Microsoft::Win32::RegistryKey> Users;

				//	Get/Set:ClassesRoot
				static mscorlib::Microsoft::Win32::RegistryKey  get_ClassesRoot();

				//	Get/Set:CurrentConfig
				static mscorlib::Microsoft::Win32::RegistryKey  get_CurrentConfig();

				//	Get/Set:CurrentUser
				static mscorlib::Microsoft::Win32::RegistryKey  get_CurrentUser();

				//	Get/Set:DynData
				static mscorlib::Microsoft::Win32::RegistryKey  get_DynData();

				//	Get/Set:LocalMachine
				static mscorlib::Microsoft::Win32::RegistryKey  get_LocalMachine();

				//	Get/Set:PerformanceData
				static mscorlib::Microsoft::Win32::RegistryKey  get_PerformanceData();

				//	Get/Set:Users
				static mscorlib::Microsoft::Win32::RegistryKey  get_Users();

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
