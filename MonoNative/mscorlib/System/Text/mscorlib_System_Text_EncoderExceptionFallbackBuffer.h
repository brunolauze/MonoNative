#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_TEXT_ENCODEREXCEPTIONFALLBACKBUFFER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_TEXT_ENCODEREXCEPTIONFALLBACKBUFFER_H

#include <mscorlib/System/Text/mscorlib_System_Text_EncoderFallbackBuffer.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

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

			class EncoderExceptionFallbackBuffer
				: public mscorlib::System::Text::EncoderFallbackBuffer
			{
			public:
				EncoderExceptionFallbackBuffer()
				: mscorlib::System::Text::EncoderFallbackBuffer(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Text.EncoderExceptionFallbackBuffer"))
				{
					__native_object__ = Global::New("mscorlib", "System.Text", "EncoderExceptionFallbackBuffer");
				};
			
				EncoderExceptionFallbackBuffer(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Text::EncoderFallbackBuffer(nativeTypeInfo)
				{
				};
			
				EncoderExceptionFallbackBuffer(MonoObject *nativeObject)
				: mscorlib::System::Text::EncoderFallbackBuffer(nativeObject)
				{
				};
			
				~EncoderExceptionFallbackBuffer()
				{
				};
			

				EncoderExceptionFallbackBuffer & operator=(EncoderExceptionFallbackBuffer &value) { __native_object__ = value.GetNativeObject(); return value; };
				bool operator==(EncoderExceptionFallbackBuffer &value) { return mscorlib::System::Object::Equals(value); };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual mscorlib::System::Boolean  Fallback(mscorlib::System::Char charUnknown, mscorlib::System::Int32 index) override;
				virtual mscorlib::System::Boolean  Fallback(mscorlib::System::Char charUnknownHigh, mscorlib::System::Char charUnknownLow, mscorlib::System::Int32 index) override;
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
