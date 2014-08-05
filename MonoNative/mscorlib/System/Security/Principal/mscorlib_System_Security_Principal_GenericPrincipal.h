#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PRINCIPAL_GENERICPRINCIPAL_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PRINCIPAL_GENERICPRINCIPAL_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_IIdentity.h>
#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_IPrincipal.h>

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

				class GenericPrincipal
					: public mscorlib::System::Object
					, public virtual mscorlib::System::Security::Principal::IPrincipal
				{
				public:
					GenericPrincipal(mscorlib::System::Security::Principal::IIdentity identity, std::vector<mscorlib::System::String*> roles)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Principal.GenericPrincipal"))
					, mscorlib::System::Security::Principal::IPrincipal(NULL)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Principal", "IIdentity");
						__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType("mscorlib", "System", "String"))->eklass);
						__parameters__[0] = (MonoObject*)identity;
						__parameters__[1] = Global::FromArray<mscorlib::System::String*>(roles, "mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089", "System", "String");
						__native_object__ = Global::New("mscorlib", "System.Security.Principal", "GenericPrincipal", 2, __parameter_types__, __parameters__);
					};
				
					GenericPrincipal(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					, mscorlib::System::Security::Principal::IPrincipal(NULL)
					{
					};
				
					GenericPrincipal(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					, mscorlib::System::Security::Principal::IPrincipal(nativeObject)
					{
					};
				
					~GenericPrincipal()
					{
					};
				

					GenericPrincipal & operator=(GenericPrincipal &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Boolean  IsInRole(mscorlib::System::String role);
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
