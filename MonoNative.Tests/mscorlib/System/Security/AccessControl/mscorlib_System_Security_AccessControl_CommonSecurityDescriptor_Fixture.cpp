// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Security.AccessControl
// Name: CommonSecurityDescriptor
// C++ Typed Name: mscorlib::System::Security::AccessControl::CommonSecurityDescriptor


#include <gtest/gtest.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_CommonSecurityDescriptor.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace AccessControl
			{

				//Constructors Tests
				
				//CommonSecurityDescriptor(mscorlib::System::Boolean isContainer, mscorlib::System::Boolean isDS, mscorlib::System::Security::AccessControl::RawSecurityDescriptor rawSecurityDescriptor)
				TEST(mscorlib_System_Security_AccessControl_CommonSecurityDescriptor_Fixture,Constructor_1)
				{
					
					
					
				}
				
				//CommonSecurityDescriptor(mscorlib::System::Boolean isContainer, mscorlib::System::Boolean isDS, mscorlib::System::String sddlForm)
				TEST(mscorlib_System_Security_AccessControl_CommonSecurityDescriptor_Fixture,Constructor_2)
				{
					
					
					
				}
				
				//CommonSecurityDescriptor(mscorlib::System::Boolean isContainer, mscorlib::System::Boolean isDS, std::vector<mscorlib::System::Byte*> binaryForm, mscorlib::System::Int32 offset)
				TEST(mscorlib_System_Security_AccessControl_CommonSecurityDescriptor_Fixture,Constructor_3)
				{
					
					
					
				}
				
				//CommonSecurityDescriptor(mscorlib::System::Boolean isContainer, mscorlib::System::Boolean isDS, mscorlib::System::Security::AccessControl::ControlFlags::__ENUM__ flags, mscorlib::System::Security::Principal::SecurityIdentifier owner, mscorlib::System::Security::Principal::SecurityIdentifier group, mscorlib::System::Security::AccessControl::SystemAcl systemAcl, mscorlib::System::Security::AccessControl::DiscretionaryAcl discretionaryAcl)
				TEST(mscorlib_System_Security_AccessControl_CommonSecurityDescriptor_Fixture,Constructor_4)
				{
					
					
					
				}
				
				//Public Methods Tests
				
				// Method PurgeAccessControl
				//		Signature: mscorlib::System::Security::Principal::SecurityIdentifier sid
				TEST(mscorlib_System_Security_AccessControl_CommonSecurityDescriptor_Fixture,PurgeAccessControl_Test)
				{
					
					
				}

				// Method PurgeAudit
				//		Signature: mscorlib::System::Security::Principal::SecurityIdentifier sid
				TEST(mscorlib_System_Security_AccessControl_CommonSecurityDescriptor_Fixture,PurgeAudit_Test)
				{
					
					
				}

				// Method SetDiscretionaryAclProtection
				//		Signature: mscorlib::System::Boolean isProtected, mscorlib::System::Boolean preserveInheritance
				TEST(mscorlib_System_Security_AccessControl_CommonSecurityDescriptor_Fixture,SetDiscretionaryAclProtection_Test)
				{
					
					
				}

				// Method SetSystemAclProtection
				//		Signature: mscorlib::System::Boolean isProtected, mscorlib::System::Boolean preserveInheritance
				TEST(mscorlib_System_Security_AccessControl_CommonSecurityDescriptor_Fixture,SetSystemAclProtection_Test)
				{
					
					
				}

				//Public Properties Tests
				
				// Property ControlFlags
				//		Return Type: mscorlib::System::Security::AccessControl::ControlFlags::__ENUM__
				//			Property Get Method
				TEST(mscorlib_System_Security_AccessControl_CommonSecurityDescriptor_Fixture,get_ControlFlags_Test)
				{
					
					
				}

				// Property DiscretionaryAcl
				//		Return Type: mscorlib::System::Security::AccessControl::DiscretionaryAcl
				//			Property Get Method
				TEST(mscorlib_System_Security_AccessControl_CommonSecurityDescriptor_Fixture,get_DiscretionaryAcl_Test)
				{
					
					
				}

				// Property DiscretionaryAcl
				//		Return Type: mscorlib::System::Security::AccessControl::DiscretionaryAcl
				//			Property Set Method
				TEST(mscorlib_System_Security_AccessControl_CommonSecurityDescriptor_Fixture,set_DiscretionaryAcl_Test)
				{
					
					
				}

				// Property Group
				//		Return Type: mscorlib::System::Security::Principal::SecurityIdentifier
				//			Property Get Method
				TEST(mscorlib_System_Security_AccessControl_CommonSecurityDescriptor_Fixture,get_Group_Test)
				{
					
					
				}

				// Property Group
				//		Return Type: mscorlib::System::Security::Principal::SecurityIdentifier
				//			Property Set Method
				TEST(mscorlib_System_Security_AccessControl_CommonSecurityDescriptor_Fixture,set_Group_Test)
				{
					
					
				}

				// Property IsContainer
				//		Return Type: mscorlib::System::Boolean
				//			Property Get Method
				TEST(mscorlib_System_Security_AccessControl_CommonSecurityDescriptor_Fixture,get_IsContainer_Test)
				{
					
					
				}

				// Property IsDiscretionaryAclCanonical
				//		Return Type: mscorlib::System::Boolean
				//			Property Get Method
				TEST(mscorlib_System_Security_AccessControl_CommonSecurityDescriptor_Fixture,get_IsDiscretionaryAclCanonical_Test)
				{
					
					
				}

				// Property IsDS
				//		Return Type: mscorlib::System::Boolean
				//			Property Get Method
				TEST(mscorlib_System_Security_AccessControl_CommonSecurityDescriptor_Fixture,get_IsDS_Test)
				{
					
					
				}

				// Property IsSystemAclCanonical
				//		Return Type: mscorlib::System::Boolean
				//			Property Get Method
				TEST(mscorlib_System_Security_AccessControl_CommonSecurityDescriptor_Fixture,get_IsSystemAclCanonical_Test)
				{
					
					
				}

				// Property Owner
				//		Return Type: mscorlib::System::Security::Principal::SecurityIdentifier
				//			Property Get Method
				TEST(mscorlib_System_Security_AccessControl_CommonSecurityDescriptor_Fixture,get_Owner_Test)
				{
					
					
				}

				// Property Owner
				//		Return Type: mscorlib::System::Security::Principal::SecurityIdentifier
				//			Property Set Method
				TEST(mscorlib_System_Security_AccessControl_CommonSecurityDescriptor_Fixture,set_Owner_Test)
				{
					
					
				}

				// Property SystemAcl
				//		Return Type: mscorlib::System::Security::AccessControl::SystemAcl
				//			Property Get Method
				TEST(mscorlib_System_Security_AccessControl_CommonSecurityDescriptor_Fixture,get_SystemAcl_Test)
				{
					
					
				}

				// Property SystemAcl
				//		Return Type: mscorlib::System::Security::AccessControl::SystemAcl
				//			Property Set Method
				TEST(mscorlib_System_Security_AccessControl_CommonSecurityDescriptor_Fixture,set_SystemAcl_Test)
				{
					
					
				}

				// Property BinaryLength
				//		Return Type: mscorlib::System::Int32
				//			Property Get Method
				TEST(mscorlib_System_Security_AccessControl_CommonSecurityDescriptor_Fixture,get_BinaryLength_Test)
				{
					
					
				}


			}
		}
	}
}
