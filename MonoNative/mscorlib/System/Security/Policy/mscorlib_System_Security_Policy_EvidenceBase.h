#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_POLICY_EVIDENCEBASE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_POLICY_EVIDENCEBASE_H

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
			namespace Policy
			{

				class EvidenceBase
					: public mscorlib::System::Object
				{
				public:
					EvidenceBase(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					EvidenceBase(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~EvidenceBase()
					{
					};
				

					EvidenceBase & operator=(EvidenceBase &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(EvidenceBase &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Security::Policy::EvidenceBase  Clone();
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
