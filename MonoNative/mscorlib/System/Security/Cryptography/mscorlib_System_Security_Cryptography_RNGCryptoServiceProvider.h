#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_RNGCRYPTOSERVICEPROVIDER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_RNGCRYPTOSERVICEPROVIDER_H

#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_RandomNumberGenerator.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_CspParameters.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_IDisposable.h>
#include <mscorlib/System/mscorlib_System_Object.h>

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
		namespace Security
		{
			namespace Cryptography
			{

				class RNGCryptoServiceProvider
					: public mscorlib::System::Security::Cryptography::RandomNumberGenerator
					, public virtual mscorlib::System::IDisposable
				{
				public:
					RNGCryptoServiceProvider()
					: mscorlib::System::Security::Cryptography::RandomNumberGenerator(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.RNGCryptoServiceProvider"))
					, mscorlib::System::IDisposable(NULL)
					{
						__native_object__ = Global::New("mscorlib", "System.Security.Cryptography", "RNGCryptoServiceProvider");
					};
				
					RNGCryptoServiceProvider(std::vector<mscorlib::System::Byte*> rgb)
					: mscorlib::System::Security::Cryptography::RandomNumberGenerator(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.RNGCryptoServiceProvider"))
					, mscorlib::System::IDisposable(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(rgb, "mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089", "System", "Byte");
						__native_object__ = Global::New("mscorlib", "System.Security.Cryptography", "RNGCryptoServiceProvider", 1, __parameter_types__, __parameters__);
					};
				
					RNGCryptoServiceProvider(mscorlib::System::Security::Cryptography::CspParameters cspParams)
					: mscorlib::System::Security::Cryptography::RandomNumberGenerator(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.RNGCryptoServiceProvider"))
					, mscorlib::System::IDisposable(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Cryptography", "CspParameters");
						__parameters__[0] = (MonoObject*)cspParams;
						__native_object__ = Global::New("mscorlib", "System.Security.Cryptography", "RNGCryptoServiceProvider", 1, __parameter_types__, __parameters__);
					};
				
					RNGCryptoServiceProvider(mscorlib::System::String str)
					: mscorlib::System::Security::Cryptography::RandomNumberGenerator(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.RNGCryptoServiceProvider"))
					, mscorlib::System::IDisposable(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = (MonoObject*)str;
						__native_object__ = Global::New("mscorlib", "System.Security.Cryptography", "RNGCryptoServiceProvider", 1, __parameter_types__, __parameters__);
					};
				
					RNGCryptoServiceProvider(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::Cryptography::RandomNumberGenerator(nativeTypeInfo)
					, mscorlib::System::IDisposable(NULL)
					{
					};
				
					RNGCryptoServiceProvider(MonoObject *nativeObject)
					: mscorlib::System::Security::Cryptography::RandomNumberGenerator(nativeObject)
					, mscorlib::System::IDisposable(nativeObject)
					{
					};
				
					~RNGCryptoServiceProvider()
					{
					};
				

					RNGCryptoServiceProvider & operator=(RNGCryptoServiceProvider &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual void  GetBytes(std::vector<mscorlib::System::Byte*> data) override;
					virtual void  GetNonZeroBytes(std::vector<mscorlib::System::Byte*> data) override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
