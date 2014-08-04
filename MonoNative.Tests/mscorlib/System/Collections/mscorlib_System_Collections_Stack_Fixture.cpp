// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Collections
// Name: Stack
// C++ Typed Name: mscorlib::System::Collections::Stack


#include <gtest/gtest.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_Stack.h>
#include <mscorlib/System/mscorlib_System_Array.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Collections
		{

			//Constructors Tests
			
			//Stack()
			TEST(mscorlib_System_Collections_Stack_Fixture,DefaultConstructor)
			{
				
				mscorlib::System::Collections::Stack *value = new mscorlib::System::Collections::Stack();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Stack(mscorlib::System::Collections::ICollection col)
			TEST(mscorlib_System_Collections_Stack_Fixture,Constructor_2)
			{
				
				mscorlib::System::Collections::Stack *value = new mscorlib::System::Collections::Stack();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Stack(mscorlib::System::Int32 initialCapacity)
			TEST(mscorlib_System_Collections_Stack_Fixture,Constructor_3)
			{
				
				mscorlib::System::Collections::Stack *value = new mscorlib::System::Collections::Stack();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Public Methods Tests
			
			// Method Clear
			//		Signature: 
			TEST(mscorlib_System_Collections_Stack_Fixture,Clear_Test)
			{
				
				
			}

			// Method Clone
			//		Signature: 
			TEST(mscorlib_System_Collections_Stack_Fixture,Clone_Test)
			{
				
				
			}

			// Method Contains
			//		Signature: mscorlib::System::Object obj
			TEST(mscorlib_System_Collections_Stack_Fixture,Contains_Test)
			{
				
				
			}

			// Method CopyTo
			//		Signature: mscorlib::System::Array array, mscorlib::System::Int32 index
			TEST(mscorlib_System_Collections_Stack_Fixture,CopyTo_Test)
			{
				
				
			}

			// Method GetEnumerator
			//		Signature: 
			TEST(mscorlib_System_Collections_Stack_Fixture,GetEnumerator_Test)
			{
				
				
			}

			// Method Peek
			//		Signature: 
			TEST(mscorlib_System_Collections_Stack_Fixture,Peek_Test)
			{
				
				
			}

			// Method Pop
			//		Signature: 
			TEST(mscorlib_System_Collections_Stack_Fixture,Pop_Test)
			{
				
				
			}

			// Method Push
			//		Signature: mscorlib::System::Object obj
			TEST(mscorlib_System_Collections_Stack_Fixture,Push_Test)
			{
				
				
			}

			// Method ToArray
			//		Signature: 
			TEST(mscorlib_System_Collections_Stack_Fixture,ToArray_Test)
			{
				
				
			}

			//Public Static Methods Tests
			
			// Method Synchronized
			//		Signature: mscorlib::System::Collections::Stack stack
			TEST(mscorlib_System_Collections_Stack_Fixture,Synchronized_StaticTest)
			{
				
				
			}

			//Public Properties Tests
			
			// Property Count
			//		Return Type: mscorlib::System::Int32
			//			Property Get Method
			TEST(mscorlib_System_Collections_Stack_Fixture,get_Count_Test)
			{
				
				
			}

			// Property IsSynchronized
			//		Return Type: mscorlib::System::Boolean
			//			Property Get Method
			TEST(mscorlib_System_Collections_Stack_Fixture,get_IsSynchronized_Test)
			{
				
				
			}

			// Property SyncRoot
			//		Return Type: mscorlib::System::Object
			//			Property Get Method
			TEST(mscorlib_System_Collections_Stack_Fixture,get_SyncRoot_Test)
			{
				
				
			}


		}
	}
}
