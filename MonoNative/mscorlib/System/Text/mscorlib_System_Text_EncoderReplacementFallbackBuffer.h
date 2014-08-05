#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACKBUFFER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACKBUFFER_H

#include <mscorlib/System/Text/mscorlib_System_Text_EncoderFallbackBuffer.h>
#include <mscorlib/System/Text/mscorlib_System_Text_EncoderReplacementFallback.h>
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

			class EncoderReplacementFallbackBuffer
				: public mscorlib::System::Text::EncoderFallbackBuffer
			{
			public:
				EncoderReplacementFallbackBuffer(mscorlib::System::Text::EncoderReplacementFallback fallback)
				: mscorlib::System::Text::EncoderFallbackBuffer(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Text.EncoderReplacementFallbackBuffer"))
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.Text", "EncoderReplacementFallback");
					__parameters__[0] = (MonoObject*)fallback;
					__native_object__ = Global::New("mscorlib", "System.Text", "EncoderReplacementFallbackBuffer", 1, __parameter_types__, __parameters__);
				};
			
				EncoderReplacementFallbackBuffer(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Text::EncoderFallbackBuffer(nativeTypeInfo)
				{
				};
			
				EncoderReplacementFallbackBuffer(MonoObject *nativeObject)
				: mscorlib::System::Text::EncoderFallbackBuffer(nativeObject)
				{
				};
			
				~EncoderReplacementFallbackBuffer()
				{
				};
			

				EncoderReplacementFallbackBuffer & operator=(EncoderReplacementFallbackBuffer &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual mscorlib::System::Boolean  Fallback(mscorlib::System::Char charUnknown, mscorlib::System::Int32 index) override;
				virtual mscorlib::System::Boolean  Fallback(mscorlib::System::Char charUnknownHigh, mscorlib::System::Char charUnknownLow, mscorlib::System::Int32 index) override;
				virtual mscorlib::System::Char  GetNextChar() override;
				virtual mscorlib::System::Boolean  MovePrevious() override;
				virtual void  Reset() override;
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
