// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Runtime.Remoting.Proxies
// Name: ProxyAttribute
// C++ Typed Name: mscorlib::System::Runtime::Remoting::Proxies::ProxyAttribute


#include <gtest/gtest.h>
#include <mscorlib/System/Runtime/Remoting/Proxies/mscorlib_System_Runtime_Remoting_Proxies_ProxyAttribute.h>
#include <mscorlib/System/mscorlib_System_MarshalByRefObject.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/Runtime/Remoting/Proxies/mscorlib_System_Runtime_Remoting_Proxies_RealProxy.h>
#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_ObjRef.h>
#include <mscorlib/System/Runtime/Remoting/Contexts/mscorlib_System_Runtime_Remoting_Contexts_Context.h>
#include <mscorlib/System/mscorlib_System_String.h>



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

					//Constructors Tests
					
					//ProxyAttribute()
					TEST(mscorlib_System_Runtime_Remoting_Proxies_ProxyAttribute_Fixture,DefaultConstructor)
					{
						
						mscorlib::System::Runtime::Remoting::Proxies::ProxyAttribute *value = new mscorlib::System::Runtime::Remoting::Proxies::ProxyAttribute();
						EXPECT_NE(NULL, value->GetNativeObject());
						
						
					}
					
					//Public Methods Tests
					
					// Method CreateInstance
					//		Signature: mscorlib::System::Type serverType
					TEST(mscorlib_System_Runtime_Remoting_Proxies_ProxyAttribute_Fixture,CreateInstance_Test)
					{
						
						
					}

					// Method CreateProxy
					//		Signature: mscorlib::System::Runtime::Remoting::ObjRef objRef, mscorlib::System::Type serverType, mscorlib::System::Object serverObject, mscorlib::System::Runtime::Remoting::Contexts::Context serverContext
					TEST(mscorlib_System_Runtime_Remoting_Proxies_ProxyAttribute_Fixture,CreateProxy_Test)
					{
						
						
					}

					// Method GetPropertiesForNewContext
					//		Signature: mscorlib::System::Runtime::Remoting::Activation::IConstructionCallMessage msg
					TEST(mscorlib_System_Runtime_Remoting_Proxies_ProxyAttribute_Fixture,GetPropertiesForNewContext_Test)
					{
						
						
					}

					// Method IsContextOK
					//		Signature: mscorlib::System::Runtime::Remoting::Contexts::Context ctx, mscorlib::System::Runtime::Remoting::Activation::IConstructionCallMessage msg
					TEST(mscorlib_System_Runtime_Remoting_Proxies_ProxyAttribute_Fixture,IsContextOK_Test)
					{
						
						
					}

					//Public Properties Tests
					
					// Property TypeId
					//		Return Type: mscorlib::System::Object
					//			Property Get Method
					TEST(mscorlib_System_Runtime_Remoting_Proxies_ProxyAttribute_Fixture,get_TypeId_Test)
					{
						
						
					}


				}
			}
		}
	}
}
