#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_POLICY_TRUSTMANAGERCONTEXT_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_POLICY_TRUSTMANAGERCONTEXT_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_TrustManagerUIContext.h>

namespace mscorlib
{
	namespace System
	{

		class ApplicationIdentity;
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

				class TrustManagerContext
					: public mscorlib::System::Object
				{
				public:
					TrustManagerContext()
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Policy.TrustManagerContext"))
					{
						__native_object__ = Global::New("mscorlib", "System.Security.Policy", "TrustManagerContext");
					};
				
					TrustManagerContext(mscorlib::System::Security::Policy::TrustManagerUIContext::__ENUM__ uiContext)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Policy.TrustManagerContext"))
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Policy", "TrustManagerUIContext");
						mscorlib::System::Int32 __param_uiContext__ = uiContext;
						__parameters__[0] = &__param_uiContext__;
						__native_object__ = Global::New("mscorlib", "System.Security.Policy", "TrustManagerContext", 1, __parameter_types__, __parameters__);
					};
				
					TrustManagerContext(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					TrustManagerContext(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~TrustManagerContext()
					{
					};
				

					TrustManagerContext & operator=(TrustManagerContext &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(TrustManagerContext &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_IgnorePersistedDecision, put=set_IgnorePersistedDecision)) mscorlib::System::Boolean  IgnorePersistedDecision;
					__declspec(property(get=get_KeepAlive, put=set_KeepAlive)) mscorlib::System::Boolean  KeepAlive;
					__declspec(property(get=get_NoPrompt, put=set_NoPrompt)) mscorlib::System::Boolean  NoPrompt;
					__declspec(property(get=get_Persist, put=set_Persist)) mscorlib::System::Boolean  Persist;
					__declspec(property(get=get_PreviousApplicationIdentity, put=set_PreviousApplicationIdentity)) mscorlib::System::ApplicationIdentity  PreviousApplicationIdentity;
					__declspec(property(get=get_UIContext, put=set_UIContext)) mscorlib::System::Security::Policy::TrustManagerUIContext::__ENUM__  UIContext;

					//Get Set Properties Methods
					//	Get/Set:IgnorePersistedDecision
					mscorlib::System::Boolean  get_IgnorePersistedDecision() const;
					void set_IgnorePersistedDecision(mscorlib::System::Boolean  value);

					//	Get/Set:KeepAlive
					mscorlib::System::Boolean  get_KeepAlive() const;
					void set_KeepAlive(mscorlib::System::Boolean  value);

					//	Get/Set:NoPrompt
					mscorlib::System::Boolean  get_NoPrompt() const;
					void set_NoPrompt(mscorlib::System::Boolean  value);

					//	Get/Set:Persist
					mscorlib::System::Boolean  get_Persist() const;
					void set_Persist(mscorlib::System::Boolean  value);

					//	Get/Set:PreviousApplicationIdentity
					mscorlib::System::ApplicationIdentity  get_PreviousApplicationIdentity() const;
					void set_PreviousApplicationIdentity(mscorlib::System::ApplicationIdentity  value);

					//	Get/Set:UIContext
					mscorlib::System::Security::Policy::TrustManagerUIContext::__ENUM__  get_UIContext() const;
					void set_UIContext(mscorlib::System::Security::Policy::TrustManagerUIContext::__ENUM__  value);

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
