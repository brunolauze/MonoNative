#include <mscorlib/System/Text/mscorlib_System_Text_Encoder.h>
#include <mscorlib/System/Text/mscorlib_System_Text_EncoderFallback.h>
#include <mscorlib/System/Text/mscorlib_System_Text_EncoderFallbackBuffer.h>
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
			mscorlib::System::Int32 Encoder::GetByteCount(std::vector<mscorlib::System::Char*> chars, mscorlib::System::Int32 index, mscorlib::System::Int32 count, mscorlib::System::Boolean flush)
			{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Char")), 1));
					__parameter_types__[1] = Global::GetType(typeid(index).name());
					__parameter_types__[2] = Global::GetType(typeid(count).name());
					__parameter_types__[3] = Global::GetType(typeid(flush).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Char*>(chars, typeid(mscorlib::System::Char).name());
					__parameters__[1] = &index;
					__parameters__[2] = &count;
					__parameters__[3] = reinterpret_cast<void*>(flush);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoder", 0, NULL, "GetByteCount", __native_object__, 4, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 Encoder::GetBytes(std::vector<mscorlib::System::Char*> chars, mscorlib::System::Int32 charIndex, mscorlib::System::Int32 charCount, std::vector<mscorlib::System::Byte*> bytes, mscorlib::System::Int32 byteIndex, mscorlib::System::Boolean flush)
			{
					MonoType *__parameter_types__[6];
					void *__parameters__[6];
					__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Char")), 1));
					__parameter_types__[1] = Global::GetType(typeid(charIndex).name());
					__parameter_types__[2] = Global::GetType(typeid(charCount).name());
					__parameter_types__[3] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
					__parameter_types__[4] = Global::GetType(typeid(byteIndex).name());
					__parameter_types__[5] = Global::GetType(typeid(flush).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Char*>(chars, typeid(mscorlib::System::Char).name());
					__parameters__[1] = &charIndex;
					__parameters__[2] = &charCount;
					__parameters__[3] = Global::FromArray<mscorlib::System::Byte*>(bytes, typeid(mscorlib::System::Byte).name());
					__parameters__[4] = &byteIndex;
					__parameters__[5] = reinterpret_cast<void*>(flush);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoder", 0, NULL, "GetBytes", __native_object__, 6, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 Encoder::GetByteCount(mscorlib::System::Char* chars, mscorlib::System::Int32 count, mscorlib::System::Boolean flush)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(chars).name());
					__parameter_types__[1] = Global::GetType(typeid(count).name());
					__parameter_types__[2] = Global::GetType(typeid(flush).name());
					__parameters__[0] = chars;
					__parameters__[1] = &count;
					__parameters__[2] = reinterpret_cast<void*>(flush);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoder", 0, NULL, "GetByteCount", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 Encoder::GetBytes(mscorlib::System::Char* chars, mscorlib::System::Int32 charCount, mscorlib::System::Byte* bytes, mscorlib::System::Int32 byteCount, mscorlib::System::Boolean flush)
			{
					MonoType *__parameter_types__[5];
					void *__parameters__[5];
					__parameter_types__[0] = Global::GetType(typeid(chars).name());
					__parameter_types__[1] = Global::GetType(typeid(charCount).name());
					__parameter_types__[2] = Global::GetType(typeid(bytes).name());
					__parameter_types__[3] = Global::GetType(typeid(byteCount).name());
					__parameter_types__[4] = Global::GetType(typeid(flush).name());
					__parameters__[0] = chars;
					__parameters__[1] = &charCount;
					__parameters__[2] = bytes->GetNativeObject();
					__parameters__[3] = &byteCount;
					__parameters__[4] = reinterpret_cast<void*>(flush);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoder", 0, NULL, "GetBytes", __native_object__, 5, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			void Encoder::Reset()
			{
					Global::InvokeMethod("mscorlib", "System.Text", "Encoder", 0, NULL, "Reset", __native_object__, 0, NULL, NULL, NULL);
			}

			void Encoder::Convert(mscorlib::System::Char* chars, mscorlib::System::Int32 charCount, mscorlib::System::Byte* bytes, mscorlib::System::Int32 byteCount, mscorlib::System::Boolean flush, mscorlib::System::Int32 charsUsed, mscorlib::System::Int32 bytesUsed, mscorlib::System::Boolean completed)
			{
					MonoType *__parameter_types__[8];
					void *__parameters__[8];
					__parameter_types__[0] = Global::GetType(typeid(chars).name());
					__parameter_types__[1] = Global::GetType(typeid(charCount).name());
					__parameter_types__[2] = Global::GetType(typeid(bytes).name());
					__parameter_types__[3] = Global::GetType(typeid(byteCount).name());
					__parameter_types__[4] = Global::GetType(typeid(flush).name());
					__parameter_types__[5] = Global::GetType(typeid(charsUsed).name());
					__parameter_types__[6] = Global::GetType(typeid(bytesUsed).name());
					__parameter_types__[7] = Global::GetType(typeid(completed).name());
					__parameters__[0] = chars;
					__parameters__[1] = &charCount;
					__parameters__[2] = bytes->GetNativeObject();
					__parameters__[3] = &byteCount;
					__parameters__[4] = reinterpret_cast<void*>(flush);
					__parameters__[5] = &charsUsed;
					__parameters__[6] = &bytesUsed;
					__parameters__[7] = &completed;
					Global::InvokeMethod("mscorlib", "System.Text", "Encoder", 0, NULL, "Convert", __native_object__, 8, __parameter_types__, __parameters__, NULL);
			}

			void Encoder::Convert(std::vector<mscorlib::System::Char*> chars, mscorlib::System::Int32 charIndex, mscorlib::System::Int32 charCount, std::vector<mscorlib::System::Byte*> bytes, mscorlib::System::Int32 byteIndex, mscorlib::System::Int32 byteCount, mscorlib::System::Boolean flush, mscorlib::System::Int32 charsUsed, mscorlib::System::Int32 bytesUsed, mscorlib::System::Boolean completed)
			{
					MonoType *__parameter_types__[10];
					void *__parameters__[10];
					__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Char")), 1));
					__parameter_types__[1] = Global::GetType(typeid(charIndex).name());
					__parameter_types__[2] = Global::GetType(typeid(charCount).name());
					__parameter_types__[3] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
					__parameter_types__[4] = Global::GetType(typeid(byteIndex).name());
					__parameter_types__[5] = Global::GetType(typeid(byteCount).name());
					__parameter_types__[6] = Global::GetType(typeid(flush).name());
					__parameter_types__[7] = Global::GetType(typeid(charsUsed).name());
					__parameter_types__[8] = Global::GetType(typeid(bytesUsed).name());
					__parameter_types__[9] = Global::GetType(typeid(completed).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Char*>(chars, typeid(mscorlib::System::Char).name());
					__parameters__[1] = &charIndex;
					__parameters__[2] = &charCount;
					__parameters__[3] = Global::FromArray<mscorlib::System::Byte*>(bytes, typeid(mscorlib::System::Byte).name());
					__parameters__[4] = &byteIndex;
					__parameters__[5] = &byteCount;
					__parameters__[6] = reinterpret_cast<void*>(flush);
					__parameters__[7] = &charsUsed;
					__parameters__[8] = &bytesUsed;
					__parameters__[9] = &completed;
					Global::InvokeMethod("mscorlib", "System.Text", "Encoder", 0, NULL, "Convert", __native_object__, 10, __parameter_types__, __parameters__, NULL);
			}

			//Get Set Properties Methods
			//	Get/Set:Fallback
			mscorlib::System::Text::EncoderFallback  Encoder::get_Fallback() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoder", 0, NULL, "get_Fallback", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Text::EncoderFallback(__result__);
			}

			void Encoder::set_Fallback(mscorlib::System::Text::EncoderFallback  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Text", "Encoder", 0, NULL, "set_Fallback", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get:FallbackBuffer
			mscorlib::System::Text::EncoderFallbackBuffer  Encoder::get_FallbackBuffer() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoder", 0, NULL, "get_FallbackBuffer", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Text::EncoderFallbackBuffer(__result__);
			}



		}
	}
}
