// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Collections.Concurrent
// Name: ConcurrentDictionary`2
// C++ Typed Name: mscorlib::System::Collections::Concurrent::ConcurrentDictionary<TKey,TValue>


#include <gtest/gtest.h>
#include <mscorlib.h>


namespace mscorlib
{
	namespace System
	{
		namespace Collections
		{
			namespace Concurrent
			{

				//Constructors Tests
				
				//ConcurrentDictionary()
				TEST(mscorlib_System_Collections_Concurrent_ConcurrentDictionary_2_Fixture,DefaultConstructor)
				{
					
					
					
				}
				
				//ConcurrentDictionary(mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>> collection)
				TEST(mscorlib_System_Collections_Concurrent_ConcurrentDictionary_2_Fixture,Constructor_2)
				{
					
					
					
				}
				
				//ConcurrentDictionary(mscorlib::System::Collections::Generic::IEqualityComparer<TKey> comparer)
				TEST(mscorlib_System_Collections_Concurrent_ConcurrentDictionary_2_Fixture,Constructor_3)
				{
					
					
					
				}
				
				//ConcurrentDictionary(mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>> collection, mscorlib::System::Collections::Generic::IEqualityComparer<TKey> comparer)
				TEST(mscorlib_System_Collections_Concurrent_ConcurrentDictionary_2_Fixture,Constructor_4)
				{
					
					
					
				}
				
				//ConcurrentDictionary(mscorlib::System::Int32 concurrencyLevel, mscorlib::System::Int32 capacity)
				TEST(mscorlib_System_Collections_Concurrent_ConcurrentDictionary_2_Fixture,Constructor_5)
				{
					
					
					
				}
				
				//ConcurrentDictionary(mscorlib::System::Int32 concurrencyLevel, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>> collection, mscorlib::System::Collections::Generic::IEqualityComparer<TKey> comparer)
				TEST(mscorlib_System_Collections_Concurrent_ConcurrentDictionary_2_Fixture,Constructor_6)
				{
					
					
					
				}
				
				//ConcurrentDictionary(mscorlib::System::Int32 concurrencyLevel, mscorlib::System::Int32 capacity, mscorlib::System::Collections::Generic::IEqualityComparer<TKey> comparer)
				TEST(mscorlib_System_Collections_Concurrent_ConcurrentDictionary_2_Fixture,Constructor_7)
				{
					
					
					
				}
				
				//Public Methods Tests
				
				// Method TryAdd
				//		Signature: TKey key, TValue value
				TEST(mscorlib_System_Collections_Concurrent_ConcurrentDictionary_2_Fixture,TryAdd_Test)
				{
					
					
				}

				// Method AddOrUpdate
				//		Signature: TKey key, mscorlib::Callback<TValue  (TKey )> addValueFactory, mscorlib::Callback<TValue  (TKey , TValue )> updateValueFactory
				TEST(mscorlib_System_Collections_Concurrent_ConcurrentDictionary_2_Fixture,AddOrUpdate_1_Test)
				{
					
					
				}

				// Method AddOrUpdate
				//		Signature: TKey key, TValue addValue, mscorlib::Callback<TValue  (TKey , TValue )> updateValueFactory
				TEST(mscorlib_System_Collections_Concurrent_ConcurrentDictionary_2_Fixture,AddOrUpdate_2_Test)
				{
					
					
				}

				// Method TryGetValue
				//		Signature: TKey key, TValue value
				TEST(mscorlib_System_Collections_Concurrent_ConcurrentDictionary_2_Fixture,TryGetValue_Test)
				{
					
					
				}

				// Method TryUpdate
				//		Signature: TKey key, TValue newValue, TValue comparisonValue
				TEST(mscorlib_System_Collections_Concurrent_ConcurrentDictionary_2_Fixture,TryUpdate_Test)
				{
					
					
				}

				// Method GetOrAdd
				//		Signature: TKey key, mscorlib::Callback<TValue  (TKey )> valueFactory
				TEST(mscorlib_System_Collections_Concurrent_ConcurrentDictionary_2_Fixture,GetOrAdd_1_Test)
				{
					
					
				}

				// Method GetOrAdd
				//		Signature: TKey key, TValue value
				TEST(mscorlib_System_Collections_Concurrent_ConcurrentDictionary_2_Fixture,GetOrAdd_2_Test)
				{
					
					
				}

				// Method TryRemove
				//		Signature: TKey key, TValue value
				TEST(mscorlib_System_Collections_Concurrent_ConcurrentDictionary_2_Fixture,TryRemove_Test)
				{
					
					
				}

				// Method ContainsKey
				//		Signature: TKey key
				TEST(mscorlib_System_Collections_Concurrent_ConcurrentDictionary_2_Fixture,ContainsKey_Test)
				{
					
					
				}

				// Method ToArray
				//		Signature: 
				TEST(mscorlib_System_Collections_Concurrent_ConcurrentDictionary_2_Fixture,ToArray_Test)
				{
					
					
				}

				// Method Clear
				//		Signature: 
				TEST(mscorlib_System_Collections_Concurrent_ConcurrentDictionary_2_Fixture,Clear_Test)
				{
					
					
				}

				// Method GetEnumerator
				//		Signature: 
				TEST(mscorlib_System_Collections_Concurrent_ConcurrentDictionary_2_Fixture,GetEnumerator_Test)
				{
					
					
				}

				//Public Properties Tests
				
				// Property Item
				//		Return Type: TValue
				//			Property Get Method
				TEST(mscorlib_System_Collections_Concurrent_ConcurrentDictionary_2_Fixture,get_Item_Test)
				{
					
					
				}

				// Property Item
				//		Return Type: TValue
				//			Property Set Method
				TEST(mscorlib_System_Collections_Concurrent_ConcurrentDictionary_2_Fixture,set_Item_Test)
				{
					
					
				}

				// Property Count
				//		Return Type: mscorlib::System::Int32
				//			Property Get Method
				TEST(mscorlib_System_Collections_Concurrent_ConcurrentDictionary_2_Fixture,get_Count_Test)
				{
					
					
				}

				// Property IsEmpty
				//		Return Type: mscorlib::System::Boolean
				//			Property Get Method
				TEST(mscorlib_System_Collections_Concurrent_ConcurrentDictionary_2_Fixture,get_IsEmpty_Test)
				{
					
					
				}

				// Property Keys
				//		Return Type: mscorlib::System::Collections::Generic::ICollection<TKey>
				//			Property Get Method
				TEST(mscorlib_System_Collections_Concurrent_ConcurrentDictionary_2_Fixture,get_Keys_Test)
				{
					
					
				}

				// Property Values
				//		Return Type: mscorlib::System::Collections::Generic::ICollection<TValue>
				//			Property Get Method
				TEST(mscorlib_System_Collections_Concurrent_ConcurrentDictionary_2_Fixture,get_Values_Test)
				{
					
					
				}


			}
		}
	}
}
