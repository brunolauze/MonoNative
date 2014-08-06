#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_NAMEDPERMISSIONSET_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_NAMEDPERMISSIONSET_H

#include <mscorlib/System/Security/mscorlib_System_Security_PermissionSet.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_PermissionState.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_IDeserializationCallback.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_ICollection.h>
#include <mscorlib/System/Security/mscorlib_System_Security_ISecurityEncodable.h>
#include <mscorlib/System/Security/mscorlib_System_Security_IStackWalk.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IEnumerable.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Security/mscorlib_System_Security_IPermission.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IEnumerator.h>

namespace mscorlib
{
	namespace System
	{
		namespace Security
		{

			class SecurityElement;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{

		class Array;
		class Type;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{

			class NamedPermissionSet
				: public mscorlib::System::Security::PermissionSet
				, public virtual mscorlib::System::Runtime::Serialization::IDeserializationCallback
				, public virtual mscorlib::System::Collections::ICollection
				, public virtual mscorlib::System::Security::ISecurityEncodable
				, public virtual mscorlib::System::Security::IStackWalk
				, public virtual mscorlib::System::Collections::IEnumerable
			{
			public:
				NamedPermissionSet(mscorlib::System::String name, mscorlib::System::Security::PermissionSet permSet)
				: mscorlib::System::Security::PermissionSet(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.NamedPermissionSet"))
				, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
				, mscorlib::System::Collections::ICollection(NULL)
				, mscorlib::System::Security::ISecurityEncodable(NULL)
				, mscorlib::System::Security::IStackWalk(NULL)
				, mscorlib::System::Collections::IEnumerable(NULL)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType("mscorlib", "System.Security", "PermissionSet");
					__parameters__[0] = (MonoObject*)name;
					__parameters__[1] = (MonoObject*)permSet;
					__native_object__ = Global::New("mscorlib", "System.Security", "NamedPermissionSet", 2, __parameter_types__, __parameters__);
				};
			
				NamedPermissionSet(mscorlib::System::String name, mscorlib::System::Security::Permissions::PermissionState::__ENUM__ state)
				: mscorlib::System::Security::PermissionSet(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.NamedPermissionSet"))
				, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
				, mscorlib::System::Collections::ICollection(NULL)
				, mscorlib::System::Security::ISecurityEncodable(NULL)
				, mscorlib::System::Security::IStackWalk(NULL)
				, mscorlib::System::Collections::IEnumerable(NULL)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType("mscorlib", "System.Security.Permissions", "PermissionState");
					__parameters__[0] = (MonoObject*)name;
					mscorlib::System::Int32 __param_state__ = state;
					__parameters__[1] = &__param_state__;
					__native_object__ = Global::New("mscorlib", "System.Security", "NamedPermissionSet", 2, __parameter_types__, __parameters__);
				};
			
				NamedPermissionSet(mscorlib::System::Security::NamedPermissionSet &permSet)
				: mscorlib::System::Security::PermissionSet(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.NamedPermissionSet"))
				, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
				, mscorlib::System::Collections::ICollection(NULL)
				, mscorlib::System::Security::ISecurityEncodable(NULL)
				, mscorlib::System::Security::IStackWalk(NULL)
				, mscorlib::System::Collections::IEnumerable(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.Security", "NamedPermissionSet");
					__parameters__[0] = (MonoObject*)permSet;
					__native_object__ = Global::New("mscorlib", "System.Security", "NamedPermissionSet", 1, __parameter_types__, __parameters__);
				};
			
				NamedPermissionSet(mscorlib::System::String name)
				: mscorlib::System::Security::PermissionSet(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.NamedPermissionSet"))
				, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
				, mscorlib::System::Collections::ICollection(NULL)
				, mscorlib::System::Security::ISecurityEncodable(NULL)
				, mscorlib::System::Security::IStackWalk(NULL)
				, mscorlib::System::Collections::IEnumerable(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = (MonoObject*)name;
					__native_object__ = Global::New("mscorlib", "System.Security", "NamedPermissionSet", 1, __parameter_types__, __parameters__);
				};
			
				NamedPermissionSet(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Security::PermissionSet(nativeTypeInfo)
				, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
				, mscorlib::System::Collections::ICollection(NULL)
				, mscorlib::System::Security::ISecurityEncodable(NULL)
				, mscorlib::System::Security::IStackWalk(NULL)
				, mscorlib::System::Collections::IEnumerable(NULL)
				{
				};
			
				NamedPermissionSet(MonoObject *nativeObject)
				: mscorlib::System::Security::PermissionSet(nativeObject)
				, mscorlib::System::Runtime::Serialization::IDeserializationCallback(nativeObject)
				, mscorlib::System::Collections::ICollection(nativeObject)
				, mscorlib::System::Security::ISecurityEncodable(nativeObject)
				, mscorlib::System::Security::IStackWalk(nativeObject)
				, mscorlib::System::Collections::IEnumerable(nativeObject)
				{
				};
			
				~NamedPermissionSet()
				{
				};
			

				NamedPermissionSet & operator=(NamedPermissionSet &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual mscorlib::System::Security::PermissionSet  Copy() override;
				mscorlib::System::Security::NamedPermissionSet  Copy(mscorlib::System::String name);
				mscorlib::System::Security::NamedPermissionSet  Copy(const char *name);
				virtual void  FromXml(mscorlib::System::Security::SecurityElement et) override;
				virtual mscorlib::System::Security::SecurityElement  ToXml() override;
				virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object obj) override;
				virtual mscorlib::System::Int32  GetHashCode() override;
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_Description, put=set_Description)) mscorlib::System::String  Description;
				__declspec(property(get=get_Name, put=set_Name)) mscorlib::System::String  Name;
				__declspec(property(get=get_Count)) mscorlib::System::Int32  Count;
				__declspec(property(get=get_IsSynchronized)) mscorlib::System::Boolean  IsSynchronized;
				__declspec(property(get=get_IsReadOnly)) mscorlib::System::Boolean  IsReadOnly;
				__declspec(property(get=get_SyncRoot)) mscorlib::System::Object  SyncRoot;

				//Get Set Properties Methods
				//	Get/Set:Description
				mscorlib::System::String  get_Description() const;
				void set_Description(mscorlib::System::String  value);

				//	Get/Set:Name
				mscorlib::System::String  get_Name() const;
				void set_Name(mscorlib::System::String  value);

				//	Get:Count
				mscorlib::System::Int32  get_Count() const;

				//	Get:IsSynchronized
				mscorlib::System::Boolean  get_IsSynchronized() const;

				//	Get:IsReadOnly
				mscorlib::System::Boolean  get_IsReadOnly() const;

				//	Get:SyncRoot
				mscorlib::System::Object  get_SyncRoot() const;

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
