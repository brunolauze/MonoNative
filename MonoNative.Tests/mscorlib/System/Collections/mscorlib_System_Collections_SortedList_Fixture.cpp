// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Collections
// Name: SortedList
// C++ Typed Name: mscorlib::System::Collections::SortedList


#include <gtest/gtest.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_SortedList.h>
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
			
			//SortedList()
			TEST(mscorlib_System_Collections_SortedList_Fixture,DefaultConstructor)
			{
				
				mscorlib::System::Collections::SortedList *value = new mscorlib::System::Collections::SortedList();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//SortedList(mscorlib::System::Int32 initialCapacity)
			TEST(mscorlib_System_Collections_SortedList_Fixture,Constructor_2)
			{
				
				mscorlib::System::Collections::SortedList *value = new mscorlib::System::Collections::SortedList();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//SortedList(mscorlib::System::Collections::IComparer comparer, mscorlib::System::Int32 capacity)
			TEST(mscorlib_System_Collections_SortedList_Fixture,Constructor_3)
			{
				
				mscorlib::System::Collections::SortedList *value = new mscorlib::System::Collections::SortedList();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//SortedList(mscorlib::System::Collections::IComparer comparer)
			TEST(mscorlib_System_Collections_SortedList_Fixture,Constructor_4)
			{
				
				mscorlib::System::Collections::SortedList *value = new mscorlib::System::Collections::SortedList();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//SortedList(mscorlib::System::Collections::IDictionary d)
			TEST(mscorlib_System_Collections_SortedList_Fixture,Constructor_5)
			{
				
				mscorlib::System::Collections::SortedList *value = new mscorlib::System::Collections::SortedList();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//SortedList(mscorlib::System::Collections::IDictionary d, mscorlib::System::Collections::IComparer comparer)
			TEST(mscorlib_System_Collections_SortedList_Fixture,Constructor_6)
			{
				
				mscorlib::System::Collections::SortedList *value = new mscorlib::System::Collections::SortedList();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Public Methods Tests
			
			// Method Add
			//		Signature: mscorlib::System::Object key, mscorlib::System::Object value
			TEST(mscorlib_System_Collections_SortedList_Fixture,Add_Test)
			{
				
				
			}

			// Method Clear
			//		Signature: 
			TEST(mscorlib_System_Collections_SortedList_Fixture,Clear_Test)
			{
				
				
			}

			// Method Contains
			//		Signature: mscorlib::System::Object key
			TEST(mscorlib_System_Collections_SortedList_Fixture,Contains_Test)
			{
				
				
			}

			// Method GetEnumerator
			//		Signature: 
			TEST(mscorlib_System_Collections_SortedList_Fixture,GetEnumerator_Test)
			{
				
				
			}

			// Method Remove
			//		Signature: mscorlib::System::Object key
			TEST(mscorlib_System_Collections_SortedList_Fixture,Remove_Test)
			{
				
				
			}

			// Method CopyTo
			//		Signature: mscorlib::System::Array array, mscorlib::System::Int32 arrayIndex
			TEST(mscorlib_System_Collections_SortedList_Fixture,CopyTo_Test)
			{
				
				
			}

			// Method Clone
			//		Signature: 
			TEST(mscorlib_System_Collections_SortedList_Fixture,Clone_Test)
			{
				
				
			}

			// Method GetKeyList
			//		Signature: 
			TEST(mscorlib_System_Collections_SortedList_Fixture,GetKeyList_Test)
			{
				
				
			}

			// Method GetValueList
			//		Signature: 
			TEST(mscorlib_System_Collections_SortedList_Fixture,GetValueList_Test)
			{
				
				
			}

			// Method RemoveAt
			//		Signature: mscorlib::System::Int32 index
			TEST(mscorlib_System_Collections_SortedList_Fixture,RemoveAt_Test)
			{
				
				
			}

			// Method IndexOfKey
			//		Signature: mscorlib::System::Object key
			TEST(mscorlib_System_Collections_SortedList_Fixture,IndexOfKey_Test)
			{
				
				
			}

			// Method IndexOfValue
			//		Signature: mscorlib::System::Object value
			TEST(mscorlib_System_Collections_SortedList_Fixture,IndexOfValue_Test)
			{
				
				
			}

			// Method ContainsKey
			//		Signature: mscorlib::System::Object key
			TEST(mscorlib_System_Collections_SortedList_Fixture,ContainsKey_Test)
			{
				
				
			}

			// Method ContainsValue
			//		Signature: mscorlib::System::Object value
			TEST(mscorlib_System_Collections_SortedList_Fixture,ContainsValue_Test)
			{
				
				
			}

			// Method GetByIndex
			//		Signature: mscorlib::System::Int32 index
			TEST(mscorlib_System_Collections_SortedList_Fixture,GetByIndex_Test)
			{
				
				
			}

			// Method SetByIndex
			//		Signature: mscorlib::System::Int32 index, mscorlib::System::Object value
			TEST(mscorlib_System_Collections_SortedList_Fixture,SetByIndex_Test)
			{
				
				
			}

			// Method GetKey
			//		Signature: mscorlib::System::Int32 index
			TEST(mscorlib_System_Collections_SortedList_Fixture,GetKey_Test)
			{
				
				
			}

			// Method TrimToSize
			//		Signature: 
			TEST(mscorlib_System_Collections_SortedList_Fixture,TrimToSize_Test)
			{
				
				
			}

			//Public Static Methods Tests
			
			// Method Synchronized
			//		Signature: mscorlib::System::Collections::SortedList list
			TEST(mscorlib_System_Collections_SortedList_Fixture,Synchronized_StaticTest)
			{
				
				
			}

			//Public Properties Tests
			
			// Property Count
			//		Return Type: mscorlib::System::Int32
			//			Property Get Method
			TEST(mscorlib_System_Collections_SortedList_Fixture,get_Count_Test)
			{
				
				
			}

			// Property IsSynchronized
			//		Return Type: mscorlib::System::Boolean
			//			Property Get Method
			TEST(mscorlib_System_Collections_SortedList_Fixture,get_IsSynchronized_Test)
			{
				
				
			}

			// Property SyncRoot
			//		Return Type: mscorlib::System::Object
			//			Property Get Method
			TEST(mscorlib_System_Collections_SortedList_Fixture,get_SyncRoot_Test)
			{
				
				
			}

			// Property IsFixedSize
			//		Return Type: mscorlib::System::Boolean
			//			Property Get Method
			TEST(mscorlib_System_Collections_SortedList_Fixture,get_IsFixedSize_Test)
			{
				
				
			}

			// Property IsReadOnly
			//		Return Type: mscorlib::System::Boolean
			//			Property Get Method
			TEST(mscorlib_System_Collections_SortedList_Fixture,get_IsReadOnly_Test)
			{
				
				
			}

			// Property Keys
			//		Return Type: mscorlib::System::Collections::ICollection
			//			Property Get Method
			TEST(mscorlib_System_Collections_SortedList_Fixture,get_Keys_Test)
			{
				
				
			}

			// Property Values
			//		Return Type: mscorlib::System::Collections::ICollection
			//			Property Get Method
			TEST(mscorlib_System_Collections_SortedList_Fixture,get_Values_Test)
			{
				
				
			}

			// Property Item
			//		Return Type: mscorlib::System::Object
			//			Property Get Method
			TEST(mscorlib_System_Collections_SortedList_Fixture,get_Item_Test)
			{
				
				
			}

			// Property Item
			//		Return Type: mscorlib::System::Object
			//			Property Set Method
			TEST(mscorlib_System_Collections_SortedList_Fixture,set_Item_Test)
			{
				
				
			}

			// Property Capacity
			//		Return Type: mscorlib::System::Int32
			//			Property Get Method
			TEST(mscorlib_System_Collections_SortedList_Fixture,get_Capacity_Test)
			{
				
				
			}

			// Property Capacity
			//		Return Type: mscorlib::System::Int32
			//			Property Set Method
			TEST(mscorlib_System_Collections_SortedList_Fixture,set_Capacity_Test)
			{
				
				
			}


		}
	}
}
