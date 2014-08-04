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

			//Public Methods
			void Hashtable::CopyTo(mscorlib::System::Array array, mscorlib::System::Int32 arrayIndex)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(array).name());
					__parameter_types__[1] = Global::GetType(typeid(arrayIndex).name());
					__parameters__[0] = (MonoObject*)array;
					__parameters__[1] = &arrayIndex;
					Global::InvokeMethod("mscorlib", "System.Collections", "Hashtable", 0, NULL, "CopyTo", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			void Hashtable::Add(mscorlib::System::Object key, mscorlib::System::Object value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(key).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)key;
					__parameters__[1] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Collections", "Hashtable", 0, NULL, "Add", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			void Hashtable::Clear()
			{
					Global::InvokeMethod("mscorlib", "System.Collections", "Hashtable", 0, NULL, "Clear", __native_object__, 0, NULL, NULL, NULL);
			}

			mscorlib::System::Boolean Hashtable::Contains(mscorlib::System::Object key)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(key).name());
					__parameters__[0] = (MonoObject*)key;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "Hashtable", 0, NULL, "Contains", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Collections::IDictionaryEnumerator* Hashtable::GetEnumerator()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "Hashtable", 0, NULL, "GetEnumerator", __native_object__, 0, NULL, NULL, NULL);
					return new mscorlib::System::Collections::IDictionaryEnumerator(__result__);
			}

			void Hashtable::Remove(mscorlib::System::Object key)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(key).name());
					__parameters__[0] = (MonoObject*)key;
					Global::InvokeMethod("mscorlib", "System.Collections", "Hashtable", 0, NULL, "Remove", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Boolean Hashtable::ContainsKey(mscorlib::System::Object key)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(key).name());
					__parameters__[0] = (MonoObject*)key;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "Hashtable", 0, NULL, "ContainsKey", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean Hashtable::ContainsValue(mscorlib::System::Object value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "Hashtable", 0, NULL, "ContainsValue", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Object Hashtable::Clone()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "Hashtable", 0, NULL, "Clone", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
			}

			void Hashtable::GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(info).name());
					__parameter_types__[1] = Global::GetType(typeid(context).name());
					__parameters__[0] = (MonoObject*)info;
					__parameters__[1] = (MonoObject*)context;
					Global::InvokeMethod("mscorlib", "System.Collections", "Hashtable", 0, NULL, "GetObjectData", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			void Hashtable::OnDeserialization(mscorlib::System::Object sender)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(sender).name());
					__parameters__[0] = (MonoObject*)sender;
					Global::InvokeMethod("mscorlib", "System.Collections", "Hashtable", 0, NULL, "OnDeserialization", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Collections::Hashtable Hashtable::Synchronized(mscorlib::System::Collections::Hashtable table)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(table).name());
					__parameters__[0] = (MonoObject*)table;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "Hashtable", 0, NULL, "Synchronized", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Collections::Hashtable(__result__);
			}

			//Get Set Properties Methods
			//	Get:Count
			mscorlib::System::Int32  Hashtable::get_Count()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "Hashtable", 0, NULL, "get_Count", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}


			//	Get:IsSynchronized
			mscorlib::System::Boolean  Hashtable::get_IsSynchronized()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "Hashtable", 0, NULL, "get_IsSynchronized", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:SyncRoot
			mscorlib::System::Object  Hashtable::get_SyncRoot()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "Hashtable", 0, NULL, "get_SyncRoot", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Object(__result__);
			}


			//	Get:IsFixedSize
			mscorlib::System::Boolean  Hashtable::get_IsFixedSize()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "Hashtable", 0, NULL, "get_IsFixedSize", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsReadOnly
			mscorlib::System::Boolean  Hashtable::get_IsReadOnly()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "Hashtable", 0, NULL, "get_IsReadOnly", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:Keys
			mscorlib::System::Collections::ICollection  Hashtable::get_Keys()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "Hashtable", 0, NULL, "get_Keys", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Collections::ICollection(__result__);
			}


			//	Get:Values
			mscorlib::System::Collections::ICollection  Hashtable::get_Values()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "Hashtable", 0, NULL, "get_Values", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Collections::ICollection(__result__);
			}


			//	Get/Set:Item
			mscorlib::System::Object  Hashtable::get_Item(mscorlib::System::Object key)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(key).name());
				__parameters__[0] = (MonoObject*)key;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "Hashtable", 0, NULL, "get_Item", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
			}

			void Hashtable::set_Item(mscorlib::System::Object key, mscorlib::System::Object  value)
			{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(key).name());
				__parameter_types__[1] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)key;
				__parameters__[1] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Collections", "Hashtable", 0, NULL, "set_Item", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}



		}
	}
}
