#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_IDisposable.h>

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

				class AsymmetricAlgorithm
					: public mscorlib::System::Object
					, public virtual mscorlib::System::IDisposable
				{
				public:
					AsymmetricAlgorithm(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					, mscorlib::System::IDisposable(NULL)
					{
					};
				
					AsymmetricAlgorithm(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					, mscorlib::System::IDisposable(nativeObject)
					{
					};
				
					~AsymmetricAlgorithm()
					{
					};
				

					AsymmetricAlgorithm & operator=(AsymmetricAlgorithm &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual void  Dispose();
					void  Clear();
					virtual void  FromXmlString(mscorlib::System::String xmlString);
					virtual mscorlib::System::String  ToXmlString(mscorlib::System::Boolean includePrivateParameters);
					static mscorlib::System::Security::Cryptography::AsymmetricAlgorithm  Create();
					static mscorlib::System::Security::Cryptography::AsymmetricAlgorithm  Create(mscorlib::System::String algName);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_KeyExchangeAlgorithm)) mscorlib::System::String  KeyExchangeAlgorithm;
					__declspec(property(get=get_KeySize, put=set_KeySize)) mscorlib::System::Int32  KeySize;
					__declspec(property(get=get_LegalKeySizes)) std::vector<mscorlib::System::Security::Cryptography::KeySizes*>  LegalKeySizes;
					__declspec(property(get=get_SignatureAlgorithm)) mscorlib::System::String  SignatureAlgorithm;

					//Get Set Properties Methods
					//	Get:KeyExchangeAlgorithm
					mscorlib::System::String  get_KeyExchangeAlgorithm() const;

					//	Get/Set:KeySize
					mscorlib::System::Int32  get_KeySize() const;
					void set_KeySize(mscorlib::System::Int32  value);

					//	Get:LegalKeySizes
					std::vector<mscorlib::System::Security::Cryptography::KeySizes*>  get_LegalKeySizes() const;

					//	Get:SignatureAlgorithm
					mscorlib::System::String  get_SignatureAlgorithm() const;

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
