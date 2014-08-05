#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONSET_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONSET_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_PermissionState.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_IDeserializationCallback.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_ICollection.h>
#include <mscorlib/System/Security/mscorlib_System_Security_ISecurityEncodable.h>
#include <mscorlib/System/Security/mscorlib_System_Security_IStackWalk.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IEnumerable.h>
#include <mscorlib/System/Security/mscorlib_System_Security_IPermission.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IEnumerator.h>

namespace mscorlib
{
	namespace System
	{

		class Array;
		class Type;
		class String;
		class Byte;
		

	}
}
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
		namespace Security
		{

			class PermissionSet
				: public mscorlib::System::Object
				, public virtual mscorlib::System::Runtime::Serialization::IDeserializationCallback
				, public virtual mscorlib::System::Collections::ICollection
				, public virtual mscorlib::System::Security::ISecurityEncodable
				, public virtual mscorlib::System::Security::IStackWalk
				, public virtual mscorlib::System::Collections::IEnumerable
			{
			public:
				PermissionSet(mscorlib::System::Security::Permissions::PermissionState::__ENUM__ state)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.PermissionSet"))
				, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
				, mscorlib::System::Collections::ICollection(NULL)
				, mscorlib::System::Security::ISecurityEncodable(NULL)
				, mscorlib::System::Security::IStackWalk(NULL)
				, mscorlib::System::Collections::IEnumerable(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Permissions", "PermissionState");
					__parameters__[0] = reinterpret_cast<void*>(state);
					__native_object__ = Global::New("mscorlib", "System.Security", "PermissionSet", 1, __parameter_types__, __parameters__);
				};
			
				PermissionSet(mscorlib::System::Security::PermissionSet &permSet)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.PermissionSet"))
				, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
				, mscorlib::System::Collections::ICollection(NULL)
				, mscorlib::System::Security::ISecurityEncodable(NULL)
				, mscorlib::System::Security::IStackWalk(NULL)
				, mscorlib::System::Collections::IEnumerable(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.Security", "PermissionSet");
					__parameters__[0] = (MonoObject*)permSet;
					__native_object__ = Global::New("mscorlib", "System.Security", "PermissionSet", 1, __parameter_types__, __parameters__);
				};
			
				PermissionSet(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
				, mscorlib::System::Collections::ICollection(NULL)
				, mscorlib::System::Security::ISecurityEncodable(NULL)
				, mscorlib::System::Security::IStackWalk(NULL)
				, mscorlib::System::Collections::IEnumerable(NULL)
				{
				};
			
				PermissionSet(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				, mscorlib::System::Runtime::Serialization::IDeserializationCallback(nativeObject)
				, mscorlib::System::Collections::ICollection(nativeObject)
				, mscorlib::System::Security::ISecurityEncodable(nativeObject)
				, mscorlib::System::Security::IStackWalk(nativeObject)
				, mscorlib::System::Collections::IEnumerable(nativeObject)
				{
				};
			
				~PermissionSet()
				{
				};
			

				PermissionSet & operator=(PermissionSet &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				mscorlib::System::Security::IPermission  AddPermission(mscorlib::System::Security::IPermission perm);
				virtual void  Assert();
				virtual mscorlib::System::Security::PermissionSet  Copy();
				virtual void  CopyTo(mscorlib::System::Array array, mscorlib::System::Int32 index);
				virtual void  Demand();
				virtual void  Deny();
				virtual void  FromXml(mscorlib::System::Security::SecurityElement et);
				virtual mscorlib::System::Collections::IEnumerator * GetEnumerator();
				mscorlib::System::Boolean  IsSubsetOf(mscorlib::System::Security::PermissionSet target);
				virtual void  PermitOnly();
				mscorlib::System::Boolean  ContainsNonCodeAccessPermissions();
				static std::vector<mscorlib::System::Byte*>  ConvertPermissionSet(mscorlib::System::String inFormat, std::vector<mscorlib::System::Byte*> inData, mscorlib::System::String outFormat);
				mscorlib::System::Security::IPermission  GetPermission(mscorlib::System::Type permClass);
				mscorlib::System::Security::PermissionSet  Intersect(mscorlib::System::Security::PermissionSet other);
				mscorlib::System::Boolean  IsEmpty();
				mscorlib::System::Boolean  IsUnrestricted();
				mscorlib::System::Security::IPermission  RemovePermission(mscorlib::System::Type permClass);
				mscorlib::System::Security::IPermission  SetPermission(mscorlib::System::Security::IPermission perm);
				virtual mscorlib::System::String  ToString() override;
				virtual mscorlib::System::Security::SecurityElement  ToXml();
				mscorlib::System::Security::PermissionSet  Union(mscorlib::System::Security::PermissionSet other);
				virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object obj) override;
				virtual mscorlib::System::Int32  GetHashCode() override;
				static void  RevertAssert();
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_Count)) mscorlib::System::Int32  Count;
				__declspec(property(get=get_IsSynchronized)) mscorlib::System::Boolean  IsSynchronized;
				__declspec(property(get=get_IsReadOnly)) mscorlib::System::Boolean  IsReadOnly;
				__declspec(property(get=get_SyncRoot)) mscorlib::System::Object  SyncRoot;

				//Get Set Properties Methods
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
