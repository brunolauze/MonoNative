#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_KEYCONTAINERPERMISSIONACCESSENTRYENUMERATOR_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_KEYCONTAINERPERMISSIONACCESSENTRYENUMERATOR_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IEnumerator.h>

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

				class KeyContainerPermissionAccessEntryEnumerator
					: public mscorlib::System::Object
					, public virtual mscorlib::System::Collections::IEnumerator
				{
				public:
					KeyContainerPermissionAccessEntryEnumerator(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					, mscorlib::System::Collections::IEnumerator(NULL)
					{
					};
				
					KeyContainerPermissionAccessEntryEnumerator(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					, mscorlib::System::Collections::IEnumerator(nativeObject)
					{
					};
				
					~KeyContainerPermissionAccessEntryEnumerator()
					{
					};
				

					KeyContainerPermissionAccessEntryEnumerator & operator=(KeyContainerPermissionAccessEntryEnumerator &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Boolean  MoveNext();
					virtual void  Reset();
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Current)) mscorlib::System::Security::Permissions::KeyContainerPermissionAccessEntry  Current;

					//Get Set Properties Methods
					//	Get:Current
					mscorlib::System::Security::Permissions::KeyContainerPermissionAccessEntry  get_Current() const;

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
