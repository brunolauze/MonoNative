#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_COMPILERSERVICES_ISBYVALUE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_COMPILERSERVICES_ISBYVALUE_H

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

				class IsByValue
					: public mscorlib::System::Object
				{
				public:
					IsByValue(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					IsByValue(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~IsByValue()
					{
					};
				

					IsByValue & operator=(IsByValue &value) { __native_object__ = value.GetNativeObject(); return value; };
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
