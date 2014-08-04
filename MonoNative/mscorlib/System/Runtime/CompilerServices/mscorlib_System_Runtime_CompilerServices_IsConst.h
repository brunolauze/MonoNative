#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_COMPILERSERVICES_ISCONST_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_COMPILERSERVICES_ISCONST_H

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

				class IsConst
					: public mscorlib::System::Object
				{
				public:
					IsConst(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					IsConst(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~IsConst()
					{
					};
				

					IsConst & operator=(IsConst &value) { __native_object__ = value.GetNativeObject(); return value; };
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
