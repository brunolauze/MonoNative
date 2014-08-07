#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONBINDER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONBINDER_H

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
			namespace Serialization
			{

				class SerializationBinder
					: public mscorlib::System::Object
				{
				public:
					SerializationBinder(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					SerializationBinder(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~SerializationBinder()
					{
					};
				

					SerializationBinder & operator=(SerializationBinder &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(SerializationBinder &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Type  BindToType(mscorlib::System::String assemblyName, mscorlib::System::String typeName);
					virtual mscorlib::System::Type  BindToType(const char *assemblyName, const char *typeName);
					virtual void  BindToName(mscorlib::System::Type serializedType, mscorlib::System::String assemblyName, mscorlib::System::String typeName);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
