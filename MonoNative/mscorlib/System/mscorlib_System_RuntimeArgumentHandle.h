#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIMEARGUMENTHANDLE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIMEARGUMENTHANDLE_H

#include <mscorlib/System/mscorlib_System_ValueType.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class String;
		class Type;
		

	}
}
namespace mscorlib
{
	namespace System
	{

		class RuntimeArgumentHandle
			: public mscorlib::System::ValueType
		{
		public:
			RuntimeArgumentHandle(mscorlib::NativeTypeInfo *nativeTypeInfo)
			: mscorlib::System::ValueType(nativeTypeInfo)
			{
			};
		
			RuntimeArgumentHandle(MonoObject *nativeObject)
			: mscorlib::System::ValueType(nativeObject)
			{
			};
		
			~RuntimeArgumentHandle()
			{
			};
		

			RuntimeArgumentHandle & operator=(RuntimeArgumentHandle &value) { __native_object__ = value.GetNativeObject(); return value; };
			operator MonoObject*() { return __native_object__; };
			MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


			virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


		
		protected:
		
		private:
		
		};

	}
}
#endif
