#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_COMPILERSERVICES_CALLCONVCDECL_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_COMPILERSERVICES_CALLCONVCDECL_H

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

				class CallConvCdecl
					: public mscorlib::System::Object
				{
				public:
					CallConvCdecl()
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.CompilerServices.CallConvCdecl"))
					{
						__native_object__ = Global::New("mscorlib", "System.Runtime.CompilerServices", "CallConvCdecl");
					};
				
					CallConvCdecl(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					CallConvCdecl(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~CallConvCdecl()
					{
					};
				

					CallConvCdecl & operator=(CallConvCdecl &value) { __native_object__ = value.GetNativeObject(); return value; };
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
