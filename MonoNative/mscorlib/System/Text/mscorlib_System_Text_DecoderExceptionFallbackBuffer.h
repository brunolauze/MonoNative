#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_TEXT_DECODEREXCEPTIONFALLBACKBUFFER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_TEXT_DECODEREXCEPTIONFALLBACKBUFFER_H

#include <mscorlib/System/Text/mscorlib_System_Text_DecoderFallbackBuffer.h>
#include <mscorlib/System/mscorlib_System_Object.h>

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

			class DecoderExceptionFallbackBuffer
				: public mscorlib::System::Text::DecoderFallbackBuffer
			{
			public:
				DecoderExceptionFallbackBuffer()
				: mscorlib::System::Text::DecoderFallbackBuffer(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Text.DecoderExceptionFallbackBuffer"))
				{
					__native_object__ = Global::New("mscorlib", "System.Text", "DecoderExceptionFallbackBuffer");
				};
			
				DecoderExceptionFallbackBuffer(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Text::DecoderFallbackBuffer(nativeTypeInfo)
				{
				};
			
				DecoderExceptionFallbackBuffer(MonoObject *nativeObject)
				: mscorlib::System::Text::DecoderFallbackBuffer(nativeObject)
				{
				};
			
				~DecoderExceptionFallbackBuffer()
				{
				};
			

				DecoderExceptionFallbackBuffer & operator=(DecoderExceptionFallbackBuffer &value) { __native_object__ = value.GetNativeObject(); return value; };
				bool operator==(DecoderExceptionFallbackBuffer &value) { return mscorlib::System::Object::Equals(value); };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual mscorlib::System::Boolean  Fallback(std::vector<mscorlib::System::Byte*> bytesUnknown, mscorlib::System::Int32 index) override;
				virtual mscorlib::System::Char  GetNextChar() override;
				virtual mscorlib::System::Boolean  MovePrevious() override;
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_Remaining)) mscorlib::System::Int32  Remaining;

				//Get Set Properties Methods
				//	Get:Remaining
				mscorlib::System::Int32  get_Remaining() const;

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
