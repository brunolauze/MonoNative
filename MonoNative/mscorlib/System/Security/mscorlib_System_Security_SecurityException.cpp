#include <mscorlib/System/Security/mscorlib_System_Security_SecurityException.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_SerializationInfo.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_StreamingContext.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MethodBase.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{

			//Public Methods
			void SecurityException::GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(info).name());
					__parameter_types__[1] = Global::GetType(typeid(context).name());
					__parameters__[0] = (MonoObject*)info;
					__parameters__[1] = (MonoObject*)context;
					Global::InvokeMethod("mscorlib", "System.Security", "SecurityException", 0, NULL, "GetObjectData", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::String SecurityException::ToString()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "SecurityException", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
			}

			//Get Set Properties Methods
			//	Get/Set:Action
			mscorlib::System::Security::Permissions::SecurityAction::__ENUM__  SecurityException::get_Action() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "SecurityException", 0, NULL, "get_Action", __native_object__, 0, NULL, NULL, NULL);
				return static_cast<mscorlib::System::Security::Permissions::SecurityAction::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
			}

			void SecurityException::set_Action(mscorlib::System::Security::Permissions::SecurityAction::__ENUM__  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				mscorlib::System::Int32 __param_value__ = value;
				__parameters__[0] = &__param_value__;
				Global::InvokeMethod("mscorlib", "System.Security", "SecurityException", 0, NULL, "set_Action", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:DenySetInstance
			mscorlib::System::Object  SecurityException::get_DenySetInstance() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "SecurityException", 0, NULL, "get_DenySetInstance", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Object(__result__);
			}

			void SecurityException::set_DenySetInstance(mscorlib::System::Object  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Security", "SecurityException", 0, NULL, "set_DenySetInstance", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:FailedAssemblyInfo
			mscorlib::System::Reflection::AssemblyName  SecurityException::get_FailedAssemblyInfo() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "SecurityException", 0, NULL, "get_FailedAssemblyInfo", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Reflection::AssemblyName(__result__);
			}

			void SecurityException::set_FailedAssemblyInfo(mscorlib::System::Reflection::AssemblyName  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Security", "SecurityException", 0, NULL, "set_FailedAssemblyInfo", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:Method
			mscorlib::System::Reflection::MethodInfo  SecurityException::get_Method() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "SecurityException", 0, NULL, "get_Method", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Reflection::MethodInfo(__result__);
			}

			void SecurityException::set_Method(mscorlib::System::Reflection::MethodInfo  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Security", "SecurityException", 0, NULL, "set_Method", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:PermitOnlySetInstance
			mscorlib::System::Object  SecurityException::get_PermitOnlySetInstance() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "SecurityException", 0, NULL, "get_PermitOnlySetInstance", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Object(__result__);
			}

			void SecurityException::set_PermitOnlySetInstance(mscorlib::System::Object  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Security", "SecurityException", 0, NULL, "set_PermitOnlySetInstance", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:Url
			mscorlib::System::String  SecurityException::get_Url() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "SecurityException", 0, NULL, "get_Url", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}

			void SecurityException::set_Url(mscorlib::System::String  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Security", "SecurityException", 0, NULL, "set_Url", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:Zone
			mscorlib::System::Security::SecurityZone::__ENUM__  SecurityException::get_Zone() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "SecurityException", 0, NULL, "get_Zone", __native_object__, 0, NULL, NULL, NULL);
				return static_cast<mscorlib::System::Security::SecurityZone::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
			}

			void SecurityException::set_Zone(mscorlib::System::Security::SecurityZone::__ENUM__  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				mscorlib::System::Int32 __param_value__ = value;
				__parameters__[0] = &__param_value__;
				Global::InvokeMethod("mscorlib", "System.Security", "SecurityException", 0, NULL, "set_Zone", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:Demanded
			mscorlib::System::Object  SecurityException::get_Demanded() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "SecurityException", 0, NULL, "get_Demanded", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Object(__result__);
			}

			void SecurityException::set_Demanded(mscorlib::System::Object  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Security", "SecurityException", 0, NULL, "set_Demanded", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:FirstPermissionThatFailed
			mscorlib::System::Security::IPermission  SecurityException::get_FirstPermissionThatFailed() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "SecurityException", 0, NULL, "get_FirstPermissionThatFailed", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Security::IPermission(__result__);
			}

			void SecurityException::set_FirstPermissionThatFailed(mscorlib::System::Security::IPermission  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Security", "SecurityException", 0, NULL, "set_FirstPermissionThatFailed", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:PermissionState
			mscorlib::System::String  SecurityException::get_PermissionState() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "SecurityException", 0, NULL, "get_PermissionState", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}

			void SecurityException::set_PermissionState(mscorlib::System::String  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Security", "SecurityException", 0, NULL, "set_PermissionState", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:PermissionType
			mscorlib::System::Type  SecurityException::get_PermissionType() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "SecurityException", 0, NULL, "get_PermissionType", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Type(__result__);
			}

			void SecurityException::set_PermissionType(mscorlib::System::Type  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Security", "SecurityException", 0, NULL, "set_PermissionType", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:GrantedSet
			mscorlib::System::String  SecurityException::get_GrantedSet() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "SecurityException", 0, NULL, "get_GrantedSet", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}

			void SecurityException::set_GrantedSet(mscorlib::System::String  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Security", "SecurityException", 0, NULL, "set_GrantedSet", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:RefusedSet
			mscorlib::System::String  SecurityException::get_RefusedSet() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "SecurityException", 0, NULL, "get_RefusedSet", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}

			void SecurityException::set_RefusedSet(mscorlib::System::String  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Security", "SecurityException", 0, NULL, "set_RefusedSet", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get:InnerException
			mscorlib::System::Exception  SecurityException::get_InnerException() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Exception", 0, NULL, "get_InnerException", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Exception(__result__);
			}


			//	Get/Set:HelpLink
			mscorlib::System::String  SecurityException::get_HelpLink() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Exception", 0, NULL, "get_HelpLink", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}

			void SecurityException::set_HelpLink(mscorlib::System::String  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System", "Exception", 0, NULL, "set_HelpLink", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:HResult
			mscorlib::System::Int32  SecurityException::get_HResult() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Exception", 0, NULL, "get_HResult", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			void SecurityException::set_HResult(mscorlib::System::Int32  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				Global::InvokeMethod("mscorlib", "System", "Exception", 0, NULL, "set_HResult", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get:Message
			mscorlib::System::String  SecurityException::get_Message() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Exception", 0, NULL, "get_Message", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get/Set:Source
			mscorlib::System::String  SecurityException::get_Source() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Exception", 0, NULL, "get_Source", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}

			void SecurityException::set_Source(mscorlib::System::String  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System", "Exception", 0, NULL, "set_Source", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get:StackTrace
			mscorlib::System::String  SecurityException::get_StackTrace() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Exception", 0, NULL, "get_StackTrace", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:TargetSite
			mscorlib::System::Reflection::MethodBase  SecurityException::get_TargetSite() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Exception", 0, NULL, "get_TargetSite", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Reflection::MethodBase(__result__);
			}


			//	Get:Data
			mscorlib::System::Collections::IDictionary  SecurityException::get_Data() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Exception", 0, NULL, "get_Data", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Collections::IDictionary(__result__);
			}



		}
	}
}
