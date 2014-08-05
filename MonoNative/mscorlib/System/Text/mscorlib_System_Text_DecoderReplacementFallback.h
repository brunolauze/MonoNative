#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_TEXT_DECODERREPLACEMENTFALLBACK_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_TEXT_DECODERREPLACEMENTFALLBACK_H

#include <mscorlib/System/Text/mscorlib_System_Text_DecoderFallback.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{
		namespace Text
		{

			class DecoderFallbackBuffer;
			

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

			class DecoderReplacementFallback
				: public mscorlib::System::Text::DecoderFallback
			{
			public:
				DecoderReplacementFallback()
				: mscorlib::System::Text::DecoderFallback(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Text.DecoderReplacementFallback"))
				{
					__native_object__ = Global::New("mscorlib", "System.Text", "DecoderReplacementFallback");
				};
			
				DecoderReplacementFallback(mscorlib::System::String replacement)
				: mscorlib::System::Text::DecoderFallback(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Text.DecoderReplacementFallback"))
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = (MonoObject*)replacement;
					__native_object__ = Global::New("mscorlib", "System.Text", "DecoderReplacementFallback", 1, __parameter_types__, __parameters__);
				};
			
				DecoderReplacementFallback(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Text::DecoderFallback(nativeTypeInfo)
				{
				};
			
				DecoderReplacementFallback(MonoObject *nativeObject)
				: mscorlib::System::Text::DecoderFallback(nativeObject)
				{
				};
			
				~DecoderReplacementFallback()
				{
				};
			

				DecoderReplacementFallback & operator=(DecoderReplacementFallback &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual mscorlib::System::Text::DecoderFallbackBuffer  CreateFallbackBuffer() override;
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
