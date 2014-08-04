#include <mscorlib/System/Globalization/mscorlib_System_Globalization_TextElementEnumerator.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Globalization
		{

			//Public Methods
			mscorlib::System::String TextElementEnumerator::GetTextElement()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "TextElementEnumerator", 0, NULL, "GetTextElement", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::Boolean TextElementEnumerator::MoveNext()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "TextElementEnumerator", 0, NULL, "MoveNext", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			void TextElementEnumerator::Reset()
			{
					Global::InvokeMethod("mscorlib", "System.Globalization", "TextElementEnumerator", 0, NULL, "Reset", __native_object__, 0, NULL, NULL, NULL);
			}

			//Get Set Properties Methods
			//	Get:Current
			mscorlib::System::Object  TextElementEnumerator::get_Current()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "TextElementEnumerator", 0, NULL, "get_Current", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Object(__result__);
			}


			//	Get:ElementIndex
			mscorlib::System::Int32  TextElementEnumerator::get_ElementIndex()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "TextElementEnumerator", 0, NULL, "get_ElementIndex", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}



		}
	}
}
