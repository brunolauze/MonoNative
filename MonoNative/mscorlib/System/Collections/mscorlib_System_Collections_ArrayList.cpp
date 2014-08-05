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

			//Public Methods
			mscorlib::System::Int32 ArrayList::Add(mscorlib::System::Object value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "ArrayList", 0, NULL, "Add", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			void ArrayList::Clear()
			{
					Global::InvokeMethod("mscorlib", "System.Collections", "ArrayList", 0, NULL, "Clear", __native_object__, 0, NULL, NULL, NULL);
			}

			mscorlib::System::Boolean ArrayList::Contains(mscorlib::System::Object item)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(item).name());
					__parameters__[0] = (MonoObject*)item;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "ArrayList", 0, NULL, "Contains", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 ArrayList::IndexOf(mscorlib::System::Object value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "ArrayList", 0, NULL, "IndexOf", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 ArrayList::IndexOf(mscorlib::System::Object value, mscorlib::System::Int32 startIndex)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameter_types__[1] = Global::GetType(typeid(startIndex).name());
					__parameters__[0] = (MonoObject*)value;
					__parameters__[1] = &startIndex;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "ArrayList", 0, NULL, "IndexOf", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 ArrayList::IndexOf(mscorlib::System::Object value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameter_types__[1] = Global::GetType(typeid(startIndex).name());
					__parameter_types__[2] = Global::GetType(typeid(count).name());
					__parameters__[0] = (MonoObject*)value;
					__parameters__[1] = &startIndex;
					__parameters__[2] = &count;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "ArrayList", 0, NULL, "IndexOf", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 ArrayList::LastIndexOf(mscorlib::System::Object value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "ArrayList", 0, NULL, "LastIndexOf", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 ArrayList::LastIndexOf(mscorlib::System::Object value, mscorlib::System::Int32 startIndex)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameter_types__[1] = Global::GetType(typeid(startIndex).name());
					__parameters__[0] = (MonoObject*)value;
					__parameters__[1] = &startIndex;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "ArrayList", 0, NULL, "LastIndexOf", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 ArrayList::LastIndexOf(mscorlib::System::Object value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameter_types__[1] = Global::GetType(typeid(startIndex).name());
					__parameter_types__[2] = Global::GetType(typeid(count).name());
					__parameters__[0] = (MonoObject*)value;
					__parameters__[1] = &startIndex;
					__parameters__[2] = &count;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "ArrayList", 0, NULL, "LastIndexOf", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			void ArrayList::Insert(mscorlib::System::Int32 index, mscorlib::System::Object value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(index).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = &index;
					__parameters__[1] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Collections", "ArrayList", 0, NULL, "Insert", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			void ArrayList::InsertRange(mscorlib::System::Int32 index, mscorlib::System::Collections::ICollection c)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(index).name());
					__parameter_types__[1] = Global::GetType(typeid(c).name());
					__parameters__[0] = &index;
					__parameters__[1] = (MonoObject*)c;
					Global::InvokeMethod("mscorlib", "System.Collections", "ArrayList", 0, NULL, "InsertRange", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			void ArrayList::Remove(mscorlib::System::Object obj)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(obj).name());
					__parameters__[0] = (MonoObject*)obj;
					Global::InvokeMethod("mscorlib", "System.Collections", "ArrayList", 0, NULL, "Remove", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void ArrayList::RemoveAt(mscorlib::System::Int32 index)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(index).name());
					__parameters__[0] = &index;
					Global::InvokeMethod("mscorlib", "System.Collections", "ArrayList", 0, NULL, "RemoveAt", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void ArrayList::RemoveRange(mscorlib::System::Int32 index, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(index).name());
					__parameter_types__[1] = Global::GetType(typeid(count).name());
					__parameters__[0] = &index;
					__parameters__[1] = &count;
					Global::InvokeMethod("mscorlib", "System.Collections", "ArrayList", 0, NULL, "RemoveRange", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			void ArrayList::Reverse()
			{
					Global::InvokeMethod("mscorlib", "System.Collections", "ArrayList", 0, NULL, "Reverse", __native_object__, 0, NULL, NULL, NULL);
			}

			void ArrayList::Reverse(mscorlib::System::Int32 index, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(index).name());
					__parameter_types__[1] = Global::GetType(typeid(count).name());
					__parameters__[0] = &index;
					__parameters__[1] = &count;
					Global::InvokeMethod("mscorlib", "System.Collections", "ArrayList", 0, NULL, "Reverse", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			void ArrayList::CopyTo(mscorlib::System::Array array)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(array).name());
					__parameters__[0] = (MonoObject*)array;
					Global::InvokeMethod("mscorlib", "System.Collections", "ArrayList", 0, NULL, "CopyTo", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void ArrayList::CopyTo(mscorlib::System::Array array, mscorlib::System::Int32 arrayIndex)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(array).name());
					__parameter_types__[1] = Global::GetType(typeid(arrayIndex).name());
					__parameters__[0] = (MonoObject*)array;
					__parameters__[1] = &arrayIndex;
					Global::InvokeMethod("mscorlib", "System.Collections", "ArrayList", 0, NULL, "CopyTo", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			void ArrayList::CopyTo(mscorlib::System::Int32 index, mscorlib::System::Array array, mscorlib::System::Int32 arrayIndex, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = Global::GetType(typeid(index).name());
					__parameter_types__[1] = Global::GetType(typeid(array).name());
					__parameter_types__[2] = Global::GetType(typeid(arrayIndex).name());
					__parameter_types__[3] = Global::GetType(typeid(count).name());
					__parameters__[0] = &index;
					__parameters__[1] = (MonoObject*)array;
					__parameters__[2] = &arrayIndex;
					__parameters__[3] = &count;
					Global::InvokeMethod("mscorlib", "System.Collections", "ArrayList", 0, NULL, "CopyTo", __native_object__, 4, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Collections::IEnumerator* ArrayList::GetEnumerator()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "ArrayList", 0, NULL, "GetEnumerator", __native_object__, 0, NULL, NULL, NULL);
					return new mscorlib::System::Collections::IEnumerator(__result__);
			}

			mscorlib::System::Collections::IEnumerator* ArrayList::GetEnumerator(mscorlib::System::Int32 index, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(index).name());
					__parameter_types__[1] = Global::GetType(typeid(count).name());
					__parameters__[0] = &index;
					__parameters__[1] = &count;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "ArrayList", 0, NULL, "GetEnumerator", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return new mscorlib::System::Collections::IEnumerator(__result__);
			}

			void ArrayList::AddRange(mscorlib::System::Collections::ICollection c)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(c).name());
					__parameters__[0] = (MonoObject*)c;
					Global::InvokeMethod("mscorlib", "System.Collections", "ArrayList", 0, NULL, "AddRange", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Int32 ArrayList::BinarySearch(mscorlib::System::Object value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "ArrayList", 0, NULL, "BinarySearch", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 ArrayList::BinarySearch(mscorlib::System::Object value, mscorlib::System::Collections::IComparer comparer)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameter_types__[1] = Global::GetType(typeid(comparer).name());
					__parameters__[0] = (MonoObject*)value;
					__parameters__[1] = (MonoObject*)comparer;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "ArrayList", 0, NULL, "BinarySearch", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 ArrayList::BinarySearch(mscorlib::System::Int32 index, mscorlib::System::Int32 count, mscorlib::System::Object value, mscorlib::System::Collections::IComparer comparer)
			{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = Global::GetType(typeid(index).name());
					__parameter_types__[1] = Global::GetType(typeid(count).name());
					__parameter_types__[2] = Global::GetType(typeid(value).name());
					__parameter_types__[3] = Global::GetType(typeid(comparer).name());
					__parameters__[0] = &index;
					__parameters__[1] = &count;
					__parameters__[2] = (MonoObject*)value;
					__parameters__[3] = (MonoObject*)comparer;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "ArrayList", 0, NULL, "BinarySearch", __native_object__, 4, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Collections::ArrayList ArrayList::GetRange(mscorlib::System::Int32 index, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(index).name());
					__parameter_types__[1] = Global::GetType(typeid(count).name());
					__parameters__[0] = &index;
					__parameters__[1] = &count;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "ArrayList", 0, NULL, "GetRange", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Collections::ArrayList(__result__);
			}

			void ArrayList::SetRange(mscorlib::System::Int32 index, mscorlib::System::Collections::ICollection c)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(index).name());
					__parameter_types__[1] = Global::GetType(typeid(c).name());
					__parameters__[0] = &index;
					__parameters__[1] = (MonoObject*)c;
					Global::InvokeMethod("mscorlib", "System.Collections", "ArrayList", 0, NULL, "SetRange", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			void ArrayList::TrimToSize()
			{
					Global::InvokeMethod("mscorlib", "System.Collections", "ArrayList", 0, NULL, "TrimToSize", __native_object__, 0, NULL, NULL, NULL);
			}

			void ArrayList::Sort()
			{
					Global::InvokeMethod("mscorlib", "System.Collections", "ArrayList", 0, NULL, "Sort", __native_object__, 0, NULL, NULL, NULL);
			}

			void ArrayList::Sort(mscorlib::System::Collections::IComparer comparer)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(comparer).name());
					__parameters__[0] = (MonoObject*)comparer;
					Global::InvokeMethod("mscorlib", "System.Collections", "ArrayList", 0, NULL, "Sort", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void ArrayList::Sort(mscorlib::System::Int32 index, mscorlib::System::Int32 count, mscorlib::System::Collections::IComparer comparer)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(index).name());
					__parameter_types__[1] = Global::GetType(typeid(count).name());
					__parameter_types__[2] = Global::GetType(typeid(comparer).name());
					__parameters__[0] = &index;
					__parameters__[1] = &count;
					__parameters__[2] = (MonoObject*)comparer;
					Global::InvokeMethod("mscorlib", "System.Collections", "ArrayList", 0, NULL, "Sort", __native_object__, 3, __parameter_types__, __parameters__, NULL);
			}

			std::vector<mscorlib::System::Object*> ArrayList::ToArray()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "ArrayList", 0, NULL, "ToArray", __native_object__, 0, NULL, NULL, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::Object*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back(new mscorlib::System::Object (__array_item__));
					}
					return __array_result__;
			}

			mscorlib::System::Array ArrayList::ToArray(mscorlib::System::Type type)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(type).name());
					__parameters__[0] = (MonoObject*)type;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "ArrayList", 0, NULL, "ToArray", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Array(__result__);
			}

			mscorlib::System::Object ArrayList::Clone()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "ArrayList", 0, NULL, "Clone", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
			}

			mscorlib::System::Collections::ArrayList ArrayList::Adapter(mscorlib::System::Collections::IList list)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(list).name());
					__parameters__[0] = (MonoObject*)list;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "ArrayList", 0, NULL, "Adapter", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Collections::ArrayList(__result__);
			}

			mscorlib::System::Collections::ArrayList ArrayList::Synchronized(mscorlib::System::Collections::ArrayList list)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(list).name());
					__parameters__[0] = (MonoObject*)list;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "ArrayList", 0, NULL, "Synchronized", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Collections::ArrayList(__result__);
			}

			mscorlib::System::Collections::IList ArrayList::Synchronized(mscorlib::System::Collections::IList list)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(list).name());
					__parameters__[0] = (MonoObject*)list;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "ArrayList", 0, NULL, "Synchronized", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Collections::IList(__result__);
			}

			mscorlib::System::Collections::ArrayList ArrayList::ReadOnly(mscorlib::System::Collections::ArrayList list)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(list).name());
					__parameters__[0] = (MonoObject*)list;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "ArrayList", 0, NULL, "ReadOnly", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Collections::ArrayList(__result__);
			}

			mscorlib::System::Collections::IList ArrayList::ReadOnly(mscorlib::System::Collections::IList list)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(list).name());
					__parameters__[0] = (MonoObject*)list;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "ArrayList", 0, NULL, "ReadOnly", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Collections::IList(__result__);
			}

			mscorlib::System::Collections::ArrayList ArrayList::FixedSize(mscorlib::System::Collections::ArrayList list)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(list).name());
					__parameters__[0] = (MonoObject*)list;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "ArrayList", 0, NULL, "FixedSize", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Collections::ArrayList(__result__);
			}

			mscorlib::System::Collections::IList ArrayList::FixedSize(mscorlib::System::Collections::IList list)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(list).name());
					__parameters__[0] = (MonoObject*)list;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "ArrayList", 0, NULL, "FixedSize", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Collections::IList(__result__);
			}

			mscorlib::System::Collections::ArrayList ArrayList::Repeat(mscorlib::System::Object value, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameter_types__[1] = Global::GetType(typeid(count).name());
					__parameters__[0] = (MonoObject*)value;
					__parameters__[1] = &count;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "ArrayList", 0, NULL, "Repeat", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Collections::ArrayList(__result__);
			}

			//Get Set Properties Methods
			//	Get/Set:Item
			mscorlib::System::Object  ArrayList::get_Item(mscorlib::System::Int32 index) const
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(index).name());
				__parameters__[0] = &index;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "ArrayList", 0, NULL, "get_Item", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
			}

			void ArrayList::set_Item(mscorlib::System::Int32 index, mscorlib::System::Object  value)
			{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(index).name());
				__parameter_types__[1] = Global::GetType(typeid(value).name());
				__parameters__[0] = &index;
				__parameters__[1] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Collections", "ArrayList", 0, NULL, "set_Item", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}


			//	Get:Count
			mscorlib::System::Int32  ArrayList::get_Count() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "ArrayList", 0, NULL, "get_Count", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}


			//	Get/Set:Capacity
			mscorlib::System::Int32  ArrayList::get_Capacity() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "ArrayList", 0, NULL, "get_Capacity", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			void ArrayList::set_Capacity(mscorlib::System::Int32  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				Global::InvokeMethod("mscorlib", "System.Collections", "ArrayList", 0, NULL, "set_Capacity", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get:IsFixedSize
			mscorlib::System::Boolean  ArrayList::get_IsFixedSize() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "ArrayList", 0, NULL, "get_IsFixedSize", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsReadOnly
			mscorlib::System::Boolean  ArrayList::get_IsReadOnly() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "ArrayList", 0, NULL, "get_IsReadOnly", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsSynchronized
			mscorlib::System::Boolean  ArrayList::get_IsSynchronized() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "ArrayList", 0, NULL, "get_IsSynchronized", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:SyncRoot
			mscorlib::System::Object  ArrayList::get_SyncRoot() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "ArrayList", 0, NULL, "get_SyncRoot", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Object(__result__);
			}



		}
	}
}
