#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_QualifiedAce.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_SecurityIdentifier.h>
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
				std::vector<mscorlib::System::Byte*> QualifiedAce::GetOpaque()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "QualifiedAce", 0, NULL, "GetOpaque", __native_object__, 0, NULL, NULL, NULL);
						MonoArray *__array_ptr__ = (MonoArray*)__result__;
						uintptr_t __array_length__ = mono_array_length(__array_ptr__);
						std::vector<mscorlib::System::Byte*>  __array_result__(__array_length__);
						for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
						{
							MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
							__array_result__.push_back(new mscorlib::System::Byte (__array_item__));
						}
						return __array_result__;
				}

				void QualifiedAce::SetOpaque(std::vector<mscorlib::System::Byte*> opaque)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(opaque).name()))->eklass);
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(opaque, typeid(mscorlib::System::Byte).name());
						Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "QualifiedAce", 0, NULL, "SetOpaque", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				//Get Set Properties Methods
				//	Get:AceQualifier
				mscorlib::System::Security::AccessControl::AceQualifier::__ENUM__  QualifiedAce::get_AceQualifier()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "QualifiedAce", 0, NULL, "get_AceQualifier", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Security::AccessControl::AceQualifier::__ENUM__*)mono_object_unbox(__result__);
				}


				//	Get:IsCallback
				mscorlib::System::Boolean  QualifiedAce::get_IsCallback()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "QualifiedAce", 0, NULL, "get_IsCallback", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:OpaqueLength
				mscorlib::System::Int32  QualifiedAce::get_OpaqueLength()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "QualifiedAce", 0, NULL, "get_OpaqueLength", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//	Get/Set:AccessMask
				mscorlib::System::Int32  QualifiedAce::get_AccessMask()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "KnownAce", 0, NULL, "get_AccessMask", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				void QualifiedAce::set_AccessMask(mscorlib::System::Int32  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "KnownAce", 0, NULL, "set_AccessMask", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:SecurityIdentifier
				mscorlib::System::Security::Principal::SecurityIdentifier  QualifiedAce::get_SecurityIdentifier()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "KnownAce", 0, NULL, "get_SecurityIdentifier", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::Principal::SecurityIdentifier(__result__);
				}

				void QualifiedAce::set_SecurityIdentifier(mscorlib::System::Security::Principal::SecurityIdentifier  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "KnownAce", 0, NULL, "set_SecurityIdentifier", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:AceFlags
				mscorlib::System::Security::AccessControl::AceFlags::__ENUM__  QualifiedAce::get_AceFlags()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericAce", 0, NULL, "get_AceFlags", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Security::AccessControl::AceFlags::__ENUM__*)mono_object_unbox(__result__);
				}

				void QualifiedAce::set_AceFlags(mscorlib::System::Security::AccessControl::AceFlags::__ENUM__  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericAce", 0, NULL, "set_AceFlags", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get:AceType
				mscorlib::System::Security::AccessControl::AceType::__ENUM__  QualifiedAce::get_AceType()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericAce", 0, NULL, "get_AceType", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Security::AccessControl::AceType::__ENUM__*)mono_object_unbox(__result__);
				}


				//	Get:AuditFlags
				mscorlib::System::Security::AccessControl::AuditFlags::__ENUM__  QualifiedAce::get_AuditFlags()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericAce", 0, NULL, "get_AuditFlags", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Security::AccessControl::AuditFlags::__ENUM__*)mono_object_unbox(__result__);
				}


				//	Get:BinaryLength
				mscorlib::System::Int32  QualifiedAce::get_BinaryLength()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericAce", 0, NULL, "get_BinaryLength", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//	Get:InheritanceFlags
				mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__  QualifiedAce::get_InheritanceFlags()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericAce", 0, NULL, "get_InheritanceFlags", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__*)mono_object_unbox(__result__);
				}


				//	Get:IsInherited
				mscorlib::System::Boolean  QualifiedAce::get_IsInherited()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericAce", 0, NULL, "get_IsInherited", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:PropagationFlags
				mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__  QualifiedAce::get_PropagationFlags()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericAce", 0, NULL, "get_PropagationFlags", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__*)mono_object_unbox(__result__);
				}



			}
		}
	}
}
