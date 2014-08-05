#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_TEXT_UNICODEENCODING_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_TEXT_UNICODEENCODING_H

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

			class Encoder;
			class Decoder;
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

			class UnicodeEncoding
				: public mscorlib::System::Text::Encoding
				, public virtual mscorlib::System::ICloneable
			{
			public:
				UnicodeEncoding()
				: mscorlib::System::Text::Encoding(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Text.UnicodeEncoding"))
				, mscorlib::System::ICloneable(NULL)
				{
					__native_object__ = Global::New("mscorlib", "System.Text", "UnicodeEncoding");
				};
			
				UnicodeEncoding(mscorlib::System::Boolean bigEndian, mscorlib::System::Boolean byteOrderMark)
				: mscorlib::System::Text::Encoding(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Text.UnicodeEncoding"))
				, mscorlib::System::ICloneable(NULL)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Boolean");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Boolean");
					__parameters__[0] = reinterpret_cast<void*>(bigEndian);
					__parameters__[1] = reinterpret_cast<void*>(byteOrderMark);
					__native_object__ = Global::New("mscorlib", "System.Text", "UnicodeEncoding", 2, __parameter_types__, __parameters__);
				};
			
				UnicodeEncoding(mscorlib::System::Boolean bigEndian, mscorlib::System::Boolean byteOrderMark, mscorlib::System::Boolean throwOnInvalidBytes)
				: mscorlib::System::Text::Encoding(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Text.UnicodeEncoding"))
				, mscorlib::System::ICloneable(NULL)
				{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Boolean");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Boolean");
					__parameter_types__[2] = Global::GetType("mscorlib", "System", "Boolean");
					__parameters__[0] = reinterpret_cast<void*>(bigEndian);
					__parameters__[1] = reinterpret_cast<void*>(byteOrderMark);
					__parameters__[2] = reinterpret_cast<void*>(throwOnInvalidBytes);
					__native_object__ = Global::New("mscorlib", "System.Text", "UnicodeEncoding", 3, __parameter_types__, __parameters__);
				};
			
				UnicodeEncoding(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Text::Encoding(nativeTypeInfo)
				, mscorlib::System::ICloneable(NULL)
				{
				};
			
				UnicodeEncoding(MonoObject *nativeObject)
				: mscorlib::System::Text::Encoding(nativeObject)
				, mscorlib::System::ICloneable(nativeObject)
				{
				};
			
				~UnicodeEncoding()
				{
				};
			

				UnicodeEncoding & operator=(UnicodeEncoding &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual mscorlib::System::Int32  GetByteCount(std::vector<mscorlib::System::Char*> chars, mscorlib::System::Int32 index, mscorlib::System::Int32 count) override;
				virtual mscorlib::System::Int32  GetByteCount(mscorlib::System::String s) override;
				virtual mscorlib::System::Int32  GetByteCount(mscorlib::System::Char* chars, mscorlib::System::Int32 count) override;
				virtual mscorlib::System::Int32  GetBytes(std::vector<mscorlib::System::Char*> chars, mscorlib::System::Int32 charIndex, mscorlib::System::Int32 charCount, std::vector<mscorlib::System::Byte*> bytes, mscorlib::System::Int32 byteIndex) override;
				virtual mscorlib::System::Int32  GetBytes(mscorlib::System::String s, mscorlib::System::Int32 charIndex, mscorlib::System::Int32 charCount, std::vector<mscorlib::System::Byte*> bytes, mscorlib::System::Int32 byteIndex) override;
				virtual mscorlib::System::Int32  GetBytes(mscorlib::System::Char* chars, mscorlib::System::Int32 charCount, mscorlib::System::Byte* bytes, mscorlib::System::Int32 byteCount) override;
				virtual mscorlib::System::Int32  GetCharCount(std::vector<mscorlib::System::Byte*> bytes, mscorlib::System::Int32 index, mscorlib::System::Int32 count) override;
				virtual mscorlib::System::Int32  GetCharCount(mscorlib::System::Byte* bytes, mscorlib::System::Int32 count) override;
				virtual mscorlib::System::Int32  GetChars(std::vector<mscorlib::System::Byte*> bytes, mscorlib::System::Int32 byteIndex, mscorlib::System::Int32 byteCount, std::vector<mscorlib::System::Char*> chars, mscorlib::System::Int32 charIndex) override;
				virtual mscorlib::System::Int32  GetChars(mscorlib::System::Byte* bytes, mscorlib::System::Int32 byteCount, mscorlib::System::Char* chars, mscorlib::System::Int32 charCount) override;
				virtual mscorlib::System::String  GetString(std::vector<mscorlib::System::Byte*> bytes, mscorlib::System::Int32 index, mscorlib::System::Int32 count) override;
				virtual mscorlib::System::Text::Encoder  GetEncoder() override;
				virtual mscorlib::System::Int32  GetMaxByteCount(mscorlib::System::Int32 charCount) override;
				virtual mscorlib::System::Int32  GetMaxCharCount(mscorlib::System::Int32 byteCount) override;
				virtual mscorlib::System::Text::Decoder  GetDecoder() override;
				virtual std::vector<mscorlib::System::Byte*>  GetPreamble() override;
				virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object value) override;
				virtual mscorlib::System::Int32  GetHashCode() override;
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

				//Public Static Fields
				static Property<mscorlib::System::Int32 , mscorlib::System::Text::UnicodeEncoding> CharSize;

				//Get Set Properties Methods
				//	Get:IsReadOnly
				mscorlib::System::Boolean  get_IsReadOnly() const;

				//	Get:IsSingleByte
				mscorlib::System::Boolean  get_IsSingleByte() const;

				//	Get/Set:DecoderFallback
				mscorlib::System::Text::DecoderFallback  get_DecoderFallback() const;
				void set_DecoderFallback(mscorlib::System::Text::DecoderFallback  value);

				//	Get/Set:EncoderFallback
				mscorlib::System::Text::EncoderFallback  get_EncoderFallback() const;
				void set_EncoderFallback(mscorlib::System::Text::EncoderFallback  value);

				//	Get:BodyName
				mscorlib::System::String  get_BodyName() const;

				//	Get:CodePage
				mscorlib::System::Int32  get_CodePage() const;

				//	Get:EncodingName
				mscorlib::System::String  get_EncodingName() const;

				//	Get:HeaderName
				mscorlib::System::String  get_HeaderName() const;

				//	Get:IsBrowserDisplay
				mscorlib::System::Boolean  get_IsBrowserDisplay() const;

				//	Get:IsBrowserSave
				mscorlib::System::Boolean  get_IsBrowserSave() const;

				//	Get:IsMailNewsDisplay
				mscorlib::System::Boolean  get_IsMailNewsDisplay() const;

				//	Get:IsMailNewsSave
				mscorlib::System::Boolean  get_IsMailNewsSave() const;

				//	Get:WebName
				mscorlib::System::String  get_WebName() const;

				//	Get:WindowsCodePage
				mscorlib::System::Int32  get_WindowsCodePage() const;

				//	Get/Set:CharSize
				static mscorlib::System::Int32  get_CharSize();
				static void set_CharSize(mscorlib::System::Int32  value);

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
