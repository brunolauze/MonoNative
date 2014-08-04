#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA1_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA1_H

#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_HMAC.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_ICryptoTransform.h>
#include <mscorlib/System/mscorlib_System_IDisposable.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class Byte;
		class String;
		class Type;
		

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

				class HMACSHA1
					: public mscorlib::System::Security::Cryptography::HMAC
					, public virtual mscorlib::System::Security::Cryptography::ICryptoTransform
					, public virtual mscorlib::System::IDisposable
				{
				public:
					HMACSHA1()
					: mscorlib::System::Security::Cryptography::HMAC(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.HMACSHA1"))
					, mscorlib::System::Security::Cryptography::ICryptoTransform(NULL)
					, mscorlib::System::IDisposable(NULL)
					{
						__native_object__ = Global::New("mscorlib", "System.Security.Cryptography", "HMACSHA1");
					};
				
					HMACSHA1(std::vector<mscorlib::System::Byte*> key)
					: mscorlib::System::Security::Cryptography::HMAC(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.HMACSHA1"))
					, mscorlib::System::Security::Cryptography::ICryptoTransform(NULL)
					, mscorlib::System::IDisposable(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType("mscorlib", "System", "Byte"))->eklass);
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(key, "mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089", "System", "Byte");
						__native_object__ = Global::New("mscorlib", "System.Security.Cryptography", "HMACSHA1", 1, __parameter_types__, __parameters__);
					};
				
					HMACSHA1(std::vector<mscorlib::System::Byte*> key, mscorlib::System::Boolean useManagedSha1)
					: mscorlib::System::Security::Cryptography::HMAC(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.HMACSHA1"))
					, mscorlib::System::Security::Cryptography::ICryptoTransform(NULL)
					, mscorlib::System::IDisposable(NULL)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType("mscorlib", "System", "Byte"))->eklass);
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "Boolean");
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(key, "mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089", "System", "Byte");
						__parameters__[1] = reinterpret_cast<void*>(useManagedSha1);
						__native_object__ = Global::New("mscorlib", "System.Security.Cryptography", "HMACSHA1", 2, __parameter_types__, __parameters__);
					};
				
					HMACSHA1(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::Cryptography::HMAC(nativeTypeInfo)
					, mscorlib::System::Security::Cryptography::ICryptoTransform(NULL)
					, mscorlib::System::IDisposable(NULL)
					{
					};
				
					HMACSHA1(MonoObject *nativeObject)
					: mscorlib::System::Security::Cryptography::HMAC(nativeObject)
					, mscorlib::System::Security::Cryptography::ICryptoTransform(nativeObject)
					, mscorlib::System::IDisposable(nativeObject)
					{
					};
				
					~HMACSHA1()
					{
					};
				

					HMACSHA1 & operator=(HMACSHA1 &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_HashName, put=set_HashName)) mscorlib::System::String  HashName;
					__declspec(property(get=get_Key, put=set_Key)) std::vector<mscorlib::System::Byte*>  Key;
					__declspec(property(get=get_CanTransformMultipleBlocks)) mscorlib::System::Boolean  CanTransformMultipleBlocks;
					__declspec(property(get=get_CanReuseTransform)) mscorlib::System::Boolean  CanReuseTransform;
					__declspec(property(get=get_Hash)) std::vector<mscorlib::System::Byte*>  Hash;
					__declspec(property(get=get_HashSize)) mscorlib::System::Int32  HashSize;
					__declspec(property(get=get_InputBlockSize)) mscorlib::System::Int32  InputBlockSize;
					__declspec(property(get=get_OutputBlockSize)) mscorlib::System::Int32  OutputBlockSize;

					//Get Set Properties Methods
					//	Get/Set:HashName
					mscorlib::System::String  get_HashName();
					void set_HashName(mscorlib::System::String  value);

					//	Get/Set:Key
					std::vector<mscorlib::System::Byte*>  get_Key();
					void set_Key(std::vector<mscorlib::System::Byte*>  value);

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
