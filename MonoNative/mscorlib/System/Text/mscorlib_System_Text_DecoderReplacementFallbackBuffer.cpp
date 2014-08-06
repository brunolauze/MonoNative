#include <mscorlib/System/Text/mscorlib_System_Text_DecoderReplacementFallbackBuffer.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Text
		{

			//Public Methods
			mscorlib::System::Boolean DecoderReplacementFallbackBuffer::Fallback(std::vector<mscorlib::System::Byte*> bytesUnknown, mscorlib::System::Int32 index)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
					__parameter_types__[1] = Global::GetType(typeid(index).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(bytesUnknown, typeid(mscorlib::System::Byte).name());
					__parameters__[1] = &index;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "DecoderReplacementFallbackBuffer", 0, NULL, "Fallback", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Char DecoderReplacementFallbackBuffer::GetNextChar()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "DecoderReplacementFallbackBuffer", 0, NULL, "GetNextChar", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Char*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean DecoderReplacementFallbackBuffer::MovePrevious()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "DecoderReplacementFallbackBuffer", 0, NULL, "MovePrevious", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			void DecoderReplacementFallbackBuffer::Reset()
			{
					Global::InvokeMethod("mscorlib", "System.Text", "DecoderReplacementFallbackBuffer", 0, NULL, "Reset", __native_object__, 0, NULL, NULL, NULL);
			}

			//Get Set Properties Methods
			//	Get:Remaining
			mscorlib::System::Int32  DecoderReplacementFallbackBuffer::get_Remaining() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "DecoderReplacementFallbackBuffer", 0, NULL, "get_Remaining", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}



		}
	}
}
