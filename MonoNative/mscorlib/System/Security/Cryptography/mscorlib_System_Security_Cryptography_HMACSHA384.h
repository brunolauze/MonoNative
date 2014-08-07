#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA384_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA384_H

#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_HMAC.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/mscorlib_System_IDisposable.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_ICryptoTransform.h>
#include <mscorlib/System/mscorlib_System_Object.h>

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

				class HMACSHA384
					: public mscorlib::System::Security::Cryptography::HMAC
					, public virtual mscorlib::System::IDisposable
					, public virtual mscorlib::System::Security::Cryptography::ICryptoTransform
				{
				public:
					HMACSHA384()
					: mscorlib::System::Security::Cryptography::HMAC(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.HMACSHA384"))
					, mscorlib::System::IDisposable(NULL)
					, mscorlib::System::Security::Cryptography::ICryptoTransform(NULL)
					{
						__native_object__ = Global::New("mscorlib", "System.Security.Cryptography", "HMACSHA384");
					};
				
					HMACSHA384(std::vector<mscorlib::System::Byte*> key)
					: mscorlib::System::Security::Cryptography::HMAC(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.HMACSHA384"))
					, mscorlib::System::IDisposable(NULL)
					, mscorlib::System::Security::Cryptography::ICryptoTransform(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(key, "mscorlib", "System", "Byte");
						__native_object__ = Global::New("mscorlib", "System.Security.Cryptography", "HMACSHA384", 1, __parameter_types__, __parameters__);
					};
				
					HMACSHA384(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::Cryptography::HMAC(nativeTypeInfo)
					, mscorlib::System::IDisposable(NULL)
					, mscorlib::System::Security::Cryptography::ICryptoTransform(NULL)
					{
					};
				
					HMACSHA384(MonoObject *nativeObject)
					: mscorlib::System::Security::Cryptography::HMAC(nativeObject)
					, mscorlib::System::IDisposable(nativeObject)
					, mscorlib::System::Security::Cryptography::ICryptoTransform(nativeObject)
					{
					};
				
					~HMACSHA384()
					{
					};
				

					HMACSHA384 & operator=(HMACSHA384 &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(HMACSHA384 &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_ProduceLegacyHmacValues, put=set_ProduceLegacyHmacValues)) mscorlib::System::Boolean  ProduceLegacyHmacValues;
					__declspec(property(get=get_HashName, put=set_HashName)) mscorlib::System::String  HashName;
					__declspec(property(get=get_Key, put=set_Key)) std::vector<mscorlib::System::Byte*>  Key;
					__declspec(property(get=get_CanTransformMultipleBlocks)) mscorlib::System::Boolean  CanTransformMultipleBlocks;
					__declspec(property(get=get_CanReuseTransform)) mscorlib::System::Boolean  CanReuseTransform;
					__declspec(property(get=get_Hash)) std::vector<mscorlib::System::Byte*>  Hash;
					__declspec(property(get=get_HashSize)) mscorlib::System::Int32  HashSize;
					__declspec(property(get=get_InputBlockSize)) mscorlib::System::Int32  InputBlockSize;
					__declspec(property(get=get_OutputBlockSize)) mscorlib::System::Int32  OutputBlockSize;

					//Get Set Properties Methods
					//	Get/Set:ProduceLegacyHmacValues
					mscorlib::System::Boolean  get_ProduceLegacyHmacValues() const;
					void set_ProduceLegacyHmacValues(mscorlib::System::Boolean  value);

					//	Get/Set:HashName
					mscorlib::System::String  get_HashName() const;
					void set_HashName(mscorlib::System::String  value);

					//	Get/Set:Key
					std::vector<mscorlib::System::Byte*>  get_Key() const;
					void set_Key(std::vector<mscorlib::System::Byte*>  value);

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
