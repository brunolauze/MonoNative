#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_TEXT_DECODERFALLBACKBUFFER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_TEXT_DECODERFALLBACKBUFFER_H

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

			class DecoderFallbackBuffer
				: public mscorlib::System::Object
			{
			public:
				DecoderFallbackBuffer(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				{
				};
			
				DecoderFallbackBuffer(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				{
				};
			
				~DecoderFallbackBuffer()
				{
				};
			

				DecoderFallbackBuffer & operator=(DecoderFallbackBuffer &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual mscorlib::System::Boolean  Fallback(std::vector<mscorlib::System::Byte*> bytesUnknown, mscorlib::System::Int32 index);
				virtual mscorlib::System::Char  GetNextChar();
				virtual mscorlib::System::Boolean  MovePrevious();
				virtual void  Reset();
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
