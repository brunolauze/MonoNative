#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_POINTER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_POINTER_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ISerializable.h>

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
		namespace Reflection
		{

			class Pointer
				: public mscorlib::System::Object
				, public virtual mscorlib::System::Runtime::Serialization::ISerializable
			{
			public:
				Pointer(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				{
				};
			
				Pointer(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				, mscorlib::System::Runtime::Serialization::ISerializable(nativeObject)
				{
				};
			
				~Pointer()
				{
				};
			

				Pointer & operator=(Pointer &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				static mscorlib::System::Object  Box(void*ptr, mscorlib::System::Type type);
				static void* Unbox(mscorlib::System::Object ptr);
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
