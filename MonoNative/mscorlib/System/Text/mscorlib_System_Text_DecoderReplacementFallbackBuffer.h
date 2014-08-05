#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_TEXT_DECODERREPLACEMENTFALLBACKBUFFER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_TEXT_DECODERREPLACEMENTFALLBACKBUFFER_H

#include <mscorlib/System/Text/mscorlib_System_Text_DecoderFallbackBuffer.h>
#include <mscorlib/System/Text/mscorlib_System_Text_DecoderReplacementFallback.h>
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

			class DecoderReplacementFallbackBuffer
				: public mscorlib::System::Text::DecoderFallbackBuffer
			{
			public:
				DecoderReplacementFallbackBuffer(mscorlib::System::Text::DecoderReplacementFallback fallback)
				: mscorlib::System::Text::DecoderFallbackBuffer(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Text.DecoderReplacementFallbackBuffer"))
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.Text", "DecoderReplacementFallback");
					__parameters__[0] = (MonoObject*)fallback;
					__native_object__ = Global::New("mscorlib", "System.Text", "DecoderReplacementFallbackBuffer", 1, __parameter_types__, __parameters__);
				};
			
				DecoderReplacementFallbackBuffer(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Text::DecoderFallbackBuffer(nativeTypeInfo)
				{
				};
			
				DecoderReplacementFallbackBuffer(MonoObject *nativeObject)
				: mscorlib::System::Text::DecoderFallbackBuffer(nativeObject)
				{
				};
			
				~DecoderReplacementFallbackBuffer()
				{
				};
			

				DecoderReplacementFallbackBuffer & operator=(DecoderReplacementFallbackBuffer &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual mscorlib::System::Boolean  Fallback(std::vector<mscorlib::System::Byte*> bytesUnknown, mscorlib::System::Int32 index) override;
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
