#include <mscorlib/System/Text/mscorlib_System_Text_EncoderExceptionFallbackBuffer.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Text
		{

			//Public Methods
			mscorlib::System::Boolean EncoderExceptionFallbackBuffer::Fallback(mscorlib::System::Char charUnknown, mscorlib::System::Int32 index)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(charUnknown).name());
					__parameter_types__[1] = Global::GetType(typeid(index).name());
					__parameters__[0] = &charUnknown;
					__parameters__[1] = &index;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "EncoderExceptionFallbackBuffer", 0, NULL, "Fallback", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean EncoderExceptionFallbackBuffer::Fallback(mscorlib::System::Char charUnknownHigh, mscorlib::System::Char charUnknownLow, mscorlib::System::Int32 index)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(charUnknownHigh).name());
					__parameter_types__[1] = Global::GetType(typeid(charUnknownLow).name());
					__parameter_types__[2] = Global::GetType(typeid(index).name());
					__parameters__[0] = &charUnknownHigh;
					__parameters__[1] = &charUnknownLow;
					__parameters__[2] = &index;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "EncoderExceptionFallbackBuffer", 0, NULL, "Fallback", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Char EncoderExceptionFallbackBuffer::GetNextChar()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "EncoderExceptionFallbackBuffer", 0, NULL, "GetNextChar", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Char*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean EncoderExceptionFallbackBuffer::MovePrevious()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "EncoderExceptionFallbackBuffer", 0, NULL, "MovePrevious", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			//Get Set Properties Methods
			//	Get:Remaining
			mscorlib::System::Int32  EncoderExceptionFallbackBuffer::get_Remaining() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "EncoderExceptionFallbackBuffer", 0, NULL, "get_Remaining", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}



		}
	}
}
