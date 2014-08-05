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

			//Public Methods
			void SortedList::Add(mscorlib::System::Object key, mscorlib::System::Object value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(key).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)key;
					__parameters__[1] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Collections", "SortedList", 0, NULL, "Add", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			void SortedList::Clear()
			{
					Global::InvokeMethod("mscorlib", "System.Collections", "SortedList", 0, NULL, "Clear", __native_object__, 0, NULL, NULL, NULL);
			}

			mscorlib::System::Boolean SortedList::Contains(mscorlib::System::Object key)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(key).name());
					__parameters__[0] = (MonoObject*)key;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "SortedList", 0, NULL, "Contains", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Collections::IDictionaryEnumerator* SortedList::GetEnumerator()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "SortedList", 0, NULL, "GetEnumerator", __native_object__, 0, NULL, NULL, NULL);
					return new mscorlib::System::Collections::IDictionaryEnumerator(__result__);
			}

			void SortedList::Remove(mscorlib::System::Object key)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(key).name());
					__parameters__[0] = (MonoObject*)key;
					Global::InvokeMethod("mscorlib", "System.Collections", "SortedList", 0, NULL, "Remove", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void SortedList::CopyTo(mscorlib::System::Array array, mscorlib::System::Int32 arrayIndex)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(array).name());
					__parameter_types__[1] = Global::GetType(typeid(arrayIndex).name());
					__parameters__[0] = (MonoObject*)array;
					__parameters__[1] = &arrayIndex;
					Global::InvokeMethod("mscorlib", "System.Collections", "SortedList", 0, NULL, "CopyTo", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Object SortedList::Clone()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "SortedList", 0, NULL, "Clone", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
			}

			mscorlib::System::Collections::IList SortedList::GetKeyList()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "SortedList", 0, NULL, "GetKeyList", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Collections::IList(__result__);
			}

			mscorlib::System::Collections::IList SortedList::GetValueList()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "SortedList", 0, NULL, "GetValueList", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Collections::IList(__result__);
			}

			void SortedList::RemoveAt(mscorlib::System::Int32 index)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(index).name());
					__parameters__[0] = &index;
					Global::InvokeMethod("mscorlib", "System.Collections", "SortedList", 0, NULL, "RemoveAt", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Int32 SortedList::IndexOfKey(mscorlib::System::Object key)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(key).name());
					__parameters__[0] = (MonoObject*)key;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "SortedList", 0, NULL, "IndexOfKey", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 SortedList::IndexOfValue(mscorlib::System::Object value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "SortedList", 0, NULL, "IndexOfValue", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean SortedList::ContainsKey(mscorlib::System::Object key)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(key).name());
					__parameters__[0] = (MonoObject*)key;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "SortedList", 0, NULL, "ContainsKey", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean SortedList::ContainsValue(mscorlib::System::Object value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "SortedList", 0, NULL, "ContainsValue", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Object SortedList::GetByIndex(mscorlib::System::Int32 index)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(index).name());
					__parameters__[0] = &index;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "SortedList", 0, NULL, "GetByIndex", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Object(__result__);
			}

			void SortedList::SetByIndex(mscorlib::System::Int32 index, mscorlib::System::Object value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(index).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = &index;
					__parameters__[1] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Collections", "SortedList", 0, NULL, "SetByIndex", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Object SortedList::GetKey(mscorlib::System::Int32 index)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(index).name());
					__parameters__[0] = &index;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "SortedList", 0, NULL, "GetKey", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Object(__result__);
			}

			mscorlib::System::Collections::SortedList SortedList::Synchronized(mscorlib::System::Collections::SortedList list)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(list).name());
					__parameters__[0] = (MonoObject*)list;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "SortedList", 0, NULL, "Synchronized", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Collections::SortedList(__result__);
			}

			void SortedList::TrimToSize()
			{
					Global::InvokeMethod("mscorlib", "System.Collections", "SortedList", 0, NULL, "TrimToSize", __native_object__, 0, NULL, NULL, NULL);
			}

			//Get Set Properties Methods
			//	Get:Count
			mscorlib::System::Int32  SortedList::get_Count() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "SortedList", 0, NULL, "get_Count", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}


			//	Get:IsSynchronized
			mscorlib::System::Boolean  SortedList::get_IsSynchronized() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "SortedList", 0, NULL, "get_IsSynchronized", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:SyncRoot
			mscorlib::System::Object  SortedList::get_SyncRoot() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "SortedList", 0, NULL, "get_SyncRoot", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Object(__result__);
			}


			//	Get:IsFixedSize
			mscorlib::System::Boolean  SortedList::get_IsFixedSize() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "SortedList", 0, NULL, "get_IsFixedSize", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsReadOnly
			mscorlib::System::Boolean  SortedList::get_IsReadOnly() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "SortedList", 0, NULL, "get_IsReadOnly", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:Keys
			mscorlib::System::Collections::ICollection  SortedList::get_Keys() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "SortedList", 0, NULL, "get_Keys", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Collections::ICollection(__result__);
			}


			//	Get:Values
			mscorlib::System::Collections::ICollection  SortedList::get_Values() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "SortedList", 0, NULL, "get_Values", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Collections::ICollection(__result__);
			}


			//	Get/Set:Item
			mscorlib::System::Object  SortedList::get_Item(mscorlib::System::Object key) const
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(key).name());
				__parameters__[0] = (MonoObject*)key;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "SortedList", 0, NULL, "get_Item", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
			}

			void SortedList::set_Item(mscorlib::System::Object key, mscorlib::System::Object  value)
			{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(key).name());
				__parameter_types__[1] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)key;
				__parameters__[1] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Collections", "SortedList", 0, NULL, "set_Item", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:Capacity
			mscorlib::System::Int32  SortedList::get_Capacity() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "SortedList", 0, NULL, "get_Capacity", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			void SortedList::set_Capacity(mscorlib::System::Int32  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				Global::InvokeMethod("mscorlib", "System.Collections", "SortedList", 0, NULL, "set_Capacity", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}



		}
	}
}
