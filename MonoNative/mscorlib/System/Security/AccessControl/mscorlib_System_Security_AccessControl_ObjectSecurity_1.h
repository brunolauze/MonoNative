#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_OBJECTSECURITY_1_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_OBJECTSECURITY_1_H

#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_NativeObjectSecurity.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AccessRule.h>
#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_IdentityReference.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_InheritanceFlags.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_PropagationFlags.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AccessControlType.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AccessRule_1.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AuditRule.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AuditFlags.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AuditRule_1.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AuthorizationRuleCollection.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AccessControlSections.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AccessControlModification.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace AccessControl
			{

				template<typename T>
				class ObjectSecurity
					: public mscorlib::System::Security::AccessControl::NativeObjectSecurity
				{
				public:
					ObjectSecurity(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::AccessControl::NativeObjectSecurity(nativeTypeInfo)
					{
					};
				
					ObjectSecurity(MonoObject *nativeObject)
					: mscorlib::System::Security::AccessControl::NativeObjectSecurity(nativeObject)
					{
					};
				
					~ObjectSecurity()
					{
					};
				

					ObjectSecurity & operator=(ObjectSecurity &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Security::AccessControl::AccessRuleBase  AccessRuleFactory(mscorlib::System::Security::Principal::IdentityReference identityReference, mscorlib::System::Int32 accessMask, mscorlib::System::Boolean isInherited, mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__ inheritanceFlags, mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__ propagationFlags, mscorlib::System::Security::AccessControl::AccessControlType::__ENUM__ type) override
					{
						MonoType *__parameter_types__[6];
						void *__parameters__[6];
						__parameter_types__[0] = Global::GetType(typeid(identityReference).name());
						__parameter_types__[1] = Global::GetType(typeid(accessMask).name());
						__parameter_types__[2] = Global::GetType(typeid(isInherited).name());
						__parameter_types__[3] = Global::GetType(typeid(inheritanceFlags).name());
						__parameter_types__[4] = Global::GetType(typeid(propagationFlags).name());
						__parameter_types__[5] = Global::GetType(typeid(type).name());
						__parameters__[0] = (MonoObject*)identityReference;
						__parameters__[1] = &accessMask;
						__parameters__[2] = reinterpret_cast<void*>(isInherited);
						__parameters__[3] = reinterpret_cast<void*>(inheritanceFlags);
						__parameters__[4] = reinterpret_cast<void*>(propagationFlags);
						__parameters__[5] = reinterpret_cast<void*>(type);
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity`1", 1, __generic_types__, "AccessRuleFactory", __native_object__, 6, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::AccessControl::AccessRuleBase(__result__);
					};
					
					virtual void  AddAccessRule(mscorlib::System::Security::AccessControl::AccessRule<T> rule)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(rule).name());
						__parameters__[0] = (MonoObject*)rule;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity`1", 1, __generic_types__, "AddAccessRule", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					};
					
					virtual mscorlib::System::Boolean  RemoveAccessRule(mscorlib::System::Security::AccessControl::AccessRule<T> rule)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(rule).name());
						__parameters__[0] = (MonoObject*)rule;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity`1", 1, __generic_types__, "RemoveAccessRule", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					};
					
					virtual void  RemoveAccessRuleAll(mscorlib::System::Security::AccessControl::AccessRule<T> rule)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(rule).name());
						__parameters__[0] = (MonoObject*)rule;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity`1", 1, __generic_types__, "RemoveAccessRuleAll", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					};
					
					virtual void  RemoveAccessRuleSpecific(mscorlib::System::Security::AccessControl::AccessRule<T> rule)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(rule).name());
						__parameters__[0] = (MonoObject*)rule;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity`1", 1, __generic_types__, "RemoveAccessRuleSpecific", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					};
					
					virtual void  ResetAccessRule(mscorlib::System::Security::AccessControl::AccessRule<T> rule)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(rule).name());
						__parameters__[0] = (MonoObject*)rule;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity`1", 1, __generic_types__, "ResetAccessRule", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					};
					
					virtual void  SetAccessRule(mscorlib::System::Security::AccessControl::AccessRule<T> rule)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(rule).name());
						__parameters__[0] = (MonoObject*)rule;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity`1", 1, __generic_types__, "SetAccessRule", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					};
					
					virtual mscorlib::System::Security::AccessControl::AuditRuleBase  AuditRuleFactory(mscorlib::System::Security::Principal::IdentityReference identityReference, mscorlib::System::Int32 accessMask, mscorlib::System::Boolean isInherited, mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__ inheritanceFlags, mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__ propagationFlags, mscorlib::System::Security::AccessControl::AuditFlags::__ENUM__ flags) override
					{
						MonoType *__parameter_types__[6];
						void *__parameters__[6];
						__parameter_types__[0] = Global::GetType(typeid(identityReference).name());
						__parameter_types__[1] = Global::GetType(typeid(accessMask).name());
						__parameter_types__[2] = Global::GetType(typeid(isInherited).name());
						__parameter_types__[3] = Global::GetType(typeid(inheritanceFlags).name());
						__parameter_types__[4] = Global::GetType(typeid(propagationFlags).name());
						__parameter_types__[5] = Global::GetType(typeid(flags).name());
						__parameters__[0] = (MonoObject*)identityReference;
						__parameters__[1] = &accessMask;
						__parameters__[2] = reinterpret_cast<void*>(isInherited);
						__parameters__[3] = reinterpret_cast<void*>(inheritanceFlags);
						__parameters__[4] = reinterpret_cast<void*>(propagationFlags);
						__parameters__[5] = reinterpret_cast<void*>(flags);
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity`1", 1, __generic_types__, "AuditRuleFactory", __native_object__, 6, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::AccessControl::AuditRuleBase(__result__);
					};
					
					virtual void  AddAuditRule(mscorlib::System::Security::AccessControl::AuditRule<T> rule)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(rule).name());
						__parameters__[0] = (MonoObject*)rule;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity`1", 1, __generic_types__, "AddAuditRule", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					};
					
					virtual mscorlib::System::Boolean  RemoveAuditRule(mscorlib::System::Security::AccessControl::AuditRule<T> rule)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(rule).name());
						__parameters__[0] = (MonoObject*)rule;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity`1", 1, __generic_types__, "RemoveAuditRule", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					};
					
					virtual void  RemoveAuditRuleAll(mscorlib::System::Security::AccessControl::AuditRule<T> rule)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(rule).name());
						__parameters__[0] = (MonoObject*)rule;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity`1", 1, __generic_types__, "RemoveAuditRuleAll", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					};
					
					virtual void  RemoveAuditRuleSpecific(mscorlib::System::Security::AccessControl::AuditRule<T> rule)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(rule).name());
						__parameters__[0] = (MonoObject*)rule;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity`1", 1, __generic_types__, "RemoveAuditRuleSpecific", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					};
					
					virtual void  SetAuditRule(mscorlib::System::Security::AccessControl::AuditRule<T> rule)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(rule).name());
						__parameters__[0] = (MonoObject*)rule;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity`1", 1, __generic_types__, "SetAuditRule", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					};
					
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_AccessRightType)) mscorlib::System::Type  AccessRightType;
					__declspec(property(get=get_AccessRuleType)) mscorlib::System::Type  AccessRuleType;
					__declspec(property(get=get_AuditRuleType)) mscorlib::System::Type  AuditRuleType;
					__declspec(property(get=get_AreAccessRulesCanonical)) mscorlib::System::Boolean  AreAccessRulesCanonical;
					__declspec(property(get=get_AreAccessRulesProtected)) mscorlib::System::Boolean  AreAccessRulesProtected;
					__declspec(property(get=get_AreAuditRulesCanonical)) mscorlib::System::Boolean  AreAuditRulesCanonical;
					__declspec(property(get=get_AreAuditRulesProtected)) mscorlib::System::Boolean  AreAuditRulesProtected;

					//Get Set Properties Methods
					//	Get:AccessRightType
					mscorlib::System::Type  get_AccessRightType()
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity`1", 1, __generic_types__, "get_AccessRightType", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Type(__result__);
					}

					//	Get:AccessRuleType
					mscorlib::System::Type  get_AccessRuleType()
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity`1", 1, __generic_types__, "get_AccessRuleType", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Type(__result__);
					}

					//	Get:AuditRuleType
					mscorlib::System::Type  get_AuditRuleType()
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity`1", 1, __generic_types__, "get_AuditRuleType", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Type(__result__);
					}

					//	Get:AreAccessRulesCanonical
					mscorlib::System::Boolean  get_AreAccessRulesCanonical()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity", 0, NULL, "get_AreAccessRulesCanonical", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					}

					//	Get:AreAccessRulesProtected
					mscorlib::System::Boolean  get_AreAccessRulesProtected()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity", 0, NULL, "get_AreAccessRulesProtected", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					}

					//	Get:AreAuditRulesCanonical
					mscorlib::System::Boolean  get_AreAuditRulesCanonical()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity", 0, NULL, "get_AreAuditRulesCanonical", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					}

					//	Get:AreAuditRulesProtected
					mscorlib::System::Boolean  get_AreAuditRulesProtected()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity", 0, NULL, "get_AreAuditRulesProtected", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					}

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
