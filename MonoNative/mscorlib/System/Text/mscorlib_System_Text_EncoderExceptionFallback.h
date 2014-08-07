#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_TEXT_ENCODEREXCEPTIONFALLBACK_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_TEXT_ENCODEREXCEPTIONFALLBACK_H

#include <mscorlib/System/Text/mscorlib_System_Text_EncoderFallback.h>
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
		class String;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Text
		{

			class EncoderExceptionFallback
				: public mscorlib::System::Text::EncoderFallback
			{
			public:
				EncoderExceptionFallback()
				: mscorlib::System::Text::EncoderFallback(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Text.EncoderExceptionFallback"))
				{
					__native_object__ = Global::New("mscorlib", "System.Text", "EncoderExceptionFallback");
				};
			
				EncoderExceptionFallback(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Text::EncoderFallback(nativeTypeInfo)
				{
				};
			
				EncoderExceptionFallback(MonoObject *nativeObject)
				: mscorlib::System::Text::EncoderFallback(nativeObject)
				{
				};
			
				~EncoderExceptionFallback()
				{
				};
			

				EncoderExceptionFallback & operator=(EncoderExceptionFallback &value) { __native_object__ = value.GetNativeObject(); return value; };
				bool operator==(EncoderExceptionFallback &value) { return mscorlib::System::Object::Equals(value); };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual mscorlib::System::Text::EncoderFallbackBuffer  CreateFallbackBuffer() override;
				virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object value) override;
				virtual mscorlib::System::Int32  GetHashCode() override;
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_MaxCharCount)) mscorlib::System::Int32  MaxCharCount;

				//Get Set Properties Methods
				//	Get:MaxCharCount
				mscorlib::System::Int32  get_MaxCharCount() const;

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
