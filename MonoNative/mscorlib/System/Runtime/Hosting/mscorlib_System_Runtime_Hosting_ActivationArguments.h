#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_HOSTING_ACTIVATIONARGUMENTS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_HOSTING_ACTIVATIONARGUMENTS_H

#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_EvidenceBase.h>
#include <mscorlib/System/mscorlib_System_ActivationContext.h>
#include <mscorlib/System/mscorlib_System_ApplicationIdentity.h>
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
		namespace Runtime
		{
			namespace Hosting
			{

				class ActivationArguments
					: public mscorlib::System::Security::Policy::EvidenceBase
				{
				public:
					ActivationArguments(mscorlib::System::ActivationContext activationData)
					: mscorlib::System::Security::Policy::EvidenceBase(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Hosting.ActivationArguments"))
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "ActivationContext");
						__parameters__[0] = (MonoObject*)activationData;
						__native_object__ = Global::New("mscorlib", "System.Runtime.Hosting", "ActivationArguments", 1, __parameter_types__, __parameters__);
					};
				
					ActivationArguments(mscorlib::System::ApplicationIdentity applicationIdentity)
					: mscorlib::System::Security::Policy::EvidenceBase(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Hosting.ActivationArguments"))
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "ApplicationIdentity");
						__parameters__[0] = (MonoObject*)applicationIdentity;
						__native_object__ = Global::New("mscorlib", "System.Runtime.Hosting", "ActivationArguments", 1, __parameter_types__, __parameters__);
					};
				
					ActivationArguments(mscorlib::System::ActivationContext activationContext, std::vector<mscorlib::System::String*> activationData)
					: mscorlib::System::Security::Policy::EvidenceBase(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Hosting.ActivationArguments"))
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "ActivationContext");
						__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "String")), 1));
						__parameters__[0] = (MonoObject*)activationContext;
						__parameters__[1] = Global::FromArray<mscorlib::System::String*>(activationData, "mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089", "System", "String");
						__native_object__ = Global::New("mscorlib", "System.Runtime.Hosting", "ActivationArguments", 2, __parameter_types__, __parameters__);
					};
				
					ActivationArguments(mscorlib::System::ApplicationIdentity applicationIdentity, std::vector<mscorlib::System::String*> activationData)
					: mscorlib::System::Security::Policy::EvidenceBase(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Hosting.ActivationArguments"))
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "ApplicationIdentity");
						__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "String")), 1));
						__parameters__[0] = (MonoObject*)applicationIdentity;
						__parameters__[1] = Global::FromArray<mscorlib::System::String*>(activationData, "mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089", "System", "String");
						__native_object__ = Global::New("mscorlib", "System.Runtime.Hosting", "ActivationArguments", 2, __parameter_types__, __parameters__);
					};
				
					ActivationArguments(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::Policy::EvidenceBase(nativeTypeInfo)
					{
					};
				
					ActivationArguments(MonoObject *nativeObject)
					: mscorlib::System::Security::Policy::EvidenceBase(nativeObject)
					{
					};
				
					~ActivationArguments()
					{
					};
				

					ActivationArguments & operator=(ActivationArguments &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_ActivationContext)) mscorlib::System::ActivationContext  ActivationContext;
					__declspec(property(get=get_ActivationData)) std::vector<mscorlib::System::String*>  ActivationData;
					__declspec(property(get=get_ApplicationIdentity)) mscorlib::System::ApplicationIdentity  ApplicationIdentity;

					//Get Set Properties Methods
					//	Get:ActivationContext
					mscorlib::System::ActivationContext  get_ActivationContext() const;

					//	Get:ActivationData
					std::vector<mscorlib::System::String*>  get_ActivationData() const;

					//	Get:ApplicationIdentity
					mscorlib::System::ApplicationIdentity  get_ApplicationIdentity() const;

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
