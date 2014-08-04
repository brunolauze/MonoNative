#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_LOCKCOOKIE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_LOCKCOOKIE_H

#include <mscorlib/System/mscorlib_System_ValueType.h>
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
		namespace Threading
		{

			class LockCookie
				: public mscorlib::System::ValueType
			{
			public:
				LockCookie(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::ValueType(nativeTypeInfo)
				{
				};
			
				LockCookie(MonoObject *nativeObject)
				: mscorlib::System::ValueType(nativeObject)
				{
				};
			
				~LockCookie()
				{
				};
			

				LockCookie & operator=(LockCookie &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual mscorlib::System::Int32  GetHashCode() override;
				mscorlib::System::Boolean  Equals(mscorlib::System::Threading::LockCookie obj);
				virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object obj) override;
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
