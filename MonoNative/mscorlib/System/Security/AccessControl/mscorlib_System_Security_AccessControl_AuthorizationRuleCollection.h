#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_AUTHORIZATIONRULECOLLECTION_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_AUTHORIZATIONRULECOLLECTION_H

#include <mscorlib/System/Collections/mscorlib_System_Collections_ReadOnlyCollectionBase.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_ICollection.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IEnumerable.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IEnumerator.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace AccessControl
			{

				class AuthorizationRule;
				

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
			namespace AccessControl
			{

				class AuthorizationRuleCollection
					: public mscorlib::System::Collections::ReadOnlyCollectionBase
					, public virtual mscorlib::System::Collections::ICollection
					, public virtual mscorlib::System::Collections::IEnumerable
				{
				public:
					AuthorizationRuleCollection(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Collections::ReadOnlyCollectionBase(nativeTypeInfo)
					, mscorlib::System::Collections::ICollection(NULL)
					, mscorlib::System::Collections::IEnumerable(NULL)
					{
					};
				
					AuthorizationRuleCollection(MonoObject *nativeObject)
					: mscorlib::System::Collections::ReadOnlyCollectionBase(nativeObject)
					, mscorlib::System::Collections::ICollection(nativeObject)
					, mscorlib::System::Collections::IEnumerable(nativeObject)
					{
					};
				
					~AuthorizationRuleCollection()
					{
					};
				

					AuthorizationRuleCollection & operator=(AuthorizationRuleCollection &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(AuthorizationRuleCollection &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					void  CopyTo(std::vector<mscorlib::System::Security::AccessControl::AuthorizationRule*> rules, mscorlib::System::Int32 index);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Item)) mscorlib::System::Security::AccessControl::AuthorizationRule  Item[];

					//Get Set Properties Methods
					//	Get:Item
					mscorlib::System::Security::AccessControl::AuthorizationRule  get_Item(mscorlib::System::Int32 index) const;

					//	Get:Count
					mscorlib::System::Int32  get_Count() const;

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
