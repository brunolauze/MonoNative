#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL_H

#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_GenericAcl.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_ICollection.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IEnumerable.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AceEnumerator.h>

namespace mscorlib
{
	namespace System
	{

		class Byte;
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

				class GenericAce;
				

			}
		}
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

				class SecurityIdentifier;
				

			}
		}
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

				class CommonAcl
					: public mscorlib::System::Security::AccessControl::GenericAcl
					, public virtual mscorlib::System::Collections::ICollection
					, public virtual mscorlib::System::Collections::IEnumerable
				{
				public:
					CommonAcl(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::AccessControl::GenericAcl(nativeTypeInfo)
					, mscorlib::System::Collections::ICollection(NULL)
					, mscorlib::System::Collections::IEnumerable(NULL)
					{
					};
				
					CommonAcl(MonoObject *nativeObject)
					: mscorlib::System::Security::AccessControl::GenericAcl(nativeObject)
					, mscorlib::System::Collections::ICollection(nativeObject)
					, mscorlib::System::Collections::IEnumerable(nativeObject)
					{
					};
				
					~CommonAcl()
					{
					};
				

					CommonAcl & operator=(CommonAcl &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(CommonAcl &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual void  GetBinaryForm(std::vector<mscorlib::System::Byte*> binaryForm, mscorlib::System::Int32 offset) override;
					void  Purge(mscorlib::System::Security::Principal::SecurityIdentifier sid);
					void  RemoveInheritedAces();
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_BinaryLength)) mscorlib::System::Int32  BinaryLength;
					__declspec(property(get=get_Count)) mscorlib::System::Int32  Count;
					__declspec(property(get=get_IsCanonical)) mscorlib::System::Boolean  IsCanonical;
					__declspec(property(get=get_IsContainer)) mscorlib::System::Boolean  IsContainer;
					__declspec(property(get=get_IsDS)) mscorlib::System::Boolean  IsDS;
					__declspec(property(get=get_Revision)) mscorlib::System::Byte  Revision;
					__declspec(property(get=get_Item, put=set_Item)) mscorlib::System::Security::AccessControl::GenericAce  Item[];

					//Get Set Properties Methods
					//	Get:BinaryLength
					mscorlib::System::Int32  get_BinaryLength() const;

					//	Get:Count
					mscorlib::System::Int32  get_Count() const;

					//	Get:IsCanonical
					mscorlib::System::Boolean  get_IsCanonical() const;

					//	Get:IsContainer
					mscorlib::System::Boolean  get_IsContainer() const;

					//	Get:IsDS
					mscorlib::System::Boolean  get_IsDS() const;

					//	Get:Revision
					mscorlib::System::Byte  get_Revision() const;

					//	Get/Set:Item
					mscorlib::System::Security::AccessControl::GenericAce  get_Item(mscorlib::System::Int32 index) const;
					void set_Item(mscorlib::System::Int32 index, mscorlib::System::Security::AccessControl::GenericAce  value);

					//	Get:IsSynchronized
					mscorlib::System::Boolean  get_IsSynchronized() const;

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
