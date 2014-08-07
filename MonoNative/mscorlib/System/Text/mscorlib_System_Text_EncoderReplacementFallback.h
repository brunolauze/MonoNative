#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACK_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACK_H

#include <mscorlib/System/Text/mscorlib_System_Text_EncoderFallback.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{
		namespace Text
		{

			class EncoderFallbackBuffer;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{

		class Type;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Text
		{

			class EncoderReplacementFallback
				: public mscorlib::System::Text::EncoderFallback
			{
			public:
				EncoderReplacementFallback()
				: mscorlib::System::Text::EncoderFallback(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Text.EncoderReplacementFallback"))
				{
					__native_object__ = Global::New("mscorlib", "System.Text", "EncoderReplacementFallback");
				};
			
				EncoderReplacementFallback(mscorlib::System::String replacement)
				: mscorlib::System::Text::EncoderFallback(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Text.EncoderReplacementFallback"))
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = (MonoObject*)replacement;
					__native_object__ = Global::New("mscorlib", "System.Text", "EncoderReplacementFallback", 1, __parameter_types__, __parameters__);
				};
			
				EncoderReplacementFallback(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Text::EncoderFallback(nativeTypeInfo)
				{
				};
			
				EncoderReplacementFallback(MonoObject *nativeObject)
				: mscorlib::System::Text::EncoderFallback(nativeObject)
				{
				};
			
				~EncoderReplacementFallback()
				{
				};
			

				EncoderReplacementFallback & operator=(EncoderReplacementFallback &value) { __native_object__ = value.GetNativeObject(); return value; };
				bool operator==(EncoderReplacementFallback &value) { return mscorlib::System::Object::Equals(value); };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual mscorlib::System::Text::EncoderFallbackBuffer  CreateFallbackBuffer() override;
				virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object value) override;
				virtual mscorlib::System::Int32  GetHashCode() override;
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_DefaultString)) mscorlib::System::String  DefaultString;
				__declspec(property(get=get_MaxCharCount)) mscorlib::System::Int32  MaxCharCount;

				//Get Set Properties Methods
				//	Get:DefaultString
				mscorlib::System::String  get_DefaultString() const;

				//	Get:MaxCharCount
				mscorlib::System::Int32  get_MaxCharCount() const;

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
