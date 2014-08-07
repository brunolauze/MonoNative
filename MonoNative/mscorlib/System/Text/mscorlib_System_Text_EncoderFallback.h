#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_TEXT_ENCODERFALLBACK_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_TEXT_ENCODERFALLBACK_H

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

			class EncoderFallback
				: public mscorlib::System::Object
			{
			public:
				EncoderFallback(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				{
				};
			
				EncoderFallback(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				{
				};
			
				~EncoderFallback()
				{
				};
			

				EncoderFallback & operator=(EncoderFallback &value) { __native_object__ = value.GetNativeObject(); return value; };
				bool operator==(EncoderFallback &value) { return mscorlib::System::Object::Equals(value); };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual mscorlib::System::Text::EncoderFallbackBuffer  CreateFallbackBuffer();
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_MaxCharCount)) mscorlib::System::Int32  MaxCharCount;

				//Public Static Properties
				static Property<mscorlib::System::Text::EncoderFallback , mscorlib::System::Text::EncoderFallback> ExceptionFallback;
				static Property<mscorlib::System::Text::EncoderFallback , mscorlib::System::Text::EncoderFallback> ReplacementFallback;

				//Get Set Properties Methods
				//	Get:MaxCharCount
				mscorlib::System::Int32  get_MaxCharCount() const;

				//Get Set Static Properties Methods
				//	Get:ExceptionFallback
				static mscorlib::System::Text::EncoderFallback  get_ExceptionFallback();
				static void set_ExceptionFallback(mscorlib::System::Text::EncoderFallback  value);

				//	Get:ReplacementFallback
				static mscorlib::System::Text::EncoderFallback  get_ReplacementFallback();
				static void set_ReplacementFallback(mscorlib::System::Text::EncoderFallback  value);


			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
