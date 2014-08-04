#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256_H

#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_HashAlgorithm.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_ICryptoTransform.h>
#include <mscorlib/System/mscorlib_System_IDisposable.h>
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

				class SHA256
					: public mscorlib::System::Security::Cryptography::HashAlgorithm
					, public virtual mscorlib::System::Security::Cryptography::ICryptoTransform
					, public virtual mscorlib::System::IDisposable
				{
				public:
					SHA256(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::Cryptography::HashAlgorithm(nativeTypeInfo)
					, mscorlib::System::Security::Cryptography::ICryptoTransform(NULL)
					, mscorlib::System::IDisposable(NULL)
					{
					};
				
					SHA256(MonoObject *nativeObject)
					: mscorlib::System::Security::Cryptography::HashAlgorithm(nativeObject)
					, mscorlib::System::Security::Cryptography::ICryptoTransform(nativeObject)
					, mscorlib::System::IDisposable(nativeObject)
					{
					};
				
					~SHA256()
					{
					};
				

					SHA256 & operator=(SHA256 &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					static mscorlib::System::Security::Cryptography::SHA256  Create();
					static mscorlib::System::Security::Cryptography::SHA256  Create(mscorlib::System::String hashName);
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
					mscorlib::System::Boolean  get_CanTransformMultipleBlocks();

					//	Get:CanReuseTransform
					mscorlib::System::Boolean  get_CanReuseTransform();

					//	Get:Hash
					std::vector<mscorlib::System::Byte*>  get_Hash();

					//	Get:HashSize
					mscorlib::System::Int32  get_HashSize();

					//	Get:InputBlockSize
					mscorlib::System::Int32  get_InputBlockSize();

					//	Get:OutputBlockSize
					mscorlib::System::Int32  get_OutputBlockSize();

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
