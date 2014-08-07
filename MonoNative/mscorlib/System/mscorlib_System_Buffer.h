#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_BUFFER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_BUFFER_H

#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		class String;
		class Array;
		class Byte;
		

	}
}
namespace mscorlib
{
	namespace System
	{

		class Buffer
			: public mscorlib::System::Object
		{
		public:
			Buffer(mscorlib::NativeTypeInfo *nativeTypeInfo)
			: mscorlib::System::Object(nativeTypeInfo)
			{
			};
		
			Buffer(MonoObject *nativeObject)
			: mscorlib::System::Object(nativeObject)
			{
			};
		
			~Buffer()
			{
			};
		

			Buffer & operator=(Buffer &value) { __native_object__ = value.GetNativeObject(); return value; };
			bool operator==(Buffer &value) { return mscorlib::System::Object::Equals(value); };
			operator MonoObject*() { return __native_object__; };
			MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


			static mscorlib::System::Int32  ByteLength(mscorlib::System::Array array);
			static mscorlib::System::Byte  GetByte(mscorlib::System::Array array, mscorlib::System::Int32 index);
			static void  SetByte(mscorlib::System::Array array, mscorlib::System::Int32 index, mscorlib::System::Byte value);
			static void  BlockCopy(mscorlib::System::Array src, mscorlib::System::Int32 srcOffset, mscorlib::System::Array dst, mscorlib::System::Int32 dstOffset, mscorlib::System::Int32 count);
			virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


		
		protected:
		
		private:
		
		};

	}
}
#endif
