// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Collections
// Name: Hashtable
// C++ Typed Name: mscorlib::System::Collections::Hashtable


#include <gtest/gtest.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_Hashtable.h>
#include <mscorlib/System/mscorlib_System_Array.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_SerializationInfo.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_StreamingContext.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Collections
		{

			//Constructors Tests
			
			//Hashtable()
			TEST(mscorlib_System_Collections_Hashtable_Fixture,DefaultConstructor)
			{
				
				mscorlib::System::Collections::Hashtable *value = new mscorlib::System::Collections::Hashtable();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Hashtable(mscorlib::System::Int32 capacity, mscorlib::System::Single loadFactor, mscorlib::System::Collections::IHashCodeProvider hcp, mscorlib::System::Collections::IComparer comparer)
			TEST(mscorlib_System_Collections_Hashtable_Fixture,Constructor_2)
			{
				
				mscorlib::System::Collections::Hashtable *value = new mscorlib::System::Collections::Hashtable();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Hashtable(mscorlib::System::Int32 capacity, mscorlib::System::Single loadFactor)
			TEST(mscorlib_System_Collections_Hashtable_Fixture,Constructor_3)
			{
				
				mscorlib::System::Collections::Hashtable *value = new mscorlib::System::Collections::Hashtable();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Hashtable(mscorlib::System::Int32 capacity)
			TEST(mscorlib_System_Collections_Hashtable_Fixture,Constructor_4)
			{
				
				mscorlib::System::Collections::Hashtable *value = new mscorlib::System::Collections::Hashtable();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Hashtable(mscorlib::System::Int32 capacity, mscorlib::System::Collections::IHashCodeProvider hcp, mscorlib::System::Collections::IComparer comparer)
			TEST(mscorlib_System_Collections_Hashtable_Fixture,Constructor_5)
			{
				
				mscorlib::System::Collections::Hashtable *value = new mscorlib::System::Collections::Hashtable();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Hashtable(mscorlib::System::Collections::IDictionary d, mscorlib::System::Single loadFactor, mscorlib::System::Collections::IHashCodeProvider hcp, mscorlib::System::Collections::IComparer comparer)
			TEST(mscorlib_System_Collections_Hashtable_Fixture,Constructor_6)
			{
				
				mscorlib::System::Collections::Hashtable *value = new mscorlib::System::Collections::Hashtable();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Hashtable(mscorlib::System::Collections::IDictionary d, mscorlib::System::Single loadFactor)
			TEST(mscorlib_System_Collections_Hashtable_Fixture,Constructor_7)
			{
				
				mscorlib::System::Collections::Hashtable *value = new mscorlib::System::Collections::Hashtable();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Hashtable(mscorlib::System::Collections::IDictionary d)
			TEST(mscorlib_System_Collections_Hashtable_Fixture,Constructor_8)
			{
				
				mscorlib::System::Collections::Hashtable *value = new mscorlib::System::Collections::Hashtable();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Hashtable(mscorlib::System::Collections::IDictionary d, mscorlib::System::Collections::IHashCodeProvider hcp, mscorlib::System::Collections::IComparer comparer)
			TEST(mscorlib_System_Collections_Hashtable_Fixture,Constructor_9)
			{
				
				mscorlib::System::Collections::Hashtable *value = new mscorlib::System::Collections::Hashtable();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Hashtable(mscorlib::System::Collections::IHashCodeProvider hcp, mscorlib::System::Collections::IComparer comparer)
			TEST(mscorlib_System_Collections_Hashtable_Fixture,Constructor_10)
			{
				
				mscorlib::System::Collections::Hashtable *value = new mscorlib::System::Collections::Hashtable();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Hashtable(mscorlib::System::Collections::IDictionary d, mscorlib::System::Collections::IEqualityComparer equalityComparer)
			TEST(mscorlib_System_Collections_Hashtable_Fixture,Constructor_11)
			{
				
				mscorlib::System::Collections::Hashtable *value = new mscorlib::System::Collections::Hashtable();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Hashtable(mscorlib::System::Collections::IDictionary d, mscorlib::System::Single loadFactor, mscorlib::System::Collections::IEqualityComparer equalityComparer)
			TEST(mscorlib_System_Collections_Hashtable_Fixture,Constructor_12)
			{
				
				mscorlib::System::Collections::Hashtable *value = new mscorlib::System::Collections::Hashtable();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Hashtable(mscorlib::System::Collections::IEqualityComparer equalityComparer)
			TEST(mscorlib_System_Collections_Hashtable_Fixture,Constructor_13)
			{
				
				mscorlib::System::Collections::Hashtable *value = new mscorlib::System::Collections::Hashtable();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Hashtable(mscorlib::System::Int32 capacity, mscorlib::System::Collections::IEqualityComparer equalityComparer)
			TEST(mscorlib_System_Collections_Hashtable_Fixture,Constructor_14)
			{
				
				mscorlib::System::Collections::Hashtable *value = new mscorlib::System::Collections::Hashtable();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Hashtable(mscorlib::System::Int32 capacity, mscorlib::System::Single loadFactor, mscorlib::System::Collections::IEqualityComparer equalityComparer)
			TEST(mscorlib_System_Collections_Hashtable_Fixture,Constructor_15)
			{
				
				mscorlib::System::Collections::Hashtable *value = new mscorlib::System::Collections::Hashtable();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Public Methods Tests
			
			// Method CopyTo
			//		Signature: mscorlib::System::Array array, mscorlib::System::Int32 arrayIndex
			TEST(mscorlib_System_Collections_Hashtable_Fixture,CopyTo_Test)
			{
				
				
			}

			// Method Add
			//		Signature: mscorlib::System::Object key, mscorlib::System::Object value
			TEST(mscorlib_System_Collections_Hashtable_Fixture,Add_Test)
			{
				
				
			}

			// Method Clear
			//		Signature: 
			TEST(mscorlib_System_Collections_Hashtable_Fixture,Clear_Test)
			{
				
				
			}

			// Method Contains
			//		Signature: mscorlib::System::Object key
			TEST(mscorlib_System_Collections_Hashtable_Fixture,Contains_Test)
			{
				
				
			}

			// Method GetEnumerator
			//		Signature: 
			TEST(mscorlib_System_Collections_Hashtable_Fixture,GetEnumerator_Test)
			{
				
				
			}

			// Method Remove
			//		Signature: mscorlib::System::Object key
			TEST(mscorlib_System_Collections_Hashtable_Fixture,Remove_Test)
			{
				
				
			}

			// Method ContainsKey
			//		Signature: mscorlib::System::Object key
			TEST(mscorlib_System_Collections_Hashtable_Fixture,ContainsKey_Test)
			{
				
				
			}

			// Method ContainsValue
			//		Signature: mscorlib::System::Object value
			TEST(mscorlib_System_Collections_Hashtable_Fixture,ContainsValue_Test)
			{
				
				
			}

			// Method Clone
			//		Signature: 
			TEST(mscorlib_System_Collections_Hashtable_Fixture,Clone_Test)
			{
				
				
			}

			// Method GetObjectData
			//		Signature: mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context
			TEST(mscorlib_System_Collections_Hashtable_Fixture,GetObjectData_Test)
			{
				
				
			}

			// Method OnDeserialization
			//		Signature: mscorlib::System::Object sender
			TEST(mscorlib_System_Collections_Hashtable_Fixture,OnDeserialization_Test)
			{
				
				
			}

			//Public Static Methods Tests
			
			// Method Synchronized
			//		Signature: mscorlib::System::Collections::Hashtable table
			TEST(mscorlib_System_Collections_Hashtable_Fixture,Synchronized_StaticTest)
			{
				
				
			}

			//Public Properties Tests
			
			// Property Count
			//		Return Type: mscorlib::System::Int32
			//			Property Get Method
			TEST(mscorlib_System_Collections_Hashtable_Fixture,get_Count_Test)
			{
				
				
			}

			// Property IsSynchronized
			//		Return Type: mscorlib::System::Boolean
			//			Property Get Method
			TEST(mscorlib_System_Collections_Hashtable_Fixture,get_IsSynchronized_Test)
			{
				
				
			}

			// Property SyncRoot
			//		Return Type: mscorlib::System::Object
			//			Property Get Method
			TEST(mscorlib_System_Collections_Hashtable_Fixture,get_SyncRoot_Test)
			{
				
				
			}

			// Property IsFixedSize
			//		Return Type: mscorlib::System::Boolean
			//			Property Get Method
			TEST(mscorlib_System_Collections_Hashtable_Fixture,get_IsFixedSize_Test)
			{
				
				
			}

			// Property IsReadOnly
			//		Return Type: mscorlib::System::Boolean
			//			Property Get Method
			TEST(mscorlib_System_Collections_Hashtable_Fixture,get_IsReadOnly_Test)
			{
				
				
			}

			// Property Keys
			//		Return Type: mscorlib::System::Collections::ICollection
			//			Property Get Method
			TEST(mscorlib_System_Collections_Hashtable_Fixture,get_Keys_Test)
			{
				
				
			}

			// Property Values
			//		Return Type: mscorlib::System::Collections::ICollection
			//			Property Get Method
			TEST(mscorlib_System_Collections_Hashtable_Fixture,get_Values_Test)
			{
				
				
			}

			// Property Item
			//		Return Type: mscorlib::System::Object
			//			Property Get Method
			TEST(mscorlib_System_Collections_Hashtable_Fixture,get_Item_Test)
			{
				
				
			}

			// Property Item
			//		Return Type: mscorlib::System::Object
			//			Property Set Method
			TEST(mscorlib_System_Collections_Hashtable_Fixture,set_Item_Test)
			{
				
				
			}


		}
	}
}
