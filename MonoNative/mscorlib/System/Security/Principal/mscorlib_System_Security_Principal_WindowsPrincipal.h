#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PRINCIPAL_WINDOWSPRINCIPAL_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PRINCIPAL_WINDOWSPRINCIPAL_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_WindowsIdentity.h>
#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_IPrincipal.h>
#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_IIdentity.h>
#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_WindowsBuiltInRole.h>

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
		namespace Security
		{
			namespace Principal
			{

				class SecurityIdentifier;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Principal
			{

				class WindowsPrincipal
					: public mscorlib::System::Object
					, public virtual mscorlib::System::Security::Principal::IPrincipal
				{
				public:
					WindowsPrincipal(mscorlib::System::Security::Principal::WindowsIdentity ntIdentity)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Principal.WindowsPrincipal"))
					, mscorlib::System::Security::Principal::IPrincipal(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Principal", "WindowsIdentity");
						__parameters__[0] = (MonoObject*)ntIdentity;
						__native_object__ = Global::New("mscorlib", "System.Security.Principal", "WindowsPrincipal", 1, __parameter_types__, __parameters__);
					};
				
					WindowsPrincipal(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					, mscorlib::System::Security::Principal::IPrincipal(NULL)
					{
					};
				
					WindowsPrincipal(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					, mscorlib::System::Security::Principal::IPrincipal(nativeObject)
					{
					};
				
					~WindowsPrincipal()
					{
					};
				

					WindowsPrincipal & operator=(WindowsPrincipal &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(WindowsPrincipal &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Boolean  IsInRole(mscorlib::System::Int32 rid);
					virtual mscorlib::System::Boolean  IsInRole(mscorlib::System::String role);
					virtual mscorlib::System::Boolean  IsInRole(const char *role);
					virtual mscorlib::System::Boolean  IsInRole(mscorlib::System::Security::Principal::WindowsBuiltInRole::__ENUM__ role);
					virtual mscorlib::System::Boolean  IsInRole(mscorlib::System::Security::Principal::SecurityIdentifier sid);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Identity)) mscorlib::System::Security::Principal::IIdentity  Identity;

					//Get Set Properties Methods
					//	Get:Identity
					mscorlib::System::Security::Principal::IIdentity  get_Identity() const;

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
