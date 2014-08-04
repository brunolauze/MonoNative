#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_RANDOMNUMBERGENERATOR_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_RANDOMNUMBERGENERATOR_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_IDisposable.h>

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
		namespace Security
		{
			namespace Cryptography
			{

				class RandomNumberGenerator
					: public mscorlib::System::Object
					, public virtual mscorlib::System::IDisposable
				{
				public:
					RandomNumberGenerator(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					, mscorlib::System::IDisposable(NULL)
					{
					};
				
					RandomNumberGenerator(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					, mscorlib::System::IDisposable(nativeObject)
					{
					};
				
					~RandomNumberGenerator()
					{
					};
				

					RandomNumberGenerator & operator=(RandomNumberGenerator &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					static mscorlib::System::Security::Cryptography::RandomNumberGenerator  Create();
					static mscorlib::System::Security::Cryptography::RandomNumberGenerator  Create(mscorlib::System::String rngName);
					virtual void  GetBytes(std::vector<mscorlib::System::Byte*> data);
					virtual void  GetNonZeroBytes(std::vector<mscorlib::System::Byte*> data);
					virtual void  Dispose();
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
