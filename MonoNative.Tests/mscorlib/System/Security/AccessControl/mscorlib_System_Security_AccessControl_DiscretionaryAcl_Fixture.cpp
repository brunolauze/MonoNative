// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Security.AccessControl
// Name: DiscretionaryAcl
// C++ Typed Name: mscorlib::System::Security::AccessControl::DiscretionaryAcl


#include <gtest/gtest.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_DiscretionaryAcl.h>
#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_SecurityIdentifier.h>
#include <mscorlib/System/mscorlib_System_Guid.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_GenericAce.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace AccessControl
			{

				//Constructors Tests
				
				//DiscretionaryAcl(mscorlib::System::Boolean isContainer, mscorlib::System::Boolean isDS, mscorlib::System::Int32 capacity)
				TEST(mscorlib_System_Security_AccessControl_DiscretionaryAcl_Fixture,Constructor_1)
				{
					
					
					
				}
				
				//DiscretionaryAcl(mscorlib::System::Boolean isContainer, mscorlib::System::Boolean isDS, mscorlib::System::Security::AccessControl::RawAcl rawAcl)
				TEST(mscorlib_System_Security_AccessControl_DiscretionaryAcl_Fixture,Constructor_2)
				{
					
					
					
				}
				
				//DiscretionaryAcl(mscorlib::System::Boolean isContainer, mscorlib::System::Boolean isDS, mscorlib::System::Byte revision, mscorlib::System::Int32 capacity)
				TEST(mscorlib_System_Security_AccessControl_DiscretionaryAcl_Fixture,Constructor_3)
				{
					
					
					
				}
				
				//Public Methods Tests
				
				// Method AddAccess
				//		Signature: mscorlib::System::Security::AccessControl::AccessControlType::__ENUM__ accessType, mscorlib::System::Security::Principal::SecurityIdentifier sid, mscorlib::System::Int32 accessMask, mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__ inheritanceFlags, mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__ propagationFlags
				TEST(mscorlib_System_Security_AccessControl_DiscretionaryAcl_Fixture,AddAccess_1_Test)
				{
					
					
				}

				// Method AddAccess
				//		Signature: mscorlib::System::Security::AccessControl::AccessControlType::__ENUM__ accessType, mscorlib::System::Security::Principal::SecurityIdentifier sid, mscorlib::System::Int32 accessMask, mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__ inheritanceFlags, mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__ propagationFlags, mscorlib::System::Security::AccessControl::ObjectAceFlags::__ENUM__ objectFlags, mscorlib::System::Guid objectType, mscorlib::System::Guid inheritedObjectType
				TEST(mscorlib_System_Security_AccessControl_DiscretionaryAcl_Fixture,AddAccess_2_Test)
				{
					
					
				}

				// Method RemoveAccess
				//		Signature: mscorlib::System::Security::AccessControl::AccessControlType::__ENUM__ accessType, mscorlib::System::Security::Principal::SecurityIdentifier sid, mscorlib::System::Int32 accessMask, mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__ inheritanceFlags, mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__ propagationFlags
				TEST(mscorlib_System_Security_AccessControl_DiscretionaryAcl_Fixture,RemoveAccess_1_Test)
				{
					
					
				}

				// Method RemoveAccess
				//		Signature: mscorlib::System::Security::AccessControl::AccessControlType::__ENUM__ accessType, mscorlib::System::Security::Principal::SecurityIdentifier sid, mscorlib::System::Int32 accessMask, mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__ inheritanceFlags, mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__ propagationFlags, mscorlib::System::Security::AccessControl::ObjectAceFlags::__ENUM__ objectFlags, mscorlib::System::Guid objectType, mscorlib::System::Guid inheritedObjectType
				TEST(mscorlib_System_Security_AccessControl_DiscretionaryAcl_Fixture,RemoveAccess_2_Test)
				{
					
					
				}

				// Method RemoveAccessSpecific
				//		Signature: mscorlib::System::Security::AccessControl::AccessControlType::__ENUM__ accessType, mscorlib::System::Security::Principal::SecurityIdentifier sid, mscorlib::System::Int32 accessMask, mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__ inheritanceFlags, mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__ propagationFlags
				TEST(mscorlib_System_Security_AccessControl_DiscretionaryAcl_Fixture,RemoveAccessSpecific_1_Test)
				{
					
					
				}

				// Method RemoveAccessSpecific
				//		Signature: mscorlib::System::Security::AccessControl::AccessControlType::__ENUM__ accessType, mscorlib::System::Security::Principal::SecurityIdentifier sid, mscorlib::System::Int32 accessMask, mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__ inheritanceFlags, mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__ propagationFlags, mscorlib::System::Security::AccessControl::ObjectAceFlags::__ENUM__ objectFlags, mscorlib::System::Guid objectType, mscorlib::System::Guid inheritedObjectType
				TEST(mscorlib_System_Security_AccessControl_DiscretionaryAcl_Fixture,RemoveAccessSpecific_2_Test)
				{
					
					
				}

				// Method SetAccess
				//		Signature: mscorlib::System::Security::AccessControl::AccessControlType::__ENUM__ accessType, mscorlib::System::Security::Principal::SecurityIdentifier sid, mscorlib::System::Int32 accessMask, mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__ inheritanceFlags, mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__ propagationFlags
				TEST(mscorlib_System_Security_AccessControl_DiscretionaryAcl_Fixture,SetAccess_1_Test)
				{
					
					
				}

				// Method SetAccess
				//		Signature: mscorlib::System::Security::AccessControl::AccessControlType::__ENUM__ accessType, mscorlib::System::Security::Principal::SecurityIdentifier sid, mscorlib::System::Int32 accessMask, mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__ inheritanceFlags, mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__ propagationFlags, mscorlib::System::Security::AccessControl::ObjectAceFlags::__ENUM__ objectFlags, mscorlib::System::Guid objectType, mscorlib::System::Guid inheritedObjectType
				TEST(mscorlib_System_Security_AccessControl_DiscretionaryAcl_Fixture,SetAccess_2_Test)
				{
					
					
				}

				//Public Properties Tests
				
				// Property BinaryLength
				//		Return Type: mscorlib::System::Int32
				//			Property Get Method
				TEST(mscorlib_System_Security_AccessControl_DiscretionaryAcl_Fixture,get_BinaryLength_Test)
				{
					
					
				}

				// Property Count
				//		Return Type: mscorlib::System::Int32
				//			Property Get Method
				TEST(mscorlib_System_Security_AccessControl_DiscretionaryAcl_Fixture,get_Count_Test)
				{
					
					
				}

				// Property IsCanonical
				//		Return Type: mscorlib::System::Boolean
				//			Property Get Method
				TEST(mscorlib_System_Security_AccessControl_DiscretionaryAcl_Fixture,get_IsCanonical_Test)
				{
					
					
				}

				// Property IsContainer
				//		Return Type: mscorlib::System::Boolean
				//			Property Get Method
				TEST(mscorlib_System_Security_AccessControl_DiscretionaryAcl_Fixture,get_IsContainer_Test)
				{
					
					
				}

				// Property IsDS
				//		Return Type: mscorlib::System::Boolean
				//			Property Get Method
				TEST(mscorlib_System_Security_AccessControl_DiscretionaryAcl_Fixture,get_IsDS_Test)
				{
					
					
				}

				// Property Revision
				//		Return Type: mscorlib::System::Byte
				//			Property Get Method
				TEST(mscorlib_System_Security_AccessControl_DiscretionaryAcl_Fixture,get_Revision_Test)
				{
					
					
				}

				// Property Item
				//		Return Type: mscorlib::System::Security::AccessControl::GenericAce
				//			Property Get Method
				TEST(mscorlib_System_Security_AccessControl_DiscretionaryAcl_Fixture,get_Item_Test)
				{
					
					
				}

				// Property Item
				//		Return Type: mscorlib::System::Security::AccessControl::GenericAce
				//			Property Set Method
				TEST(mscorlib_System_Security_AccessControl_DiscretionaryAcl_Fixture,set_Item_Test)
				{
					
					
				}

				// Property IsSynchronized
				//		Return Type: mscorlib::System::Boolean
				//			Property Get Method
				TEST(mscorlib_System_Security_AccessControl_DiscretionaryAcl_Fixture,get_IsSynchronized_Test)
				{
					
					
				}

				// Property SyncRoot
				//		Return Type: mscorlib::System::Object
				//			Property Get Method
				TEST(mscorlib_System_Security_AccessControl_DiscretionaryAcl_Fixture,get_SyncRoot_Test)
				{
					
					
				}


			}
		}
	}
}
