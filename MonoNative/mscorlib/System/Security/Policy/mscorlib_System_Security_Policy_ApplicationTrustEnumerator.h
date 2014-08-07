#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_POLICY_APPLICATIONTRUSTENUMERATOR_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_POLICY_APPLICATIONTRUSTENUMERATOR_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IEnumerator.h>

namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Policy
			{

				class ApplicationTrust;
				

			}
		}
	}
}
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
			namespace Policy
			{

				class ApplicationTrustEnumerator
					: public mscorlib::System::Object
					, public virtual mscorlib::System::Collections::IEnumerator
				{
				public:
					ApplicationTrustEnumerator(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					, mscorlib::System::Collections::IEnumerator(NULL)
					{
					};
				
					ApplicationTrustEnumerator(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					, mscorlib::System::Collections::IEnumerator(nativeObject)
					{
					};
				
					~ApplicationTrustEnumerator()
					{
					};
				

					ApplicationTrustEnumerator & operator=(ApplicationTrustEnumerator &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(ApplicationTrustEnumerator &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Boolean  MoveNext();
					virtual void  Reset();
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Current)) mscorlib::System::Security::Policy::ApplicationTrust  Current;

					//Get Set Properties Methods
					//	Get:Current
					mscorlib::System::Security::Policy::ApplicationTrust  get_Current() const;

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
