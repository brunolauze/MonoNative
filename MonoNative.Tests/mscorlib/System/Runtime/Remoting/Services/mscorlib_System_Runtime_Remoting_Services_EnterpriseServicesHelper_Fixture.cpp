// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Runtime.Remoting.Services
// Name: EnterpriseServicesHelper
// C++ Typed Name: mscorlib::System::Runtime::Remoting::Services::EnterpriseServicesHelper


#include <gtest/gtest.h>
#include <mscorlib/System/Runtime/Remoting/Services/mscorlib_System_Runtime_Remoting_Services_EnterpriseServicesHelper.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_MarshalByRefObject.h>
#include <mscorlib/System/Runtime/Remoting/Proxies/mscorlib_System_Runtime_Remoting_Proxies_RealProxy.h>



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

					//Constructors Tests
					
					//EnterpriseServicesHelper()
					TEST(mscorlib_System_Runtime_Remoting_Services_EnterpriseServicesHelper_Fixture,DefaultConstructor)
					{
						
						mscorlib::System::Runtime::Remoting::Services::EnterpriseServicesHelper *value = new mscorlib::System::Runtime::Remoting::Services::EnterpriseServicesHelper();
						EXPECT_NE(NULL, value->GetNativeObject());
						
						
					}
					
					//Public Methods Tests
					
					//Public Static Methods Tests
					
					// Method CreateConstructionReturnMessage
					//		Signature: mscorlib::System::Runtime::Remoting::Activation::IConstructionCallMessage ctorMsg, mscorlib::System::MarshalByRefObject retObj
					TEST(mscorlib_System_Runtime_Remoting_Services_EnterpriseServicesHelper_Fixture,CreateConstructionReturnMessage_StaticTest)
					{
						
						
					}

					// Method SwitchWrappers
					//		Signature: mscorlib::System::Runtime::Remoting::Proxies::RealProxy oldcp, mscorlib::System::Runtime::Remoting::Proxies::RealProxy newcp
					TEST(mscorlib_System_Runtime_Remoting_Services_EnterpriseServicesHelper_Fixture,SwitchWrappers_StaticTest)
					{
						
						
					}

					// Method WrapIUnknownWithComObject
					//		Signature: mscorlib::System::IntPtr punk
					TEST(mscorlib_System_Runtime_Remoting_Services_EnterpriseServicesHelper_Fixture,WrapIUnknownWithComObject_StaticTest)
					{
						
						
					}


				}
			}
		}
	}
}
