#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_TEXT_DECODER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_TEXT_DECODER_H

#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{
		namespace Text
		{

			class DecoderFallback;
			class DecoderFallbackBuffer;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{

		class Byte;
		class Type;
		class String;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Text
		{

			class Decoder
				: public mscorlib::System::Object
			{
			public:
				Decoder(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				{
				};
			
				Decoder(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				{
				};
			
				~Decoder()
				{
				};
			

				Decoder & operator=(Decoder &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual mscorlib::System::Int32  GetCharCount(std::vector<mscorlib::System::Byte*> bytes, mscorlib::System::Int32 index, mscorlib::System::Int32 count);
				virtual mscorlib::System::Int32  GetChars(std::vector<mscorlib::System::Byte*> bytes, mscorlib::System::Int32 byteIndex, mscorlib::System::Int32 byteCount, std::vector<mscorlib::System::Char*> chars, mscorlib::System::Int32 charIndex);
				virtual mscorlib::System::Int32  GetCharCount(std::vector<mscorlib::System::Byte*> bytes, mscorlib::System::Int32 index, mscorlib::System::Int32 count, mscorlib::System::Boolean flush);
				virtual mscorlib::System::Int32  GetCharCount(mscorlib::System::Byte* bytes, mscorlib::System::Int32 count, mscorlib::System::Boolean flush);
				virtual mscorlib::System::Int32  GetChars(std::vector<mscorlib::System::Byte*> bytes, mscorlib::System::Int32 byteIndex, mscorlib::System::Int32 byteCount, std::vector<mscorlib::System::Char*> chars, mscorlib::System::Int32 charIndex, mscorlib::System::Boolean flush);
				virtual mscorlib::System::Int32  GetChars(mscorlib::System::Byte* bytes, mscorlib::System::Int32 byteCount, mscorlib::System::Char* chars, mscorlib::System::Int32 charCount, mscorlib::System::Boolean flush);
				virtual void  Reset();
				virtual void  Convert(mscorlib::System::Byte* bytes, mscorlib::System::Int32 byteCount, mscorlib::System::Char* chars, mscorlib::System::Int32 charCount, mscorlib::System::Boolean flush, mscorlib::System::Int32 bytesUsed, mscorlib::System::Int32 charsUsed, mscorlib::System::Boolean completed);
				virtual void  Convert(std::vector<mscorlib::System::Byte*> bytes, mscorlib::System::Int32 byteIndex, mscorlib::System::Int32 byteCount, std::vector<mscorlib::System::Char*> chars, mscorlib::System::Int32 charIndex, mscorlib::System::Int32 charCount, mscorlib::System::Boolean flush, mscorlib::System::Int32 bytesUsed, mscorlib::System::Int32 charsUsed, mscorlib::System::Boolean completed);
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_Fallback, put=set_Fallback)) mscorlib::System::Text::DecoderFallback  Fallback;
				__declspec(property(get=get_FallbackBuffer)) mscorlib::System::Text::DecoderFallbackBuffer  FallbackBuffer;

				//Get Set Properties Methods
				//	Get/Set:Fallback
				mscorlib::System::Text::DecoderFallback  get_Fallback();
				void set_Fallback(mscorlib::System::Text::DecoderFallback  value);

				//	Get:FallbackBuffer
				mscorlib::System::Text::DecoderFallbackBuffer  get_FallbackBuffer();

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
