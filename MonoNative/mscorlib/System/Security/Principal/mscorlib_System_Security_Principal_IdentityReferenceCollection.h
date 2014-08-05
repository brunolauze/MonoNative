#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PRINCIPAL_IDENTITYREFERENCECOLLECTION_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PRINCIPAL_IDENTITYREFERENCECOLLECTION_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_ICollection_1.h>
#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_IdentityReference.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IEnumerable.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IEnumerable_1.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IEnumerator_1.h>

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
			namespace Principal
			{

				class IdentityReferenceCollection
					: public mscorlib::System::Object
					, public virtual mscorlib::System::Collections::Generic::ICollection<mscorlib::System::Security::Principal::IdentityReference>
					, public virtual mscorlib::System::Collections::IEnumerable
					, public virtual mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Security::Principal::IdentityReference>
				{
				public:
					IdentityReferenceCollection()
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Principal.IdentityReferenceCollection"))
					, mscorlib::System::Collections::Generic::ICollection<mscorlib::System::Security::Principal::IdentityReference>(NULL)
					, mscorlib::System::Collections::IEnumerable(NULL)
					, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Security::Principal::IdentityReference>(NULL)
					{
						__native_object__ = Global::New("mscorlib", "System.Security.Principal", "IdentityReferenceCollection");
					};
				
					IdentityReferenceCollection(mscorlib::System::Int32 capacity)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Principal.IdentityReferenceCollection"))
					, mscorlib::System::Collections::Generic::ICollection<mscorlib::System::Security::Principal::IdentityReference>(NULL)
					, mscorlib::System::Collections::IEnumerable(NULL)
					, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Security::Principal::IdentityReference>(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
						__parameters__[0] = &capacity;
						__native_object__ = Global::New("mscorlib", "System.Security.Principal", "IdentityReferenceCollection", 1, __parameter_types__, __parameters__);
					};
				
					IdentityReferenceCollection(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					, mscorlib::System::Collections::Generic::ICollection<mscorlib::System::Security::Principal::IdentityReference>(NULL)
					, mscorlib::System::Collections::IEnumerable(NULL)
					, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Security::Principal::IdentityReference>(NULL)
					{
					};
				
					IdentityReferenceCollection(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					, mscorlib::System::Collections::Generic::ICollection<mscorlib::System::Security::Principal::IdentityReference>(nativeObject)
					, mscorlib::System::Collections::IEnumerable(nativeObject)
					, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Security::Principal::IdentityReference>(nativeObject)
					{
					};
				
					~IdentityReferenceCollection()
					{
					};
				

					IdentityReferenceCollection & operator=(IdentityReferenceCollection &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual void  Add(mscorlib::System::Security::Principal::IdentityReference identity);
					virtual void  Clear();
					virtual mscorlib::System::Boolean  Contains(mscorlib::System::Security::Principal::IdentityReference identity);
					virtual void  CopyTo(std::vector<mscorlib::System::Security::Principal::IdentityReference*> array, mscorlib::System::Int32 offset);
					virtual mscorlib::System::Collections::Generic::IEnumerator<mscorlib::System::Security::Principal::IdentityReference> * GetEnumerator();
					virtual mscorlib::System::Boolean  Remove(mscorlib::System::Security::Principal::IdentityReference identity);
					mscorlib::System::Security::Principal::IdentityReferenceCollection  Translate(mscorlib::System::Type targetType);
					mscorlib::System::Security::Principal::IdentityReferenceCollection  Translate(mscorlib::System::Type targetType, mscorlib::System::Boolean forceSuccess);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Count)) mscorlib::System::Int32  Count;
					__declspec(property(get=get_IsReadOnly)) mscorlib::System::Boolean  IsReadOnly;
					__declspec(property(get=get_Item, put=set_Item)) mscorlib::System::Security::Principal::IdentityReference  Item[];

					//Get Set Properties Methods
					//	Get:Count
					mscorlib::System::Int32  get_Count() const;

					//	Get:IsReadOnly
					mscorlib::System::Boolean  get_IsReadOnly() const;

					//	Get/Set:Item
					mscorlib::System::Security::Principal::IdentityReference  get_Item(mscorlib::System::Int32 index) const;
					void set_Item(mscorlib::System::Int32 index, mscorlib::System::Security::Principal::IdentityReference  value);

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
