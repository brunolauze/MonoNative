#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_POLICY_APPLICATIONDIRECTORY_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_POLICY_APPLICATIONDIRECTORY_H

#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_EvidenceBase.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Object.h>

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
			namespace Policy
			{

				class ApplicationDirectory
					: public mscorlib::System::Security::Policy::EvidenceBase
				{
				public:
					ApplicationDirectory(mscorlib::System::String name)
					: mscorlib::System::Security::Policy::EvidenceBase(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Policy.ApplicationDirectory"))
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = (MonoObject*)name;
						__native_object__ = Global::New("mscorlib", "System.Security.Policy", "ApplicationDirectory", 1, __parameter_types__, __parameters__);
					};
				
					ApplicationDirectory(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::Policy::EvidenceBase(nativeTypeInfo)
					{
					};
				
					ApplicationDirectory(MonoObject *nativeObject)
					: mscorlib::System::Security::Policy::EvidenceBase(nativeObject)
					{
					};
				
					~ApplicationDirectory()
					{
					};
				

					ApplicationDirectory & operator=(ApplicationDirectory &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					mscorlib::System::Object  Copy();
					virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object o) override;
					virtual mscorlib::System::Int32  GetHashCode() override;
					virtual mscorlib::System::String  ToString() override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Directory)) mscorlib::System::String  Directory;

					//Get Set Properties Methods
					//	Get:Directory
					mscorlib::System::String  get_Directory();

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
