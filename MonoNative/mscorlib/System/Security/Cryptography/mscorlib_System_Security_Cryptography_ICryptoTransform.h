#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_ICRYPTOTRANSFORM_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_ICRYPTOTRANSFORM_H

#include <mscorlib/System/mscorlib_System_IDisposable.h>

namespace mscorlib
{
	namespace System
	{

		class Byte;
		

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

				class ICryptoTransform
					: public virtual mscorlib::System::IDisposable
				{
				public:
					ICryptoTransform(MonoObject *nativeObject)
					: mscorlib::System::IDisposable(nativeObject)
					{
					};
				
					~ICryptoTransform()
					{
					};
				

					__declspec(property(get=get___mscorlib_System_Security_Cryptography_ICryptoTransform, put=set___mscorlib_System_Security_Cryptography_ICryptoTransform)) MonoObject *__mscorlib_System_Security_Cryptography_ICryptoTransform;
					MonoObject* get___mscorlib_System_Security_Cryptography_ICryptoTransform()
					{
						return ICryptoTransform::__mscorlib_System_IDisposable;
					}
					void set___mscorlib_System_Security_Cryptography_ICryptoTransform(MonoObject *value)
					{
						ICryptoTransform::__mscorlib_System_IDisposable = value;
					}
					ICryptoTransform & operator=(ICryptoTransform &value) { __mscorlib_System_Security_Cryptography_ICryptoTransform = value.__mscorlib_System_Security_Cryptography_ICryptoTransform; return value; };
					operator MonoObject*() { return __mscorlib_System_Security_Cryptography_ICryptoTransform; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Security_Cryptography_ICryptoTransform = value; return value; };


					virtual mscorlib::System::Int32  TransformBlock(std::vector<mscorlib::System::Byte*> inputBuffer, mscorlib::System::Int32 inputOffset, mscorlib::System::Int32 inputCount, std::vector<mscorlib::System::Byte*> outputBuffer, mscorlib::System::Int32 outputOffset);
					virtual std::vector<mscorlib::System::Byte*>  TransformFinalBlock(std::vector<mscorlib::System::Byte*> inputBuffer, mscorlib::System::Int32 inputOffset, mscorlib::System::Int32 inputCount);


					//Public Properties
					__declspec(property(get=get_CanReuseTransform)) mscorlib::System::Boolean  CanReuseTransform;
					__declspec(property(get=get_CanTransformMultipleBlocks)) mscorlib::System::Boolean  CanTransformMultipleBlocks;
					__declspec(property(get=get_InputBlockSize)) mscorlib::System::Int32  InputBlockSize;
					__declspec(property(get=get_OutputBlockSize)) mscorlib::System::Int32  OutputBlockSize;

					//Get Set Properties Methods
					//	Get:CanReuseTransform
					mscorlib::System::Boolean  get_CanReuseTransform();

					//	Get:CanTransformMultipleBlocks
					mscorlib::System::Boolean  get_CanTransformMultipleBlocks();

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
