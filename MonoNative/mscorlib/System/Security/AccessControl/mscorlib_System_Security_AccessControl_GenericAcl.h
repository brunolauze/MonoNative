#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_GENERICACL_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_GENERICACL_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_ICollection.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IEnumerable.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AceEnumerator.h>

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

				class GenericAcl
					: public mscorlib::System::Object
					, public virtual mscorlib::System::Collections::ICollection
					, public virtual mscorlib::System::Collections::IEnumerable
				{
				public:
					GenericAcl(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					, mscorlib::System::Collections::ICollection(NULL)
					, mscorlib::System::Collections::IEnumerable(NULL)
					{
					};
				
					GenericAcl(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					, mscorlib::System::Collections::ICollection(nativeObject)
					, mscorlib::System::Collections::IEnumerable(nativeObject)
					{
					};
				
					~GenericAcl()
					{
					};
				

					GenericAcl & operator=(GenericAcl &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					void  CopyTo(std::vector<mscorlib::System::Security::AccessControl::GenericAce*> array, mscorlib::System::Int32 index);
					virtual void  GetBinaryForm(std::vector<mscorlib::System::Byte*> binaryForm, mscorlib::System::Int32 offset);
					mscorlib::System::Security::AccessControl::AceEnumerator * GetEnumerator();
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_BinaryLength)) mscorlib::System::Int32  BinaryLength;
					__declspec(property(get=get_Count)) mscorlib::System::Int32  Count;
					__declspec(property(get=get_IsSynchronized)) mscorlib::System::Boolean  IsSynchronized;
					__declspec(property(get=get_Item, put=set_Item)) mscorlib::System::Security::AccessControl::GenericAce  Item[];

					//Public Static Fields
					static Property<mscorlib::System::Byte , mscorlib::System::Security::AccessControl::GenericAcl> AclRevision;
					static Property<mscorlib::System::Byte , mscorlib::System::Security::AccessControl::GenericAcl> AclRevisionDS;
					static Property<mscorlib::System::Int32 , mscorlib::System::Security::AccessControl::GenericAcl> MaxBinaryLength;

					//Get Set Properties Methods
					//	Get:BinaryLength
					mscorlib::System::Int32  get_BinaryLength() const;

					//	Get:Count
					mscorlib::System::Int32  get_Count() const;

					//	Get:IsSynchronized
					mscorlib::System::Boolean  get_IsSynchronized() const;

					//	Get/Set:Item
					mscorlib::System::Security::AccessControl::GenericAce  get_Item(mscorlib::System::Int32 index) const;
					void set_Item(mscorlib::System::Int32 index, mscorlib::System::Security::AccessControl::GenericAce  value);

					//	Get:Revision
					mscorlib::System::Byte  get_Revision() const;

					//	Get:SyncRoot
					mscorlib::System::Object  get_SyncRoot() const;

					//	Get/Set:AclRevision
					static mscorlib::System::Byte  get_AclRevision();
					static void set_AclRevision(mscorlib::System::Byte  value);

					//	Get/Set:AclRevisionDS
					static mscorlib::System::Byte  get_AclRevisionDS();
					static void set_AclRevisionDS(mscorlib::System::Byte  value);

					//	Get/Set:MaxBinaryLength
					static mscorlib::System::Int32  get_MaxBinaryLength();
					static void set_MaxBinaryLength(mscorlib::System::Int32  value);

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
