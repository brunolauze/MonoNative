#include <mscorlib/System/Collections/mscorlib_System_Collections_IList.h>



namespace mscorlib
{
	namespace System
	{
		namespace Collections
		{

			//Public Methods
			mscorlib::System::Int32 IList::Add(mscorlib::System::Object value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "IList", 0, NULL, "Add", __mscorlib_System_Collections_IList, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			void IList::Clear()
			{
					Global::InvokeMethod("mscorlib", "System.Collections", "IList", 0, NULL, "Clear", __mscorlib_System_Collections_IList, 0, NULL, NULL, NULL);
			}

			mscorlib::System::Boolean IList::Contains(mscorlib::System::Object value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "IList", 0, NULL, "Contains", __mscorlib_System_Collections_IList, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 IList::IndexOf(mscorlib::System::Object value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "IList", 0, NULL, "IndexOf", __mscorlib_System_Collections_IList, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			void IList::Insert(mscorlib::System::Int32 index, mscorlib::System::Object value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(index).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = &index;
					__parameters__[1] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Collections", "IList", 0, NULL, "Insert", __mscorlib_System_Collections_IList, 2, __parameter_types__, __parameters__, NULL);
			}

			void IList::Remove(mscorlib::System::Object value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Collections", "IList", 0, NULL, "Remove", __mscorlib_System_Collections_IList, 1, __parameter_types__, __parameters__, NULL);
			}

			void IList::RemoveAt(mscorlib::System::Int32 index)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(index).name());
					__parameters__[0] = &index;
					Global::InvokeMethod("mscorlib", "System.Collections", "IList", 0, NULL, "RemoveAt", __mscorlib_System_Collections_IList, 1, __parameter_types__, __parameters__, NULL);
			}

			//Get Set Properties Methods
			//	Get:IsFixedSize
			mscorlib::System::Boolean  IList::get_IsFixedSize()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "IList", 0, NULL, "get_IsFixedSize", __mscorlib_System_Collections_IList, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsReadOnly
			mscorlib::System::Boolean  IList::get_IsReadOnly()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "IList", 0, NULL, "get_IsReadOnly", __mscorlib_System_Collections_IList, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get/Set:Item
			mscorlib::System::Object  IList::get_Item(mscorlib::System::Int32 index)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(index).name());
				__parameters__[0] = &index;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "IList", 0, NULL, "get_Item", __mscorlib_System_Collections_IList, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
			}

			void IList::set_Item(mscorlib::System::Int32 index, mscorlib::System::Object  value)
			{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(index).name());
				__parameter_types__[1] = Global::GetType(typeid(value).name());
				__parameters__[0] = &index;
				__parameters__[1] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Collections", "IList", 0, NULL, "set_Item", __mscorlib_System_Collections_IList, 2, __parameter_types__, __parameters__, NULL);
			}



		}
	}
}
