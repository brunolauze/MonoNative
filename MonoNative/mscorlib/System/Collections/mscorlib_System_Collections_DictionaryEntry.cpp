#include <mscorlib/System/Collections/mscorlib_System_Collections_DictionaryEntry.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Collections
		{

			//Public Methods
			//Get Set Properties Methods
			//	Get/Set:Key
			mscorlib::System::Object  DictionaryEntry::get_Key()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "DictionaryEntry", 0, NULL, "get_Key", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Object(__result__);
			}

			void DictionaryEntry::set_Key(mscorlib::System::Object  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Collections", "DictionaryEntry", 0, NULL, "set_Key", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:Value
			mscorlib::System::Object  DictionaryEntry::get_Value()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "DictionaryEntry", 0, NULL, "get_Value", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Object(__result__);
			}

			void DictionaryEntry::set_Value(mscorlib::System::Object  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Collections", "DictionaryEntry", 0, NULL, "set_Value", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}



		}
	}
}
