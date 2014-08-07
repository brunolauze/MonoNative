#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_KEYCONTAINERPERMISSIONACCESSENTRYCOLLECTION_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_KEYCONTAINERPERMISSIONACCESSENTRYCOLLECTION_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_ICollection.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IEnumerable.h>
#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_KeyContainerPermissionAccessEntryEnumerator.h>

namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Permissions
			{

				class KeyContainerPermissionAccessEntry;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{

		class Type;
		class String;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Permissions
			{

				class KeyContainerPermissionAccessEntryCollection
					: public mscorlib::System::Object
					, public virtual mscorlib::System::Collections::ICollection
					, public virtual mscorlib::System::Collections::IEnumerable
				{
				public:
					KeyContainerPermissionAccessEntryCollection(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					, mscorlib::System::Collections::ICollection(NULL)
					, mscorlib::System::Collections::IEnumerable(NULL)
					{
					};
				
					KeyContainerPermissionAccessEntryCollection(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					, mscorlib::System::Collections::ICollection(nativeObject)
					, mscorlib::System::Collections::IEnumerable(nativeObject)
					{
					};
				
					~KeyContainerPermissionAccessEntryCollection()
					{
					};
				

					KeyContainerPermissionAccessEntryCollection & operator=(KeyContainerPermissionAccessEntryCollection &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(KeyContainerPermissionAccessEntryCollection &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					mscorlib::System::Int32  Add(mscorlib::System::Security::Permissions::KeyContainerPermissionAccessEntry accessEntry);
					void  Clear();
					void  CopyTo(std::vector<mscorlib::System::Security::Permissions::KeyContainerPermissionAccessEntry*> array, mscorlib::System::Int32 index);
					mscorlib::System::Security::Permissions::KeyContainerPermissionAccessEntryEnumerator * GetEnumerator();
					mscorlib::System::Int32  IndexOf(mscorlib::System::Security::Permissions::KeyContainerPermissionAccessEntry accessEntry);
					void  Remove(mscorlib::System::Security::Permissions::KeyContainerPermissionAccessEntry accessEntry);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Count)) mscorlib::System::Int32  Count;
					__declspec(property(get=get_IsSynchronized)) mscorlib::System::Boolean  IsSynchronized;
					__declspec(property(get=get_Item)) mscorlib::System::Security::Permissions::KeyContainerPermissionAccessEntry  Item[];

					//Get Set Properties Methods
					//	Get:Count
					mscorlib::System::Int32  get_Count() const;

					//	Get:IsSynchronized
					mscorlib::System::Boolean  get_IsSynchronized() const;

					//	Get:Item
					mscorlib::System::Security::Permissions::KeyContainerPermissionAccessEntry  get_Item(mscorlib::System::Int32 index) const;

					//	Get:SyncRoot
					mscorlib::System::Object  get_SyncRoot() const;

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
