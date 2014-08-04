#include <mscorlib/System/Collections/mscorlib_System_Collections_CollectionBase.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Collections
		{

			//Public Methods
			mscorlib::System::Collections::IEnumerator* CollectionBase::GetEnumerator()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "CollectionBase", 0, NULL, "GetEnumerator", __native_object__, 0, NULL, NULL, NULL);
					return new mscorlib::System::Collections::IEnumerator(__result__);
			}

			void CollectionBase::Clear()
			{
					Global::InvokeMethod("mscorlib", "System.Collections", "CollectionBase", 0, NULL, "Clear", __native_object__, 0, NULL, NULL, NULL);
			}

			void CollectionBase::RemoveAt(mscorlib::System::Int32 index)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(index).name());
					__parameters__[0] = &index;
					Global::InvokeMethod("mscorlib", "System.Collections", "CollectionBase", 0, NULL, "RemoveAt", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			//Get Set Properties Methods
			//	Get:Count
			mscorlib::System::Int32  CollectionBase::get_Count()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "CollectionBase", 0, NULL, "get_Count", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}


			//	Get/Set:Capacity
			mscorlib::System::Int32  CollectionBase::get_Capacity()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "CollectionBase", 0, NULL, "get_Capacity", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			void CollectionBase::set_Capacity(mscorlib::System::Int32  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				Global::InvokeMethod("mscorlib", "System.Collections", "CollectionBase", 0, NULL, "set_Capacity", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}



		}
	}
}
