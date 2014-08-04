// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Collections
// Name: ArrayList
// C++ Typed Name: mscorlib::System::Collections::ArrayList


#include <gtest/gtest.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_ArrayList.h>
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
			
			//ArrayList()
			TEST(mscorlib_System_Collections_ArrayList_Fixture,DefaultConstructor)
			{
				
				mscorlib::System::Collections::ArrayList *value = new mscorlib::System::Collections::ArrayList();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//ArrayList(mscorlib::System::Collections::ICollection c)
			TEST(mscorlib_System_Collections_ArrayList_Fixture,Constructor_2)
			{
				
				mscorlib::System::Collections::ArrayList *value = new mscorlib::System::Collections::ArrayList();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//ArrayList(mscorlib::System::Int32 capacity)
			TEST(mscorlib_System_Collections_ArrayList_Fixture,Constructor_3)
			{
				
				mscorlib::System::Collections::ArrayList *value = new mscorlib::System::Collections::ArrayList();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Public Methods Tests
			
			// Method Add
			//		Signature: mscorlib::System::Object value
			TEST(mscorlib_System_Collections_ArrayList_Fixture,Add_Test)
			{
				
				
			}

			// Method Clear
			//		Signature: 
			TEST(mscorlib_System_Collections_ArrayList_Fixture,Clear_Test)
			{
				
				
			}

			// Method Contains
			//		Signature: mscorlib::System::Object item
			TEST(mscorlib_System_Collections_ArrayList_Fixture,Contains_Test)
			{
				
				
			}

			// Method IndexOf
			//		Signature: mscorlib::System::Object value
			TEST(mscorlib_System_Collections_ArrayList_Fixture,IndexOf_1_Test)
			{
				
				
			}

			// Method IndexOf
			//		Signature: mscorlib::System::Object value, mscorlib::System::Int32 startIndex
			TEST(mscorlib_System_Collections_ArrayList_Fixture,IndexOf_2_Test)
			{
				
				
			}

			// Method IndexOf
			//		Signature: mscorlib::System::Object value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count
			TEST(mscorlib_System_Collections_ArrayList_Fixture,IndexOf_3_Test)
			{
				
				
			}

			// Method LastIndexOf
			//		Signature: mscorlib::System::Object value
			TEST(mscorlib_System_Collections_ArrayList_Fixture,LastIndexOf_1_Test)
			{
				
				
			}

			// Method LastIndexOf
			//		Signature: mscorlib::System::Object value, mscorlib::System::Int32 startIndex
			TEST(mscorlib_System_Collections_ArrayList_Fixture,LastIndexOf_2_Test)
			{
				
				
			}

			// Method LastIndexOf
			//		Signature: mscorlib::System::Object value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count
			TEST(mscorlib_System_Collections_ArrayList_Fixture,LastIndexOf_3_Test)
			{
				
				
			}

			// Method Insert
			//		Signature: mscorlib::System::Int32 index, mscorlib::System::Object value
			TEST(mscorlib_System_Collections_ArrayList_Fixture,Insert_Test)
			{
				
				
			}

			// Method InsertRange
			//		Signature: mscorlib::System::Int32 index, mscorlib::System::Collections::ICollection c
			TEST(mscorlib_System_Collections_ArrayList_Fixture,InsertRange_Test)
			{
				
				
			}

			// Method Remove
			//		Signature: mscorlib::System::Object obj
			TEST(mscorlib_System_Collections_ArrayList_Fixture,Remove_Test)
			{
				
				
			}

			// Method RemoveAt
			//		Signature: mscorlib::System::Int32 index
			TEST(mscorlib_System_Collections_ArrayList_Fixture,RemoveAt_Test)
			{
				
				
			}

			// Method RemoveRange
			//		Signature: mscorlib::System::Int32 index, mscorlib::System::Int32 count
			TEST(mscorlib_System_Collections_ArrayList_Fixture,RemoveRange_Test)
			{
				
				
			}

			// Method Reverse
			//		Signature: 
			TEST(mscorlib_System_Collections_ArrayList_Fixture,Reverse_1_Test)
			{
				
				
			}

			// Method Reverse
			//		Signature: mscorlib::System::Int32 index, mscorlib::System::Int32 count
			TEST(mscorlib_System_Collections_ArrayList_Fixture,Reverse_2_Test)
			{
				
				
			}

			// Method CopyTo
			//		Signature: mscorlib::System::Array array
			TEST(mscorlib_System_Collections_ArrayList_Fixture,CopyTo_1_Test)
			{
				
				
			}

			// Method CopyTo
			//		Signature: mscorlib::System::Array array, mscorlib::System::Int32 arrayIndex
			TEST(mscorlib_System_Collections_ArrayList_Fixture,CopyTo_2_Test)
			{
				
				
			}

			// Method CopyTo
			//		Signature: mscorlib::System::Int32 index, mscorlib::System::Array array, mscorlib::System::Int32 arrayIndex, mscorlib::System::Int32 count
			TEST(mscorlib_System_Collections_ArrayList_Fixture,CopyTo_3_Test)
			{
				
				
			}

			// Method GetEnumerator
			//		Signature: 
			TEST(mscorlib_System_Collections_ArrayList_Fixture,GetEnumerator_1_Test)
			{
				
				
			}

			// Method GetEnumerator
			//		Signature: mscorlib::System::Int32 index, mscorlib::System::Int32 count
			TEST(mscorlib_System_Collections_ArrayList_Fixture,GetEnumerator_2_Test)
			{
				
				
			}

			// Method AddRange
			//		Signature: mscorlib::System::Collections::ICollection c
			TEST(mscorlib_System_Collections_ArrayList_Fixture,AddRange_Test)
			{
				
				
			}

			// Method BinarySearch
			//		Signature: mscorlib::System::Object value
			TEST(mscorlib_System_Collections_ArrayList_Fixture,BinarySearch_1_Test)
			{
				
				
			}

			// Method BinarySearch
			//		Signature: mscorlib::System::Object value, mscorlib::System::Collections::IComparer comparer
			TEST(mscorlib_System_Collections_ArrayList_Fixture,BinarySearch_2_Test)
			{
				
				
			}

			// Method BinarySearch
			//		Signature: mscorlib::System::Int32 index, mscorlib::System::Int32 count, mscorlib::System::Object value, mscorlib::System::Collections::IComparer comparer
			TEST(mscorlib_System_Collections_ArrayList_Fixture,BinarySearch_3_Test)
			{
				
				
			}

			// Method GetRange
			//		Signature: mscorlib::System::Int32 index, mscorlib::System::Int32 count
			TEST(mscorlib_System_Collections_ArrayList_Fixture,GetRange_Test)
			{
				
				
			}

			// Method SetRange
			//		Signature: mscorlib::System::Int32 index, mscorlib::System::Collections::ICollection c
			TEST(mscorlib_System_Collections_ArrayList_Fixture,SetRange_Test)
			{
				
				
			}

			// Method TrimToSize
			//		Signature: 
			TEST(mscorlib_System_Collections_ArrayList_Fixture,TrimToSize_Test)
			{
				
				
			}

			// Method Sort
			//		Signature: 
			TEST(mscorlib_System_Collections_ArrayList_Fixture,Sort_1_Test)
			{
				
				
			}

			// Method Sort
			//		Signature: mscorlib::System::Collections::IComparer comparer
			TEST(mscorlib_System_Collections_ArrayList_Fixture,Sort_2_Test)
			{
				
				
			}

			// Method Sort
			//		Signature: mscorlib::System::Int32 index, mscorlib::System::Int32 count, mscorlib::System::Collections::IComparer comparer
			TEST(mscorlib_System_Collections_ArrayList_Fixture,Sort_3_Test)
			{
				
				
			}

			// Method ToArray
			//		Signature: 
			TEST(mscorlib_System_Collections_ArrayList_Fixture,ToArray_1_Test)
			{
				
				
			}

			// Method ToArray
			//		Signature: mscorlib::System::Type type
			TEST(mscorlib_System_Collections_ArrayList_Fixture,ToArray_2_Test)
			{
				
				
			}

			// Method Clone
			//		Signature: 
			TEST(mscorlib_System_Collections_ArrayList_Fixture,Clone_Test)
			{
				
				
			}

			//Public Static Methods Tests
			
			// Method Adapter
			//		Signature: mscorlib::System::Collections::IList list
			TEST(mscorlib_System_Collections_ArrayList_Fixture,Adapter_StaticTest)
			{
				
				
			}

			// Method Synchronized
			//		Signature: mscorlib::System::Collections::ArrayList list
			TEST(mscorlib_System_Collections_ArrayList_Fixture,Synchronized_1_StaticTest)
			{
				
				
			}

			// Method Synchronized
			//		Signature: mscorlib::System::Collections::IList list
			TEST(mscorlib_System_Collections_ArrayList_Fixture,Synchronized_2_StaticTest)
			{
				
				
			}

			// Method ReadOnly
			//		Signature: mscorlib::System::Collections::ArrayList list
			TEST(mscorlib_System_Collections_ArrayList_Fixture,ReadOnly_1_StaticTest)
			{
				
				
			}

			// Method ReadOnly
			//		Signature: mscorlib::System::Collections::IList list
			TEST(mscorlib_System_Collections_ArrayList_Fixture,ReadOnly_2_StaticTest)
			{
				
				
			}

			// Method FixedSize
			//		Signature: mscorlib::System::Collections::ArrayList list
			TEST(mscorlib_System_Collections_ArrayList_Fixture,FixedSize_1_StaticTest)
			{
				
				
			}

			// Method FixedSize
			//		Signature: mscorlib::System::Collections::IList list
			TEST(mscorlib_System_Collections_ArrayList_Fixture,FixedSize_2_StaticTest)
			{
				
				
			}

			// Method Repeat
			//		Signature: mscorlib::System::Object value, mscorlib::System::Int32 count
			TEST(mscorlib_System_Collections_ArrayList_Fixture,Repeat_StaticTest)
			{
				
				
			}

			//Public Properties Tests
			
			// Property Item
			//		Return Type: mscorlib::System::Object
			//			Property Get Method
			TEST(mscorlib_System_Collections_ArrayList_Fixture,get_Item_Test)
			{
				
				
			}

			// Property Item
			//		Return Type: mscorlib::System::Object
			//			Property Set Method
			TEST(mscorlib_System_Collections_ArrayList_Fixture,set_Item_Test)
			{
				
				
			}

			// Property Count
			//		Return Type: mscorlib::System::Int32
			//			Property Get Method
			TEST(mscorlib_System_Collections_ArrayList_Fixture,get_Count_Test)
			{
				
				
			}

			// Property Capacity
			//		Return Type: mscorlib::System::Int32
			//			Property Get Method
			TEST(mscorlib_System_Collections_ArrayList_Fixture,get_Capacity_Test)
			{
				
				
			}

			// Property Capacity
			//		Return Type: mscorlib::System::Int32
			//			Property Set Method
			TEST(mscorlib_System_Collections_ArrayList_Fixture,set_Capacity_Test)
			{
				
				
			}

			// Property IsFixedSize
			//		Return Type: mscorlib::System::Boolean
			//			Property Get Method
			TEST(mscorlib_System_Collections_ArrayList_Fixture,get_IsFixedSize_Test)
			{
				
				
			}

			// Property IsReadOnly
			//		Return Type: mscorlib::System::Boolean
			//			Property Get Method
			TEST(mscorlib_System_Collections_ArrayList_Fixture,get_IsReadOnly_Test)
			{
				
				
			}

			// Property IsSynchronized
			//		Return Type: mscorlib::System::Boolean
			//			Property Get Method
			TEST(mscorlib_System_Collections_ArrayList_Fixture,get_IsSynchronized_Test)
			{
				
				
			}

			// Property SyncRoot
			//		Return Type: mscorlib::System::Object
			//			Property Get Method
			TEST(mscorlib_System_Collections_ArrayList_Fixture,get_SyncRoot_Test)
			{
				
				
			}


		}
	}
}
