// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Security.Principal
// Name: IdentityReferenceCollection
// C++ Typed Name: mscorlib::System::Security::Principal::IdentityReferenceCollection


#include <gtest/gtest.h>
#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_IdentityReferenceCollection.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Principal
			{

				//Constructors Tests
				
				//IdentityReferenceCollection()
				TEST(mscorlib_System_Security_Principal_IdentityReferenceCollection_Fixture,DefaultConstructor)
				{
					
					mscorlib::System::Security::Principal::IdentityReferenceCollection *value = new mscorlib::System::Security::Principal::IdentityReferenceCollection();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//IdentityReferenceCollection(mscorlib::System::Int32 capacity)
				TEST(mscorlib_System_Security_Principal_IdentityReferenceCollection_Fixture,Constructor_2)
				{
					
					mscorlib::System::Security::Principal::IdentityReferenceCollection *value = new mscorlib::System::Security::Principal::IdentityReferenceCollection();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//Public Methods Tests
				
				// Method Add
				//		Signature: mscorlib::System::Security::Principal::IdentityReference identity
				TEST(mscorlib_System_Security_Principal_IdentityReferenceCollection_Fixture,Add_Test)
				{
					
					
				}

				// Method Clear
				//		Signature: 
				TEST(mscorlib_System_Security_Principal_IdentityReferenceCollection_Fixture,Clear_Test)
				{
					
					
				}

				// Method Contains
				//		Signature: mscorlib::System::Security::Principal::IdentityReference identity
				TEST(mscorlib_System_Security_Principal_IdentityReferenceCollection_Fixture,Contains_Test)
				{
					
					
				}

				// Method CopyTo
				//		Signature: std::vector<mscorlib::System::Security::Principal::IdentityReference*> array, mscorlib::System::Int32 offset
				TEST(mscorlib_System_Security_Principal_IdentityReferenceCollection_Fixture,CopyTo_Test)
				{
					
					
				}

				// Method GetEnumerator
				//		Signature: 
				TEST(mscorlib_System_Security_Principal_IdentityReferenceCollection_Fixture,GetEnumerator_Test)
				{
					
					
				}

				// Method Remove
				//		Signature: mscorlib::System::Security::Principal::IdentityReference identity
				TEST(mscorlib_System_Security_Principal_IdentityReferenceCollection_Fixture,Remove_Test)
				{
					
					
				}

				// Method Translate
				//		Signature: mscorlib::System::Type targetType
				TEST(mscorlib_System_Security_Principal_IdentityReferenceCollection_Fixture,Translate_1_Test)
				{
					
					
				}

				// Method Translate
				//		Signature: mscorlib::System::Type targetType, mscorlib::System::Boolean forceSuccess
				TEST(mscorlib_System_Security_Principal_IdentityReferenceCollection_Fixture,Translate_2_Test)
				{
					
					
				}

				//Public Properties Tests
				
				// Property Count
				//		Return Type: mscorlib::System::Int32
				//			Property Get Method
				TEST(mscorlib_System_Security_Principal_IdentityReferenceCollection_Fixture,get_Count_Test)
				{
					
					
				}

				// Property IsReadOnly
				//		Return Type: mscorlib::System::Boolean
				//			Property Get Method
				TEST(mscorlib_System_Security_Principal_IdentityReferenceCollection_Fixture,get_IsReadOnly_Test)
				{
					
					
				}

				// Property Item
				//		Return Type: mscorlib::System::Security::Principal::IdentityReference
				//			Property Get Method
				TEST(mscorlib_System_Security_Principal_IdentityReferenceCollection_Fixture,get_Item_Test)
				{
					
					
				}

				// Property Item
				//		Return Type: mscorlib::System::Security::Principal::IdentityReference
				//			Property Set Method
				TEST(mscorlib_System_Security_Principal_IdentityReferenceCollection_Fixture,set_Item_Test)
				{
					
					
				}


			}
		}
	}
}
