#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_SECURITYSTATE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_SECURITYSTATE_H

#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

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

			class SecurityState
				: public mscorlib::System::Object
			{
			public:
				SecurityState(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				{
				};
			
				SecurityState(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				{
				};
			
				~SecurityState()
				{
				};
			

				SecurityState & operator=(SecurityState &value) { __native_object__ = value.GetNativeObject(); return value; };
				bool operator==(SecurityState &value) { return mscorlib::System::Object::Equals(value); };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual void  EnsureState();
				mscorlib::System::Boolean  IsStateAvailable();
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
