#include <mscorlib/System/Collections/mscorlib_System_Collections_DictionaryBase.h>
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
			void DictionaryBase::Clear()
			{
					Global::InvokeMethod("mscorlib", "System.Collections", "DictionaryBase", 0, NULL, "Clear", __native_object__, 0, NULL, NULL, NULL);
			}

			void DictionaryBase::CopyTo(mscorlib::System::Array array, mscorlib::System::Int32 index)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(array).name());
					__parameter_types__[1] = Global::GetType(typeid(index).name());
					__parameters__[0] = (MonoObject*)array;
					__parameters__[1] = &index;
					Global::InvokeMethod("mscorlib", "System.Collections", "DictionaryBase", 0, NULL, "CopyTo", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Collections::IDictionaryEnumerator* DictionaryBase::GetEnumerator()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "DictionaryBase", 0, NULL, "GetEnumerator", __native_object__, 0, NULL, NULL, NULL);
					return new mscorlib::System::Collections::IDictionaryEnumerator(__result__);
			}

			//Get Set Properties Methods
			//	Get:Count
			mscorlib::System::Int32  DictionaryBase::get_Count()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "DictionaryBase", 0, NULL, "get_Count", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}



		}
	}
}
