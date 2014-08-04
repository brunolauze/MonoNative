#include <mscorlib/System/Text/mscorlib_System_Text_Encoding.h>
#include <mscorlib/System/Text/mscorlib_System_Text_DecoderFallback.h>
#include <mscorlib/System/Text/mscorlib_System_Text_EncoderFallback.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/Text/mscorlib_System_Text_Decoder.h>
#include <mscorlib/System/Text/mscorlib_System_Text_Encoder.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/Text/mscorlib_System_Text_EncodingInfo.h>



namespace mscorlib
{
	namespace System
	{
		namespace Text
		{

			//Public Methods
			std::vector<mscorlib::System::Byte*> Encoding::Convert(mscorlib::System::Text::Encoding srcEncoding, mscorlib::System::Text::Encoding dstEncoding, std::vector<mscorlib::System::Byte*> bytes)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(srcEncoding).name());
					__parameter_types__[1] = Global::GetType(typeid(dstEncoding).name());
					__parameter_types__[2] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(bytes).name()))->eklass);
					__parameters__[0] = (MonoObject*)srcEncoding;
					__parameters__[1] = (MonoObject*)dstEncoding;
					__parameters__[2] = Global::FromArray<mscorlib::System::Byte*>(bytes, typeid(mscorlib::System::Byte).name());
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "Convert", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
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

			std::vector<mscorlib::System::Byte*> Encoding::Convert(mscorlib::System::Text::Encoding srcEncoding, mscorlib::System::Text::Encoding dstEncoding, std::vector<mscorlib::System::Byte*> bytes, mscorlib::System::Int32 index, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[5];
					void *__parameters__[5];
					__parameter_types__[0] = Global::GetType(typeid(srcEncoding).name());
					__parameter_types__[1] = Global::GetType(typeid(dstEncoding).name());
					__parameter_types__[2] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(bytes).name()))->eklass);
					__parameter_types__[3] = Global::GetType(typeid(index).name());
					__parameter_types__[4] = Global::GetType(typeid(count).name());
					__parameters__[0] = (MonoObject*)srcEncoding;
					__parameters__[1] = (MonoObject*)dstEncoding;
					__parameters__[2] = Global::FromArray<mscorlib::System::Byte*>(bytes, typeid(mscorlib::System::Byte).name());
					__parameters__[3] = &index;
					__parameters__[4] = &count;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "Convert", NullMonoObject, 5, __parameter_types__, __parameters__, NULL);
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

			mscorlib::System::Boolean Encoding::Equals(mscorlib::System::Object value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 Encoding::GetByteCount(std::vector<mscorlib::System::Char*> chars, mscorlib::System::Int32 index, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(chars).name()))->eklass);
					__parameter_types__[1] = Global::GetType(typeid(index).name());
					__parameter_types__[2] = Global::GetType(typeid(count).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Char*>(chars, typeid(mscorlib::System::Char).name());
					__parameters__[1] = &index;
					__parameters__[2] = &count;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "GetByteCount", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 Encoding::GetByteCount(mscorlib::System::String s)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(s).name());
					__parameters__[0] = (MonoObject*)s;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "GetByteCount", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 Encoding::GetByteCount(std::vector<mscorlib::System::Char*> chars)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(chars).name()))->eklass);
					__parameters__[0] = Global::FromArray<mscorlib::System::Char*>(chars, typeid(mscorlib::System::Char).name());
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "GetByteCount", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 Encoding::GetBytes(std::vector<mscorlib::System::Char*> chars, mscorlib::System::Int32 charIndex, mscorlib::System::Int32 charCount, std::vector<mscorlib::System::Byte*> bytes, mscorlib::System::Int32 byteIndex)
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
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "GetBytes", __native_object__, 5, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 Encoding::GetBytes(mscorlib::System::String s, mscorlib::System::Int32 charIndex, mscorlib::System::Int32 charCount, std::vector<mscorlib::System::Byte*> bytes, mscorlib::System::Int32 byteIndex)
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
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "GetBytes", __native_object__, 5, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			std::vector<mscorlib::System::Byte*> Encoding::GetBytes(mscorlib::System::String s)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(s).name());
					__parameters__[0] = (MonoObject*)s;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "GetBytes", __native_object__, 1, __parameter_types__, __parameters__, NULL);
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

			std::vector<mscorlib::System::Byte*> Encoding::GetBytes(std::vector<mscorlib::System::Char*> chars, mscorlib::System::Int32 index, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(chars).name()))->eklass);
					__parameter_types__[1] = Global::GetType(typeid(index).name());
					__parameter_types__[2] = Global::GetType(typeid(count).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Char*>(chars, typeid(mscorlib::System::Char).name());
					__parameters__[1] = &index;
					__parameters__[2] = &count;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "GetBytes", __native_object__, 3, __parameter_types__, __parameters__, NULL);
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

			std::vector<mscorlib::System::Byte*> Encoding::GetBytes(std::vector<mscorlib::System::Char*> chars)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(chars).name()))->eklass);
					__parameters__[0] = Global::FromArray<mscorlib::System::Char*>(chars, typeid(mscorlib::System::Char).name());
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "GetBytes", __native_object__, 1, __parameter_types__, __parameters__, NULL);
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

			mscorlib::System::Int32 Encoding::GetCharCount(std::vector<mscorlib::System::Byte*> bytes, mscorlib::System::Int32 index, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(bytes).name()))->eklass);
					__parameter_types__[1] = Global::GetType(typeid(index).name());
					__parameter_types__[2] = Global::GetType(typeid(count).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(bytes, typeid(mscorlib::System::Byte).name());
					__parameters__[1] = &index;
					__parameters__[2] = &count;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "GetCharCount", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 Encoding::GetCharCount(std::vector<mscorlib::System::Byte*> bytes)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(bytes).name()))->eklass);
					__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(bytes, typeid(mscorlib::System::Byte).name());
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "GetCharCount", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 Encoding::GetChars(std::vector<mscorlib::System::Byte*> bytes, mscorlib::System::Int32 byteIndex, mscorlib::System::Int32 byteCount, std::vector<mscorlib::System::Char*> chars, mscorlib::System::Int32 charIndex)
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
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "GetChars", __native_object__, 5, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			std::vector<mscorlib::System::Char*> Encoding::GetChars(std::vector<mscorlib::System::Byte*> bytes, mscorlib::System::Int32 index, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(bytes).name()))->eklass);
					__parameter_types__[1] = Global::GetType(typeid(index).name());
					__parameter_types__[2] = Global::GetType(typeid(count).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(bytes, typeid(mscorlib::System::Byte).name());
					__parameters__[1] = &index;
					__parameters__[2] = &count;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "GetChars", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::Char*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back((mscorlib::System::Char *)mono_object_unbox(__array_item__));
					}
					return __array_result__;
			}

			std::vector<mscorlib::System::Char*> Encoding::GetChars(std::vector<mscorlib::System::Byte*> bytes)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(bytes).name()))->eklass);
					__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(bytes, typeid(mscorlib::System::Byte).name());
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "GetChars", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::Char*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back((mscorlib::System::Char *)mono_object_unbox(__array_item__));
					}
					return __array_result__;
			}

			mscorlib::System::Text::Decoder Encoding::GetDecoder()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "GetDecoder", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Text::Decoder(__result__);
			}

			mscorlib::System::Text::Encoder Encoding::GetEncoder()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "GetEncoder", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Text::Encoder(__result__);
			}

			mscorlib::System::Text::Encoding Encoding::GetEncoding(mscorlib::System::Int32 codepage)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(codepage).name());
					__parameters__[0] = &codepage;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "GetEncoding", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Text::Encoding(__result__);
			}

			mscorlib::System::Object Encoding::Clone()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "Clone", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
			}

			mscorlib::System::Text::Encoding Encoding::GetEncoding(mscorlib::System::Int32 codepage, mscorlib::System::Text::EncoderFallback encoderFallback, mscorlib::System::Text::DecoderFallback decoderFallback)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(codepage).name());
					__parameter_types__[1] = Global::GetType(typeid(encoderFallback).name());
					__parameter_types__[2] = Global::GetType(typeid(decoderFallback).name());
					__parameters__[0] = &codepage;
					__parameters__[1] = (MonoObject*)encoderFallback;
					__parameters__[2] = (MonoObject*)decoderFallback;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "GetEncoding", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Text::Encoding(__result__);
			}

			mscorlib::System::Text::Encoding Encoding::GetEncoding(mscorlib::System::String name, mscorlib::System::Text::EncoderFallback encoderFallback, mscorlib::System::Text::DecoderFallback decoderFallback)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameter_types__[1] = Global::GetType(typeid(encoderFallback).name());
					__parameter_types__[2] = Global::GetType(typeid(decoderFallback).name());
					__parameters__[0] = (MonoObject*)name;
					__parameters__[1] = (MonoObject*)encoderFallback;
					__parameters__[2] = (MonoObject*)decoderFallback;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "GetEncoding", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Text::Encoding(__result__);
			}

			std::vector<mscorlib::System::Text::EncodingInfo*> Encoding::GetEncodings()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "GetEncodings", NullMonoObject, 0, NULL, NULL, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::Text::EncodingInfo*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back(new mscorlib::System::Text::EncodingInfo (__array_item__));
					}
					return __array_result__;
			}

			mscorlib::System::Boolean Encoding::IsAlwaysNormalized()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "IsAlwaysNormalized", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean Encoding::IsAlwaysNormalized(mscorlib::System::Text::NormalizationForm::__ENUM__ form)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(form).name());
					__parameters__[0] = reinterpret_cast<void*>(form);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "IsAlwaysNormalized", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Text::Encoding Encoding::GetEncoding(mscorlib::System::String name)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameters__[0] = (MonoObject*)name;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "GetEncoding", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Text::Encoding(__result__);
			}

			mscorlib::System::Int32 Encoding::GetHashCode()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 Encoding::GetMaxByteCount(mscorlib::System::Int32 charCount)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(charCount).name());
					__parameters__[0] = &charCount;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "GetMaxByteCount", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 Encoding::GetMaxCharCount(mscorlib::System::Int32 byteCount)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(byteCount).name());
					__parameters__[0] = &byteCount;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "GetMaxCharCount", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			std::vector<mscorlib::System::Byte*> Encoding::GetPreamble()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "GetPreamble", __native_object__, 0, NULL, NULL, NULL);
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

			mscorlib::System::String Encoding::GetString(std::vector<mscorlib::System::Byte*> bytes, mscorlib::System::Int32 index, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(bytes).name()))->eklass);
					__parameter_types__[1] = Global::GetType(typeid(index).name());
					__parameter_types__[2] = Global::GetType(typeid(count).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(bytes, typeid(mscorlib::System::Byte).name());
					__parameters__[1] = &index;
					__parameters__[2] = &count;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "GetString", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::String Encoding::GetString(std::vector<mscorlib::System::Byte*> bytes)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(bytes).name()))->eklass);
					__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(bytes, typeid(mscorlib::System::Byte).name());
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "GetString", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::Int32 Encoding::GetByteCount(mscorlib::System::Char* chars, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(chars).name());
					__parameter_types__[1] = Global::GetType(typeid(count).name());
					__parameters__[0] = chars;
					__parameters__[1] = &count;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "GetByteCount", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 Encoding::GetCharCount(mscorlib::System::Byte* bytes, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(bytes).name());
					__parameter_types__[1] = Global::GetType(typeid(count).name());
					__parameters__[0] = bytes->GetNativeObject();
					__parameters__[1] = &count;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "GetCharCount", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 Encoding::GetChars(mscorlib::System::Byte* bytes, mscorlib::System::Int32 byteCount, mscorlib::System::Char* chars, mscorlib::System::Int32 charCount)
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
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "GetChars", __native_object__, 4, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 Encoding::GetBytes(mscorlib::System::Char* chars, mscorlib::System::Int32 charCount, mscorlib::System::Byte* bytes, mscorlib::System::Int32 byteCount)
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
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "GetBytes", __native_object__, 4, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			//Get Set Properties Methods
			//	Get:IsReadOnly
			mscorlib::System::Boolean  Encoding::get_IsReadOnly()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "get_IsReadOnly", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsSingleByte
			mscorlib::System::Boolean  Encoding::get_IsSingleByte()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "get_IsSingleByte", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get/Set:DecoderFallback
			mscorlib::System::Text::DecoderFallback  Encoding::get_DecoderFallback()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "get_DecoderFallback", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Text::DecoderFallback(__result__);
			}

			void Encoding::set_DecoderFallback(mscorlib::System::Text::DecoderFallback  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "set_DecoderFallback", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:EncoderFallback
			mscorlib::System::Text::EncoderFallback  Encoding::get_EncoderFallback()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "get_EncoderFallback", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Text::EncoderFallback(__result__);
			}

			void Encoding::set_EncoderFallback(mscorlib::System::Text::EncoderFallback  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "set_EncoderFallback", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get:BodyName
			mscorlib::System::String  Encoding::get_BodyName()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "get_BodyName", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:CodePage
			mscorlib::System::Int32  Encoding::get_CodePage()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "get_CodePage", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}


			//	Get:EncodingName
			mscorlib::System::String  Encoding::get_EncodingName()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "get_EncodingName", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:HeaderName
			mscorlib::System::String  Encoding::get_HeaderName()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "get_HeaderName", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:IsBrowserDisplay
			mscorlib::System::Boolean  Encoding::get_IsBrowserDisplay()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "get_IsBrowserDisplay", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsBrowserSave
			mscorlib::System::Boolean  Encoding::get_IsBrowserSave()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "get_IsBrowserSave", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsMailNewsDisplay
			mscorlib::System::Boolean  Encoding::get_IsMailNewsDisplay()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "get_IsMailNewsDisplay", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsMailNewsSave
			mscorlib::System::Boolean  Encoding::get_IsMailNewsSave()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "get_IsMailNewsSave", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:WebName
			mscorlib::System::String  Encoding::get_WebName()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "get_WebName", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:WindowsCodePage
			mscorlib::System::Int32  Encoding::get_WindowsCodePage()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "get_WindowsCodePage", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}


			//Get Set Static Properties Methods
			//	Get:ASCII
			mscorlib::System::Text::Encoding  Encoding::get_ASCII()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "get_ASCII", NullMonoObject, 0, NULL, NULL, NULL);
				return mscorlib::System::Text::Encoding(__result__);
			}


			//	Get:BigEndianUnicode
			mscorlib::System::Text::Encoding  Encoding::get_BigEndianUnicode()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "get_BigEndianUnicode", NullMonoObject, 0, NULL, NULL, NULL);
				return mscorlib::System::Text::Encoding(__result__);
			}


			//	Get:Default
			mscorlib::System::Text::Encoding  Encoding::get_Default()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "get_Default", NullMonoObject, 0, NULL, NULL, NULL);
				return mscorlib::System::Text::Encoding(__result__);
			}


			//	Get:UTF7
			mscorlib::System::Text::Encoding  Encoding::get_UTF7()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "get_UTF7", NullMonoObject, 0, NULL, NULL, NULL);
				return mscorlib::System::Text::Encoding(__result__);
			}


			//	Get:UTF8
			mscorlib::System::Text::Encoding  Encoding::get_UTF8()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "get_UTF8", NullMonoObject, 0, NULL, NULL, NULL);
				return mscorlib::System::Text::Encoding(__result__);
			}


			//	Get:Unicode
			mscorlib::System::Text::Encoding  Encoding::get_Unicode()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "get_Unicode", NullMonoObject, 0, NULL, NULL, NULL);
				return mscorlib::System::Text::Encoding(__result__);
			}


			//	Get:UTF32
			mscorlib::System::Text::Encoding  Encoding::get_UTF32()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "Encoding", 0, NULL, "get_UTF32", NullMonoObject, 0, NULL, NULL, NULL);
				return mscorlib::System::Text::Encoding(__result__);
			}




		}
	}
}
