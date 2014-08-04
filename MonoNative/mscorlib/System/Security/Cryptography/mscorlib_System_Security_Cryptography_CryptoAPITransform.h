#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOAPITRANSFORM_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOAPITRANSFORM_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_ICryptoTransform.h>
#include <mscorlib/System/mscorlib_System_IDisposable.h>

namespace mscorlib
{
	namespace System
	{

		class IntPtr;
		class Byte;
		class Type;
		class String;
		

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

				class CryptoAPITransform
					: public mscorlib::System::Object
					, public virtual mscorlib::System::Security::Cryptography::ICryptoTransform
					, public virtual mscorlib::System::IDisposable
				{
				public:
					CryptoAPITransform(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					, mscorlib::System::Security::Cryptography::ICryptoTransform(NULL)
					, mscorlib::System::IDisposable(NULL)
					{
					};
				
					CryptoAPITransform(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					, mscorlib::System::Security::Cryptography::ICryptoTransform(nativeObject)
					, mscorlib::System::IDisposable(nativeObject)
					{
					};
				
					~CryptoAPITransform()
					{
					};
				

					CryptoAPITransform & operator=(CryptoAPITransform &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual void  Dispose();
					void  Clear();
					virtual mscorlib::System::Int32  TransformBlock(std::vector<mscorlib::System::Byte*> inputBuffer, mscorlib::System::Int32 inputOffset, mscorlib::System::Int32 inputCount, std::vector<mscorlib::System::Byte*> outputBuffer, mscorlib::System::Int32 outputOffset);
					virtual std::vector<mscorlib::System::Byte*>  TransformFinalBlock(std::vector<mscorlib::System::Byte*> inputBuffer, mscorlib::System::Int32 inputOffset, mscorlib::System::Int32 inputCount);
					void  Reset();
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_CanReuseTransform)) mscorlib::System::Boolean  CanReuseTransform;
					__declspec(property(get=get_CanTransformMultipleBlocks)) mscorlib::System::Boolean  CanTransformMultipleBlocks;
					__declspec(property(get=get_InputBlockSize)) mscorlib::System::Int32  InputBlockSize;
					__declspec(property(get=get_KeyHandle)) mscorlib::System::IntPtr  KeyHandle;
					__declspec(property(get=get_OutputBlockSize)) mscorlib::System::Int32  OutputBlockSize;

					//Get Set Properties Methods
					//	Get:CanReuseTransform
					mscorlib::System::Boolean  get_CanReuseTransform();

					//	Get:CanTransformMultipleBlocks
					mscorlib::System::Boolean  get_CanTransformMultipleBlocks();

					//	Get:InputBlockSize
					mscorlib::System::Int32  get_InputBlockSize();

					//	Get:KeyHandle
					mscorlib::System::IntPtr  get_KeyHandle();

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
