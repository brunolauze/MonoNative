#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDESCRYPTOSERVICEPROVIDER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDESCRYPTOSERVICEPROVIDER_H

#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_TripleDES.h>
#include <mscorlib/System/mscorlib_System_IDisposable.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_ICryptoTransform.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_CipherMode.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_PaddingMode.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class Byte;
		class Type;
		class String;
		

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

				class KeySizes;
				

			}
		}
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

				class TripleDESCryptoServiceProvider
					: public mscorlib::System::Security::Cryptography::TripleDES
					, public virtual mscorlib::System::IDisposable
				{
				public:
					TripleDESCryptoServiceProvider()
					: mscorlib::System::Security::Cryptography::TripleDES(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.TripleDESCryptoServiceProvider"))
					, mscorlib::System::IDisposable(NULL)
					{
						__native_object__ = Global::New("mscorlib", "System.Security.Cryptography", "TripleDESCryptoServiceProvider");
					};
				
					TripleDESCryptoServiceProvider(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::Cryptography::TripleDES(nativeTypeInfo)
					, mscorlib::System::IDisposable(NULL)
					{
					};
				
					TripleDESCryptoServiceProvider(MonoObject *nativeObject)
					: mscorlib::System::Security::Cryptography::TripleDES(nativeObject)
					, mscorlib::System::IDisposable(nativeObject)
					{
					};
				
					~TripleDESCryptoServiceProvider()
					{
					};
				

					TripleDESCryptoServiceProvider & operator=(TripleDESCryptoServiceProvider &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(TripleDESCryptoServiceProvider &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual void  GenerateIV() override;
					virtual void  GenerateKey() override;
					virtual mscorlib::System::Security::Cryptography::ICryptoTransform  CreateDecryptor(std::vector<mscorlib::System::Byte*> rgbKey, std::vector<mscorlib::System::Byte*> rgbIV) override;
					virtual mscorlib::System::Security::Cryptography::ICryptoTransform  CreateEncryptor(std::vector<mscorlib::System::Byte*> rgbKey, std::vector<mscorlib::System::Byte*> rgbIV) override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Key, put=set_Key)) std::vector<mscorlib::System::Byte*>  Key;
					__declspec(property(get=get_BlockSize, put=set_BlockSize)) mscorlib::System::Int32  BlockSize;
					__declspec(property(get=get_FeedbackSize, put=set_FeedbackSize)) mscorlib::System::Int32  FeedbackSize;
					__declspec(property(get=get_IV, put=set_IV)) std::vector<mscorlib::System::Byte*>  IV;
					__declspec(property(get=get_KeySize, put=set_KeySize)) mscorlib::System::Int32  KeySize;
					__declspec(property(get=get_LegalBlockSizes)) std::vector<mscorlib::System::Security::Cryptography::KeySizes*>  LegalBlockSizes;
					__declspec(property(get=get_LegalKeySizes)) std::vector<mscorlib::System::Security::Cryptography::KeySizes*>  LegalKeySizes;
					__declspec(property(get=get_Mode, put=set_Mode)) mscorlib::System::Security::Cryptography::CipherMode::__ENUM__  Mode;
					__declspec(property(get=get_Padding, put=set_Padding)) mscorlib::System::Security::Cryptography::PaddingMode::__ENUM__  Padding;

					//Get Set Properties Methods
					//	Get/Set:Key
					std::vector<mscorlib::System::Byte*>  get_Key() const;
					void set_Key(std::vector<mscorlib::System::Byte*>  value);

					//	Get/Set:BlockSize
					mscorlib::System::Int32  get_BlockSize() const;
					void set_BlockSize(mscorlib::System::Int32  value);

					//	Get/Set:FeedbackSize
					mscorlib::System::Int32  get_FeedbackSize() const;
					void set_FeedbackSize(mscorlib::System::Int32  value);

					//	Get/Set:IV
					std::vector<mscorlib::System::Byte*>  get_IV() const;
					void set_IV(std::vector<mscorlib::System::Byte*>  value);

					//	Get/Set:KeySize
					mscorlib::System::Int32  get_KeySize() const;
					void set_KeySize(mscorlib::System::Int32  value);

					//	Get:LegalBlockSizes
					std::vector<mscorlib::System::Security::Cryptography::KeySizes*>  get_LegalBlockSizes() const;

					//	Get:LegalKeySizes
					std::vector<mscorlib::System::Security::Cryptography::KeySizes*>  get_LegalKeySizes() const;

					//	Get/Set:Mode
					mscorlib::System::Security::Cryptography::CipherMode::__ENUM__  get_Mode() const;
					void set_Mode(mscorlib::System::Security::Cryptography::CipherMode::__ENUM__  value);

					//	Get/Set:Padding
					mscorlib::System::Security::Cryptography::PaddingMode::__ENUM__  get_Padding() const;
					void set_Padding(mscorlib::System::Security::Cryptography::PaddingMode::__ENUM__  value);

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
