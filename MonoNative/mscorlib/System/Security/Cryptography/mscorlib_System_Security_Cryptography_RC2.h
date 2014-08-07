#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_RC2_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_RC2_H

#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_SymmetricAlgorithm.h>
#include <mscorlib/System/mscorlib_System_IDisposable.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_CipherMode.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_PaddingMode.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_ICryptoTransform.h>
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

				class RC2
					: public mscorlib::System::Security::Cryptography::SymmetricAlgorithm
					, public virtual mscorlib::System::IDisposable
				{
				public:
					RC2(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::Cryptography::SymmetricAlgorithm(nativeTypeInfo)
					, mscorlib::System::IDisposable(NULL)
					{
					};
				
					RC2(MonoObject *nativeObject)
					: mscorlib::System::Security::Cryptography::SymmetricAlgorithm(nativeObject)
					, mscorlib::System::IDisposable(nativeObject)
					{
					};
				
					~RC2()
					{
					};
				

					RC2 & operator=(RC2 &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(RC2 &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					static mscorlib::System::Security::Cryptography::RC2  Create();
					static mscorlib::System::Security::Cryptography::RC2  Create(mscorlib::System::String AlgName);
					static mscorlib::System::Security::Cryptography::RC2  Create(const char *AlgName);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_EffectiveKeySize, put=set_EffectiveKeySize)) mscorlib::System::Int32  EffectiveKeySize;
					__declspec(property(get=get_KeySize, put=set_KeySize)) mscorlib::System::Int32  KeySize;
					__declspec(property(get=get_BlockSize, put=set_BlockSize)) mscorlib::System::Int32  BlockSize;
					__declspec(property(get=get_FeedbackSize, put=set_FeedbackSize)) mscorlib::System::Int32  FeedbackSize;
					__declspec(property(get=get_IV, put=set_IV)) std::vector<mscorlib::System::Byte*>  IV;
					__declspec(property(get=get_Key, put=set_Key)) std::vector<mscorlib::System::Byte*>  Key;
					__declspec(property(get=get_LegalBlockSizes)) std::vector<mscorlib::System::Security::Cryptography::KeySizes*>  LegalBlockSizes;
					__declspec(property(get=get_LegalKeySizes)) std::vector<mscorlib::System::Security::Cryptography::KeySizes*>  LegalKeySizes;
					__declspec(property(get=get_Mode, put=set_Mode)) mscorlib::System::Security::Cryptography::CipherMode::__ENUM__  Mode;
					__declspec(property(get=get_Padding, put=set_Padding)) mscorlib::System::Security::Cryptography::PaddingMode::__ENUM__  Padding;

					//Get Set Properties Methods
					//	Get/Set:EffectiveKeySize
					mscorlib::System::Int32  get_EffectiveKeySize() const;
					void set_EffectiveKeySize(mscorlib::System::Int32  value);

					//	Get/Set:KeySize
					mscorlib::System::Int32  get_KeySize() const;
					void set_KeySize(mscorlib::System::Int32  value);

					//	Get/Set:BlockSize
					mscorlib::System::Int32  get_BlockSize() const;
					void set_BlockSize(mscorlib::System::Int32  value);

					//	Get/Set:FeedbackSize
					mscorlib::System::Int32  get_FeedbackSize() const;
					void set_FeedbackSize(mscorlib::System::Int32  value);

					//	Get/Set:IV
					std::vector<mscorlib::System::Byte*>  get_IV() const;
					void set_IV(std::vector<mscorlib::System::Byte*>  value);

					//	Get/Set:Key
					std::vector<mscorlib::System::Byte*>  get_Key() const;
					void set_Key(std::vector<mscorlib::System::Byte*>  value);

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
