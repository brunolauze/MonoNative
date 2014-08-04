// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Collections
// Name: Queue
// C++ Typed Name: mscorlib::System::Collections::Queue


#include <gtest/gtest.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_Queue.h>
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
			
			//Queue()
			TEST(mscorlib_System_Collections_Queue_Fixture,DefaultConstructor)
			{
				
				mscorlib::System::Collections::Queue *value = new mscorlib::System::Collections::Queue();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Queue(mscorlib::System::Int32 capacity)
			TEST(mscorlib_System_Collections_Queue_Fixture,Constructor_2)
			{
				
				mscorlib::System::Collections::Queue *value = new mscorlib::System::Collections::Queue();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Queue(mscorlib::System::Collections::ICollection col)
			TEST(mscorlib_System_Collections_Queue_Fixture,Constructor_3)
			{
				
				mscorlib::System::Collections::Queue *value = new mscorlib::System::Collections::Queue();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Queue(mscorlib::System::Int32 capacity, mscorlib::System::Single growFactor)
			TEST(mscorlib_System_Collections_Queue_Fixture,Constructor_4)
			{
				
				mscorlib::System::Collections::Queue *value = new mscorlib::System::Collections::Queue();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Public Methods Tests
			
			// Method CopyTo
			//		Signature: mscorlib::System::Array array, mscorlib::System::Int32 index
			TEST(mscorlib_System_Collections_Queue_Fixture,CopyTo_Test)
			{
				
				
			}

			// Method GetEnumerator
			//		Signature: 
			TEST(mscorlib_System_Collections_Queue_Fixture,GetEnumerator_Test)
			{
				
				
			}

			// Method Clone
			//		Signature: 
			TEST(mscorlib_System_Collections_Queue_Fixture,Clone_Test)
			{
				
				
			}

			// Method Clear
			//		Signature: 
			TEST(mscorlib_System_Collections_Queue_Fixture,Clear_Test)
			{
				
				
			}

			// Method Contains
			//		Signature: mscorlib::System::Object obj
			TEST(mscorlib_System_Collections_Queue_Fixture,Contains_Test)
			{
				
				
			}

			// Method Dequeue
			//		Signature: 
			TEST(mscorlib_System_Collections_Queue_Fixture,Dequeue_Test)
			{
				
				
			}

			// Method Enqueue
			//		Signature: mscorlib::System::Object obj
			TEST(mscorlib_System_Collections_Queue_Fixture,Enqueue_Test)
			{
				
				
			}

			// Method Peek
			//		Signature: 
			TEST(mscorlib_System_Collections_Queue_Fixture,Peek_Test)
			{
				
				
			}

			// Method ToArray
			//		Signature: 
			TEST(mscorlib_System_Collections_Queue_Fixture,ToArray_Test)
			{
				
				
			}

			// Method TrimToSize
			//		Signature: 
			TEST(mscorlib_System_Collections_Queue_Fixture,TrimToSize_Test)
			{
				
				
			}

			//Public Static Methods Tests
			
			// Method Synchronized
			//		Signature: mscorlib::System::Collections::Queue queue
			TEST(mscorlib_System_Collections_Queue_Fixture,Synchronized_StaticTest)
			{
				
				
			}

			//Public Properties Tests
			
			// Property Count
			//		Return Type: mscorlib::System::Int32
			//			Property Get Method
			TEST(mscorlib_System_Collections_Queue_Fixture,get_Count_Test)
			{
				
				
			}

			// Property IsSynchronized
			//		Return Type: mscorlib::System::Boolean
			//			Property Get Method
			TEST(mscorlib_System_Collections_Queue_Fixture,get_IsSynchronized_Test)
			{
				
				
			}

			// Property SyncRoot
			//		Return Type: mscorlib::System::Object
			//			Property Get Method
			TEST(mscorlib_System_Collections_Queue_Fixture,get_SyncRoot_Test)
			{
				
				
			}


		}
	}
}
