#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_MD5CRYPTOSERVICEPROVIDER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_MD5CRYPTOSERVICEPROVIDER_H

#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_MD5.h>
#include <mscorlib/System/mscorlib_System_IDisposable.h>
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
		namespace IO
		{

			class Stream;
			

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

				class MD5CryptoServiceProvider
					: public mscorlib::System::Security::Cryptography::MD5
					, public virtual mscorlib::System::IDisposable
					, public virtual mscorlib::System::Security::Cryptography::ICryptoTransform
				{
				public:
					MD5CryptoServiceProvider()
					: mscorlib::System::Security::Cryptography::MD5(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.MD5CryptoServiceProvider"))
					, mscorlib::System::IDisposable(NULL)
					, mscorlib::System::Security::Cryptography::ICryptoTransform(NULL)
					{
						__native_object__ = Global::New("mscorlib", "System.Security.Cryptography", "MD5CryptoServiceProvider");
					};
				
					MD5CryptoServiceProvider(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::Cryptography::MD5(nativeTypeInfo)
					, mscorlib::System::IDisposable(NULL)
					, mscorlib::System::Security::Cryptography::ICryptoTransform(NULL)
					{
					};
				
					MD5CryptoServiceProvider(MonoObject *nativeObject)
					: mscorlib::System::Security::Cryptography::MD5(nativeObject)
					, mscorlib::System::IDisposable(nativeObject)
					, mscorlib::System::Security::Cryptography::ICryptoTransform(nativeObject)
					{
					};
				
					~MD5CryptoServiceProvider()
					{
					};
				

					MD5CryptoServiceProvider & operator=(MD5CryptoServiceProvider &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(MD5CryptoServiceProvider &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual void  Initialize() override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_CanTransformMultipleBlocks)) mscorlib::System::Boolean  CanTransformMultipleBlocks;
					__declspec(property(get=get_CanReuseTransform)) mscorlib::System::Boolean  CanReuseTransform;
					__declspec(property(get=get_Hash)) std::vector<mscorlib::System::Byte*>  Hash;
					__declspec(property(get=get_HashSize)) mscorlib::System::Int32  HashSize;
					__declspec(property(get=get_InputBlockSize)) mscorlib::System::Int32  InputBlockSize;
					__declspec(property(get=get_OutputBlockSize)) mscorlib::System::Int32  OutputBlockSize;

					//Get Set Properties Methods
					//	Get:CanTransformMultipleBlocks
					mscorlib::System::Boolean  get_CanTransformMultipleBlocks() const;

					//	Get:CanReuseTransform
					mscorlib::System::Boolean  get_CanReuseTransform() const;

					//	Get:Hash
					std::vector<mscorlib::System::Byte*>  get_Hash() const;

					//	Get:HashSize
					mscorlib::System::Int32  get_HashSize() const;

					//	Get:InputBlockSize
					mscorlib::System::Int32  get_InputBlockSize() const;

					//	Get:OutputBlockSize
					mscorlib::System::Int32  get_OutputBlockSize() const;

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
