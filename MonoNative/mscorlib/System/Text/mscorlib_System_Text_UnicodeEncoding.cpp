#include <mscorlib/System/Text/mscorlib_System_Text_UnicodeEncoding.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/Text/mscorlib_System_Text_Encoder.h>
#include <mscorlib/System/Text/mscorlib_System_Text_Decoder.h>
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
			mscorlib::System::Int32 UnicodeEncoding::GetByteCount(std::vector<mscorlib::System::Char*> chars, mscorlib::System::Int32 index, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Char")), 1));
					__parameter_types__[1] = Global::GetType(typeid(index).name());
					__parameter_types__[2] = Global::GetType(typeid(count).name());
					__parameters__[0] = Global::FromPrimitiveArray<mscorlib::System::Char*>(chars, typeid(mscorlib::System::Char).name());
					__parameters__[1] = &index;
					__parameters__[2] = &count;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "UnicodeEncoding", 0, NULL, "GetByteCount", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 UnicodeEncoding::GetByteCount(mscorlib::System::String s)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(s).name());
					__parameters__[0] = (MonoObject*)s;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "UnicodeEncoding", 0, NULL, "GetByteCount", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 UnicodeEncoding::GetByteCount(const char *s)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), s);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "UnicodeEncoding", 0, NULL, "GetByteCount", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 UnicodeEncoding::GetByteCount(mscorlib::System::Char* chars, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(chars).name());
					__parameter_types__[1] = Global::GetType(typeid(count).name());
					__parameters__[0] = chars;
					__parameters__[1] = &count;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "UnicodeEncoding", 0, NULL, "GetByteCount", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 UnicodeEncoding::GetBytes(std::vector<mscorlib::System::Char*> chars, mscorlib::System::Int32 charIndex, mscorlib::System::Int32 charCount, std::vector<mscorlib::System::Byte*> bytes, mscorlib::System::Int32 byteIndex)
			{
					MonoType *__parameter_types__[5];
					void *__parameters__[5];
					__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Char")), 1));
					__parameter_types__[1] = Global::GetType(typeid(charIndex).name());
					__parameter_types__[2] = Global::GetType(typeid(charCount).name());
					__parameter_types__[3] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
					__parameter_types__[4] = Global::GetType(typeid(byteIndex).name());
					__parameters__[0] = Global::FromPrimitiveArray<mscorlib::System::Char*>(chars, typeid(mscorlib::System::Char).name());
					__parameters__[1] = &charIndex;
					__parameters__[2] = &charCount;
					__parameters__[3] = Global::FromArray<mscorlib::System::Byte*>(bytes, typeid(mscorlib::System::Byte).name());
					__parameters__[4] = &byteIndex;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "UnicodeEncoding", 0, NULL, "GetBytes", __native_object__, 5, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 UnicodeEncoding::GetBytes(mscorlib::System::String s, mscorlib::System::Int32 charIndex, mscorlib::System::Int32 charCount, std::vector<mscorlib::System::Byte*> bytes, mscorlib::System::Int32 byteIndex)
			{
					MonoType *__parameter_types__[5];
					void *__parameters__[5];
					__parameter_types__[0] = Global::GetType(typeid(s).name());
					__parameter_types__[1] = Global::GetType(typeid(charIndex).name());
					__parameter_types__[2] = Global::GetType(typeid(charCount).name());
					__parameter_types__[3] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
					__parameter_types__[4] = Global::GetType(typeid(byteIndex).name());
					__parameters__[0] = (MonoObject*)s;
					__parameters__[1] = &charIndex;
					__parameters__[2] = &charCount;
					__parameters__[3] = Global::FromArray<mscorlib::System::Byte*>(bytes, typeid(mscorlib::System::Byte).name());
					__parameters__[4] = &byteIndex;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "UnicodeEncoding", 0, NULL, "GetBytes", __native_object__, 5, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 UnicodeEncoding::GetBytes(const char *s, mscorlib::System::Int32 charIndex, mscorlib::System::Int32 charCount, std::vector<mscorlib::System::Byte*> bytes, mscorlib::System::Int32 byteIndex)
			{
					MonoType *__parameter_types__[5];
					void *__parameters__[5];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType(typeid(charIndex).name());
					__parameter_types__[2] = Global::GetType(typeid(charCount).name());
					__parameter_types__[3] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
					__parameter_types__[4] = Global::GetType(typeid(byteIndex).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), s);
					__parameters__[1] = &charIndex;
					__parameters__[2] = &charCount;
					__parameters__[3] = Global::FromArray<mscorlib::System::Byte*>(bytes, typeid(mscorlib::System::Byte).name());
					__parameters__[4] = &byteIndex;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "UnicodeEncoding", 0, NULL, "GetBytes", __native_object__, 5, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 UnicodeEncoding::GetBytes(mscorlib::System::Char* chars, mscorlib::System::Int32 charCount, mscorlib::System::Byte* bytes, mscorlib::System::Int32 byteCount)
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
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "UnicodeEncoding", 0, NULL, "GetBytes", __native_object__, 4, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 UnicodeEncoding::GetCharCount(std::vector<mscorlib::System::Byte*> bytes, mscorlib::System::Int32 index, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
					__parameter_types__[1] = Global::GetType(typeid(index).name());
					__parameter_types__[2] = Global::GetType(typeid(count).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(bytes, typeid(mscorlib::System::Byte).name());
					__parameters__[1] = &index;
					__parameters__[2] = &count;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "UnicodeEncoding", 0, NULL, "GetCharCount", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 UnicodeEncoding::GetCharCount(mscorlib::System::Byte* bytes, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(bytes).name());
					__parameter_types__[1] = Global::GetType(typeid(count).name());
					__parameters__[0] = bytes->GetNativeObject();
					__parameters__[1] = &count;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "UnicodeEncoding", 0, NULL, "GetCharCount", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 UnicodeEncoding::GetChars(std::vector<mscorlib::System::Byte*> bytes, mscorlib::System::Int32 byteIndex, mscorlib::System::Int32 byteCount, std::vector<mscorlib::System::Char*> chars, mscorlib::System::Int32 charIndex)
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
					__parameters__[3] = Global::FromPrimitiveArray<mscorlib::System::Char*>(chars, typeid(mscorlib::System::Char).name());
					__parameters__[4] = &charIndex;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "UnicodeEncoding", 0, NULL, "GetChars", __native_object__, 5, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 UnicodeEncoding::GetChars(mscorlib::System::Byte* bytes, mscorlib::System::Int32 byteCount, mscorlib::System::Char* chars, mscorlib::System::Int32 charCount)
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
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "UnicodeEncoding", 0, NULL, "GetChars", __native_object__, 4, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::String UnicodeEncoding::GetString(std::vector<mscorlib::System::Byte*> bytes, mscorlib::System::Int32 index, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
					__parameter_types__[1] = Global::GetType(typeid(index).name());
					__parameter_types__[2] = Global::GetType(typeid(count).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(bytes, typeid(mscorlib::System::Byte).name());
					__parameters__[1] = &index;
					__parameters__[2] = &count;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "UnicodeEncoding", 0, NULL, "GetString", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::Text::Encoder UnicodeEncoding::GetEncoder()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "UnicodeEncoding", 0, NULL, "GetEncoder", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Text::Encoder(__result__);
			}

			mscorlib::System::Int32 UnicodeEncoding::GetMaxByteCount(mscorlib::System::Int32 charCount)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(charCount).name());
					__parameters__[0] = &charCount;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "UnicodeEncoding", 0, NULL, "GetMaxByteCount", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 UnicodeEncoding::GetMaxCharCount(mscorlib::System::Int32 byteCount)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(byteCount).name());
					__parameters__[0] = &byteCount;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "UnicodeEncoding", 0, NULL, "GetMaxCharCount", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Text::Decoder UnicodeEncoding::GetDecoder()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "UnicodeEncoding", 0, NULL, "GetDecoder", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Text::Decoder(__result__);
			}

			std::vector<mscorlib::System::Byte*> UnicodeEncoding::GetPreamble()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "UnicodeEncoding", 0, NULL, "GetPreamble", __native_object__, 0, NULL, NULL, NULL);
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

			mscorlib::System::Boolean UnicodeEncoding::Equals(mscorlib::System::Object value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "UnicodeEncoding", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 UnicodeEncoding::GetHashCode()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "UnicodeEncoding", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			//Get Set Properties Methods
			//	Get:IsReadOnly
			mscorlib::System::Boolean  UnicodeEncoding::get_IsReadOnly() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "get_IsReadOnly", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsSingleByte
			mscorlib::System::Boolean  UnicodeEncoding::get_IsSingleByte() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "get_IsSingleByte", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get/Set:DecoderFallback
			mscorlib::System::Text::DecoderFallback  UnicodeEncoding::get_DecoderFallback() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "get_DecoderFallback", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Text::DecoderFallback(__result__);
			}

			void UnicodeEncoding::set_DecoderFallback(mscorlib::System::Text::DecoderFallback  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "set_DecoderFallback", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:EncoderFallback
			mscorlib::System::Text::EncoderFallback  UnicodeEncoding::get_EncoderFallback() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "get_EncoderFallback", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Text::EncoderFallback(__result__);
			}

			void UnicodeEncoding::set_EncoderFallback(mscorlib::System::Text::EncoderFallback  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "set_EncoderFallback", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get:BodyName
			mscorlib::System::String  UnicodeEncoding::get_BodyName() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "get_BodyName", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:CodePage
			mscorlib::System::Int32  UnicodeEncoding::get_CodePage() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "get_CodePage", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}


			//	Get:EncodingName
			mscorlib::System::String  UnicodeEncoding::get_EncodingName() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "get_EncodingName", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:HeaderName
			mscorlib::System::String  UnicodeEncoding::get_HeaderName() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "get_HeaderName", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:IsBrowserDisplay
			mscorlib::System::Boolean  UnicodeEncoding::get_IsBrowserDisplay() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "get_IsBrowserDisplay", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsBrowserSave
			mscorlib::System::Boolean  UnicodeEncoding::get_IsBrowserSave() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "get_IsBrowserSave", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsMailNewsDisplay
			mscorlib::System::Boolean  UnicodeEncoding::get_IsMailNewsDisplay() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "get_IsMailNewsDisplay", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsMailNewsSave
			mscorlib::System::Boolean  UnicodeEncoding::get_IsMailNewsSave() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "get_IsMailNewsSave", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:WebName
			mscorlib::System::String  UnicodeEncoding::get_WebName() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "get_WebName", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:WindowsCodePage
			mscorlib::System::Int32  UnicodeEncoding::get_WindowsCodePage() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "get_WindowsCodePage", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}


				//	Get/Set:CharSize
			mscorlib::System::Int32 UnicodeEncoding::get_CharSize()
			{
				return Global::GetFieldInt32Value("mscorlib", "System.Text", "UnicodeEncoding", 0, NULL, "CharSize");
			}

			void UnicodeEncoding::set_CharSize(mscorlib::System::Int32  value)
			{
			}


		}
	}
}
