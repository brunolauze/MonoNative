#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_SERVICES_ENTERPRISESERVICESHELPER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_SERVICES_ENTERPRISESERVICESHELPER_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/Remoting/Activation/mscorlib_System_Runtime_Remoting_Activation_IConstructionReturnMessage.h>
#include <mscorlib/System/Runtime/Remoting/Activation/mscorlib_System_Runtime_Remoting_Activation_IConstructionCallMessage.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		class String;
		class MarshalByRefObject;
		class IntPtr;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Remoting
			{
				namespace Proxies
				{

					class RealProxy;
					

				}
			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Remoting
			{
				namespace Services
				{

					class EnterpriseServicesHelper
						: public mscorlib::System::Object
					{
					public:
						EnterpriseServicesHelper()
						: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Remoting.Services.EnterpriseServicesHelper"))
						{
							__native_object__ = Global::New("mscorlib", "System.Runtime.Remoting.Services", "EnterpriseServicesHelper");
						};
					
						EnterpriseServicesHelper(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::Object(nativeTypeInfo)
						{
						};
					
						EnterpriseServicesHelper(MonoObject *nativeObject)
						: mscorlib::System::Object(nativeObject)
						{
						};
					
						~EnterpriseServicesHelper()
						{
						};
					

						EnterpriseServicesHelper & operator=(EnterpriseServicesHelper &value) { __native_object__ = value.GetNativeObject(); return value; };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						static mscorlib::System::Runtime::Remoting::Activation::IConstructionReturnMessage  CreateConstructionReturnMessage(mscorlib::System::Runtime::Remoting::Activation::IConstructionCallMessage ctorMsg, mscorlib::System::MarshalByRefObject retObj);
						static void  SwitchWrappers(mscorlib::System::Runtime::Remoting::Proxies::RealProxy oldcp, mscorlib::System::Runtime::Remoting::Proxies::RealProxy newcp);
						static mscorlib::System::Object  WrapIUnknownWithComObject(mscorlib::System::IntPtr punk);
						virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
