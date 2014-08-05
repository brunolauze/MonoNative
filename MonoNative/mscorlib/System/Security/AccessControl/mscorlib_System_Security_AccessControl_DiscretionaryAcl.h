#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_DISCRETIONARYACL_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_DISCRETIONARYACL_H

#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_CommonAcl.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_RawAcl.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_ICollection.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IEnumerable.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AccessControlType.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_InheritanceFlags.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_PropagationFlags.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_ObjectAceFlags.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AceEnumerator.h>

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

		class Guid;
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
			namespace AccessControl
			{

				class DiscretionaryAcl
					: public mscorlib::System::Security::AccessControl::CommonAcl
					, public virtual mscorlib::System::Collections::ICollection
					, public virtual mscorlib::System::Collections::IEnumerable
				{
				public:
					DiscretionaryAcl(mscorlib::System::Boolean isContainer, mscorlib::System::Boolean isDS, mscorlib::System::Int32 capacity)
					: mscorlib::System::Security::AccessControl::CommonAcl(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.AccessControl.DiscretionaryAcl"))
					, mscorlib::System::Collections::ICollection(NULL)
					, mscorlib::System::Collections::IEnumerable(NULL)
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Boolean");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "Boolean");
						__parameter_types__[2] = Global::GetType("mscorlib", "System", "Int32");
						__parameters__[0] = reinterpret_cast<void*>(isContainer);
						__parameters__[1] = reinterpret_cast<void*>(isDS);
						__parameters__[2] = &capacity;
						__native_object__ = Global::New("mscorlib", "System.Security.AccessControl", "DiscretionaryAcl", 3, __parameter_types__, __parameters__);
					};
				
					DiscretionaryAcl(mscorlib::System::Boolean isContainer, mscorlib::System::Boolean isDS, mscorlib::System::Security::AccessControl::RawAcl rawAcl)
					: mscorlib::System::Security::AccessControl::CommonAcl(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.AccessControl.DiscretionaryAcl"))
					, mscorlib::System::Collections::ICollection(NULL)
					, mscorlib::System::Collections::IEnumerable(NULL)
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Boolean");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "Boolean");
						__parameter_types__[2] = Global::GetType("mscorlib", "System.Security.AccessControl", "RawAcl");
						__parameters__[0] = reinterpret_cast<void*>(isContainer);
						__parameters__[1] = reinterpret_cast<void*>(isDS);
						__parameters__[2] = (MonoObject*)rawAcl;
						__native_object__ = Global::New("mscorlib", "System.Security.AccessControl", "DiscretionaryAcl", 3, __parameter_types__, __parameters__);
					};
				
					DiscretionaryAcl(mscorlib::System::Boolean isContainer, mscorlib::System::Boolean isDS, mscorlib::System::Byte revision, mscorlib::System::Int32 capacity)
					: mscorlib::System::Security::AccessControl::CommonAcl(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.AccessControl.DiscretionaryAcl"))
					, mscorlib::System::Collections::ICollection(NULL)
					, mscorlib::System::Collections::IEnumerable(NULL)
					{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Boolean");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "Boolean");
						__parameter_types__[2] = Global::GetType("mscorlib", "System", "Byte");
						__parameter_types__[3] = Global::GetType("mscorlib", "System", "Int32");
						__parameters__[0] = reinterpret_cast<void*>(isContainer);
						__parameters__[1] = reinterpret_cast<void*>(isDS);
						__parameters__[2] = (MonoObject*)revision;
						__parameters__[3] = &capacity;
						__native_object__ = Global::New("mscorlib", "System.Security.AccessControl", "DiscretionaryAcl", 4, __parameter_types__, __parameters__);
					};
				
					DiscretionaryAcl(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::AccessControl::CommonAcl(nativeTypeInfo)
					, mscorlib::System::Collections::ICollection(NULL)
					, mscorlib::System::Collections::IEnumerable(NULL)
					{
					};
				
					DiscretionaryAcl(MonoObject *nativeObject)
					: mscorlib::System::Security::AccessControl::CommonAcl(nativeObject)
					, mscorlib::System::Collections::ICollection(nativeObject)
					, mscorlib::System::Collections::IEnumerable(nativeObject)
					{
					};
				
					~DiscretionaryAcl()
					{
					};
				

					DiscretionaryAcl & operator=(DiscretionaryAcl &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					void  AddAccess(mscorlib::System::Security::AccessControl::AccessControlType::__ENUM__ accessType, mscorlib::System::Security::Principal::SecurityIdentifier sid, mscorlib::System::Int32 accessMask, mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__ inheritanceFlags, mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__ propagationFlags);
					void  AddAccess(mscorlib::System::Security::AccessControl::AccessControlType::__ENUM__ accessType, mscorlib::System::Security::Principal::SecurityIdentifier sid, mscorlib::System::Int32 accessMask, mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__ inheritanceFlags, mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__ propagationFlags, mscorlib::System::Security::AccessControl::ObjectAceFlags::__ENUM__ objectFlags, mscorlib::System::Guid objectType, mscorlib::System::Guid inheritedObjectType);
					mscorlib::System::Boolean  RemoveAccess(mscorlib::System::Security::AccessControl::AccessControlType::__ENUM__ accessType, mscorlib::System::Security::Principal::SecurityIdentifier sid, mscorlib::System::Int32 accessMask, mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__ inheritanceFlags, mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__ propagationFlags);
					mscorlib::System::Boolean  RemoveAccess(mscorlib::System::Security::AccessControl::AccessControlType::__ENUM__ accessType, mscorlib::System::Security::Principal::SecurityIdentifier sid, mscorlib::System::Int32 accessMask, mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__ inheritanceFlags, mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__ propagationFlags, mscorlib::System::Security::AccessControl::ObjectAceFlags::__ENUM__ objectFlags, mscorlib::System::Guid objectType, mscorlib::System::Guid inheritedObjectType);
					void  RemoveAccessSpecific(mscorlib::System::Security::AccessControl::AccessControlType::__ENUM__ accessType, mscorlib::System::Security::Principal::SecurityIdentifier sid, mscorlib::System::Int32 accessMask, mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__ inheritanceFlags, mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__ propagationFlags);
					void  RemoveAccessSpecific(mscorlib::System::Security::AccessControl::AccessControlType::__ENUM__ accessType, mscorlib::System::Security::Principal::SecurityIdentifier sid, mscorlib::System::Int32 accessMask, mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__ inheritanceFlags, mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__ propagationFlags, mscorlib::System::Security::AccessControl::ObjectAceFlags::__ENUM__ objectFlags, mscorlib::System::Guid objectType, mscorlib::System::Guid inheritedObjectType);
					void  SetAccess(mscorlib::System::Security::AccessControl::AccessControlType::__ENUM__ accessType, mscorlib::System::Security::Principal::SecurityIdentifier sid, mscorlib::System::Int32 accessMask, mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__ inheritanceFlags, mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__ propagationFlags);
					void  SetAccess(mscorlib::System::Security::AccessControl::AccessControlType::__ENUM__ accessType, mscorlib::System::Security::Principal::SecurityIdentifier sid, mscorlib::System::Int32 accessMask, mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__ inheritanceFlags, mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__ propagationFlags, mscorlib::System::Security::AccessControl::ObjectAceFlags::__ENUM__ objectFlags, mscorlib::System::Guid objectType, mscorlib::System::Guid inheritedObjectType);
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
