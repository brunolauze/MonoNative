#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_SIGNATUREDESCRIPTION_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_SIGNATUREDESCRIPTION_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Security/mscorlib_System_Security_SecurityElement.h>

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
		namespace Security
		{
			namespace Cryptography
			{

				class AsymmetricSignatureDeformatter;
				class AsymmetricAlgorithm;
				class HashAlgorithm;
				class AsymmetricSignatureFormatter;
				

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

				class SignatureDescription
					: public mscorlib::System::Object
				{
				public:
					SignatureDescription()
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.SignatureDescription"))
					{
						__native_object__ = Global::New("mscorlib", "System.Security.Cryptography", "SignatureDescription");
					};
				
					SignatureDescription(mscorlib::System::Security::SecurityElement el)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.SignatureDescription"))
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security", "SecurityElement");
						__parameters__[0] = (MonoObject*)el;
						__native_object__ = Global::New("mscorlib", "System.Security.Cryptography", "SignatureDescription", 1, __parameter_types__, __parameters__);
					};
				
					SignatureDescription(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					SignatureDescription(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~SignatureDescription()
					{
					};
				

					SignatureDescription & operator=(SignatureDescription &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(SignatureDescription &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Security::Cryptography::AsymmetricSignatureDeformatter  CreateDeformatter(mscorlib::System::Security::Cryptography::AsymmetricAlgorithm key);
					virtual mscorlib::System::Security::Cryptography::HashAlgorithm  CreateDigest();
					virtual mscorlib::System::Security::Cryptography::AsymmetricSignatureFormatter  CreateFormatter(mscorlib::System::Security::Cryptography::AsymmetricAlgorithm key);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_DeformatterAlgorithm, put=set_DeformatterAlgorithm)) mscorlib::System::String  DeformatterAlgorithm;
					__declspec(property(get=get_DigestAlgorithm, put=set_DigestAlgorithm)) mscorlib::System::String  DigestAlgorithm;
					__declspec(property(get=get_FormatterAlgorithm, put=set_FormatterAlgorithm)) mscorlib::System::String  FormatterAlgorithm;
					__declspec(property(get=get_KeyAlgorithm, put=set_KeyAlgorithm)) mscorlib::System::String  KeyAlgorithm;

					//Get Set Properties Methods
					//	Get/Set:DeformatterAlgorithm
					mscorlib::System::String  get_DeformatterAlgorithm() const;
					void set_DeformatterAlgorithm(mscorlib::System::String  value);

					//	Get/Set:DigestAlgorithm
					mscorlib::System::String  get_DigestAlgorithm() const;
					void set_DigestAlgorithm(mscorlib::System::String  value);

					//	Get/Set:FormatterAlgorithm
					mscorlib::System::String  get_FormatterAlgorithm() const;
					void set_FormatterAlgorithm(mscorlib::System::String  value);

					//	Get/Set:KeyAlgorithm
					mscorlib::System::String  get_KeyAlgorithm() const;
					void set_KeyAlgorithm(mscorlib::System::String  value);

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
