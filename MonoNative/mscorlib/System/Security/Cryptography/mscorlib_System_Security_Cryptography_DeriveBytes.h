#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_DERIVEBYTES_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_DERIVEBYTES_H

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

				class DeriveBytes
					: public mscorlib::System::Object
					, public virtual mscorlib::System::IDisposable
				{
				public:
					DeriveBytes(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					, mscorlib::System::IDisposable(NULL)
					{
					};
				
					DeriveBytes(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					, mscorlib::System::IDisposable(nativeObject)
					{
					};
				
					~DeriveBytes()
					{
					};
				

					DeriveBytes & operator=(DeriveBytes &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual std::vector<mscorlib::System::Byte*>  GetBytes(mscorlib::System::Int32 cb);
					virtual void  Reset();
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
