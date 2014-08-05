#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_ACCESSRULE_1_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_ACCESSRULE_1_H

#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AccessRule.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AccessControlType.h>
#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_IdentityReference.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_InheritanceFlags.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_PropagationFlags.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_Type.h>

namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace AccessControl
			{

				template<typename T>
				class AccessRule
					: public mscorlib::System::Security::AccessControl::AccessRuleBase
				{
				public:
					AccessRule(mscorlib::System::String identity, T rights, mscorlib::System::Security::AccessControl::AccessControlType::__ENUM__ type)
					: mscorlib::System::Security::AccessControl::AccessRuleBase(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.AccessControl.AccessRule`1"))
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType("mscorlib", "System.Security.AccessControl", "T");
						__parameter_types__[2] = Global::GetType("mscorlib", "System.Security.AccessControl", "AccessControlType");
						__parameters__[0] = (MonoObject*)identity;
						__parameters__[1] = (MonoObject*)rights;
						__parameters__[2] = reinterpret_cast<void*>(type);
						__native_object__ = Global::New("mscorlib", "System.Security.AccessControl", "AccessRule`1", 1, __generic_types__, __parameters__);
					};
				
					AccessRule(mscorlib::System::Security::Principal::IdentityReference identity, T rights, mscorlib::System::Security::AccessControl::AccessControlType::__ENUM__ type)
					: mscorlib::System::Security::AccessControl::AccessRuleBase(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.AccessControl.AccessRule`1"))
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Principal", "IdentityReference");
						__parameter_types__[1] = Global::GetType("mscorlib", "System.Security.AccessControl", "T");
						__parameter_types__[2] = Global::GetType("mscorlib", "System.Security.AccessControl", "AccessControlType");
						__parameters__[0] = (MonoObject*)identity;
						__parameters__[1] = (MonoObject*)rights;
						__parameters__[2] = reinterpret_cast<void*>(type);
						__native_object__ = Global::New("mscorlib", "System.Security.AccessControl", "AccessRule`1", 1, __generic_types__, __parameters__);
					};
				
					AccessRule(mscorlib::System::String identity, T rights, mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__ inheritanceFlags, mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__ propagationFlags, mscorlib::System::Security::AccessControl::AccessControlType::__ENUM__ type)
					: mscorlib::System::Security::AccessControl::AccessRuleBase(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.AccessControl.AccessRule`1"))
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType("mscorlib", "System.Security.AccessControl", "T");
						__parameter_types__[2] = Global::GetType("mscorlib", "System.Security.AccessControl", "InheritanceFlags");
						__parameter_types__[3] = Global::GetType("mscorlib", "System.Security.AccessControl", "PropagationFlags");
						__parameter_types__[4] = Global::GetType("mscorlib", "System.Security.AccessControl", "AccessControlType");
						__parameters__[0] = (MonoObject*)identity;
						__parameters__[1] = (MonoObject*)rights;
						__parameters__[2] = reinterpret_cast<void*>(inheritanceFlags);
						__parameters__[3] = reinterpret_cast<void*>(propagationFlags);
						__parameters__[4] = reinterpret_cast<void*>(type);
						__native_object__ = Global::New("mscorlib", "System.Security.AccessControl", "AccessRule`1", 1, __generic_types__, __parameters__);
					};
				
					AccessRule(mscorlib::System::Security::Principal::IdentityReference identity, T rights, mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__ inheritanceFlags, mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__ propagationFlags, mscorlib::System::Security::AccessControl::AccessControlType::__ENUM__ type)
					: mscorlib::System::Security::AccessControl::AccessRuleBase(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.AccessControl.AccessRule`1"))
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Principal", "IdentityReference");
						__parameter_types__[1] = Global::GetType("mscorlib", "System.Security.AccessControl", "T");
						__parameter_types__[2] = Global::GetType("mscorlib", "System.Security.AccessControl", "InheritanceFlags");
						__parameter_types__[3] = Global::GetType("mscorlib", "System.Security.AccessControl", "PropagationFlags");
						__parameter_types__[4] = Global::GetType("mscorlib", "System.Security.AccessControl", "AccessControlType");
						__parameters__[0] = (MonoObject*)identity;
						__parameters__[1] = (MonoObject*)rights;
						__parameters__[2] = reinterpret_cast<void*>(inheritanceFlags);
						__parameters__[3] = reinterpret_cast<void*>(propagationFlags);
						__parameters__[4] = reinterpret_cast<void*>(type);
						__native_object__ = Global::New("mscorlib", "System.Security.AccessControl", "AccessRule`1", 1, __generic_types__, __parameters__);
					};
				
					AccessRule(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::AccessControl::AccessRuleBase(nativeTypeInfo)
					{
					};
				
					AccessRule(MonoObject *nativeObject)
					: mscorlib::System::Security::AccessControl::AccessRuleBase(nativeObject)
					{
					};
				
					~AccessRule()
					{
					};
				

					AccessRule & operator=(AccessRule &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Rights)) T  Rights;
					__declspec(property(get=get_AccessControlType)) mscorlib::System::Security::AccessControl::AccessControlType::__ENUM__  AccessControlType;
					__declspec(property(get=get_IdentityReference)) mscorlib::System::Security::Principal::IdentityReference  IdentityReference;
					__declspec(property(get=get_InheritanceFlags)) mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__  InheritanceFlags;
					__declspec(property(get=get_IsInherited)) mscorlib::System::Boolean  IsInherited;
					__declspec(property(get=get_PropagationFlags)) mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__  PropagationFlags;

					//Get Set Properties Methods
					//	Get:Rights
					T  get_Rights() const
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "AccessRule`1", 1, __generic_types__, "get_Rights", __native_object__, 0, NULL, NULL, NULL);
						return T(__result__);
					}

					//	Get:AccessControlType
					mscorlib::System::Security::AccessControl::AccessControlType::__ENUM__  get_AccessControlType() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "AccessRule", 0, NULL, "get_AccessControlType", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Security::AccessControl::AccessControlType::__ENUM__*)mono_object_unbox(__result__);
					}

					//	Get:IdentityReference
					mscorlib::System::Security::Principal::IdentityReference  get_IdentityReference() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "AuthorizationRule", 0, NULL, "get_IdentityReference", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Security::Principal::IdentityReference(__result__);
					}

					//	Get:InheritanceFlags
					mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__  get_InheritanceFlags() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "AuthorizationRule", 0, NULL, "get_InheritanceFlags", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__*)mono_object_unbox(__result__);
					}

					//	Get:IsInherited
					mscorlib::System::Boolean  get_IsInherited() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "AuthorizationRule", 0, NULL, "get_IsInherited", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					}

					//	Get:PropagationFlags
					mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__  get_PropagationFlags() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "AuthorizationRule", 0, NULL, "get_PropagationFlags", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__*)mono_object_unbox(__result__);
					}

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
