#include <mscorlib/System/Text/mscorlib_System_Text_ASCIIEncoding.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/Text/mscorlib_System_Text_Decoder.h>
#include <mscorlib/System/Text/mscorlib_System_Text_Encoder.h>
#include <mscorlib/System/Text/mscorlib_System_Text_DecoderFallback.h>
#include <mscorlib/System/Text/mscorlib_System_Text_EncoderFallback.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Text
		{

			//Public Methods
			mscorlib::System::Int32 ASCIIEncoding::GetByteCount(std::vector<mscorlib::System::Char*> chars, mscorlib::System::Int32 index, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Char")), 1));
					__parameter_types__[1] = Global::GetType(typeid(index).name());
					__parameter_types__[2] = Global::GetType(typeid(count).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Char*>(chars, typeid(mscorlib::System::Char).name());
					__parameters__[1] = &index;
					__parameters__[2] = &count;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "ASCIIEncoding", 0, NULL, "GetByteCount", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 ASCIIEncoding::GetByteCount(mscorlib::System::String chars)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(chars).name());
					__parameters__[0] = (MonoObject*)chars;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "ASCIIEncoding", 0, NULL, "GetByteCount", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 ASCIIEncoding::GetByteCount(const char *chars)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), chars);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "ASCIIEncoding", 0, NULL, "GetByteCount", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 ASCIIEncoding::GetBytes(std::vector<mscorlib::System::Char*> chars, mscorlib::System::Int32 charIndex, mscorlib::System::Int32 charCount, std::vector<mscorlib::System::Byte*> bytes, mscorlib::System::Int32 byteIndex)
			{
					MonoType *__parameter_types__[5];
					void *__parameters__[5];
					__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Char")), 1));
					__parameter_types__[1] = Global::GetType(typeid(charIndex).name());
					__parameter_types__[2] = Global::GetType(typeid(charCount).name());
					__parameter_types__[3] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
					__parameter_types__[4] = Global::GetType(typeid(byteIndex).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Char*>(chars, typeid(mscorlib::System::Char).name());
					__parameters__[1] = &charIndex;
					__parameters__[2] = &charCount;
					__parameters__[3] = Global::FromArray<mscorlib::System::Byte*>(bytes, typeid(mscorlib::System::Byte).name());
					__parameters__[4] = &byteIndex;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "ASCIIEncoding", 0, NULL, "GetBytes", __native_object__, 5, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 ASCIIEncoding::GetBytes(mscorlib::System::String chars, mscorlib::System::Int32 charIndex, mscorlib::System::Int32 charCount, std::vector<mscorlib::System::Byte*> bytes, mscorlib::System::Int32 byteIndex)
			{
					MonoType *__parameter_types__[5];
					void *__parameters__[5];
					__parameter_types__[0] = Global::GetType(typeid(chars).name());
					__parameter_types__[1] = Global::GetType(typeid(charIndex).name());
					__parameter_types__[2] = Global::GetType(typeid(charCount).name());
					__parameter_types__[3] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
					__parameter_types__[4] = Global::GetType(typeid(byteIndex).name());
					__parameters__[0] = (MonoObject*)chars;
					__parameters__[1] = &charIndex;
					__parameters__[2] = &charCount;
					__parameters__[3] = Global::FromArray<mscorlib::System::Byte*>(bytes, typeid(mscorlib::System::Byte).name());
					__parameters__[4] = &byteIndex;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "ASCIIEncoding", 0, NULL, "GetBytes", __native_object__, 5, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 ASCIIEncoding::GetBytes(const char *chars, mscorlib::System::Int32 charIndex, mscorlib::System::Int32 charCount, std::vector<mscorlib::System::Byte*> bytes, mscorlib::System::Int32 byteIndex)
			{
					MonoType *__parameter_types__[5];
					void *__parameters__[5];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType(typeid(charIndex).name());
					__parameter_types__[2] = Global::GetType(typeid(charCount).name());
					__parameter_types__[3] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
					__parameter_types__[4] = Global::GetType(typeid(byteIndex).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), chars);
					__parameters__[1] = &charIndex;
					__parameters__[2] = &charCount;
					__parameters__[3] = Global::FromArray<mscorlib::System::Byte*>(bytes, typeid(mscorlib::System::Byte).name());
					__parameters__[4] = &byteIndex;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "ASCIIEncoding", 0, NULL, "GetBytes", __native_object__, 5, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 ASCIIEncoding::GetCharCount(std::vector<mscorlib::System::Byte*> bytes, mscorlib::System::Int32 index, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
					__parameter_types__[1] = Global::GetType(typeid(index).name());
					__parameter_types__[2] = Global::GetType(typeid(count).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(bytes, typeid(mscorlib::System::Byte).name());
					__parameters__[1] = &index;
					__parameters__[2] = &count;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "ASCIIEncoding", 0, NULL, "GetCharCount", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 ASCIIEncoding::GetChars(std::vector<mscorlib::System::Byte*> bytes, mscorlib::System::Int32 byteIndex, mscorlib::System::Int32 byteCount, std::vector<mscorlib::System::Char*> chars, mscorlib::System::Int32 charIndex)
			{
					MonoType *__parameter_types__[5];
					void *__parameters__[5];
					__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
					__parameter_types__[1] = Global::GetType(typeid(byteIndex).name());
					__parameter_types__[2] = Global::GetType(typeid(byteCount).name());
					__parameter_types__[3] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Char")), 1));
					__parameter_types__[4] = Global::GetType(typeid(charIndex).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(bytes, typeid(mscorlib::System::Byte).name());
					__parameters__[1] = &byteIndex;
					__parameters__[2] = &byteCount;
					__parameters__[3] = Global::FromArray<mscorlib::System::Char*>(chars, typeid(mscorlib::System::Char).name());
					__parameters__[4] = &charIndex;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "ASCIIEncoding", 0, NULL, "GetChars", __native_object__, 5, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 ASCIIEncoding::GetMaxByteCount(mscorlib::System::Int32 charCount)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(charCount).name());
					__parameters__[0] = &charCount;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "ASCIIEncoding", 0, NULL, "GetMaxByteCount", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 ASCIIEncoding::GetMaxCharCount(mscorlib::System::Int32 byteCount)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(byteCount).name());
					__parameters__[0] = &byteCount;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "ASCIIEncoding", 0, NULL, "GetMaxCharCount", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::String ASCIIEncoding::GetString(std::vector<mscorlib::System::Byte*> bytes, mscorlib::System::Int32 byteIndex, mscorlib::System::Int32 byteCount)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
					__parameter_types__[1] = Global::GetType(typeid(byteIndex).name());
					__parameter_types__[2] = Global::GetType(typeid(byteCount).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(bytes, typeid(mscorlib::System::Byte).name());
					__parameters__[1] = &byteIndex;
					__parameters__[2] = &byteCount;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "ASCIIEncoding", 0, NULL, "GetString", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::Int32 ASCIIEncoding::GetBytes(mscorlib::System::Char* chars, mscorlib::System::Int32 charCount, mscorlib::System::Byte* bytes, mscorlib::System::Int32 byteCount)
			{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = Global::GetType(typeid(chars).name());
					__parameter_types__[1] = Global::GetType(typeid(charCount).name());
					__parameter_types__[2] = Global::GetType(typeid(bytes).name());
					__parameter_types__[3] = Global::GetType(typeid(byteCount).name());
					__parameters__[0] = chars;
					__parameters__[1] = &charCount;
					__parameters__[2] = bytes->GetNativeObject();
					__parameters__[3] = &byteCount;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "ASCIIEncoding", 0, NULL, "GetBytes", __native_object__, 4, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 ASCIIEncoding::GetChars(mscorlib::System::Byte* bytes, mscorlib::System::Int32 byteCount, mscorlib::System::Char* chars, mscorlib::System::Int32 charCount)
			{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = Global::GetType(typeid(bytes).name());
					__parameter_types__[1] = Global::GetType(typeid(byteCount).name());
					__parameter_types__[2] = Global::GetType(typeid(chars).name());
					__parameter_types__[3] = Global::GetType(typeid(charCount).name());
					__parameters__[0] = bytes->GetNativeObject();
					__parameters__[1] = &byteCount;
					__parameters__[2] = chars;
					__parameters__[3] = &charCount;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "ASCIIEncoding", 0, NULL, "GetChars", __native_object__, 4, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 ASCIIEncoding::GetCharCount(mscorlib::System::Byte* bytes, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(bytes).name());
					__parameter_types__[1] = Global::GetType(typeid(count).name());
					__parameters__[0] = bytes->GetNativeObject();
					__parameters__[1] = &count;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "ASCIIEncoding", 0, NULL, "GetCharCount", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 ASCIIEncoding::GetByteCount(mscorlib::System::Char* chars, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(chars).name());
					__parameter_types__[1] = Global::GetType(typeid(count).name());
					__parameters__[0] = chars;
					__parameters__[1] = &count;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "ASCIIEncoding", 0, NULL, "GetByteCount", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Text::Decoder ASCIIEncoding::GetDecoder()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "ASCIIEncoding", 0, NULL, "GetDecoder", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Text::Decoder(__result__);
			}

			mscorlib::System::Text::Encoder ASCIIEncoding::GetEncoder()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "ASCIIEncoding", 0, NULL, "GetEncoder", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Text::Encoder(__result__);
			}

			//Get Set Properties Methods
			//	Get:IsSingleByte
			mscorlib::System::Boolean  ASCIIEncoding::get_IsSingleByte() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "ASCIIEncoding", 0, NULL, "get_IsSingleByte", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsReadOnly
			mscorlib::System::Boolean  ASCIIEncoding::get_IsReadOnly() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "get_IsReadOnly", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get/Set:DecoderFallback
			mscorlib::System::Text::DecoderFallback  ASCIIEncoding::get_DecoderFallback() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "get_DecoderFallback", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Text::DecoderFallback(__result__);
			}

			void ASCIIEncoding::set_DecoderFallback(mscorlib::System::Text::DecoderFallback  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "set_DecoderFallback", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:EncoderFallback
			mscorlib::System::Text::EncoderFallback  ASCIIEncoding::get_EncoderFallback() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "get_EncoderFallback", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Text::EncoderFallback(__result__);
			}

			void ASCIIEncoding::set_EncoderFallback(mscorlib::System::Text::EncoderFallback  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "set_EncoderFallback", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get:BodyName
			mscorlib::System::String  ASCIIEncoding::get_BodyName() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "get_BodyName", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:CodePage
			mscorlib::System::Int32  ASCIIEncoding::get_CodePage() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "get_CodePage", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}


			//	Get:EncodingName
			mscorlib::System::String  ASCIIEncoding::get_EncodingName() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "get_EncodingName", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:HeaderName
			mscorlib::System::String  ASCIIEncoding::get_HeaderName() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "get_HeaderName", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:IsBrowserDisplay
			mscorlib::System::Boolean  ASCIIEncoding::get_IsBrowserDisplay() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "get_IsBrowserDisplay", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsBrowserSave
			mscorlib::System::Boolean  ASCIIEncoding::get_IsBrowserSave() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "get_IsBrowserSave", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsMailNewsDisplay
			mscorlib::System::Boolean  ASCIIEncoding::get_IsMailNewsDisplay() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "get_IsMailNewsDisplay", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsMailNewsSave
			mscorlib::System::Boolean  ASCIIEncoding::get_IsMailNewsSave() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "get_IsMailNewsSave", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:WebName
			mscorlib::System::String  ASCIIEncoding::get_WebName() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "get_WebName", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:WindowsCodePage
			mscorlib::System::Int32  ASCIIEncoding::get_WindowsCodePage() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "get_WindowsCodePage", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}



		}
	}
}
