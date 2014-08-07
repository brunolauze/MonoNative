#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_GENERICSECURITYDESCRIPTOR_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_GENERICSECURITYDESCRIPTOR_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_ControlFlags.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AccessControlSections.h>

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

		class Byte;
		class String;
		class Type;
		

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

				class GenericSecurityDescriptor
					: public mscorlib::System::Object
				{
				public:
					GenericSecurityDescriptor(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					GenericSecurityDescriptor(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~GenericSecurityDescriptor()
					{
					};
				

					GenericSecurityDescriptor & operator=(GenericSecurityDescriptor &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(GenericSecurityDescriptor &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					void  GetBinaryForm(std::vector<mscorlib::System::Byte*> binaryForm, mscorlib::System::Int32 offset);
					mscorlib::System::String  GetSddlForm(mscorlib::System::Security::AccessControl::AccessControlSections::__ENUM__ includeSections);
					static mscorlib::System::Boolean  IsSddlConversionSupported();
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_BinaryLength)) mscorlib::System::Int32  BinaryLength;
					__declspec(property(get=get_ControlFlags)) mscorlib::System::Security::AccessControl::ControlFlags::__ENUM__  ControlFlags;
					__declspec(property(get=get_Group, put=set_Group)) mscorlib::System::Security::Principal::SecurityIdentifier  Group;
					__declspec(property(get=get_Owner, put=set_Owner)) mscorlib::System::Security::Principal::SecurityIdentifier  Owner;

					//Public Static Properties
					static Property<mscorlib::System::Byte , mscorlib::System::Security::AccessControl::GenericSecurityDescriptor> Revision;

					//Get Set Properties Methods
					//	Get:BinaryLength
					mscorlib::System::Int32  get_BinaryLength() const;

					//	Get:ControlFlags
					mscorlib::System::Security::AccessControl::ControlFlags::__ENUM__  get_ControlFlags() const;

					//	Get/Set:Group
					mscorlib::System::Security::Principal::SecurityIdentifier  get_Group() const;
					void set_Group(mscorlib::System::Security::Principal::SecurityIdentifier  value);

					//	Get/Set:Owner
					mscorlib::System::Security::Principal::SecurityIdentifier  get_Owner() const;
					void set_Owner(mscorlib::System::Security::Principal::SecurityIdentifier  value);

					//Get Set Static Properties Methods
					//	Get:Revision
					static mscorlib::System::Byte  get_Revision();
					static void set_Revision(mscorlib::System::Byte  value);


				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
