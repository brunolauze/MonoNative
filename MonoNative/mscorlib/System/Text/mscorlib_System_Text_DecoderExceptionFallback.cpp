#include <mscorlib/System/Text/mscorlib_System_Text_DecoderExceptionFallback.h>
#include <mscorlib/System/Text/mscorlib_System_Text_DecoderFallbackBuffer.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Text
		{

			//Public Methods
			mscorlib::System::Text::DecoderFallbackBuffer DecoderExceptionFallback::CreateFallbackBuffer()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "DecoderExceptionFallback", 0, NULL, "CreateFallbackBuffer", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Text::DecoderFallbackBuffer(__result__);
			}

			mscorlib::System::Boolean DecoderExceptionFallback::Equals(mscorlib::System::Object value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "DecoderExceptionFallback", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 DecoderExceptionFallback::GetHashCode()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "DecoderExceptionFallback", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			//Get Set Properties Methods
			//	Get:MaxCharCount
			mscorlib::System::Int32  DecoderExceptionFallback::get_MaxCharCount() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "DecoderExceptionFallback", 0, NULL, "get_MaxCharCount", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}



		}
	}
}
