#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PRINCIPAL_GENERICIDENTITY_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PRINCIPAL_GENERICIDENTITY_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_IIdentity.h>

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
			namespace Principal
			{

				class GenericIdentity
					: public mscorlib::System::Object
					, public virtual mscorlib::System::Security::Principal::IIdentity
				{
				public:
					GenericIdentity(mscorlib::System::String name, mscorlib::System::String type)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Principal.GenericIdentity"))
					, mscorlib::System::Security::Principal::IIdentity(NULL)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = (MonoObject*)type;
						__native_object__ = Global::New("mscorlib", "System.Security.Principal", "GenericIdentity", 2, __parameter_types__, __parameters__);
					};
				
					GenericIdentity(mscorlib::System::String name)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Principal.GenericIdentity"))
					, mscorlib::System::Security::Principal::IIdentity(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = (MonoObject*)name;
						__native_object__ = Global::New("mscorlib", "System.Security.Principal", "GenericIdentity", 1, __parameter_types__, __parameters__);
					};
				
					GenericIdentity(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					, mscorlib::System::Security::Principal::IIdentity(NULL)
					{
					};
				
					GenericIdentity(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					, mscorlib::System::Security::Principal::IIdentity(nativeObject)
					{
					};
				
					~GenericIdentity()
					{
					};
				

					GenericIdentity & operator=(GenericIdentity &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_AuthenticationType)) mscorlib::System::String  AuthenticationType;
					__declspec(property(get=get_Name)) mscorlib::System::String  Name;
					__declspec(property(get=get_IsAuthenticated)) mscorlib::System::Boolean  IsAuthenticated;

					//Get Set Properties Methods
					//	Get:AuthenticationType
					mscorlib::System::String  get_AuthenticationType() const;

					//	Get:Name
					mscorlib::System::String  get_Name() const;

					//	Get:IsAuthenticated
					mscorlib::System::Boolean  get_IsAuthenticated() const;

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
