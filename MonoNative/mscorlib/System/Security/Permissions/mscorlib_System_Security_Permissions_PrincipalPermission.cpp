#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_PrincipalPermission.h>
#include <mscorlib/System/Security/mscorlib_System_Security_SecurityElement.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Permissions
			{

				//Public Methods
				mscorlib::System::Security::IPermission PrincipalPermission::Copy()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "PrincipalPermission", 0, NULL, "Copy", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Security::IPermission(__result__);
				}

				void PrincipalPermission::Demand()
				{
						Global::InvokeMethod("mscorlib", "System.Security.Permissions", "PrincipalPermission", 0, NULL, "Demand", __native_object__, 0, NULL, NULL, NULL);
				}

				void PrincipalPermission::FromXml(mscorlib::System::Security::SecurityElement elem)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(elem).name());
						__parameters__[0] = (MonoObject*)elem;
						Global::InvokeMethod("mscorlib", "System.Security.Permissions", "PrincipalPermission", 0, NULL, "FromXml", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Security::IPermission PrincipalPermission::Intersect(mscorlib::System::Security::IPermission target)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(target).name());
						__parameters__[0] = (MonoObject*)target;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "PrincipalPermission", 0, NULL, "Intersect", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::IPermission(__result__);
				}

				mscorlib::System::Boolean PrincipalPermission::IsSubsetOf(mscorlib::System::Security::IPermission target)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(target).name());
						__parameters__[0] = (MonoObject*)target;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "PrincipalPermission", 0, NULL, "IsSubsetOf", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Boolean PrincipalPermission::IsUnrestricted()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "PrincipalPermission", 0, NULL, "IsUnrestricted", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::String PrincipalPermission::ToString()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "PrincipalPermission", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
				}

				mscorlib::System::Security::SecurityElement PrincipalPermission::ToXml()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "PrincipalPermission", 0, NULL, "ToXml", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Security::SecurityElement(__result__);
				}

				mscorlib::System::Security::IPermission PrincipalPermission::Union(mscorlib::System::Security::IPermission other)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(other).name());
						__parameters__[0] = (MonoObject*)other;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "PrincipalPermission", 0, NULL, "Union", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::IPermission(__result__);
				}

				mscorlib::System::Boolean PrincipalPermission::Equals(mscorlib::System::Object obj)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(obj).name());
						__parameters__[0] = (MonoObject*)obj;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "PrincipalPermission", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Int32 PrincipalPermission::GetHashCode()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "PrincipalPermission", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


			}
		}
	}
}
