#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONENTRY_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONENTRY_H

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
		namespace Runtime
		{
			namespace Serialization
			{

				class SerializationEntry
					: public mscorlib::System::ValueType
				{
				public:
					SerializationEntry(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::ValueType(nativeTypeInfo)
					{
					};
				
					SerializationEntry(MonoObject *nativeObject)
					: mscorlib::System::ValueType(nativeObject)
					{
					};
				
					~SerializationEntry()
					{
					};
				

					SerializationEntry & operator=(SerializationEntry &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Name)) mscorlib::System::String  Name;
					__declspec(property(get=get_ObjectType)) mscorlib::System::Type  ObjectType;
					__declspec(property(get=get_Value)) mscorlib::System::Object  Value;

					//Get Set Properties Methods
					//	Get:Name
					mscorlib::System::String  get_Name() const;

					//	Get:ObjectType
					mscorlib::System::Type  get_ObjectType() const;

					//	Get:Value
					mscorlib::System::Object  get_Value() const;

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
