#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_ObjectAce.h>
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
				void ObjectAce::GetBinaryForm(std::vector<mscorlib::System::Byte*> binaryForm, mscorlib::System::Int32 offset)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
						__parameter_types__[1] = Global::GetType(typeid(offset).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(binaryForm, typeid(mscorlib::System::Byte).name());
						__parameters__[1] = &offset;
						Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectAce", 0, NULL, "GetBinaryForm", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Int32 ObjectAce::MaxOpaqueLength(mscorlib::System::Boolean isCallback)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(isCallback).name());
						__parameters__[0] = reinterpret_cast<void*>(isCallback);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectAce", 0, NULL, "MaxOpaqueLength", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				//Get Set Properties Methods
				//	Get:BinaryLength
				mscorlib::System::Int32  ObjectAce::get_BinaryLength() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectAce", 0, NULL, "get_BinaryLength", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//	Get/Set:InheritedObjectAceType
				mscorlib::System::Guid  ObjectAce::get_InheritedObjectAceType() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectAce", 0, NULL, "get_InheritedObjectAceType", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Guid(__result__);
				}

				void ObjectAce::set_InheritedObjectAceType(mscorlib::System::Guid  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectAce", 0, NULL, "set_InheritedObjectAceType", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:ObjectAceFlags
				mscorlib::System::Security::AccessControl::ObjectAceFlags::__ENUM__  ObjectAce::get_ObjectAceFlags() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectAce", 0, NULL, "get_ObjectAceFlags", __native_object__, 0, NULL, NULL, NULL);
					return static_cast<mscorlib::System::Security::AccessControl::ObjectAceFlags::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
				}

				void ObjectAce::set_ObjectAceFlags(mscorlib::System::Security::AccessControl::ObjectAceFlags::__ENUM__  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					mscorlib::System::Int32 __param_value__ = value;
					__parameters__[0] = &__param_value__;
					Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectAce", 0, NULL, "set_ObjectAceFlags", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:ObjectAceType
				mscorlib::System::Guid  ObjectAce::get_ObjectAceType() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectAce", 0, NULL, "get_ObjectAceType", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Guid(__result__);
				}

				void ObjectAce::set_ObjectAceType(mscorlib::System::Guid  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectAce", 0, NULL, "set_ObjectAceType", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get:AceQualifier
				mscorlib::System::Security::AccessControl::AceQualifier::__ENUM__  ObjectAce::get_AceQualifier() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "QualifiedAce", 0, NULL, "get_AceQualifier", __native_object__, 0, NULL, NULL, NULL);
					return static_cast<mscorlib::System::Security::AccessControl::AceQualifier::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
				}


				//	Get:IsCallback
				mscorlib::System::Boolean  ObjectAce::get_IsCallback() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "QualifiedAce", 0, NULL, "get_IsCallback", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:OpaqueLength
				mscorlib::System::Int32  ObjectAce::get_OpaqueLength() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "QualifiedAce", 0, NULL, "get_OpaqueLength", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//	Get/Set:AccessMask
				mscorlib::System::Int32  ObjectAce::get_AccessMask() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "KnownAce", 0, NULL, "get_AccessMask", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				void ObjectAce::set_AccessMask(mscorlib::System::Int32  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "KnownAce", 0, NULL, "set_AccessMask", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:SecurityIdentifier
				mscorlib::System::Security::Principal::SecurityIdentifier  ObjectAce::get_SecurityIdentifier() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "KnownAce", 0, NULL, "get_SecurityIdentifier", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::Principal::SecurityIdentifier(__result__);
				}

				void ObjectAce::set_SecurityIdentifier(mscorlib::System::Security::Principal::SecurityIdentifier  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "KnownAce", 0, NULL, "set_SecurityIdentifier", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:AceFlags
				mscorlib::System::Security::AccessControl::AceFlags::__ENUM__  ObjectAce::get_AceFlags() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericAce", 0, NULL, "get_AceFlags", __native_object__, 0, NULL, NULL, NULL);
					return static_cast<mscorlib::System::Security::AccessControl::AceFlags::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
				}

				void ObjectAce::set_AceFlags(mscorlib::System::Security::AccessControl::AceFlags::__ENUM__  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					mscorlib::System::Int32 __param_value__ = value;
					__parameters__[0] = &__param_value__;
					Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericAce", 0, NULL, "set_AceFlags", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get:AceType
				mscorlib::System::Security::AccessControl::AceType::__ENUM__  ObjectAce::get_AceType() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericAce", 0, NULL, "get_AceType", __native_object__, 0, NULL, NULL, NULL);
					return static_cast<mscorlib::System::Security::AccessControl::AceType::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
				}


				//	Get:AuditFlags
				mscorlib::System::Security::AccessControl::AuditFlags::__ENUM__  ObjectAce::get_AuditFlags() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericAce", 0, NULL, "get_AuditFlags", __native_object__, 0, NULL, NULL, NULL);
					return static_cast<mscorlib::System::Security::AccessControl::AuditFlags::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
				}


				//	Get:InheritanceFlags
				mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__  ObjectAce::get_InheritanceFlags() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericAce", 0, NULL, "get_InheritanceFlags", __native_object__, 0, NULL, NULL, NULL);
					return static_cast<mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
				}


				//	Get:IsInherited
				mscorlib::System::Boolean  ObjectAce::get_IsInherited() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericAce", 0, NULL, "get_IsInherited", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:PropagationFlags
				mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__  ObjectAce::get_PropagationFlags() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericAce", 0, NULL, "get_PropagationFlags", __native_object__, 0, NULL, NULL, NULL);
					return static_cast<mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
				}



			}
		}
	}
}
