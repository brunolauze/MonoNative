#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_DEPLOYMENT_INTERNAL_INTERNALAPPLICATIONIDENTITYHELPER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_DEPLOYMENT_INTERNAL_INTERNALAPPLICATIONIDENTITYHELPER_H

#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		class String;
		class ApplicationIdentity;
		

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

				class InternalApplicationIdentityHelper
					: public mscorlib::System::Object
				{
				public:
					InternalApplicationIdentityHelper(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					InternalApplicationIdentityHelper(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~InternalApplicationIdentityHelper()
					{
					};
				

					InternalApplicationIdentityHelper & operator=(InternalApplicationIdentityHelper &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					static mscorlib::System::Object  GetInternalAppId(mscorlib::System::ApplicationIdentity id);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
