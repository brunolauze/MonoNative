#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_POLICY_APPLICATIONTRUSTCOLLECTION_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_POLICY_APPLICATIONTRUSTCOLLECTION_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_ICollection.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IEnumerable.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_ApplicationVersionMatch.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_ApplicationTrustEnumerator.h>

namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Policy
			{

				class ApplicationTrust;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{

		class String;
		class ApplicationIdentity;
		class Type;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Policy
			{

				class ApplicationTrustCollection
					: public mscorlib::System::Object
					, public virtual mscorlib::System::Collections::ICollection
					, public virtual mscorlib::System::Collections::IEnumerable
				{
				public:
					ApplicationTrustCollection(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					, mscorlib::System::Collections::ICollection(NULL)
					, mscorlib::System::Collections::IEnumerable(NULL)
					{
					};
				
					ApplicationTrustCollection(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					, mscorlib::System::Collections::ICollection(nativeObject)
					, mscorlib::System::Collections::IEnumerable(nativeObject)
					{
					};
				
					~ApplicationTrustCollection()
					{
					};
				

					ApplicationTrustCollection & operator=(ApplicationTrustCollection &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					mscorlib::System::Int32  Add(mscorlib::System::Security::Policy::ApplicationTrust trust);
					void  AddRange(std::vector<mscorlib::System::Security::Policy::ApplicationTrust*> trusts);
					void  AddRange(mscorlib::System::Security::Policy::ApplicationTrustCollection trusts);
					void  Clear();
					void  CopyTo(std::vector<mscorlib::System::Security::Policy::ApplicationTrust*> array, mscorlib::System::Int32 index);
					mscorlib::System::Security::Policy::ApplicationTrustCollection  Find(mscorlib::System::ApplicationIdentity applicationIdentity, mscorlib::System::Security::Policy::ApplicationVersionMatch::__ENUM__ versionMatch);
					mscorlib::System::Security::Policy::ApplicationTrustEnumerator * GetEnumerator();
					void  Remove(mscorlib::System::Security::Policy::ApplicationTrust trust);
					void  Remove(mscorlib::System::ApplicationIdentity applicationIdentity, mscorlib::System::Security::Policy::ApplicationVersionMatch::__ENUM__ versionMatch);
					void  RemoveRange(std::vector<mscorlib::System::Security::Policy::ApplicationTrust*> trusts);
					void  RemoveRange(mscorlib::System::Security::Policy::ApplicationTrustCollection trusts);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Count)) mscorlib::System::Int32  Count;
					__declspec(property(get=get_IsSynchronized)) mscorlib::System::Boolean  IsSynchronized;
					__declspec(property(get=get_SyncRoot)) mscorlib::System::Object  SyncRoot;
					__declspec(property(get=get_Item)) mscorlib::System::Security::Policy::ApplicationTrust  Item[];

					//Get Set Properties Methods
					//	Get:Count
					mscorlib::System::Int32  get_Count() const;

					//	Get:IsSynchronized
					mscorlib::System::Boolean  get_IsSynchronized() const;

					//	Get:SyncRoot
					mscorlib::System::Object  get_SyncRoot() const;

					//	Get:Item
					mscorlib::System::Security::Policy::ApplicationTrust  get_Item(mscorlib::System::Int32 index) const;

					//	Get:Item
					mscorlib::System::Security::Policy::ApplicationTrust  get_Item(mscorlib::System::String appFullName) const;

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
