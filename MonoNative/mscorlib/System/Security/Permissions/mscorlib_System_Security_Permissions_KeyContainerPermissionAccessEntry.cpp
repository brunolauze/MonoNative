#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_KeyContainerPermissionAccessEntry.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Permissions
			{

				//Public Methods
				mscorlib::System::Boolean KeyContainerPermissionAccessEntry::Equals(mscorlib::System::Object o)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(o).name());
						__parameters__[0] = (MonoObject*)o;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "KeyContainerPermissionAccessEntry", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Int32 KeyContainerPermissionAccessEntry::GetHashCode()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "KeyContainerPermissionAccessEntry", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				//Get Set Properties Methods
				//	Get/Set:Flags
				mscorlib::System::Security::Permissions::KeyContainerPermissionFlags::__ENUM__  KeyContainerPermissionAccessEntry::get_Flags() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "KeyContainerPermissionAccessEntry", 0, NULL, "get_Flags", __native_object__, 0, NULL, NULL, NULL);
					return static_cast<mscorlib::System::Security::Permissions::KeyContainerPermissionFlags::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
				}

				void KeyContainerPermissionAccessEntry::set_Flags(mscorlib::System::Security::Permissions::KeyContainerPermissionFlags::__ENUM__  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					mscorlib::System::Int32 __param_value__ = value;
					__parameters__[0] = &__param_value__;
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "KeyContainerPermissionAccessEntry", 0, NULL, "set_Flags", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:KeyContainerName
				mscorlib::System::String  KeyContainerPermissionAccessEntry::get_KeyContainerName() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "KeyContainerPermissionAccessEntry", 0, NULL, "get_KeyContainerName", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void KeyContainerPermissionAccessEntry::set_KeyContainerName(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "KeyContainerPermissionAccessEntry", 0, NULL, "set_KeyContainerName", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:KeySpec
				mscorlib::System::Int32  KeyContainerPermissionAccessEntry::get_KeySpec() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "KeyContainerPermissionAccessEntry", 0, NULL, "get_KeySpec", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				void KeyContainerPermissionAccessEntry::set_KeySpec(mscorlib::System::Int32  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "KeyContainerPermissionAccessEntry", 0, NULL, "set_KeySpec", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:KeyStore
				mscorlib::System::String  KeyContainerPermissionAccessEntry::get_KeyStore() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "KeyContainerPermissionAccessEntry", 0, NULL, "get_KeyStore", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void KeyContainerPermissionAccessEntry::set_KeyStore(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "KeyContainerPermissionAccessEntry", 0, NULL, "set_KeyStore", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:ProviderName
				mscorlib::System::String  KeyContainerPermissionAccessEntry::get_ProviderName() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "KeyContainerPermissionAccessEntry", 0, NULL, "get_ProviderName", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void KeyContainerPermissionAccessEntry::set_ProviderName(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "KeyContainerPermissionAccessEntry", 0, NULL, "set_ProviderName", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:ProviderType
				mscorlib::System::Int32  KeyContainerPermissionAccessEntry::get_ProviderType() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "KeyContainerPermissionAccessEntry", 0, NULL, "get_ProviderType", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				void KeyContainerPermissionAccessEntry::set_ProviderType(mscorlib::System::Int32  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "KeyContainerPermissionAccessEntry", 0, NULL, "set_ProviderType", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}



			}
		}
	}
}
