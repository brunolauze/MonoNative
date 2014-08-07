#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1_H

#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_HashAlgorithm.h>
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

				class SHA1
					: public mscorlib::System::Security::Cryptography::HashAlgorithm
					, public virtual mscorlib::System::IDisposable
					, public virtual mscorlib::System::Security::Cryptography::ICryptoTransform
				{
				public:
					SHA1(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::Cryptography::HashAlgorithm(nativeTypeInfo)
					, mscorlib::System::IDisposable(NULL)
					, mscorlib::System::Security::Cryptography::ICryptoTransform(NULL)
					{
					};
				
					SHA1(MonoObject *nativeObject)
					: mscorlib::System::Security::Cryptography::HashAlgorithm(nativeObject)
					, mscorlib::System::IDisposable(nativeObject)
					, mscorlib::System::Security::Cryptography::ICryptoTransform(nativeObject)
					{
					};
				
					~SHA1()
					{
					};
				

					SHA1 & operator=(SHA1 &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(SHA1 &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					static mscorlib::System::Security::Cryptography::SHA1  Create();
					static mscorlib::System::Security::Cryptography::SHA1  Create(mscorlib::System::String hashName);
					static mscorlib::System::Security::Cryptography::SHA1  Create(const char *hashName);
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
