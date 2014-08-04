#include <mscorlib/System/Text/mscorlib_System_Text_EncoderExceptionFallback.h>
#include <mscorlib/System/Text/mscorlib_System_Text_EncoderFallbackBuffer.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Text
		{

			//Public Methods
			mscorlib::System::Text::EncoderFallbackBuffer EncoderExceptionFallback::CreateFallbackBuffer()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "EncoderExceptionFallback", 0, NULL, "CreateFallbackBuffer", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Text::EncoderFallbackBuffer(__result__);
			}

			mscorlib::System::Boolean EncoderExceptionFallback::Equals(mscorlib::System::Object value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "EncoderExceptionFallback", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 EncoderExceptionFallback::GetHashCode()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "EncoderExceptionFallback", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			//Get Set Properties Methods
			//	Get:MaxCharCount
			mscorlib::System::Int32  EncoderExceptionFallback::get_MaxCharCount()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "EncoderExceptionFallback", 0, NULL, "get_MaxCharCount", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}



		}
	}
}
