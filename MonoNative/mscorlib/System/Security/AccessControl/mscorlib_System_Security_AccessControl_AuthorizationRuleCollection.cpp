#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AuthorizationRuleCollection.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AuthorizationRule.h>
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
				void AuthorizationRuleCollection::CopyTo(std::vector<mscorlib::System::Security::AccessControl::AuthorizationRule*> rules, mscorlib::System::Int32 index)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(rules).name()))->eklass);
						__parameter_types__[1] = Global::GetType(typeid(index).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Security::AccessControl::AuthorizationRule*>(rules, typeid(mscorlib::System::Security::AccessControl::AuthorizationRule).name());
						__parameters__[1] = &index;
						Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "AuthorizationRuleCollection", 0, NULL, "CopyTo", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				//Get Set Properties Methods
				//	Get:Item
				mscorlib::System::Security::AccessControl::AuthorizationRule  AuthorizationRuleCollection::get_Item(mscorlib::System::Int32 index)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(index).name());
					__parameters__[0] = &index;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "AuthorizationRuleCollection", 0, NULL, "get_Item", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Security::AccessControl::AuthorizationRule(__result__);
				}


				//	Get:Count
				mscorlib::System::Int32  AuthorizationRuleCollection::get_Count()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "ReadOnlyCollectionBase", 0, NULL, "get_Count", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}



			}
		}
	}
}
