#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_IntPtr.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Security/mscorlib_System_Security_SecureString.h>
#include <mscorlib/System/Security/Cryptography/X509Certificates/mscorlib_System_Security_Cryptography_X509Certificates_X509KeyStorageFlags.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_SerializationInfo.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_StreamingContext.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_IDeserializationCallback.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ISerializable.h>
#include <mscorlib/System/Security/Cryptography/X509Certificates/mscorlib_System_Security_Cryptography_X509Certificates_X509ContentType.h>

namespace mscorlib
{
	namespace System
	{

		class Byte;
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
				namespace X509Certificates
				{

					class X509Certificate
						: public mscorlib::System::Object
						, public virtual mscorlib::System::Runtime::Serialization::IDeserializationCallback
						, public virtual mscorlib::System::Runtime::Serialization::ISerializable
					{
					public:
						X509Certificate(std::vector<mscorlib::System::Byte*> data)
						: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.X509Certificates.X509Certificate"))
						, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
						, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
						{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
							__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(data, "mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089", "System", "Byte");
							__native_object__ = Global::New("mscorlib", "System.Security.Cryptography.X509Certificates", "X509Certificate", 1, __parameter_types__, __parameters__);
						};
					
						X509Certificate(mscorlib::System::IntPtr handle)
						: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.X509Certificates.X509Certificate"))
						, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
						, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
						{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType("mscorlib", "System", "IntPtr");
							__parameters__[0] = (MonoObject*)handle;
							__native_object__ = Global::New("mscorlib", "System.Security.Cryptography.X509Certificates", "X509Certificate", 1, __parameter_types__, __parameters__);
						};
					
						X509Certificate(mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate &cert)
						: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.X509Certificates.X509Certificate"))
						, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
						, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
						{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Cryptography.X509Certificates", "X509Certificate");
							__parameters__[0] = (MonoObject*)cert;
							__native_object__ = Global::New("mscorlib", "System.Security.Cryptography.X509Certificates", "X509Certificate", 1, __parameter_types__, __parameters__);
						};
					
						X509Certificate()
						: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.X509Certificates.X509Certificate"))
						, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
						, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
						{
							__native_object__ = Global::New("mscorlib", "System.Security.Cryptography.X509Certificates", "X509Certificate");
						};
					
						X509Certificate(std::vector<mscorlib::System::Byte*> rawData, mscorlib::System::String password)
						: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.X509Certificates.X509Certificate"))
						, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
						, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
						{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
							__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
							__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(rawData, "mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089", "System", "Byte");
							__parameters__[1] = (MonoObject*)password;
							__native_object__ = Global::New("mscorlib", "System.Security.Cryptography.X509Certificates", "X509Certificate", 2, __parameter_types__, __parameters__);
						};
					
						X509Certificate(std::vector<mscorlib::System::Byte*> rawData, mscorlib::System::Security::SecureString password)
						: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.X509Certificates.X509Certificate"))
						, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
						, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
						{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
							__parameter_types__[1] = Global::GetType("mscorlib", "System.Security", "SecureString");
							__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(rawData, "mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089", "System", "Byte");
							__parameters__[1] = (MonoObject*)password;
							__native_object__ = Global::New("mscorlib", "System.Security.Cryptography.X509Certificates", "X509Certificate", 2, __parameter_types__, __parameters__);
						};
					
						X509Certificate(std::vector<mscorlib::System::Byte*> rawData, mscorlib::System::String password, mscorlib::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags::__ENUM__ keyStorageFlags)
						: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.X509Certificates.X509Certificate"))
						, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
						, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
						{
							MonoType *__parameter_types__[3];
							void *__parameters__[3];
							__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
							__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
							__parameter_types__[2] = Global::GetType("mscorlib", "System.Security.Cryptography.X509Certificates", "X509KeyStorageFlags");
							__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(rawData, "mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089", "System", "Byte");
							__parameters__[1] = (MonoObject*)password;
							mscorlib::System::Int32 __param_keyStorageFlags__ = keyStorageFlags;
							__parameters__[2] = &__param_keyStorageFlags__;
							__native_object__ = Global::New("mscorlib", "System.Security.Cryptography.X509Certificates", "X509Certificate", 3, __parameter_types__, __parameters__);
						};
					
						X509Certificate(std::vector<mscorlib::System::Byte*> rawData, mscorlib::System::Security::SecureString password, mscorlib::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags::__ENUM__ keyStorageFlags)
						: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.X509Certificates.X509Certificate"))
						, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
						, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
						{
							MonoType *__parameter_types__[3];
							void *__parameters__[3];
							__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
							__parameter_types__[1] = Global::GetType("mscorlib", "System.Security", "SecureString");
							__parameter_types__[2] = Global::GetType("mscorlib", "System.Security.Cryptography.X509Certificates", "X509KeyStorageFlags");
							__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(rawData, "mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089", "System", "Byte");
							__parameters__[1] = (MonoObject*)password;
							mscorlib::System::Int32 __param_keyStorageFlags__ = keyStorageFlags;
							__parameters__[2] = &__param_keyStorageFlags__;
							__native_object__ = Global::New("mscorlib", "System.Security.Cryptography.X509Certificates", "X509Certificate", 3, __parameter_types__, __parameters__);
						};
					
						X509Certificate(mscorlib::System::String fileName)
						: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.X509Certificates.X509Certificate"))
						, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
						, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
						{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
							__parameters__[0] = (MonoObject*)fileName;
							__native_object__ = Global::New("mscorlib", "System.Security.Cryptography.X509Certificates", "X509Certificate", 1, __parameter_types__, __parameters__);
						};
					
						X509Certificate(mscorlib::System::String fileName, mscorlib::System::String password)
						: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.X509Certificates.X509Certificate"))
						, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
						, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
						{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
							__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
							__parameters__[0] = (MonoObject*)fileName;
							__parameters__[1] = (MonoObject*)password;
							__native_object__ = Global::New("mscorlib", "System.Security.Cryptography.X509Certificates", "X509Certificate", 2, __parameter_types__, __parameters__);
						};
					
						X509Certificate(mscorlib::System::String fileName, mscorlib::System::Security::SecureString password)
						: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.X509Certificates.X509Certificate"))
						, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
						, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
						{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
							__parameter_types__[1] = Global::GetType("mscorlib", "System.Security", "SecureString");
							__parameters__[0] = (MonoObject*)fileName;
							__parameters__[1] = (MonoObject*)password;
							__native_object__ = Global::New("mscorlib", "System.Security.Cryptography.X509Certificates", "X509Certificate", 2, __parameter_types__, __parameters__);
						};
					
						X509Certificate(mscorlib::System::String fileName, mscorlib::System::String password, mscorlib::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags::__ENUM__ keyStorageFlags)
						: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.X509Certificates.X509Certificate"))
						, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
						, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
						{
							MonoType *__parameter_types__[3];
							void *__parameters__[3];
							__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
							__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
							__parameter_types__[2] = Global::GetType("mscorlib", "System.Security.Cryptography.X509Certificates", "X509KeyStorageFlags");
							__parameters__[0] = (MonoObject*)fileName;
							__parameters__[1] = (MonoObject*)password;
							mscorlib::System::Int32 __param_keyStorageFlags__ = keyStorageFlags;
							__parameters__[2] = &__param_keyStorageFlags__;
							__native_object__ = Global::New("mscorlib", "System.Security.Cryptography.X509Certificates", "X509Certificate", 3, __parameter_types__, __parameters__);
						};
					
						X509Certificate(mscorlib::System::String fileName, mscorlib::System::Security::SecureString password, mscorlib::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags::__ENUM__ keyStorageFlags)
						: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.X509Certificates.X509Certificate"))
						, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
						, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
						{
							MonoType *__parameter_types__[3];
							void *__parameters__[3];
							__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
							__parameter_types__[1] = Global::GetType("mscorlib", "System.Security", "SecureString");
							__parameter_types__[2] = Global::GetType("mscorlib", "System.Security.Cryptography.X509Certificates", "X509KeyStorageFlags");
							__parameters__[0] = (MonoObject*)fileName;
							__parameters__[1] = (MonoObject*)password;
							mscorlib::System::Int32 __param_keyStorageFlags__ = keyStorageFlags;
							__parameters__[2] = &__param_keyStorageFlags__;
							__native_object__ = Global::New("mscorlib", "System.Security.Cryptography.X509Certificates", "X509Certificate", 3, __parameter_types__, __parameters__);
						};
					
						X509Certificate(mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context)
						: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.X509Certificates.X509Certificate"))
						, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
						, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
						{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType("mscorlib", "System.Runtime.Serialization", "SerializationInfo");
							__parameter_types__[1] = Global::GetType("mscorlib", "System.Runtime.Serialization", "StreamingContext");
							__parameters__[0] = (MonoObject*)info;
							__parameters__[1] = (MonoObject*)context;
							__native_object__ = Global::New("mscorlib", "System.Security.Cryptography.X509Certificates", "X509Certificate", 2, __parameter_types__, __parameters__);
						};
					
						X509Certificate(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::Object(nativeTypeInfo)
						, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
						, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
						{
						};
					
						X509Certificate(MonoObject *nativeObject)
						: mscorlib::System::Object(nativeObject)
						, mscorlib::System::Runtime::Serialization::IDeserializationCallback(nativeObject)
						, mscorlib::System::Runtime::Serialization::ISerializable(nativeObject)
						{
						};
					
						~X509Certificate()
						{
						};
					

						X509Certificate & operator=(X509Certificate &value) { __native_object__ = value.GetNativeObject(); return value; };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						static mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate  CreateFromCertFile(mscorlib::System::String filename);
						static mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate  CreateFromCertFile(const char *filename);
						static mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate  CreateFromSignedFile(mscorlib::System::String filename);
						static mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate  CreateFromSignedFile(const char *filename);
						virtual mscorlib::System::Boolean  Equals(mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate other);
						virtual std::vector<mscorlib::System::Byte*>  GetCertHash();
						virtual mscorlib::System::String  GetCertHashString();
						virtual mscorlib::System::String  GetEffectiveDateString();
						virtual mscorlib::System::String  GetExpirationDateString();
						virtual mscorlib::System::String  GetFormat();
						virtual mscorlib::System::Int32  GetHashCode() override;
						virtual mscorlib::System::String  GetIssuerName();
						virtual mscorlib::System::String  GetKeyAlgorithm();
						virtual std::vector<mscorlib::System::Byte*>  GetKeyAlgorithmParameters();
						virtual mscorlib::System::String  GetKeyAlgorithmParametersString();
						virtual mscorlib::System::String  GetName();
						virtual std::vector<mscorlib::System::Byte*>  GetPublicKey();
						virtual mscorlib::System::String  GetPublicKeyString();
						virtual std::vector<mscorlib::System::Byte*>  GetRawCertData();
						virtual mscorlib::System::String  GetRawCertDataString();
						virtual std::vector<mscorlib::System::Byte*>  GetSerialNumber();
						virtual mscorlib::System::String  GetSerialNumberString();
						virtual mscorlib::System::String  ToString() override;
						virtual mscorlib::System::String  ToString(mscorlib::System::Boolean fVerbose);
						virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object obj) override;
						virtual std::vector<mscorlib::System::Byte*>  Export(mscorlib::System::Security::Cryptography::X509Certificates::X509ContentType::__ENUM__ contentType);
						virtual std::vector<mscorlib::System::Byte*>  Export(mscorlib::System::Security::Cryptography::X509Certificates::X509ContentType::__ENUM__ contentType, mscorlib::System::String password);
						virtual std::vector<mscorlib::System::Byte*>  Export(mscorlib::System::Security::Cryptography::X509Certificates::X509ContentType::__ENUM__ contentType, const char *password);
						virtual std::vector<mscorlib::System::Byte*>  Export(mscorlib::System::Security::Cryptography::X509Certificates::X509ContentType::__ENUM__ contentType, mscorlib::System::Security::SecureString password);
						virtual void  Import(std::vector<mscorlib::System::Byte*> rawData);
						virtual void  Import(std::vector<mscorlib::System::Byte*> rawData, mscorlib::System::String password, mscorlib::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags::__ENUM__ keyStorageFlags);
						virtual void  Import(std::vector<mscorlib::System::Byte*> rawData, const char *password, mscorlib::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags::__ENUM__ keyStorageFlags);
						virtual void  Import(std::vector<mscorlib::System::Byte*> rawData, mscorlib::System::Security::SecureString password, mscorlib::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags::__ENUM__ keyStorageFlags);
						virtual void  Import(mscorlib::System::String fileName);
						virtual void  Import(const char *fileName);
						virtual void  Import(mscorlib::System::String fileName, mscorlib::System::String password, mscorlib::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags::__ENUM__ keyStorageFlags);
						virtual void  Import(const char *fileName, const char *password, mscorlib::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags::__ENUM__ keyStorageFlags);
						virtual void  Import(mscorlib::System::String fileName, mscorlib::System::Security::SecureString password, mscorlib::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags::__ENUM__ keyStorageFlags);
						virtual void  Import(const char *fileName, mscorlib::System::Security::SecureString password, mscorlib::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags::__ENUM__ keyStorageFlags);
						virtual void  Reset();
						virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


						//Public Properties
						__declspec(property(get=get_Issuer)) mscorlib::System::String  Issuer;
						__declspec(property(get=get_Subject)) mscorlib::System::String  Subject;
						__declspec(property(get=get_Handle)) mscorlib::System::IntPtr  Handle;

						//Get Set Properties Methods
						//	Get:Issuer
						mscorlib::System::String  get_Issuer() const;

						//	Get:Subject
						mscorlib::System::String  get_Subject() const;

						//	Get:Handle
						mscorlib::System::IntPtr  get_Handle() const;

					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
