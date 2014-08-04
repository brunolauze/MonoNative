#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_TEXT_ENCODER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_TEXT_ENCODER_H

#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{
		namespace Text
		{

			class EncoderFallback;
			class EncoderFallbackBuffer;
			

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

			class Encoder
				: public mscorlib::System::Object
			{
			public:
				Encoder(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				{
				};
			
				Encoder(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				{
				};
			
				~Encoder()
				{
				};
			

				Encoder & operator=(Encoder &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual mscorlib::System::Int32  GetByteCount(std::vector<mscorlib::System::Char*> chars, mscorlib::System::Int32 index, mscorlib::System::Int32 count, mscorlib::System::Boolean flush);
				virtual mscorlib::System::Int32  GetBytes(std::vector<mscorlib::System::Char*> chars, mscorlib::System::Int32 charIndex, mscorlib::System::Int32 charCount, std::vector<mscorlib::System::Byte*> bytes, mscorlib::System::Int32 byteIndex, mscorlib::System::Boolean flush);
				virtual mscorlib::System::Int32  GetByteCount(mscorlib::System::Char* chars, mscorlib::System::Int32 count, mscorlib::System::Boolean flush);
				virtual mscorlib::System::Int32  GetBytes(mscorlib::System::Char* chars, mscorlib::System::Int32 charCount, mscorlib::System::Byte* bytes, mscorlib::System::Int32 byteCount, mscorlib::System::Boolean flush);
				virtual void  Reset();
				virtual void  Convert(mscorlib::System::Char* chars, mscorlib::System::Int32 charCount, mscorlib::System::Byte* bytes, mscorlib::System::Int32 byteCount, mscorlib::System::Boolean flush, mscorlib::System::Int32 charsUsed, mscorlib::System::Int32 bytesUsed, mscorlib::System::Boolean completed);
				virtual void  Convert(std::vector<mscorlib::System::Char*> chars, mscorlib::System::Int32 charIndex, mscorlib::System::Int32 charCount, std::vector<mscorlib::System::Byte*> bytes, mscorlib::System::Int32 byteIndex, mscorlib::System::Int32 byteCount, mscorlib::System::Boolean flush, mscorlib::System::Int32 charsUsed, mscorlib::System::Int32 bytesUsed, mscorlib::System::Boolean completed);
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_Fallback, put=set_Fallback)) mscorlib::System::Text::EncoderFallback  Fallback;
				__declspec(property(get=get_FallbackBuffer)) mscorlib::System::Text::EncoderFallbackBuffer  FallbackBuffer;

				//Get Set Properties Methods
				//	Get/Set:Fallback
				mscorlib::System::Text::EncoderFallback  get_Fallback();
				void set_Fallback(mscorlib::System::Text::EncoderFallback  value);

				//	Get:FallbackBuffer
				mscorlib::System::Text::EncoderFallbackBuffer  get_FallbackBuffer();

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
