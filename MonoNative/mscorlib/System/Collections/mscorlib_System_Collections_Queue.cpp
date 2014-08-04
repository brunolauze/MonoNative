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

			//Public Methods
			void Queue::CopyTo(mscorlib::System::Array array, mscorlib::System::Int32 index)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(array).name());
					__parameter_types__[1] = Global::GetType(typeid(index).name());
					__parameters__[0] = (MonoObject*)array;
					__parameters__[1] = &index;
					Global::InvokeMethod("mscorlib", "System.Collections", "Queue", 0, NULL, "CopyTo", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Collections::IEnumerator* Queue::GetEnumerator()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "Queue", 0, NULL, "GetEnumerator", __native_object__, 0, NULL, NULL, NULL);
					return new mscorlib::System::Collections::IEnumerator(__result__);
			}

			mscorlib::System::Object Queue::Clone()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "Queue", 0, NULL, "Clone", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
			}

			void Queue::Clear()
			{
					Global::InvokeMethod("mscorlib", "System.Collections", "Queue", 0, NULL, "Clear", __native_object__, 0, NULL, NULL, NULL);
			}

			mscorlib::System::Boolean Queue::Contains(mscorlib::System::Object obj)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(obj).name());
					__parameters__[0] = (MonoObject*)obj;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "Queue", 0, NULL, "Contains", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Object Queue::Dequeue()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "Queue", 0, NULL, "Dequeue", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
			}

			void Queue::Enqueue(mscorlib::System::Object obj)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(obj).name());
					__parameters__[0] = (MonoObject*)obj;
					Global::InvokeMethod("mscorlib", "System.Collections", "Queue", 0, NULL, "Enqueue", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Object Queue::Peek()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "Queue", 0, NULL, "Peek", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
			}

			mscorlib::System::Collections::Queue Queue::Synchronized(mscorlib::System::Collections::Queue queue)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(queue).name());
					__parameters__[0] = (MonoObject*)queue;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "Queue", 0, NULL, "Synchronized", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Collections::Queue(__result__);
			}

			std::vector<mscorlib::System::Object*> Queue::ToArray()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "Queue", 0, NULL, "ToArray", __native_object__, 0, NULL, NULL, NULL);
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

			void Queue::TrimToSize()
			{
					Global::InvokeMethod("mscorlib", "System.Collections", "Queue", 0, NULL, "TrimToSize", __native_object__, 0, NULL, NULL, NULL);
			}

			//Get Set Properties Methods
			//	Get:Count
			mscorlib::System::Int32  Queue::get_Count()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "Queue", 0, NULL, "get_Count", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}


			//	Get:IsSynchronized
			mscorlib::System::Boolean  Queue::get_IsSynchronized()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "Queue", 0, NULL, "get_IsSynchronized", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:SyncRoot
			mscorlib::System::Object  Queue::get_SyncRoot()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "Queue", 0, NULL, "get_SyncRoot", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Object(__result__);
			}



		}
	}
}
