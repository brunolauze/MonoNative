#include <mscorlib/System/Collections/mscorlib_System_Collections_IDictionary.h>



namespace mscorlib
{
	namespace System
	{
		namespace Collections
		{

			//Public Methods
			void IDictionary::Add(mscorlib::System::Object key, mscorlib::System::Object value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(key).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)key;
					__parameters__[1] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Collections", "IDictionary", 0, NULL, "Add", __mscorlib_System_Collections_IDictionary, 2, __parameter_types__, __parameters__, NULL);
			}

			void IDictionary::Clear()
			{
					Global::InvokeMethod("mscorlib", "System.Collections", "IDictionary", 0, NULL, "Clear", __mscorlib_System_Collections_IDictionary, 0, NULL, NULL, NULL);
			}

			mscorlib::System::Boolean IDictionary::Contains(mscorlib::System::Object key)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(key).name());
					__parameters__[0] = (MonoObject*)key;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "IDictionary", 0, NULL, "Contains", __mscorlib_System_Collections_IDictionary, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Collections::IDictionaryEnumerator* IDictionary::GetEnumerator()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "IDictionary", 0, NULL, "GetEnumerator", __mscorlib_System_Collections_IDictionary, 0, NULL, NULL, NULL);
					return new mscorlib::System::Collections::IDictionaryEnumerator(__result__);
			}

			void IDictionary::Remove(mscorlib::System::Object key)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(key).name());
					__parameters__[0] = (MonoObject*)key;
					Global::InvokeMethod("mscorlib", "System.Collections", "IDictionary", 0, NULL, "Remove", __mscorlib_System_Collections_IDictionary, 1, __parameter_types__, __parameters__, NULL);
			}

			//Get Set Properties Methods
			//	Get:IsFixedSize
			mscorlib::System::Boolean  IDictionary::get_IsFixedSize() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "IDictionary", 0, NULL, "get_IsFixedSize", __mscorlib_System_Collections_IDictionary, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsReadOnly
			mscorlib::System::Boolean  IDictionary::get_IsReadOnly() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "IDictionary", 0, NULL, "get_IsReadOnly", __mscorlib_System_Collections_IDictionary, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get/Set:Item
			mscorlib::System::Object  IDictionary::get_Item(mscorlib::System::Object key) const
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(key).name());
				__parameters__[0] = (MonoObject*)key;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "IDictionary", 0, NULL, "get_Item", __mscorlib_System_Collections_IDictionary, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
			}

			void IDictionary::set_Item(mscorlib::System::Object key, mscorlib::System::Object  value)
			{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(key).name());
				__parameter_types__[1] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)key;
				__parameters__[1] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Collections", "IDictionary", 0, NULL, "set_Item", __mscorlib_System_Collections_IDictionary, 2, __parameter_types__, __parameters__, NULL);
			}


			//	Get:Keys
			mscorlib::System::Collections::ICollection  IDictionary::get_Keys() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "IDictionary", 0, NULL, "get_Keys", __mscorlib_System_Collections_IDictionary, 0, NULL, NULL, NULL);
				return mscorlib::System::Collections::ICollection(__result__);
			}


			//	Get:Values
			mscorlib::System::Collections::ICollection  IDictionary::get_Values() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "IDictionary", 0, NULL, "get_Values", __mscorlib_System_Collections_IDictionary, 0, NULL, NULL, NULL);
				return mscorlib::System::Collections::ICollection(__result__);
			}



		}
	}
}
