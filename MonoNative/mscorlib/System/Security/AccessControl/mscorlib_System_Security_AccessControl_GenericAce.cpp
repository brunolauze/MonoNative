#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_GenericAce.h>
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
				mscorlib::System::Security::AccessControl::GenericAce GenericAce::Copy()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericAce", 0, NULL, "Copy", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Security::AccessControl::GenericAce(__result__);
				}

				mscorlib::System::Security::AccessControl::GenericAce GenericAce::CreateFromBinaryForm(std::vector<mscorlib::System::Byte*> binaryForm, mscorlib::System::Int32 offset)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(binaryForm).name()))->eklass);
						__parameter_types__[1] = Global::GetType(typeid(offset).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(binaryForm, typeid(mscorlib::System::Byte).name());
						__parameters__[1] = &offset;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericAce", 0, NULL, "CreateFromBinaryForm", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::AccessControl::GenericAce(__result__);
				}

				mscorlib::System::Boolean GenericAce::Equals(mscorlib::System::Object o)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(o).name());
						__parameters__[0] = (MonoObject*)o;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericAce", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void GenericAce::GetBinaryForm(std::vector<mscorlib::System::Byte*> binaryForm, mscorlib::System::Int32 offset)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(binaryForm).name()))->eklass);
						__parameter_types__[1] = Global::GetType(typeid(offset).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(binaryForm, typeid(mscorlib::System::Byte).name());
						__parameters__[1] = &offset;
						Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericAce", 0, NULL, "GetBinaryForm", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Int32 GenericAce::GetHashCode()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericAce", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				//Get Set Properties Methods
				//	Get/Set:AceFlags
				mscorlib::System::Security::AccessControl::AceFlags::__ENUM__  GenericAce::get_AceFlags() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericAce", 0, NULL, "get_AceFlags", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Security::AccessControl::AceFlags::__ENUM__*)mono_object_unbox(__result__);
				}

				void GenericAce::set_AceFlags(mscorlib::System::Security::AccessControl::AceFlags::__ENUM__  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericAce", 0, NULL, "set_AceFlags", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get:AceType
				mscorlib::System::Security::AccessControl::AceType::__ENUM__  GenericAce::get_AceType() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericAce", 0, NULL, "get_AceType", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Security::AccessControl::AceType::__ENUM__*)mono_object_unbox(__result__);
				}


				//	Get:AuditFlags
				mscorlib::System::Security::AccessControl::AuditFlags::__ENUM__  GenericAce::get_AuditFlags() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericAce", 0, NULL, "get_AuditFlags", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Security::AccessControl::AuditFlags::__ENUM__*)mono_object_unbox(__result__);
				}


				//	Get:BinaryLength
				mscorlib::System::Int32  GenericAce::get_BinaryLength() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericAce", 0, NULL, "get_BinaryLength", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//	Get:InheritanceFlags
				mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__  GenericAce::get_InheritanceFlags() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericAce", 0, NULL, "get_InheritanceFlags", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__*)mono_object_unbox(__result__);
				}


				//	Get:IsInherited
				mscorlib::System::Boolean  GenericAce::get_IsInherited() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericAce", 0, NULL, "get_IsInherited", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:PropagationFlags
				mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__  GenericAce::get_PropagationFlags() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericAce", 0, NULL, "get_PropagationFlags", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__*)mono_object_unbox(__result__);
				}



			}
		}
	}
}
