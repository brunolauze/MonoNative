#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOCONFIG_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOCONFIG_H

#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		class String;
		class Byte;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Cryptography
			{

				class CryptoConfig
					: public mscorlib::System::Object
				{
				public:
					CryptoConfig()
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.CryptoConfig"))
					{
						__native_object__ = Global::New("mscorlib", "System.Security.Cryptography", "CryptoConfig");
					};
				
					CryptoConfig(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					CryptoConfig(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~CryptoConfig()
					{
					};
				

					CryptoConfig & operator=(CryptoConfig &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					static mscorlib::System::Object  CreateFromName(mscorlib::System::String name);
					static mscorlib::System::Object  CreateFromName(mscorlib::System::String name, std::vector<mscorlib::System::Object*> args);
					static mscorlib::System::String  MapNameToOID(mscorlib::System::String name);
					static void  AddAlgorithm(mscorlib::System::Type algorithm, std::vector<mscorlib::System::String*> names);
					static void  AddOID(mscorlib::System::String oid, std::vector<mscorlib::System::String*> names);
					static std::vector<mscorlib::System::Byte*>  EncodeOID(mscorlib::System::String str);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Static Properties
					static Property<mscorlib::System::Boolean> AllowOnlyFipsAlgorithms;

					//Get Set Static Properties Methods
					//	Get:AllowOnlyFipsAlgorithms
					static mscorlib::System::Boolean  get_AllowOnlyFipsAlgorithms();


				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
