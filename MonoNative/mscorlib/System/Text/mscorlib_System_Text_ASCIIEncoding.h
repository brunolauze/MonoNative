#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_TEXT_ASCIIENCODING_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_TEXT_ASCIIENCODING_H

#include <mscorlib/System/Text/mscorlib_System_Text_Encoding.h>
#include <mscorlib/System/mscorlib_System_ICloneable.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Text/mscorlib_System_Text_NormalizationForm.h>

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

			class Decoder;
			class Encoder;
			class DecoderFallback;
			class EncoderFallback;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Text
		{

			class ASCIIEncoding
				: public mscorlib::System::Text::Encoding
				, public virtual mscorlib::System::ICloneable
			{
			public:
				ASCIIEncoding()
				: mscorlib::System::Text::Encoding(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Text.ASCIIEncoding"))
				, mscorlib::System::ICloneable(NULL)
				{
					__native_object__ = Global::New("mscorlib", "System.Text", "ASCIIEncoding");
				};
			
				ASCIIEncoding(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Text::Encoding(nativeTypeInfo)
				, mscorlib::System::ICloneable(NULL)
				{
				};
			
				ASCIIEncoding(MonoObject *nativeObject)
				: mscorlib::System::Text::Encoding(nativeObject)
				, mscorlib::System::ICloneable(nativeObject)
				{
				};
			
				~ASCIIEncoding()
				{
				};
			

				ASCIIEncoding & operator=(ASCIIEncoding &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual mscorlib::System::Int32  GetByteCount(std::vector<mscorlib::System::Char*> chars, mscorlib::System::Int32 index, mscorlib::System::Int32 count) override;
				virtual mscorlib::System::Int32  GetByteCount(mscorlib::System::String chars) override;
				virtual mscorlib::System::Int32  GetBytes(std::vector<mscorlib::System::Char*> chars, mscorlib::System::Int32 charIndex, mscorlib::System::Int32 charCount, std::vector<mscorlib::System::Byte*> bytes, mscorlib::System::Int32 byteIndex) override;
				virtual mscorlib::System::Int32  GetBytes(mscorlib::System::String chars, mscorlib::System::Int32 charIndex, mscorlib::System::Int32 charCount, std::vector<mscorlib::System::Byte*> bytes, mscorlib::System::Int32 byteIndex) override;
				virtual mscorlib::System::Int32  GetCharCount(std::vector<mscorlib::System::Byte*> bytes, mscorlib::System::Int32 index, mscorlib::System::Int32 count) override;
				virtual mscorlib::System::Int32  GetChars(std::vector<mscorlib::System::Byte*> bytes, mscorlib::System::Int32 byteIndex, mscorlib::System::Int32 byteCount, std::vector<mscorlib::System::Char*> chars, mscorlib::System::Int32 charIndex) override;
				virtual mscorlib::System::Int32  GetMaxByteCount(mscorlib::System::Int32 charCount) override;
				virtual mscorlib::System::Int32  GetMaxCharCount(mscorlib::System::Int32 byteCount) override;
				virtual mscorlib::System::String  GetString(std::vector<mscorlib::System::Byte*> bytes, mscorlib::System::Int32 byteIndex, mscorlib::System::Int32 byteCount) override;
				virtual mscorlib::System::Int32  GetBytes(mscorlib::System::Char* chars, mscorlib::System::Int32 charCount, mscorlib::System::Byte* bytes, mscorlib::System::Int32 byteCount) override;
				virtual mscorlib::System::Int32  GetChars(mscorlib::System::Byte* bytes, mscorlib::System::Int32 byteCount, mscorlib::System::Char* chars, mscorlib::System::Int32 charCount) override;
				virtual mscorlib::System::Int32  GetCharCount(mscorlib::System::Byte* bytes, mscorlib::System::Int32 count) override;
				virtual mscorlib::System::Int32  GetByteCount(mscorlib::System::Char* chars, mscorlib::System::Int32 count) override;
				virtual mscorlib::System::Text::Decoder  GetDecoder() override;
				virtual mscorlib::System::Text::Encoder  GetEncoder() override;
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_IsSingleByte)) mscorlib::System::Boolean  IsSingleByte;
				__declspec(property(get=get_IsReadOnly)) mscorlib::System::Boolean  IsReadOnly;
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

				//Get Set Properties Methods
				//	Get:IsSingleByte
				mscorlib::System::Boolean  get_IsSingleByte();

				//	Get:IsReadOnly
				mscorlib::System::Boolean  get_IsReadOnly();

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

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
