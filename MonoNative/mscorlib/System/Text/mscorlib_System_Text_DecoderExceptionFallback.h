#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_TEXT_DECODEREXCEPTIONFALLBACK_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_TEXT_DECODEREXCEPTIONFALLBACK_H

#include <mscorlib/System/Text/mscorlib_System_Text_DecoderFallback.h>
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
		class String;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Text
		{

			class DecoderExceptionFallback
				: public mscorlib::System::Text::DecoderFallback
			{
			public:
				DecoderExceptionFallback()
				: mscorlib::System::Text::DecoderFallback(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Text.DecoderExceptionFallback"))
				{
					__native_object__ = Global::New("mscorlib", "System.Text", "DecoderExceptionFallback");
				};
			
				DecoderExceptionFallback(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Text::DecoderFallback(nativeTypeInfo)
				{
				};
			
				DecoderExceptionFallback(MonoObject *nativeObject)
				: mscorlib::System::Text::DecoderFallback(nativeObject)
				{
				};
			
				~DecoderExceptionFallback()
				{
				};
			

				DecoderExceptionFallback & operator=(DecoderExceptionFallback &value) { __native_object__ = value.GetNativeObject(); return value; };
				bool operator==(DecoderExceptionFallback &value) { return mscorlib::System::Object::Equals(value); };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual mscorlib::System::Text::DecoderFallbackBuffer  CreateFallbackBuffer() override;
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
