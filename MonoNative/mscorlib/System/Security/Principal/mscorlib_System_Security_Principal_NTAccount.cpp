#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_NTAccount.h>
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
				mscorlib::System::Boolean NTAccount::Equals(mscorlib::System::Object o)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(o).name());
						__parameters__[0] = (MonoObject*)o;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Principal", "NTAccount", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Int32 NTAccount::GetHashCode()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Principal", "NTAccount", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				mscorlib::System::Boolean NTAccount::IsValidTargetType(mscorlib::System::Type targetType)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(targetType).name());
						__parameters__[0] = (MonoObject*)targetType;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Principal", "NTAccount", 0, NULL, "IsValidTargetType", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::String NTAccount::ToString()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Principal", "NTAccount", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
				}

				mscorlib::System::Security::Principal::IdentityReference NTAccount::Translate(mscorlib::System::Type targetType)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(targetType).name());
						__parameters__[0] = (MonoObject*)targetType;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Principal", "NTAccount", 0, NULL, "Translate", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::Principal::IdentityReference(__result__);
				}

				//Get Set Properties Methods
				//	Get:Value
				mscorlib::System::String  NTAccount::get_Value() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Principal", "NTAccount", 0, NULL, "get_Value", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}



			}
		}
	}
}
