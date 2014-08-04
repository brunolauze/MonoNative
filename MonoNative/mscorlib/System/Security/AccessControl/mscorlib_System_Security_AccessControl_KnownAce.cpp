#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_KnownAce.h>
#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_SecurityIdentifier.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace AccessControl
			{

				//Public Methods
				//Get Set Properties Methods
				//	Get/Set:AccessMask
				mscorlib::System::Int32  KnownAce::get_AccessMask()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "KnownAce", 0, NULL, "get_AccessMask", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				void KnownAce::set_AccessMask(mscorlib::System::Int32  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "KnownAce", 0, NULL, "set_AccessMask", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:SecurityIdentifier
				mscorlib::System::Security::Principal::SecurityIdentifier  KnownAce::get_SecurityIdentifier()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "KnownAce", 0, NULL, "get_SecurityIdentifier", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::Principal::SecurityIdentifier(__result__);
				}

				void KnownAce::set_SecurityIdentifier(mscorlib::System::Security::Principal::SecurityIdentifier  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "KnownAce", 0, NULL, "set_SecurityIdentifier", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:AceFlags
				mscorlib::System::Security::AccessControl::AceFlags::__ENUM__  KnownAce::get_AceFlags()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericAce", 0, NULL, "get_AceFlags", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Security::AccessControl::AceFlags::__ENUM__*)mono_object_unbox(__result__);
				}

				void KnownAce::set_AceFlags(mscorlib::System::Security::AccessControl::AceFlags::__ENUM__  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericAce", 0, NULL, "set_AceFlags", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get:AceType
				mscorlib::System::Security::AccessControl::AceType::__ENUM__  KnownAce::get_AceType()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericAce", 0, NULL, "get_AceType", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Security::AccessControl::AceType::__ENUM__*)mono_object_unbox(__result__);
				}


				//	Get:AuditFlags
				mscorlib::System::Security::AccessControl::AuditFlags::__ENUM__  KnownAce::get_AuditFlags()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericAce", 0, NULL, "get_AuditFlags", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Security::AccessControl::AuditFlags::__ENUM__*)mono_object_unbox(__result__);
				}


				//	Get:BinaryLength
				mscorlib::System::Int32  KnownAce::get_BinaryLength()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericAce", 0, NULL, "get_BinaryLength", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//	Get:InheritanceFlags
				mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__  KnownAce::get_InheritanceFlags()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericAce", 0, NULL, "get_InheritanceFlags", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__*)mono_object_unbox(__result__);
				}


				//	Get:IsInherited
				mscorlib::System::Boolean  KnownAce::get_IsInherited()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericAce", 0, NULL, "get_IsInherited", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:PropagationFlags
				mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__  KnownAce::get_PropagationFlags()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericAce", 0, NULL, "get_PropagationFlags", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__*)mono_object_unbox(__result__);
				}



			}
		}
	}
}
