#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_TEXT_ENCODING_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_TEXT_ENCODING_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_ICloneable.h>
#include <mscorlib/System/Text/mscorlib_System_Text_NormalizationForm.h>

namespace mscorlib
{
	namespace System
	{
		namespace Text
		{

			class DecoderFallback;
			class EncoderFallback;
			class Decoder;
			class Encoder;
			class EncodingInfo;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{

		class String;
		class Byte;
		class Type;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Text
		{

			class Encoding
				: public mscorlib::System::Object
				, public virtual mscorlib::System::ICloneable
			{
			public:
				Encoding(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				, mscorlib::System::ICloneable(NULL)
				{
				};
			
				Encoding(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				, mscorlib::System::ICloneable(nativeObject)
				{
				};
			
				~Encoding()
				{
				};
			

				Encoding & operator=(Encoding &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				static std::vector<mscorlib::System::Byte*>  Convert(mscorlib::System::Text::Encoding srcEncoding, mscorlib::System::Text::Encoding dstEncoding, std::vector<mscorlib::System::Byte*> bytes);
				static std::vector<mscorlib::System::Byte*>  Convert(mscorlib::System::Text::Encoding srcEncoding, mscorlib::System::Text::Encoding dstEncoding, std::vector<mscorlib::System::Byte*> bytes, mscorlib::System::Int32 index, mscorlib::System::Int32 count);
				virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object value) override;
				virtual mscorlib::System::Int32  GetByteCount(std::vector<mscorlib::System::Char*> chars, mscorlib::System::Int32 index, mscorlib::System::Int32 count);
				virtual mscorlib::System::Int32  GetByteCount(mscorlib::System::String s);
				virtual mscorlib::System::Int32  GetByteCount(std::vector<mscorlib::System::Char*> chars);
				virtual mscorlib::System::Int32  GetBytes(std::vector<mscorlib::System::Char*> chars, mscorlib::System::Int32 charIndex, mscorlib::System::Int32 charCount, std::vector<mscorlib::System::Byte*> bytes, mscorlib::System::Int32 byteIndex);
				virtual mscorlib::System::Int32  GetBytes(mscorlib::System::String s, mscorlib::System::Int32 charIndex, mscorlib::System::Int32 charCount, std::vector<mscorlib::System::Byte*> bytes, mscorlib::System::Int32 byteIndex);
				virtual std::vector<mscorlib::System::Byte*>  GetBytes(mscorlib::System::String s);
				virtual std::vector<mscorlib::System::Byte*>  GetBytes(std::vector<mscorlib::System::Char*> chars, mscorlib::System::Int32 index, mscorlib::System::Int32 count);
				virtual std::vector<mscorlib::System::Byte*>  GetBytes(std::vector<mscorlib::System::Char*> chars);
				virtual mscorlib::System::Int32  GetCharCount(std::vector<mscorlib::System::Byte*> bytes, mscorlib::System::Int32 index, mscorlib::System::Int32 count);
				virtual mscorlib::System::Int32  GetCharCount(std::vector<mscorlib::System::Byte*> bytes);
				virtual mscorlib::System::Int32  GetChars(std::vector<mscorlib::System::Byte*> bytes, mscorlib::System::Int32 byteIndex, mscorlib::System::Int32 byteCount, std::vector<mscorlib::System::Char*> chars, mscorlib::System::Int32 charIndex);
				virtual std::vector<mscorlib::System::Char*>  GetChars(std::vector<mscorlib::System::Byte*> bytes, mscorlib::System::Int32 index, mscorlib::System::Int32 count);
				virtual std::vector<mscorlib::System::Char*>  GetChars(std::vector<mscorlib::System::Byte*> bytes);
				virtual mscorlib::System::Text::Decoder  GetDecoder();
				virtual mscorlib::System::Text::Encoder  GetEncoder();
				static mscorlib::System::Text::Encoding  GetEncoding(mscorlib::System::Int32 codepage);
				virtual mscorlib::System::Object  Clone();
				static mscorlib::System::Text::Encoding  GetEncoding(mscorlib::System::Int32 codepage, mscorlib::System::Text::EncoderFallback encoderFallback, mscorlib::System::Text::DecoderFallback decoderFallback);
				static mscorlib::System::Text::Encoding  GetEncoding(mscorlib::System::String name, mscorlib::System::Text::EncoderFallback encoderFallback, mscorlib::System::Text::DecoderFallback decoderFallback);
				static std::vector<mscorlib::System::Text::EncodingInfo*>  GetEncodings();
				mscorlib::System::Boolean  IsAlwaysNormalized();
				virtual mscorlib::System::Boolean  IsAlwaysNormalized(mscorlib::System::Text::NormalizationForm::__ENUM__ form);
				static mscorlib::System::Text::Encoding  GetEncoding(mscorlib::System::String name);
				virtual mscorlib::System::Int32  GetHashCode() override;
				virtual mscorlib::System::Int32  GetMaxByteCount(mscorlib::System::Int32 charCount);
				virtual mscorlib::System::Int32  GetMaxCharCount(mscorlib::System::Int32 byteCount);
				virtual std::vector<mscorlib::System::Byte*>  GetPreamble();
				virtual mscorlib::System::String  GetString(std::vector<mscorlib::System::Byte*> bytes, mscorlib::System::Int32 index, mscorlib::System::Int32 count);
				virtual mscorlib::System::String  GetString(std::vector<mscorlib::System::Byte*> bytes);
				virtual mscorlib::System::Int32  GetByteCount(mscorlib::System::Char* chars, mscorlib::System::Int32 count);
				virtual mscorlib::System::Int32  GetCharCount(mscorlib::System::Byte* bytes, mscorlib::System::Int32 count);
				virtual mscorlib::System::Int32  GetChars(mscorlib::System::Byte* bytes, mscorlib::System::Int32 byteCount, mscorlib::System::Char* chars, mscorlib::System::Int32 charCount);
				virtual mscorlib::System::Int32  GetBytes(mscorlib::System::Char* chars, mscorlib::System::Int32 charCount, mscorlib::System::Byte* bytes, mscorlib::System::Int32 byteCount);
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_IsReadOnly)) mscorlib::System::Boolean  IsReadOnly;
				__declspec(property(get=get_IsSingleByte)) mscorlib::System::Boolean  IsSingleByte;
				__declspec(property(get=get_DecoderFallback, put=set_DecoderFallback)) mscorlib::System::Text::DecoderFallback  DecoderFallback;
				__declspec(property(get=get_EncoderFallback, put=set_EncoderFallback)) mscorlib::System::Text::EncoderFallback  EncoderFallback;
				__declspec(property(get=get_BodyName)) mscorlib::System::String  BodyName;
				__declspec(property(get=get_CodePage)) mscorlib::System::Int32  CodePage;
				__declspec(property(get=get_EncodingName)) mscorlib::System::String  EncodingName;
				__declspec(property(get=get_HeaderName)) mscorlib::System::String  HeaderName;
				__declspec(property(get=get_IsBrowserDisplay)) mscorlib::System::Boolean  IsBrowserDisplay;
				__declspec(property(get=get_IsBrowserSave)) mscorlib::System::Boolean  IsBrowserSave;
				__declspec(property(get=get_IsMailNewsDisplay)) mscorlib::System::Boolean  IsMailNewsDisplay;
				__declspec(property(get=get_IsMailNewsSave)) mscorlib::System::Boolean  IsMailNewsSave;
				__declspec(property(get=get_WebName)) mscorlib::System::String  WebName;
				__declspec(property(get=get_WindowsCodePage)) mscorlib::System::Int32  WindowsCodePage;

				//Public Static Properties
				static Property<mscorlib::System::Text::Encoding> ASCII;
				static Property<mscorlib::System::Text::Encoding> BigEndianUnicode;
				static Property<mscorlib::System::Text::Encoding> Default;
				static Property<mscorlib::System::Text::Encoding> UTF7;
				static Property<mscorlib::System::Text::Encoding> UTF8;
				static Property<mscorlib::System::Text::Encoding> Unicode;
				static Property<mscorlib::System::Text::Encoding> UTF32;

				//Get Set Properties Methods
				//	Get:IsReadOnly
				mscorlib::System::Boolean  get_IsReadOnly();

				//	Get:IsSingleByte
				mscorlib::System::Boolean  get_IsSingleByte();

				//	Get/Set:DecoderFallback
				mscorlib::System::Text::DecoderFallback  get_DecoderFallback();
				void set_DecoderFallback(mscorlib::System::Text::DecoderFallback  value);

				//	Get/Set:EncoderFallback
				mscorlib::System::Text::EncoderFallback  get_EncoderFallback();
				void set_EncoderFallback(mscorlib::System::Text::EncoderFallback  value);

				//	Get:BodyName
				mscorlib::System::String  get_BodyName();

				//	Get:CodePage
				mscorlib::System::Int32  get_CodePage();

				//	Get:EncodingName
				mscorlib::System::String  get_EncodingName();

				//	Get:HeaderName
				mscorlib::System::String  get_HeaderName();

				//	Get:IsBrowserDisplay
				mscorlib::System::Boolean  get_IsBrowserDisplay();

				//	Get:IsBrowserSave
				mscorlib::System::Boolean  get_IsBrowserSave();

				//	Get:IsMailNewsDisplay
				mscorlib::System::Boolean  get_IsMailNewsDisplay();

				//	Get:IsMailNewsSave
				mscorlib::System::Boolean  get_IsMailNewsSave();

				//	Get:WebName
				mscorlib::System::String  get_WebName();

				//	Get:WindowsCodePage
				mscorlib::System::Int32  get_WindowsCodePage();

				//Get Set Static Properties Methods
				//	Get:ASCII
				static mscorlib::System::Text::Encoding  get_ASCII();

				//	Get:BigEndianUnicode
				static mscorlib::System::Text::Encoding  get_BigEndianUnicode();

				//	Get:Default
				static mscorlib::System::Text::Encoding  get_Default();

				//	Get:UTF7
				static mscorlib::System::Text::Encoding  get_UTF7();

				//	Get:UTF8
				static mscorlib::System::Text::Encoding  get_UTF8();

				//	Get:Unicode
				static mscorlib::System::Text::Encoding  get_Unicode();

				//	Get:UTF32
				static mscorlib::System::Text::Encoding  get_UTF32();


			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
