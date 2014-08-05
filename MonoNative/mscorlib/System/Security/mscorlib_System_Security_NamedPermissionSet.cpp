#include <mscorlib/System/Security/mscorlib_System_Security_NamedPermissionSet.h>
#include <mscorlib/System/Security/mscorlib_System_Security_SecurityElement.h>
#include <mscorlib/System/mscorlib_System_Array.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{

			//Public Methods
			mscorlib::System::Security::PermissionSet NamedPermissionSet::Copy()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "NamedPermissionSet", 0, NULL, "Copy", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::PermissionSet(__result__);
			}

			mscorlib::System::Security::NamedPermissionSet NamedPermissionSet::Copy(mscorlib::System::String name)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameters__[0] = (MonoObject*)name;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "NamedPermissionSet", 0, NULL, "Copy", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Security::NamedPermissionSet(__result__);
			}

			void NamedPermissionSet::FromXml(mscorlib::System::Security::SecurityElement et)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(et).name());
					__parameters__[0] = (MonoObject*)et;
					Global::InvokeMethod("mscorlib", "System.Security", "NamedPermissionSet", 0, NULL, "FromXml", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Security::SecurityElement NamedPermissionSet::ToXml()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "NamedPermissionSet", 0, NULL, "ToXml", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::SecurityElement(__result__);
			}

			mscorlib::System::Boolean NamedPermissionSet::Equals(mscorlib::System::Object obj)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(obj).name());
					__parameters__[0] = (MonoObject*)obj;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "NamedPermissionSet", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 NamedPermissionSet::GetHashCode()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "NamedPermissionSet", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			//Get Set Properties Methods
			//	Get/Set:Description
			mscorlib::System::String  NamedPermissionSet::get_Description() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "NamedPermissionSet", 0, NULL, "get_Description", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}

			void NamedPermissionSet::set_Description(mscorlib::System::String  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Security", "NamedPermissionSet", 0, NULL, "set_Description", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:Name
			mscorlib::System::String  NamedPermissionSet::get_Name() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "NamedPermissionSet", 0, NULL, "get_Name", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}

			void NamedPermissionSet::set_Name(mscorlib::System::String  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Security", "NamedPermissionSet", 0, NULL, "set_Name", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get:Count
			mscorlib::System::Int32  NamedPermissionSet::get_Count() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "PermissionSet", 0, NULL, "get_Count", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}


			//	Get:IsSynchronized
			mscorlib::System::Boolean  NamedPermissionSet::get_IsSynchronized() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "PermissionSet", 0, NULL, "get_IsSynchronized", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsReadOnly
			mscorlib::System::Boolean  NamedPermissionSet::get_IsReadOnly() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "PermissionSet", 0, NULL, "get_IsReadOnly", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:SyncRoot
			mscorlib::System::Object  NamedPermissionSet::get_SyncRoot() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "PermissionSet", 0, NULL, "get_SyncRoot", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Object(__result__);
			}



		}
	}
}
