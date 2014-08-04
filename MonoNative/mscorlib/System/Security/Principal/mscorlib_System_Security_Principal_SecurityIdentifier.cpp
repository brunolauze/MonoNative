#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_SecurityIdentifier.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Principal
			{

				//Public Methods
				mscorlib::System::Int32 SecurityIdentifier::CompareTo(mscorlib::System::Security::Principal::SecurityIdentifier sid)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(sid).name());
						__parameters__[0] = (MonoObject*)sid;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Principal", "SecurityIdentifier", 0, NULL, "CompareTo", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				mscorlib::System::Boolean SecurityIdentifier::Equals(mscorlib::System::Object o)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(o).name());
						__parameters__[0] = (MonoObject*)o;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Principal", "SecurityIdentifier", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Boolean SecurityIdentifier::Equals(mscorlib::System::Security::Principal::SecurityIdentifier sid)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(sid).name());
						__parameters__[0] = (MonoObject*)sid;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Principal", "SecurityIdentifier", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void SecurityIdentifier::GetBinaryForm(std::vector<mscorlib::System::Byte*> binaryForm, mscorlib::System::Int32 offset)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(binaryForm).name()))->eklass);
						__parameter_types__[1] = Global::GetType(typeid(offset).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(binaryForm, typeid(mscorlib::System::Byte).name());
						__parameters__[1] = &offset;
						Global::InvokeMethod("mscorlib", "System.Security.Principal", "SecurityIdentifier", 0, NULL, "GetBinaryForm", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Int32 SecurityIdentifier::GetHashCode()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Principal", "SecurityIdentifier", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				mscorlib::System::Boolean SecurityIdentifier::IsAccountSid()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Principal", "SecurityIdentifier", 0, NULL, "IsAccountSid", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Boolean SecurityIdentifier::IsEqualDomainSid(mscorlib::System::Security::Principal::SecurityIdentifier sid)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(sid).name());
						__parameters__[0] = (MonoObject*)sid;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Principal", "SecurityIdentifier", 0, NULL, "IsEqualDomainSid", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Boolean SecurityIdentifier::IsValidTargetType(mscorlib::System::Type targetType)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(targetType).name());
						__parameters__[0] = (MonoObject*)targetType;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Principal", "SecurityIdentifier", 0, NULL, "IsValidTargetType", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Boolean SecurityIdentifier::IsWellKnown(mscorlib::System::Security::Principal::WellKnownSidType::__ENUM__ type)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(type).name());
						__parameters__[0] = reinterpret_cast<void*>(type);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Principal", "SecurityIdentifier", 0, NULL, "IsWellKnown", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::String SecurityIdentifier::ToString()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Principal", "SecurityIdentifier", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
				}

				mscorlib::System::Security::Principal::IdentityReference SecurityIdentifier::Translate(mscorlib::System::Type targetType)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(targetType).name());
						__parameters__[0] = (MonoObject*)targetType;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Principal", "SecurityIdentifier", 0, NULL, "Translate", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::Principal::IdentityReference(__result__);
				}

				//Get Set Properties Methods
				//	Get:AccountDomainSid
				mscorlib::System::Security::Principal::SecurityIdentifier  SecurityIdentifier::get_AccountDomainSid()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Principal", "SecurityIdentifier", 0, NULL, "get_AccountDomainSid", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::Principal::SecurityIdentifier(__result__);
				}


				//	Get:BinaryLength
				mscorlib::System::Int32  SecurityIdentifier::get_BinaryLength()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Principal", "SecurityIdentifier", 0, NULL, "get_BinaryLength", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//	Get:Value
				mscorlib::System::String  SecurityIdentifier::get_Value()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Principal", "SecurityIdentifier", 0, NULL, "get_Value", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


					//	Get/Set:MaxBinaryLength
				mscorlib::System::Int32 SecurityIdentifier::get_MaxBinaryLength()
				{
					return Global::GetFieldInt32Value("mscorlib", "System.Security.Principal", "SecurityIdentifier", 0, NULL, "MaxBinaryLength");
				}


					//	Get/Set:MinBinaryLength
				mscorlib::System::Int32 SecurityIdentifier::get_MinBinaryLength()
				{
					return Global::GetFieldInt32Value("mscorlib", "System.Security.Principal", "SecurityIdentifier", 0, NULL, "MinBinaryLength");
				}



			}
		}
	}
}
