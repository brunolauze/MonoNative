#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_RawSecurityDescriptor.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace AccessControl
			{

				//Public Methods
				void RawSecurityDescriptor::SetFlags(mscorlib::System::Security::AccessControl::ControlFlags::__ENUM__ flags)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(flags).name());
						__parameters__[0] = reinterpret_cast<void*>(flags);
						Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "RawSecurityDescriptor", 0, NULL, "SetFlags", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				//Get Set Properties Methods
				//	Get:ControlFlags
				mscorlib::System::Security::AccessControl::ControlFlags::__ENUM__  RawSecurityDescriptor::get_ControlFlags()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "RawSecurityDescriptor", 0, NULL, "get_ControlFlags", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Security::AccessControl::ControlFlags::__ENUM__*)mono_object_unbox(__result__);
				}


				//	Get/Set:DiscretionaryAcl
				mscorlib::System::Security::AccessControl::RawAcl  RawSecurityDescriptor::get_DiscretionaryAcl()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "RawSecurityDescriptor", 0, NULL, "get_DiscretionaryAcl", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::AccessControl::RawAcl(__result__);
				}

				void RawSecurityDescriptor::set_DiscretionaryAcl(mscorlib::System::Security::AccessControl::RawAcl  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "RawSecurityDescriptor", 0, NULL, "set_DiscretionaryAcl", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Group
				mscorlib::System::Security::Principal::SecurityIdentifier  RawSecurityDescriptor::get_Group()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "RawSecurityDescriptor", 0, NULL, "get_Group", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::Principal::SecurityIdentifier(__result__);
				}

				void RawSecurityDescriptor::set_Group(mscorlib::System::Security::Principal::SecurityIdentifier  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "RawSecurityDescriptor", 0, NULL, "set_Group", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Owner
				mscorlib::System::Security::Principal::SecurityIdentifier  RawSecurityDescriptor::get_Owner()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "RawSecurityDescriptor", 0, NULL, "get_Owner", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::Principal::SecurityIdentifier(__result__);
				}

				void RawSecurityDescriptor::set_Owner(mscorlib::System::Security::Principal::SecurityIdentifier  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "RawSecurityDescriptor", 0, NULL, "set_Owner", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:ResourceManagerControl
				mscorlib::System::Byte  RawSecurityDescriptor::get_ResourceManagerControl()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "RawSecurityDescriptor", 0, NULL, "get_ResourceManagerControl", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Byte(__result__);
				}

				void RawSecurityDescriptor::set_ResourceManagerControl(mscorlib::System::Byte  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "RawSecurityDescriptor", 0, NULL, "set_ResourceManagerControl", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:SystemAcl
				mscorlib::System::Security::AccessControl::RawAcl  RawSecurityDescriptor::get_SystemAcl()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "RawSecurityDescriptor", 0, NULL, "get_SystemAcl", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::AccessControl::RawAcl(__result__);
				}

				void RawSecurityDescriptor::set_SystemAcl(mscorlib::System::Security::AccessControl::RawAcl  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "RawSecurityDescriptor", 0, NULL, "set_SystemAcl", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get:BinaryLength
				mscorlib::System::Int32  RawSecurityDescriptor::get_BinaryLength()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericSecurityDescriptor", 0, NULL, "get_BinaryLength", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}



			}
		}
	}
}
