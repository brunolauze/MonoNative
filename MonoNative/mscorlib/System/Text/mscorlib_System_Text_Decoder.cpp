#include <mscorlib/System/Text/mscorlib_System_Text_Decoder.h>
#include <mscorlib/System/Text/mscorlib_System_Text_DecoderFallback.h>
#include <mscorlib/System/Text/mscorlib_System_Text_DecoderFallbackBuffer.h>
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
			mscorlib::System::Int32 Decoder::GetCharCount(std::vector<mscorlib::System::Byte*> bytes, mscorlib::System::Int32 index, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(bytes).name()))->eklass);
					__parameter_types__[1] = Global::GetType(typeid(index).name());
					__parameter_types__[2] = Global::GetType(typeid(count).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(bytes, typeid(mscorlib::System::Byte).name());
					__parameters__[1] = &index;
					__parameters__[2] = &count;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Decoder", 0, NULL, "GetCharCount", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 Decoder::GetChars(std::vector<mscorlib::System::Byte*> bytes, mscorlib::System::Int32 byteIndex, mscorlib::System::Int32 byteCount, std::vector<mscorlib::System::Char*> chars, mscorlib::System::Int32 charIndex)
			{
					MonoType *__parameter_types__[5];
					void *__parameters__[5];
					__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(bytes).name()))->eklass);
					__parameter_types__[1] = Global::GetType(typeid(byteIndex).name());
					__parameter_types__[2] = Global::GetType(typeid(byteCount).name());
					__parameter_types__[3] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(chars).name()))->eklass);
					__parameter_types__[4] = Global::GetType(typeid(charIndex).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(bytes, typeid(mscorlib::System::Byte).name());
					__parameters__[1] = &byteIndex;
					__parameters__[2] = &byteCount;
					__parameters__[3] = Global::FromArray<mscorlib::System::Char*>(chars, typeid(mscorlib::System::Char).name());
					__parameters__[4] = &charIndex;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Decoder", 0, NULL, "GetChars", __native_object__, 5, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 Decoder::GetCharCount(std::vector<mscorlib::System::Byte*> bytes, mscorlib::System::Int32 index, mscorlib::System::Int32 count, mscorlib::System::Boolean flush)
			{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(bytes).name()))->eklass);
					__parameter_types__[1] = Global::GetType(typeid(index).name());
					__parameter_types__[2] = Global::GetType(typeid(count).name());
					__parameter_types__[3] = Global::GetType(typeid(flush).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(bytes, typeid(mscorlib::System::Byte).name());
					__parameters__[1] = &index;
					__parameters__[2] = &count;
					__parameters__[3] = reinterpret_cast<void*>(flush);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Decoder", 0, NULL, "GetCharCount", __native_object__, 4, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 Decoder::GetCharCount(mscorlib::System::Byte* bytes, mscorlib::System::Int32 count, mscorlib::System::Boolean flush)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(bytes).name());
					__parameter_types__[1] = Global::GetType(typeid(count).name());
					__parameter_types__[2] = Global::GetType(typeid(flush).name());
					__parameters__[0] = bytes->GetNativeObject();
					__parameters__[1] = &count;
					__parameters__[2] = reinterpret_cast<void*>(flush);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Decoder", 0, NULL, "GetCharCount", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 Decoder::GetChars(std::vector<mscorlib::System::Byte*> bytes, mscorlib::System::Int32 byteIndex, mscorlib::System::Int32 byteCount, std::vector<mscorlib::System::Char*> chars, mscorlib::System::Int32 charIndex, mscorlib::System::Boolean flush)
			{
					MonoType *__parameter_types__[6];
					void *__parameters__[6];
					__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(bytes).name()))->eklass);
					__parameter_types__[1] = Global::GetType(typeid(byteIndex).name());
					__parameter_types__[2] = Global::GetType(typeid(byteCount).name());
					__parameter_types__[3] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(chars).name()))->eklass);
					__parameter_types__[4] = Global::GetType(typeid(charIndex).name());
					__parameter_types__[5] = Global::GetType(typeid(flush).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(bytes, typeid(mscorlib::System::Byte).name());
					__parameters__[1] = &byteIndex;
					__parameters__[2] = &byteCount;
					__parameters__[3] = Global::FromArray<mscorlib::System::Char*>(chars, typeid(mscorlib::System::Char).name());
					__parameters__[4] = &charIndex;
					__parameters__[5] = reinterpret_cast<void*>(flush);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Decoder", 0, NULL, "GetChars", __native_object__, 6, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 Decoder::GetChars(mscorlib::System::Byte* bytes, mscorlib::System::Int32 byteCount, mscorlib::System::Char* chars, mscorlib::System::Int32 charCount, mscorlib::System::Boolean flush)
			{
					MonoType *__parameter_types__[5];
					void *__parameters__[5];
					__parameter_types__[0] = Global::GetType(typeid(bytes).name());
					__parameter_types__[1] = Global::GetType(typeid(byteCount).name());
					__parameter_types__[2] = Global::GetType(typeid(chars).name());
					__parameter_types__[3] = Global::GetType(typeid(charCount).name());
					__parameter_types__[4] = Global::GetType(typeid(flush).name());
					__parameters__[0] = bytes->GetNativeObject();
					__parameters__[1] = &byteCount;
					__parameters__[2] = chars;
					__parameters__[3] = &charCount;
					__parameters__[4] = reinterpret_cast<void*>(flush);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Decoder", 0, NULL, "GetChars", __native_object__, 5, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			void Decoder::Reset()
			{
					Global::InvokeMethod("mscorlib", "System.Text", "Decoder", 0, NULL, "Reset", __native_object__, 0, NULL, NULL, NULL);
			}

			void Decoder::Convert(mscorlib::System::Byte* bytes, mscorlib::System::Int32 byteCount, mscorlib::System::Char* chars, mscorlib::System::Int32 charCount, mscorlib::System::Boolean flush, mscorlib::System::Int32 bytesUsed, mscorlib::System::Int32 charsUsed, mscorlib::System::Boolean completed)
			{
					MonoType *__parameter_types__[8];
					void *__parameters__[8];
					__parameter_types__[0] = Global::GetType(typeid(bytes).name());
					__parameter_types__[1] = Global::GetType(typeid(byteCount).name());
					__parameter_types__[2] = Global::GetType(typeid(chars).name());
					__parameter_types__[3] = Global::GetType(typeid(charCount).name());
					__parameter_types__[4] = Global::GetType(typeid(flush).name());
					__parameter_types__[5] = Global::GetType(typeid(bytesUsed).name());
					__parameter_types__[6] = Global::GetType(typeid(charsUsed).name());
					__parameter_types__[7] = Global::GetType(typeid(completed).name());
					__parameters__[0] = bytes->GetNativeObject();
					__parameters__[1] = &byteCount;
					__parameters__[2] = chars;
					__parameters__[3] = &charCount;
					__parameters__[4] = reinterpret_cast<void*>(flush);
					__parameters__[5] = &bytesUsed;
					__parameters__[6] = &charsUsed;
					__parameters__[7] = &completed;
					Global::InvokeMethod("mscorlib", "System.Text", "Decoder", 0, NULL, "Convert", __native_object__, 8, __parameter_types__, __parameters__, NULL);
			}

			void Decoder::Convert(std::vector<mscorlib::System::Byte*> bytes, mscorlib::System::Int32 byteIndex, mscorlib::System::Int32 byteCount, std::vector<mscorlib::System::Char*> chars, mscorlib::System::Int32 charIndex, mscorlib::System::Int32 charCount, mscorlib::System::Boolean flush, mscorlib::System::Int32 bytesUsed, mscorlib::System::Int32 charsUsed, mscorlib::System::Boolean completed)
			{
					MonoType *__parameter_types__[10];
					void *__parameters__[10];
					__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(bytes).name()))->eklass);
					__parameter_types__[1] = Global::GetType(typeid(byteIndex).name());
					__parameter_types__[2] = Global::GetType(typeid(byteCount).name());
					__parameter_types__[3] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(chars).name()))->eklass);
					__parameter_types__[4] = Global::GetType(typeid(charIndex).name());
					__parameter_types__[5] = Global::GetType(typeid(charCount).name());
					__parameter_types__[6] = Global::GetType(typeid(flush).name());
					__parameter_types__[7] = Global::GetType(typeid(bytesUsed).name());
					__parameter_types__[8] = Global::GetType(typeid(charsUsed).name());
					__parameter_types__[9] = Global::GetType(typeid(completed).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(bytes, typeid(mscorlib::System::Byte).name());
					__parameters__[1] = &byteIndex;
					__parameters__[2] = &byteCount;
					__parameters__[3] = Global::FromArray<mscorlib::System::Char*>(chars, typeid(mscorlib::System::Char).name());
					__parameters__[4] = &charIndex;
					__parameters__[5] = &charCount;
					__parameters__[6] = reinterpret_cast<void*>(flush);
					__parameters__[7] = &bytesUsed;
					__parameters__[8] = &charsUsed;
					__parameters__[9] = &completed;
					Global::InvokeMethod("mscorlib", "System.Text", "Decoder", 0, NULL, "Convert", __native_object__, 10, __parameter_types__, __parameters__, NULL);
			}

			//Get Set Properties Methods
			//	Get/Set:Fallback
			mscorlib::System::Text::DecoderFallback  Decoder::get_Fallback()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Decoder", 0, NULL, "get_Fallback", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Text::DecoderFallback(__result__);
			}

			void Decoder::set_Fallback(mscorlib::System::Text::DecoderFallback  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Text", "Decoder", 0, NULL, "set_Fallback", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get:FallbackBuffer
			mscorlib::System::Text::DecoderFallbackBuffer  Decoder::get_FallbackBuffer()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Decoder", 0, NULL, "get_FallbackBuffer", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Text::DecoderFallbackBuffer(__result__);
			}



		}
	}
}
