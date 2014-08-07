#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_MACTRIPLEDES_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_MACTRIPLEDES_H

#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_KeyedHashAlgorithm.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_IDisposable.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_ICryptoTransform.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_PaddingMode.h>
#include <mscorlib/System/mscorlib_System_Object.h>

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

				class MACTripleDES
					: public mscorlib::System::Security::Cryptography::KeyedHashAlgorithm
					, public virtual mscorlib::System::IDisposable
					, public virtual mscorlib::System::Security::Cryptography::ICryptoTransform
				{
				public:
					MACTripleDES()
					: mscorlib::System::Security::Cryptography::KeyedHashAlgorithm(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.MACTripleDES"))
					, mscorlib::System::IDisposable(NULL)
					, mscorlib::System::Security::Cryptography::ICryptoTransform(NULL)
					{
						__native_object__ = Global::New("mscorlib", "System.Security.Cryptography", "MACTripleDES");
					};
				
					MACTripleDES(std::vector<mscorlib::System::Byte*> rgbKey)
					: mscorlib::System::Security::Cryptography::KeyedHashAlgorithm(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.MACTripleDES"))
					, mscorlib::System::IDisposable(NULL)
					, mscorlib::System::Security::Cryptography::ICryptoTransform(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(rgbKey, "mscorlib", "System", "Byte");
						__native_object__ = Global::New("mscorlib", "System.Security.Cryptography", "MACTripleDES", 1, __parameter_types__, __parameters__);
					};
				
					MACTripleDES(mscorlib::System::String strTripleDES, std::vector<mscorlib::System::Byte*> rgbKey)
					: mscorlib::System::Security::Cryptography::KeyedHashAlgorithm(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.MACTripleDES"))
					, mscorlib::System::IDisposable(NULL)
					, mscorlib::System::Security::Cryptography::ICryptoTransform(NULL)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
						__parameters__[0] = (MonoObject*)strTripleDES;
						__parameters__[1] = Global::FromArray<mscorlib::System::Byte*>(rgbKey, "mscorlib", "System", "Byte");
						__native_object__ = Global::New("mscorlib", "System.Security.Cryptography", "MACTripleDES", 2, __parameter_types__, __parameters__);
					};
				
					MACTripleDES(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::Cryptography::KeyedHashAlgorithm(nativeTypeInfo)
					, mscorlib::System::IDisposable(NULL)
					, mscorlib::System::Security::Cryptography::ICryptoTransform(NULL)
					{
					};
				
					MACTripleDES(MonoObject *nativeObject)
					: mscorlib::System::Security::Cryptography::KeyedHashAlgorithm(nativeObject)
					, mscorlib::System::IDisposable(nativeObject)
					, mscorlib::System::Security::Cryptography::ICryptoTransform(nativeObject)
					{
					};
				
					~MACTripleDES()
					{
					};
				

					MACTripleDES & operator=(MACTripleDES &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(MACTripleDES &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual void  Initialize() override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Padding, put=set_Padding)) mscorlib::System::Security::Cryptography::PaddingMode::__ENUM__  Padding;
					__declspec(property(get=get_Key, put=set_Key)) std::vector<mscorlib::System::Byte*>  Key;
					__declspec(property(get=get_CanTransformMultipleBlocks)) mscorlib::System::Boolean  CanTransformMultipleBlocks;
					__declspec(property(get=get_CanReuseTransform)) mscorlib::System::Boolean  CanReuseTransform;
					__declspec(property(get=get_Hash)) std::vector<mscorlib::System::Byte*>  Hash;
					__declspec(property(get=get_HashSize)) mscorlib::System::Int32  HashSize;
					__declspec(property(get=get_InputBlockSize)) mscorlib::System::Int32  InputBlockSize;
					__declspec(property(get=get_OutputBlockSize)) mscorlib::System::Int32  OutputBlockSize;

					//Get Set Properties Methods
					//	Get/Set:Padding
					mscorlib::System::Security::Cryptography::PaddingMode::__ENUM__  get_Padding() const;
					void set_Padding(mscorlib::System::Security::Cryptography::PaddingMode::__ENUM__  value);

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
