#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_TEXT_DECODERFALLBACK_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_TEXT_DECODERFALLBACK_H

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

			class DecoderFallback
				: public mscorlib::System::Object
			{
			public:
				DecoderFallback(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				{
				};
			
				DecoderFallback(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				{
				};
			
				~DecoderFallback()
				{
				};
			

				DecoderFallback & operator=(DecoderFallback &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual mscorlib::System::Text::DecoderFallbackBuffer  CreateFallbackBuffer();
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_MaxCharCount)) mscorlib::System::Int32  MaxCharCount;

				//Public Static Properties
				static Property<mscorlib::System::Text::DecoderFallback , mscorlib::System::Text::DecoderFallback> ExceptionFallback;
				static Property<mscorlib::System::Text::DecoderFallback , mscorlib::System::Text::DecoderFallback> ReplacementFallback;

				//Get Set Properties Methods
				//	Get:MaxCharCount
				mscorlib::System::Int32  get_MaxCharCount() const;

				//Get Set Static Properties Methods
				//	Get:ExceptionFallback
				static mscorlib::System::Text::DecoderFallback  get_ExceptionFallback();
				static void set_ExceptionFallback(mscorlib::System::Text::DecoderFallback  value);

				//	Get:ReplacementFallback
				static mscorlib::System::Text::DecoderFallback  get_ReplacementFallback();
				static void set_ReplacementFallback(mscorlib::System::Text::DecoderFallback  value);


			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
