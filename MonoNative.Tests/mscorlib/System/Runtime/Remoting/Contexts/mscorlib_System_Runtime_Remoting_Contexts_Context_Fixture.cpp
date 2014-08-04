// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Runtime.Remoting.Contexts
// Name: Context
// C++ Typed Name: mscorlib::System::Runtime::Remoting::Contexts::Context


#include <gtest/gtest.h>
#include <mscorlib/System/Runtime/Remoting/Contexts/mscorlib_System_Runtime_Remoting_Contexts_Context.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_ContextBoundObject.h>
#include <mscorlib/System/mscorlib_System_LocalDataStoreSlot.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Remoting
			{
				namespace Contexts
				{

					//Constructors Tests
					
					//Context()
					TEST(mscorlib_System_Runtime_Remoting_Contexts_Context_Fixture,DefaultConstructor)
					{
						
						mscorlib::System::Runtime::Remoting::Contexts::Context *value = new mscorlib::System::Runtime::Remoting::Contexts::Context();
						EXPECT_NE(NULL, value->GetNativeObject());
						
						
					}
					
					//Public Methods Tests
					
					// Method GetProperty
					//		Signature: mscorlib::System::String name
					TEST(mscorlib_System_Runtime_Remoting_Contexts_Context_Fixture,GetProperty_Test)
					{
						
						
					}

					// Method SetProperty
					//		Signature: mscorlib::System::Runtime::Remoting::Contexts::IContextProperty prop
					TEST(mscorlib_System_Runtime_Remoting_Contexts_Context_Fixture,SetProperty_Test)
					{
						
						
					}

					// Method Freeze
					//		Signature: 
					TEST(mscorlib_System_Runtime_Remoting_Contexts_Context_Fixture,Freeze_Test)
					{
						
						
					}

					// Method ToString
					//		Signature: 
					TEST(mscorlib_System_Runtime_Remoting_Contexts_Context_Fixture,ToString_Test)
					{
						
						
					}

					// Method DoCallBack
					//		Signature: mscorlib::Callback<void  ()> deleg
					TEST(mscorlib_System_Runtime_Remoting_Contexts_Context_Fixture,DoCallBack_Test)
					{
						
						
					}

					//Public Static Methods Tests
					
					// Method RegisterDynamicProperty
					//		Signature: mscorlib::System::Runtime::Remoting::Contexts::IDynamicProperty prop, mscorlib::System::ContextBoundObject obj, mscorlib::System::Runtime::Remoting::Contexts::Context ctx
					TEST(mscorlib_System_Runtime_Remoting_Contexts_Context_Fixture,RegisterDynamicProperty_StaticTest)
					{
						
						
					}

					// Method UnregisterDynamicProperty
					//		Signature: mscorlib::System::String name, mscorlib::System::ContextBoundObject obj, mscorlib::System::Runtime::Remoting::Contexts::Context ctx
					TEST(mscorlib_System_Runtime_Remoting_Contexts_Context_Fixture,UnregisterDynamicProperty_StaticTest)
					{
						
						
					}

					// Method AllocateDataSlot
					//		Signature: 
					TEST(mscorlib_System_Runtime_Remoting_Contexts_Context_Fixture,AllocateDataSlot_StaticTest)
					{
						
						
					}

					// Method AllocateNamedDataSlot
					//		Signature: mscorlib::System::String name
					TEST(mscorlib_System_Runtime_Remoting_Contexts_Context_Fixture,AllocateNamedDataSlot_StaticTest)
					{
						
						
					}

					// Method FreeNamedDataSlot
					//		Signature: mscorlib::System::String name
					TEST(mscorlib_System_Runtime_Remoting_Contexts_Context_Fixture,FreeNamedDataSlot_StaticTest)
					{
						
						
					}

					// Method GetData
					//		Signature: mscorlib::System::LocalDataStoreSlot slot
					TEST(mscorlib_System_Runtime_Remoting_Contexts_Context_Fixture,GetData_StaticTest)
					{
						
						
					}

					// Method GetNamedDataSlot
					//		Signature: mscorlib::System::String name
					TEST(mscorlib_System_Runtime_Remoting_Contexts_Context_Fixture,GetNamedDataSlot_StaticTest)
					{
						
						
					}

					// Method SetData
					//		Signature: mscorlib::System::LocalDataStoreSlot slot, mscorlib::System::Object data
					TEST(mscorlib_System_Runtime_Remoting_Contexts_Context_Fixture,SetData_StaticTest)
					{
						
						
					}

					//Public Properties Tests
					
					// Property ContextID
					//		Return Type: mscorlib::System::Int32
					//			Property Get Method
					TEST(mscorlib_System_Runtime_Remoting_Contexts_Context_Fixture,get_ContextID_Test)
					{
						
						
					}

					// Property ContextProperties
					//		Return Type: mscorlib::System::Runtime::Remoting::Contexts::IContextProperty*
					//			Property Get Method
					TEST(mscorlib_System_Runtime_Remoting_Contexts_Context_Fixture,get_ContextProperties_Test)
					{
						
						
					}

					// Property DefaultContext
					//		Return Type: mscorlib::System::Runtime::Remoting::Contexts::Context
					//			Property Get Method
					TEST(mscorlib_System_Runtime_Remoting_Contexts_Context_Fixture,get_DefaultContext_Test)
					{
						
						
					}


				}
			}
		}
	}
}
