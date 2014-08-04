// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System
// Name: Version
// C++ Typed Name: mscorlib::System::Version


#include <gtest/gtest.h>
#include <mscorlib/System/mscorlib_System_Version.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{

		//Constructors Tests
		
		//Version()
		TEST(mscorlib_System_Version_Fixture,DefaultConstructor)
		{
			
			mscorlib::System::Version *value = new mscorlib::System::Version();
			EXPECT_NE(NULL, value->GetNativeObject());
			
			
		}
		
		//Version(mscorlib::System::String version)
		TEST(mscorlib_System_Version_Fixture,Constructor_2)
		{
			
			mscorlib::System::Version *value = new mscorlib::System::Version();
			EXPECT_NE(NULL, value->GetNativeObject());
			
			
		}
		
		//Version(mscorlib::System::Int32 major, mscorlib::System::Int32 minor)
		TEST(mscorlib_System_Version_Fixture,Constructor_3)
		{
			
			mscorlib::System::Version *value = new mscorlib::System::Version();
			EXPECT_NE(NULL, value->GetNativeObject());
			
			
		}
		
		//Version(mscorlib::System::Int32 major, mscorlib::System::Int32 minor, mscorlib::System::Int32 build)
		TEST(mscorlib_System_Version_Fixture,Constructor_4)
		{
			
			mscorlib::System::Version *value = new mscorlib::System::Version();
			EXPECT_NE(NULL, value->GetNativeObject());
			
			
		}
		
		//Version(mscorlib::System::Int32 major, mscorlib::System::Int32 minor, mscorlib::System::Int32 build, mscorlib::System::Int32 revision)
		TEST(mscorlib_System_Version_Fixture,Constructor_5)
		{
			
			mscorlib::System::Version *value = new mscorlib::System::Version();
			EXPECT_NE(NULL, value->GetNativeObject());
			
			
		}
		
		//Public Methods Tests
		
		// Method Clone
		//		Signature: 
		TEST(mscorlib_System_Version_Fixture,Clone_Test)
		{
			
			
		}

		// Method CompareTo
		//		Signature: mscorlib::System::Object version
		TEST(mscorlib_System_Version_Fixture,CompareTo_1_Test)
		{
			
			
		}

		// Method Equals
		//		Signature: mscorlib::System::Object obj
		TEST(mscorlib_System_Version_Fixture,Equals_1_Test)
		{
			
			
		}

		// Method CompareTo
		//		Signature: mscorlib::System::Version value
		TEST(mscorlib_System_Version_Fixture,CompareTo_2_Test)
		{
			
			
		}

		// Method Equals
		//		Signature: mscorlib::System::Version obj
		TEST(mscorlib_System_Version_Fixture,Equals_2_Test)
		{
			
			
		}

		// Method GetHashCode
		//		Signature: 
		TEST(mscorlib_System_Version_Fixture,GetHashCode_Test)
		{
			
			
		}

		// Method ToString
		//		Signature: 
		TEST(mscorlib_System_Version_Fixture,ToString_1_Test)
		{
			
			
		}

		// Method ToString
		//		Signature: mscorlib::System::Int32 fieldCount
		TEST(mscorlib_System_Version_Fixture,ToString_2_Test)
		{
			
			
		}

		//Public Static Methods Tests
		
		// Method Parse
		//		Signature: mscorlib::System::String input
		TEST(mscorlib_System_Version_Fixture,Parse_StaticTest)
		{
			
			
		}

		// Method TryParse
		//		Signature: mscorlib::System::String input, mscorlib::System::Version result
		TEST(mscorlib_System_Version_Fixture,TryParse_StaticTest)
		{
			
			
		}

		//Public Properties Tests
		
		// Property Build
		//		Return Type: mscorlib::System::Int32
		//			Property Get Method
		TEST(mscorlib_System_Version_Fixture,get_Build_Test)
		{
			
			
		}

		// Property Major
		//		Return Type: mscorlib::System::Int32
		//			Property Get Method
		TEST(mscorlib_System_Version_Fixture,get_Major_Test)
		{
			
			
		}

		// Property Minor
		//		Return Type: mscorlib::System::Int32
		//			Property Get Method
		TEST(mscorlib_System_Version_Fixture,get_Minor_Test)
		{
			
			
		}

		// Property Revision
		//		Return Type: mscorlib::System::Int32
		//			Property Get Method
		TEST(mscorlib_System_Version_Fixture,get_Revision_Test)
		{
			
			
		}

		// Property MajorRevision
		//		Return Type: mscorlib::System::Int16
		//			Property Get Method
		TEST(mscorlib_System_Version_Fixture,get_MajorRevision_Test)
		{
			
			
		}

		// Property MinorRevision
		//		Return Type: mscorlib::System::Int16
		//			Property Get Method
		TEST(mscorlib_System_Version_Fixture,get_MinorRevision_Test)
		{
			
			
		}


	}
}
