#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_STRONGNAMEKEYPAIR_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_STRONGNAMEKEYPAIR_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/IO/mscorlib_System_IO_FileStream.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ISerializable.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_IDeserializationCallback.h>

namespace mscorlib
{
	namespace System
	{

		class Byte;
		class Type;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class StrongNameKeyPair
				: public mscorlib::System::Object
				, public virtual mscorlib::System::Runtime::Serialization::ISerializable
				, public virtual mscorlib::System::Runtime::Serialization::IDeserializationCallback
			{
			public:
				StrongNameKeyPair(std::vector<mscorlib::System::Byte*> keyPairArray)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Reflection.StrongNameKeyPair"))
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType("mscorlib", "System", "Byte"))->eklass);
					__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(keyPairArray, "mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089", "System", "Byte");
					__native_object__ = Global::New("mscorlib", "System.Reflection", "StrongNameKeyPair", 1, __parameter_types__, __parameters__);
				};
			
				StrongNameKeyPair(mscorlib::System::IO::FileStream keyPairFile)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Reflection.StrongNameKeyPair"))
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.IO", "FileStream");
					__parameters__[0] = (MonoObject*)keyPairFile;
					__native_object__ = Global::New("mscorlib", "System.Reflection", "StrongNameKeyPair", 1, __parameter_types__, __parameters__);
				};
			
				StrongNameKeyPair(mscorlib::System::String keyPairContainer)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Reflection.StrongNameKeyPair"))
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = (MonoObject*)keyPairContainer;
					__native_object__ = Global::New("mscorlib", "System.Reflection", "StrongNameKeyPair", 1, __parameter_types__, __parameters__);
				};
			
				StrongNameKeyPair(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
				{
				};
			
				StrongNameKeyPair(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				, mscorlib::System::Runtime::Serialization::ISerializable(nativeObject)
				, mscorlib::System::Runtime::Serialization::IDeserializationCallback(nativeObject)
				{
				};
			
				~StrongNameKeyPair()
				{
				};
			

				StrongNameKeyPair & operator=(StrongNameKeyPair &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_PublicKey)) std::vector<mscorlib::System::Byte*>  PublicKey;

				//Get Set Properties Methods
				//	Get:PublicKey
				std::vector<mscorlib::System::Byte*>  get_PublicKey();

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
