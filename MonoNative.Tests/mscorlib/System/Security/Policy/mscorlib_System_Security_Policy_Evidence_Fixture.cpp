// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Security.Policy
// Name: Evidence
// C++ Typed Name: mscorlib::System::Security::Policy::Evidence


#include <gtest/gtest.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_Evidence.h>
#include <mscorlib/System/mscorlib_System_Array.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Policy
			{

				//Constructors Tests
				
				//Evidence()
				TEST(mscorlib_System_Security_Policy_Evidence_Fixture,DefaultConstructor)
				{
					
					mscorlib::System::Security::Policy::Evidence *value = new mscorlib::System::Security::Policy::Evidence();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//Evidence(mscorlib::System::Security::Policy::Evidence &evidence)
				TEST(mscorlib_System_Security_Policy_Evidence_Fixture,Constructor_2)
				{
					
					mscorlib::System::Security::Policy::Evidence *value = new mscorlib::System::Security::Policy::Evidence();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//Evidence(std::vector<mscorlib::System::Object*> hostEvidence, std::vector<mscorlib::System::Object*> assemblyEvidence)
				TEST(mscorlib_System_Security_Policy_Evidence_Fixture,Constructor_3)
				{
					
					mscorlib::System::Security::Policy::Evidence *value = new mscorlib::System::Security::Policy::Evidence();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//Public Methods Tests
				
				// Method AddAssembly
				//		Signature: mscorlib::System::Object id
				TEST(mscorlib_System_Security_Policy_Evidence_Fixture,AddAssembly_Test)
				{
					
					
				}

				// Method AddHost
				//		Signature: mscorlib::System::Object id
				TEST(mscorlib_System_Security_Policy_Evidence_Fixture,AddHost_Test)
				{
					
					
				}

				// Method Clear
				//		Signature: 
				TEST(mscorlib_System_Security_Policy_Evidence_Fixture,Clear_Test)
				{
					
					
				}

				// Method CopyTo
				//		Signature: mscorlib::System::Array array, mscorlib::System::Int32 index
				TEST(mscorlib_System_Security_Policy_Evidence_Fixture,CopyTo_Test)
				{
					
					
				}

				// Method GetEnumerator
				//		Signature: 
				TEST(mscorlib_System_Security_Policy_Evidence_Fixture,GetEnumerator_Test)
				{
					
					
				}

				// Method GetAssemblyEnumerator
				//		Signature: 
				TEST(mscorlib_System_Security_Policy_Evidence_Fixture,GetAssemblyEnumerator_Test)
				{
					
					
				}

				// Method GetHostEnumerator
				//		Signature: 
				TEST(mscorlib_System_Security_Policy_Evidence_Fixture,GetHostEnumerator_Test)
				{
					
					
				}

				// Method Merge
				//		Signature: mscorlib::System::Security::Policy::Evidence evidence
				TEST(mscorlib_System_Security_Policy_Evidence_Fixture,Merge_Test)
				{
					
					
				}

				// Method RemoveType
				//		Signature: mscorlib::System::Type t
				TEST(mscorlib_System_Security_Policy_Evidence_Fixture,RemoveType_Test)
				{
					
					
				}

				//Public Properties Tests
				
				// Property Count
				//		Return Type: mscorlib::System::Int32
				//			Property Get Method
				TEST(mscorlib_System_Security_Policy_Evidence_Fixture,get_Count_Test)
				{
					
					
				}

				// Property IsReadOnly
				//		Return Type: mscorlib::System::Boolean
				//			Property Get Method
				TEST(mscorlib_System_Security_Policy_Evidence_Fixture,get_IsReadOnly_Test)
				{
					
					
				}

				// Property IsSynchronized
				//		Return Type: mscorlib::System::Boolean
				//			Property Get Method
				TEST(mscorlib_System_Security_Policy_Evidence_Fixture,get_IsSynchronized_Test)
				{
					
					
				}

				// Property Locked
				//		Return Type: mscorlib::System::Boolean
				//			Property Get Method
				TEST(mscorlib_System_Security_Policy_Evidence_Fixture,get_Locked_Test)
				{
					
					
				}

				// Property Locked
				//		Return Type: mscorlib::System::Boolean
				//			Property Set Method
				TEST(mscorlib_System_Security_Policy_Evidence_Fixture,set_Locked_Test)
				{
					
					
				}

				// Property SyncRoot
				//		Return Type: mscorlib::System::Object
				//			Property Get Method
				TEST(mscorlib_System_Security_Policy_Evidence_Fixture,get_SyncRoot_Test)
				{
					
					
				}


			}
		}
	}
}
