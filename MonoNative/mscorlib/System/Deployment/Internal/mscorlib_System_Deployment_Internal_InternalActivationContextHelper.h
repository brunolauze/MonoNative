#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_DEPLOYMENT_INTERNAL_INTERNALACTIVATIONCONTEXTHELPER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_DEPLOYMENT_INTERNAL_INTERNALACTIVATIONCONTEXTHELPER_H

#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		class String;
		class ActivationContext;
		class Byte;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Deployment
		{
			namespace Internal
			{

				class InternalActivationContextHelper
					: public mscorlib::System::Object
				{
				public:
					InternalActivationContextHelper(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					InternalActivationContextHelper(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~InternalActivationContextHelper()
					{
					};
				

					InternalActivationContextHelper & operator=(InternalActivationContextHelper &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					static mscorlib::System::Object  GetActivationContextData(mscorlib::System::ActivationContext appInfo);
					static mscorlib::System::Object  GetApplicationComponentManifest(mscorlib::System::ActivationContext appInfo);
					static std::vector<mscorlib::System::Byte*>  GetApplicationManifestBytes(mscorlib::System::ActivationContext appInfo);
					static mscorlib::System::Object  GetDeploymentComponentManifest(mscorlib::System::ActivationContext appInfo);
					static std::vector<mscorlib::System::Byte*>  GetDeploymentManifestBytes(mscorlib::System::ActivationContext appInfo);
					static mscorlib::System::Boolean  IsFirstRun(mscorlib::System::ActivationContext appInfo);
					static void  PrepareForExecution(mscorlib::System::ActivationContext appInfo);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
