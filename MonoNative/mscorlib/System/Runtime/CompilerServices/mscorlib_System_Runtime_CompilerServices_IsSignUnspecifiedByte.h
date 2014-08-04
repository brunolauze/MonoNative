#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_COMPILERSERVICES_ISSIGNUNSPECIFIEDBYTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_COMPILERSERVICES_ISSIGNUNSPECIFIEDBYTE_H

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
		namespace Runtime
		{
			namespace CompilerServices
			{

				class IsSignUnspecifiedByte
					: public mscorlib::System::Object
				{
				public:
					IsSignUnspecifiedByte(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					IsSignUnspecifiedByte(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~IsSignUnspecifiedByte()
					{
					};
				

					IsSignUnspecifiedByte & operator=(IsSignUnspecifiedByte &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
