#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_CompoundAce.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_GenericAce.h>
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
				void CompoundAce::GetBinaryForm(std::vector<mscorlib::System::Byte*> binaryForm, mscorlib::System::Int32 offset)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(binaryForm).name()))->eklass);
						__parameter_types__[1] = Global::GetType(typeid(offset).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(binaryForm, typeid(mscorlib::System::Byte).name());
						__parameters__[1] = &offset;
						Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "CompoundAce", 0, NULL, "GetBinaryForm", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				//Get Set Properties Methods
				//	Get:BinaryLength
				mscorlib::System::Int32  CompoundAce::get_BinaryLength()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "CompoundAce", 0, NULL, "get_BinaryLength", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//	Get/Set:CompoundAceType
				mscorlib::System::Security::AccessControl::CompoundAceType::__ENUM__  CompoundAce::get_CompoundAceType()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "CompoundAce", 0, NULL, "get_CompoundAceType", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Security::AccessControl::CompoundAceType::__ENUM__*)mono_object_unbox(__result__);
				}

				void CompoundAce::set_CompoundAceType(mscorlib::System::Security::AccessControl::CompoundAceType::__ENUM__  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "CompoundAce", 0, NULL, "set_CompoundAceType", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:AccessMask
				mscorlib::System::Int32  CompoundAce::get_AccessMask()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "KnownAce", 0, NULL, "get_AccessMask", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				void CompoundAce::set_AccessMask(mscorlib::System::Int32  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "KnownAce", 0, NULL, "set_AccessMask", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:SecurityIdentifier
				mscorlib::System::Security::Principal::SecurityIdentifier  CompoundAce::get_SecurityIdentifier()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "KnownAce", 0, NULL, "get_SecurityIdentifier", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::Principal::SecurityIdentifier(__result__);
				}

				void CompoundAce::set_SecurityIdentifier(mscorlib::System::Security::Principal::SecurityIdentifier  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "KnownAce", 0, NULL, "set_SecurityIdentifier", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:AceFlags
				mscorlib::System::Security::AccessControl::AceFlags::__ENUM__  CompoundAce::get_AceFlags()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericAce", 0, NULL, "get_AceFlags", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Security::AccessControl::AceFlags::__ENUM__*)mono_object_unbox(__result__);
				}

				void CompoundAce::set_AceFlags(mscorlib::System::Security::AccessControl::AceFlags::__ENUM__  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericAce", 0, NULL, "set_AceFlags", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get:AceType
				mscorlib::System::Security::AccessControl::AceType::__ENUM__  CompoundAce::get_AceType()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericAce", 0, NULL, "get_AceType", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Security::AccessControl::AceType::__ENUM__*)mono_object_unbox(__result__);
				}


				//	Get:AuditFlags
				mscorlib::System::Security::AccessControl::AuditFlags::__ENUM__  CompoundAce::get_AuditFlags()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericAce", 0, NULL, "get_AuditFlags", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Security::AccessControl::AuditFlags::__ENUM__*)mono_object_unbox(__result__);
				}


				//	Get:InheritanceFlags
				mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__  CompoundAce::get_InheritanceFlags()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericAce", 0, NULL, "get_InheritanceFlags", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__*)mono_object_unbox(__result__);
				}


				//	Get:IsInherited
				mscorlib::System::Boolean  CompoundAce::get_IsInherited()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericAce", 0, NULL, "get_IsInherited", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:PropagationFlags
				mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__  CompoundAce::get_PropagationFlags()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericAce", 0, NULL, "get_PropagationFlags", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__*)mono_object_unbox(__result__);
				}



			}
		}
	}
}
