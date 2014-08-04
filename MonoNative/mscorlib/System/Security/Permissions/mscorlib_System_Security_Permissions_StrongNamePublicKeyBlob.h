#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_STRONGNAMEPUBLICKEYBLOB_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_STRONGNAMEPUBLICKEYBLOB_H

#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class Byte;
		class String;
		class Type;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Permissions
			{

				class StrongNamePublicKeyBlob
					: public mscorlib::System::Object
				{
				public:
					StrongNamePublicKeyBlob(std::vector<mscorlib::System::Byte*> publicKey)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Permissions.StrongNamePublicKeyBlob"))
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType("mscorlib", "System", "Byte"))->eklass);
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(publicKey, "mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089", "System", "Byte");
						__native_object__ = Global::New("mscorlib", "System.Security.Permissions", "StrongNamePublicKeyBlob", 1, __parameter_types__, __parameters__);
					};
				
					StrongNamePublicKeyBlob(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					StrongNamePublicKeyBlob(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~StrongNamePublicKeyBlob()
					{
					};
				

					StrongNamePublicKeyBlob & operator=(StrongNamePublicKeyBlob &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object obj) override;
					virtual mscorlib::System::Int32  GetHashCode() override;
					virtual mscorlib::System::String  ToString() override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
