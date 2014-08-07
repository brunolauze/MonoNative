#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_SECURITYEXCEPTION_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_SECURITYEXCEPTION_H

#include <mscorlib/System/mscorlib_System_SystemException.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Exception.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MethodInfo.h>
#include <mscorlib/System/Security/mscorlib_System_Security_IPermission.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_AssemblyName.h>
#include <mscorlib/System/Security/mscorlib_System_Security_PermissionSet.h>
#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_SecurityAction.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_Evidence.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__Exception.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ISerializable.h>
#include <mscorlib/System/Security/mscorlib_System_Security_SecurityZone.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IDictionary.h>

namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Serialization
			{

				class SerializationInfo;
				class StreamingContext;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class MethodBase;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{

			class SecurityException
				: public mscorlib::System::SystemException
				, public virtual mscorlib::System::Runtime::InteropServices::_Exception
				, public virtual mscorlib::System::Runtime::Serialization::ISerializable
			{
			public:
				SecurityException()
				: mscorlib::System::SystemException(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.SecurityException"))
				, mscorlib::System::Runtime::InteropServices::_Exception(NULL)
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				{
					__native_object__ = Global::New("mscorlib", "System.Security", "SecurityException");
				};
			
				SecurityException(mscorlib::System::String message)
				: mscorlib::System::SystemException(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.SecurityException"))
				, mscorlib::System::Runtime::InteropServices::_Exception(NULL)
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = (MonoObject*)message;
					__native_object__ = Global::New("mscorlib", "System.Security", "SecurityException", 1, __parameter_types__, __parameters__);
				};
			
				SecurityException(mscorlib::System::String message, mscorlib::System::Exception inner)
				: mscorlib::System::SystemException(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.SecurityException"))
				, mscorlib::System::Runtime::InteropServices::_Exception(NULL)
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Exception");
					__parameters__[0] = (MonoObject*)message;
					__parameters__[1] = (MonoObject*)inner;
					__native_object__ = Global::New("mscorlib", "System.Security", "SecurityException", 2, __parameter_types__, __parameters__);
				};
			
				SecurityException(mscorlib::System::String message, mscorlib::System::Type type)
				: mscorlib::System::SystemException(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.SecurityException"))
				, mscorlib::System::Runtime::InteropServices::_Exception(NULL)
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Type");
					__parameters__[0] = (MonoObject*)message;
					__parameters__[1] = (MonoObject*)type;
					__native_object__ = Global::New("mscorlib", "System.Security", "SecurityException", 2, __parameter_types__, __parameters__);
				};
			
				SecurityException(mscorlib::System::String message, mscorlib::System::Type type, mscorlib::System::String state)
				: mscorlib::System::SystemException(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.SecurityException"))
				, mscorlib::System::Runtime::InteropServices::_Exception(NULL)
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Type");
					__parameter_types__[2] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = (MonoObject*)message;
					__parameters__[1] = (MonoObject*)type;
					__parameters__[2] = (MonoObject*)state;
					__native_object__ = Global::New("mscorlib", "System.Security", "SecurityException", 3, __parameter_types__, __parameters__);
				};
			
				SecurityException(mscorlib::System::String message, mscorlib::System::Object deny, mscorlib::System::Object permitOnly, mscorlib::System::Reflection::MethodInfo method, mscorlib::System::Object demanded, mscorlib::System::Security::IPermission permThatFailed)
				: mscorlib::System::SystemException(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.SecurityException"))
				, mscorlib::System::Runtime::InteropServices::_Exception(NULL)
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				{
					MonoType *__parameter_types__[6];
					void *__parameters__[6];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Object");
					__parameter_types__[2] = Global::GetType("mscorlib", "System", "Object");
					__parameter_types__[3] = Global::GetType("mscorlib", "System.Reflection", "MethodInfo");
					__parameter_types__[4] = Global::GetType("mscorlib", "System", "Object");
					__parameter_types__[5] = Global::GetType("mscorlib", "System.Security", "IPermission");
					__parameters__[0] = (MonoObject*)message;
					__parameters__[1] = (MonoObject*)deny;
					__parameters__[2] = (MonoObject*)permitOnly;
					__parameters__[3] = (MonoObject*)method;
					__parameters__[4] = (MonoObject*)demanded;
					__parameters__[5] = (MonoObject*)permThatFailed;
					__native_object__ = Global::New("mscorlib", "System.Security", "SecurityException", 6, __parameter_types__, __parameters__);
				};
			
				SecurityException(mscorlib::System::String message, mscorlib::System::Reflection::AssemblyName assemblyName, mscorlib::System::Security::PermissionSet grant, mscorlib::System::Security::PermissionSet refused, mscorlib::System::Reflection::MethodInfo method, mscorlib::System::Security::Permissions::SecurityAction::__ENUM__ action, mscorlib::System::Object demanded, mscorlib::System::Security::IPermission permThatFailed, mscorlib::System::Security::Policy::Evidence evidence)
				: mscorlib::System::SystemException(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.SecurityException"))
				, mscorlib::System::Runtime::InteropServices::_Exception(NULL)
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				{
					MonoType *__parameter_types__[9];
					void *__parameters__[9];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType("mscorlib", "System.Reflection", "AssemblyName");
					__parameter_types__[2] = Global::GetType("mscorlib", "System.Security", "PermissionSet");
					__parameter_types__[3] = Global::GetType("mscorlib", "System.Security", "PermissionSet");
					__parameter_types__[4] = Global::GetType("mscorlib", "System.Reflection", "MethodInfo");
					__parameter_types__[5] = Global::GetType("mscorlib", "System.Security.Permissions", "SecurityAction");
					__parameter_types__[6] = Global::GetType("mscorlib", "System", "Object");
					__parameter_types__[7] = Global::GetType("mscorlib", "System.Security", "IPermission");
					__parameter_types__[8] = Global::GetType("mscorlib", "System.Security.Policy", "Evidence");
					__parameters__[0] = (MonoObject*)message;
					__parameters__[1] = (MonoObject*)assemblyName;
					__parameters__[2] = (MonoObject*)grant;
					__parameters__[3] = (MonoObject*)refused;
					__parameters__[4] = (MonoObject*)method;
					mscorlib::System::Int32 __param_action__ = action;
					__parameters__[5] = &__param_action__;
					__parameters__[6] = (MonoObject*)demanded;
					__parameters__[7] = (MonoObject*)permThatFailed;
					__parameters__[8] = (MonoObject*)evidence;
					__native_object__ = Global::New("mscorlib", "System.Security", "SecurityException", 9, __parameter_types__, __parameters__);
				};
			
				SecurityException(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::SystemException(nativeTypeInfo)
				, mscorlib::System::Runtime::InteropServices::_Exception(NULL)
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				{
				};
			
				SecurityException(MonoObject *nativeObject)
				: mscorlib::System::SystemException(nativeObject)
				, mscorlib::System::Runtime::InteropServices::_Exception(nativeObject)
				, mscorlib::System::Runtime::Serialization::ISerializable(nativeObject)
				{
				};
			
				~SecurityException()
				{
				};
			

				SecurityException & operator=(SecurityException &value) { __native_object__ = value.GetNativeObject(); return value; };
				bool operator==(SecurityException &value) { return mscorlib::System::Object::Equals(value); };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual void  GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context) override;
				virtual mscorlib::System::String  ToString() override;
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_Action, put=set_Action)) mscorlib::System::Security::Permissions::SecurityAction::__ENUM__  Action;
				__declspec(property(get=get_DenySetInstance, put=set_DenySetInstance)) mscorlib::System::Object  DenySetInstance;
				__declspec(property(get=get_FailedAssemblyInfo, put=set_FailedAssemblyInfo)) mscorlib::System::Reflection::AssemblyName  FailedAssemblyInfo;
				__declspec(property(get=get_Method, put=set_Method)) mscorlib::System::Reflection::MethodInfo  Method;
				__declspec(property(get=get_PermitOnlySetInstance, put=set_PermitOnlySetInstance)) mscorlib::System::Object  PermitOnlySetInstance;
				__declspec(property(get=get_Url, put=set_Url)) mscorlib::System::String  Url;
				__declspec(property(get=get_Zone, put=set_Zone)) mscorlib::System::Security::SecurityZone::__ENUM__  Zone;
				__declspec(property(get=get_Demanded, put=set_Demanded)) mscorlib::System::Object  Demanded;
				__declspec(property(get=get_FirstPermissionThatFailed, put=set_FirstPermissionThatFailed)) mscorlib::System::Security::IPermission  FirstPermissionThatFailed;
				__declspec(property(get=get_PermissionState, put=set_PermissionState)) mscorlib::System::String  PermissionState;
				__declspec(property(get=get_PermissionType, put=set_PermissionType)) mscorlib::System::Type  PermissionType;
				__declspec(property(get=get_GrantedSet, put=set_GrantedSet)) mscorlib::System::String  GrantedSet;
				__declspec(property(get=get_RefusedSet, put=set_RefusedSet)) mscorlib::System::String  RefusedSet;
				__declspec(property(get=get_InnerException)) mscorlib::System::Exception  InnerException;
				__declspec(property(get=get_HelpLink, put=set_HelpLink)) mscorlib::System::String  HelpLink;
				__declspec(property(get=get_HResult, put=set_HResult)) mscorlib::System::Int32  HResult;
				__declspec(property(get=get_Message)) mscorlib::System::String  Message;
				__declspec(property(get=get_Source, put=set_Source)) mscorlib::System::String  Source;
				__declspec(property(get=get_StackTrace)) mscorlib::System::String  StackTrace;
				__declspec(property(get=get_TargetSite)) mscorlib::System::Reflection::MethodBase  TargetSite;
				__declspec(property(get=get_Data)) mscorlib::System::Collections::IDictionary  Data;

				//Get Set Properties Methods
				//	Get/Set:Action
				mscorlib::System::Security::Permissions::SecurityAction::__ENUM__  get_Action() const;
				void set_Action(mscorlib::System::Security::Permissions::SecurityAction::__ENUM__  value);

				//	Get/Set:DenySetInstance
				mscorlib::System::Object  get_DenySetInstance() const;
				void set_DenySetInstance(mscorlib::System::Object  value);

				//	Get/Set:FailedAssemblyInfo
				mscorlib::System::Reflection::AssemblyName  get_FailedAssemblyInfo() const;
				void set_FailedAssemblyInfo(mscorlib::System::Reflection::AssemblyName  value);

				//	Get/Set:Method
				mscorlib::System::Reflection::MethodInfo  get_Method() const;
				void set_Method(mscorlib::System::Reflection::MethodInfo  value);

				//	Get/Set:PermitOnlySetInstance
				mscorlib::System::Object  get_PermitOnlySetInstance() const;
				void set_PermitOnlySetInstance(mscorlib::System::Object  value);

				//	Get/Set:Url
				mscorlib::System::String  get_Url() const;
				void set_Url(mscorlib::System::String  value);

				//	Get/Set:Zone
				mscorlib::System::Security::SecurityZone::__ENUM__  get_Zone() const;
				void set_Zone(mscorlib::System::Security::SecurityZone::__ENUM__  value);

				//	Get/Set:Demanded
				mscorlib::System::Object  get_Demanded() const;
				void set_Demanded(mscorlib::System::Object  value);

				//	Get/Set:FirstPermissionThatFailed
				mscorlib::System::Security::IPermission  get_FirstPermissionThatFailed() const;
				void set_FirstPermissionThatFailed(mscorlib::System::Security::IPermission  value);

				//	Get/Set:PermissionState
				mscorlib::System::String  get_PermissionState() const;
				void set_PermissionState(mscorlib::System::String  value);

				//	Get/Set:PermissionType
				mscorlib::System::Type  get_PermissionType() const;
				void set_PermissionType(mscorlib::System::Type  value);

				//	Get/Set:GrantedSet
				mscorlib::System::String  get_GrantedSet() const;
				void set_GrantedSet(mscorlib::System::String  value);

				//	Get/Set:RefusedSet
				mscorlib::System::String  get_RefusedSet() const;
				void set_RefusedSet(mscorlib::System::String  value);

				//	Get:InnerException
				mscorlib::System::Exception  get_InnerException() const;

				//	Get/Set:HelpLink
				mscorlib::System::String  get_HelpLink() const;
				void set_HelpLink(mscorlib::System::String  value);

				//	Get/Set:HResult
				mscorlib::System::Int32  get_HResult() const;
				void set_HResult(mscorlib::System::Int32  value);

				//	Get:Message
				mscorlib::System::String  get_Message() const;

				//	Get/Set:Source
				mscorlib::System::String  get_Source() const;
				void set_Source(mscorlib::System::String  value);

				//	Get:StackTrace
				mscorlib::System::String  get_StackTrace() const;

				//	Get:TargetSite
				mscorlib::System::Reflection::MethodBase  get_TargetSite() const;

				//	Get:Data
				mscorlib::System::Collections::IDictionary  get_Data() const;

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
