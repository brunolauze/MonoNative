#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256MANAGED_H

#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_SHA256.h>
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

				class SHA256Managed
					: public mscorlib::System::Security::Cryptography::SHA256
					, public virtual mscorlib::System::Security::Cryptography::ICryptoTransform
					, public virtual mscorlib::System::IDisposable
				{
				public:
					SHA256Managed()
					: mscorlib::System::Security::Cryptography::SHA256(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.SHA256Managed"))
					, mscorlib::System::Security::Cryptography::ICryptoTransform(NULL)
					, mscorlib::System::IDisposable(NULL)
					{
						__native_object__ = Global::New("mscorlib", "System.Security.Cryptography", "SHA256Managed");
					};
				
					SHA256Managed(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::Cryptography::SHA256(nativeTypeInfo)
					, mscorlib::System::Security::Cryptography::ICryptoTransform(NULL)
					, mscorlib::System::IDisposable(NULL)
					{
					};
				
					SHA256Managed(MonoObject *nativeObject)
					: mscorlib::System::Security::Cryptography::SHA256(nativeObject)
					, mscorlib::System::Security::Cryptography::ICryptoTransform(nativeObject)
					, mscorlib::System::IDisposable(nativeObject)
					{
					};
				
					~SHA256Managed()
					{
					};
				

					SHA256Managed & operator=(SHA256Managed &value) { __native_object__ = value.GetNativeObject(); return value; };
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
