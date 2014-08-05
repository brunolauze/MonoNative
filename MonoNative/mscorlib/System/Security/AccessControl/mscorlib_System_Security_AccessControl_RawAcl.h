#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_RAWACL_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_RAWACL_H

#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_GenericAcl.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_ICollection.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IEnumerable.h>
#include <mscorlib/System/mscorlib_System_Object.h>
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

				class RawAcl
					: public mscorlib::System::Security::AccessControl::GenericAcl
					, public virtual mscorlib::System::Collections::ICollection
					, public virtual mscorlib::System::Collections::IEnumerable
				{
				public:
					RawAcl(mscorlib::System::Byte revision, mscorlib::System::Int32 capacity)
					: mscorlib::System::Security::AccessControl::GenericAcl(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.AccessControl.RawAcl"))
					, mscorlib::System::Collections::ICollection(NULL)
					, mscorlib::System::Collections::IEnumerable(NULL)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Byte");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int32");
						__parameters__[0] = (MonoObject*)revision;
						__parameters__[1] = &capacity;
						__native_object__ = Global::New("mscorlib", "System.Security.AccessControl", "RawAcl", 2, __parameter_types__, __parameters__);
					};
				
					RawAcl(std::vector<mscorlib::System::Byte*> binaryForm, mscorlib::System::Int32 offset)
					: mscorlib::System::Security::AccessControl::GenericAcl(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.AccessControl.RawAcl"))
					, mscorlib::System::Collections::ICollection(NULL)
					, mscorlib::System::Collections::IEnumerable(NULL)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType("mscorlib", "System", "Byte"))->eklass);
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int32");
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(binaryForm, "mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089", "System", "Byte");
						__parameters__[1] = &offset;
						__native_object__ = Global::New("mscorlib", "System.Security.AccessControl", "RawAcl", 2, __parameter_types__, __parameters__);
					};
				
					RawAcl(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::AccessControl::GenericAcl(nativeTypeInfo)
					, mscorlib::System::Collections::ICollection(NULL)
					, mscorlib::System::Collections::IEnumerable(NULL)
					{
					};
				
					RawAcl(MonoObject *nativeObject)
					: mscorlib::System::Security::AccessControl::GenericAcl(nativeObject)
					, mscorlib::System::Collections::ICollection(nativeObject)
					, mscorlib::System::Collections::IEnumerable(nativeObject)
					{
					};
				
					~RawAcl()
					{
					};
				

					RawAcl & operator=(RawAcl &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual void  GetBinaryForm(std::vector<mscorlib::System::Byte*> binaryForm, mscorlib::System::Int32 offset) override;
					void  InsertAce(mscorlib::System::Int32 index, mscorlib::System::Security::AccessControl::GenericAce ace);
					void  RemoveAce(mscorlib::System::Int32 index);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_BinaryLength)) mscorlib::System::Int32  BinaryLength;
					__declspec(property(get=get_Count)) mscorlib::System::Int32  Count;
					__declspec(property(get=get_Item, put=set_Item)) mscorlib::System::Security::AccessControl::GenericAce  Item[];

					//Get Set Properties Methods
					//	Get:BinaryLength
					mscorlib::System::Int32  get_BinaryLength() const;

					//	Get:Count
					mscorlib::System::Int32  get_Count() const;

					//	Get/Set:Item
					mscorlib::System::Security::AccessControl::GenericAce  get_Item(mscorlib::System::Int32 index) const;
					void set_Item(mscorlib::System::Int32 index, mscorlib::System::Security::AccessControl::GenericAce  value);

					//	Get:Revision
					mscorlib::System::Byte  get_Revision() const;

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
