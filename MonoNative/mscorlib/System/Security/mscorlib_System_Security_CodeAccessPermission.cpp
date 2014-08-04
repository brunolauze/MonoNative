#include <mscorlib/System/Security/mscorlib_System_Security_CodeAccessPermission.h>
#include <mscorlib/System/Security/mscorlib_System_Security_SecurityElement.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{

			//Public Methods
			void CodeAccessPermission::Assert()
			{
					Global::InvokeMethod("mscorlib", "System.Security", "CodeAccessPermission", 0, NULL, "Assert", __native_object__, 0, NULL, NULL, NULL);
			}

			mscorlib::System::Security::IPermission CodeAccessPermission::Copy()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "CodeAccessPermission", 0, NULL, "Copy", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::IPermission(__result__);
			}

			void CodeAccessPermission::Demand()
			{
					Global::InvokeMethod("mscorlib", "System.Security", "CodeAccessPermission", 0, NULL, "Demand", __native_object__, 0, NULL, NULL, NULL);
			}

			void CodeAccessPermission::Deny()
			{
					Global::InvokeMethod("mscorlib", "System.Security", "CodeAccessPermission", 0, NULL, "Deny", __native_object__, 0, NULL, NULL, NULL);
			}

			mscorlib::System::Boolean CodeAccessPermission::Equals(mscorlib::System::Object obj)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(obj).name());
					__parameters__[0] = (MonoObject*)obj;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "CodeAccessPermission", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			void CodeAccessPermission::FromXml(mscorlib::System::Security::SecurityElement elem)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(elem).name());
					__parameters__[0] = (MonoObject*)elem;
					Global::InvokeMethod("mscorlib", "System.Security", "CodeAccessPermission", 0, NULL, "FromXml", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Int32 CodeAccessPermission::GetHashCode()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "CodeAccessPermission", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Security::IPermission CodeAccessPermission::Intersect(mscorlib::System::Security::IPermission target)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(target).name());
					__parameters__[0] = (MonoObject*)target;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "CodeAccessPermission", 0, NULL, "Intersect", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Security::IPermission(__result__);
			}

			mscorlib::System::Boolean CodeAccessPermission::IsSubsetOf(mscorlib::System::Security::IPermission target)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(target).name());
					__parameters__[0] = (MonoObject*)target;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "CodeAccessPermission", 0, NULL, "IsSubsetOf", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::String CodeAccessPermission::ToString()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "CodeAccessPermission", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::Security::SecurityElement CodeAccessPermission::ToXml()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "CodeAccessPermission", 0, NULL, "ToXml", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::SecurityElement(__result__);
			}

			mscorlib::System::Security::IPermission CodeAccessPermission::Union(mscorlib::System::Security::IPermission other)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(other).name());
					__parameters__[0] = (MonoObject*)other;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "CodeAccessPermission", 0, NULL, "Union", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Security::IPermission(__result__);
			}

			void CodeAccessPermission::PermitOnly()
			{
					Global::InvokeMethod("mscorlib", "System.Security", "CodeAccessPermission", 0, NULL, "PermitOnly", __native_object__, 0, NULL, NULL, NULL);
			}

			void CodeAccessPermission::RevertAll()
			{
					Global::InvokeMethod("mscorlib", "System.Security", "CodeAccessPermission", 0, NULL, "RevertAll", NullMonoObject, 0, NULL, NULL, NULL);
			}

			void CodeAccessPermission::RevertAssert()
			{
					Global::InvokeMethod("mscorlib", "System.Security", "CodeAccessPermission", 0, NULL, "RevertAssert", NullMonoObject, 0, NULL, NULL, NULL);
			}

			void CodeAccessPermission::RevertDeny()
			{
					Global::InvokeMethod("mscorlib", "System.Security", "CodeAccessPermission", 0, NULL, "RevertDeny", NullMonoObject, 0, NULL, NULL, NULL);
			}

			void CodeAccessPermission::RevertPermitOnly()
			{
					Global::InvokeMethod("mscorlib", "System.Security", "CodeAccessPermission", 0, NULL, "RevertPermitOnly", NullMonoObject, 0, NULL, NULL, NULL);
			}


		}
	}
}
