#include <mscorlib/System/Text/mscorlib_System_Text_UTF8Encoding.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/mscorlib_System_String.h>
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
			mscorlib::System::Int32 UTF8Encoding::GetByteCount(std::vector<mscorlib::System::Char*> chars, mscorlib::System::Int32 index, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(chars).name()))->eklass);
					__parameter_types__[1] = Global::GetType(typeid(index).name());
					__parameter_types__[2] = Global::GetType(typeid(count).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Char*>(chars, typeid(mscorlib::System::Char).name());
					__parameters__[1] = &index;
					__parameters__[2] = &count;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "UTF8Encoding", 0, NULL, "GetByteCount", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 UTF8Encoding::GetByteCount(mscorlib::System::Char* chars, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(chars).name());
					__parameter_types__[1] = Global::GetType(typeid(count).name());
					__parameters__[0] = chars;
					__parameters__[1] = &count;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "UTF8Encoding", 0, NULL, "GetByteCount", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 UTF8Encoding::GetBytes(std::vector<mscorlib::System::Char*> chars, mscorlib::System::Int32 charIndex, mscorlib::System::Int32 charCount, std::vector<mscorlib::System::Byte*> bytes, mscorlib::System::Int32 byteIndex)
			{
					MonoType *__parameter_types__[5];
					void *__parameters__[5];
					__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(chars).name()))->eklass);
					__parameter_types__[1] = Global::GetType(typeid(charIndex).name());
					__parameter_types__[2] = Global::GetType(typeid(charCount).name());
					__parameter_types__[3] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(bytes).name()))->eklass);
					__parameter_types__[4] = Global::GetType(typeid(byteIndex).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Char*>(chars, typeid(mscorlib::System::Char).name());
					__parameters__[1] = &charIndex;
					__parameters__[2] = &charCount;
					__parameters__[3] = Global::FromArray<mscorlib::System::Byte*>(bytes, typeid(mscorlib::System::Byte).name());
					__parameters__[4] = &byteIndex;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "UTF8Encoding", 0, NULL, "GetBytes", __native_object__, 5, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 UTF8Encoding::GetBytes(mscorlib::System::String s, mscorlib::System::Int32 charIndex, mscorlib::System::Int32 charCount, std::vector<mscorlib::System::Byte*> bytes, mscorlib::System::Int32 byteIndex)
			{
					MonoType *__parameter_types__[5];
					void *__parameters__[5];
					__parameter_types__[0] = Global::GetType(typeid(s).name());
					__parameter_types__[1] = Global::GetType(typeid(charIndex).name());
					__parameter_types__[2] = Global::GetType(typeid(charCount).name());
					__parameter_types__[3] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(bytes).name()))->eklass);
					__parameter_types__[4] = Global::GetType(typeid(byteIndex).name());
					__parameters__[0] = (MonoObject*)s;
					__parameters__[1] = &charIndex;
					__parameters__[2] = &charCount;
					__parameters__[3] = Global::FromArray<mscorlib::System::Byte*>(bytes, typeid(mscorlib::System::Byte).name());
					__parameters__[4] = &byteIndex;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "UTF8Encoding", 0, NULL, "GetBytes", __native_object__, 5, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 UTF8Encoding::GetBytes(mscorlib::System::Char* chars, mscorlib::System::Int32 charCount, mscorlib::System::Byte* bytes, mscorlib::System::Int32 byteCount)
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
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "UTF8Encoding", 0, NULL, "GetBytes", __native_object__, 4, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 UTF8Encoding::GetCharCount(std::vector<mscorlib::System::Byte*> bytes, mscorlib::System::Int32 index, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(bytes).name()))->eklass);
					__parameter_types__[1] = Global::GetType(typeid(index).name());
					__parameter_types__[2] = Global::GetType(typeid(count).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(bytes, typeid(mscorlib::System::Byte).name());
					__parameters__[1] = &index;
					__parameters__[2] = &count;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "UTF8Encoding", 0, NULL, "GetCharCount", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 UTF8Encoding::GetCharCount(mscorlib::System::Byte* bytes, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(bytes).name());
					__parameter_types__[1] = Global::GetType(typeid(count).name());
					__parameters__[0] = bytes->GetNativeObject();
					__parameters__[1] = &count;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "UTF8Encoding", 0, NULL, "GetCharCount", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 UTF8Encoding::GetChars(std::vector<mscorlib::System::Byte*> bytes, mscorlib::System::Int32 byteIndex, mscorlib::System::Int32 byteCount, std::vector<mscorlib::System::Char*> chars, mscorlib::System::Int32 charIndex)
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
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "UTF8Encoding", 0, NULL, "GetChars", __native_object__, 5, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 UTF8Encoding::GetChars(mscorlib::System::Byte* bytes, mscorlib::System::Int32 byteCount, mscorlib::System::Char* chars, mscorlib::System::Int32 charCount)
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
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "UTF8Encoding", 0, NULL, "GetChars", __native_object__, 4, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 UTF8Encoding::GetMaxByteCount(mscorlib::System::Int32 charCount)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(charCount).name());
					__parameters__[0] = &charCount;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "UTF8Encoding", 0, NULL, "GetMaxByteCount", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 UTF8Encoding::GetMaxCharCount(mscorlib::System::Int32 byteCount)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(byteCount).name());
					__parameters__[0] = &byteCount;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "UTF8Encoding", 0, NULL, "GetMaxCharCount", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Text::Decoder UTF8Encoding::GetDecoder()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "UTF8Encoding", 0, NULL, "GetDecoder", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Text::Decoder(__result__);
			}

			mscorlib::System::Text::Encoder UTF8Encoding::GetEncoder()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "UTF8Encoding", 0, NULL, "GetEncoder", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Text::Encoder(__result__);
			}

			std::vector<mscorlib::System::Byte*> UTF8Encoding::GetPreamble()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "UTF8Encoding", 0, NULL, "GetPreamble", __native_object__, 0, NULL, NULL, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::Byte*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back(new mscorlib::System::Byte (__array_item__));
					}
					return __array_result__;
			}

			mscorlib::System::Boolean UTF8Encoding::Equals(mscorlib::System::Object value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "UTF8Encoding", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 UTF8Encoding::GetHashCode()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "UTF8Encoding", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 UTF8Encoding::GetByteCount(mscorlib::System::String chars)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(chars).name());
					__parameters__[0] = (MonoObject*)chars;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "UTF8Encoding", 0, NULL, "GetByteCount", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::String UTF8Encoding::GetString(std::vector<mscorlib::System::Byte*> bytes, mscorlib::System::Int32 index, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(bytes).name()))->eklass);
					__parameter_types__[1] = Global::GetType(typeid(index).name());
					__parameter_types__[2] = Global::GetType(typeid(count).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(bytes, typeid(mscorlib::System::Byte).name());
					__parameters__[1] = &index;
					__parameters__[2] = &count;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "UTF8Encoding", 0, NULL, "GetString", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			//Get Set Properties Methods
			//	Get:IsReadOnly
			mscorlib::System::Boolean  UTF8Encoding::get_IsReadOnly()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "get_IsReadOnly", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsSingleByte
			mscorlib::System::Boolean  UTF8Encoding::get_IsSingleByte()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "get_IsSingleByte", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get/Set:DecoderFallback
			mscorlib::System::Text::DecoderFallback  UTF8Encoding::get_DecoderFallback()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "get_DecoderFallback", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Text::DecoderFallback(__result__);
			}

			void UTF8Encoding::set_DecoderFallback(mscorlib::System::Text::DecoderFallback  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "set_DecoderFallback", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:EncoderFallback
			mscorlib::System::Text::EncoderFallback  UTF8Encoding::get_EncoderFallback()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "get_EncoderFallback", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Text::EncoderFallback(__result__);
			}

			void UTF8Encoding::set_EncoderFallback(mscorlib::System::Text::EncoderFallback  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "set_EncoderFallback", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get:BodyName
			mscorlib::System::String  UTF8Encoding::get_BodyName()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "get_BodyName", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:CodePage
			mscorlib::System::Int32  UTF8Encoding::get_CodePage()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "get_CodePage", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}


			//	Get:EncodingName
			mscorlib::System::String  UTF8Encoding::get_EncodingName()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "get_EncodingName", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:HeaderName
			mscorlib::System::String  UTF8Encoding::get_HeaderName()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "get_HeaderName", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:IsBrowserDisplay
			mscorlib::System::Boolean  UTF8Encoding::get_IsBrowserDisplay()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "get_IsBrowserDisplay", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsBrowserSave
			mscorlib::System::Boolean  UTF8Encoding::get_IsBrowserSave()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "get_IsBrowserSave", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsMailNewsDisplay
			mscorlib::System::Boolean  UTF8Encoding::get_IsMailNewsDisplay()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "get_IsMailNewsDisplay", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsMailNewsSave
			mscorlib::System::Boolean  UTF8Encoding::get_IsMailNewsSave()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "get_IsMailNewsSave", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:WebName
			mscorlib::System::String  UTF8Encoding::get_WebName()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "get_WebName", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:WindowsCodePage
			mscorlib::System::Int32  UTF8Encoding::get_WindowsCodePage()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "get_WindowsCodePage", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}



		}
	}
}
