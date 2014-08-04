// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Security
// Name: SecurityException
// C++ Typed Name: mscorlib::System::Security::SecurityException


#include <gtest/gtest.h>
#include <mscorlib/System/Security/mscorlib_System_Security_SecurityException.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_SerializationInfo.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_StreamingContext.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MethodBase.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{

			//Constructors Tests
			
			//SecurityException()
			TEST(mscorlib_System_Security_SecurityException_Fixture,DefaultConstructor)
			{
				
				mscorlib::System::Security::SecurityException *value = new mscorlib::System::Security::SecurityException();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//SecurityException(mscorlib::System::String message)
			TEST(mscorlib_System_Security_SecurityException_Fixture,Constructor_2)
			{
				
				mscorlib::System::Security::SecurityException *value = new mscorlib::System::Security::SecurityException();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//SecurityException(mscorlib::System::String message, mscorlib::System::Exception inner)
			TEST(mscorlib_System_Security_SecurityException_Fixture,Constructor_3)
			{
				
				mscorlib::System::Security::SecurityException *value = new mscorlib::System::Security::SecurityException();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//SecurityException(mscorlib::System::String message, mscorlib::System::Type type)
			TEST(mscorlib_System_Security_SecurityException_Fixture,Constructor_4)
			{
				
				mscorlib::System::Security::SecurityException *value = new mscorlib::System::Security::SecurityException();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//SecurityException(mscorlib::System::String message, mscorlib::System::Type type, mscorlib::System::String state)
			TEST(mscorlib_System_Security_SecurityException_Fixture,Constructor_5)
			{
				
				mscorlib::System::Security::SecurityException *value = new mscorlib::System::Security::SecurityException();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//SecurityException(mscorlib::System::String message, mscorlib::System::Object deny, mscorlib::System::Object permitOnly, mscorlib::System::Reflection::MethodInfo method, mscorlib::System::Object demanded, mscorlib::System::Security::IPermission permThatFailed)
			TEST(mscorlib_System_Security_SecurityException_Fixture,Constructor_6)
			{
				
				mscorlib::System::Security::SecurityException *value = new mscorlib::System::Security::SecurityException();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//SecurityException(mscorlib::System::String message, mscorlib::System::Reflection::AssemblyName assemblyName, mscorlib::System::Security::PermissionSet grant, mscorlib::System::Security::PermissionSet refused, mscorlib::System::Reflection::MethodInfo method, mscorlib::System::Security::Permissions::SecurityAction::__ENUM__ action, mscorlib::System::Object demanded, mscorlib::System::Security::IPermission permThatFailed, mscorlib::System::Security::Policy::Evidence evidence)
			TEST(mscorlib_System_Security_SecurityException_Fixture,Constructor_7)
			{
				
				mscorlib::System::Security::SecurityException *value = new mscorlib::System::Security::SecurityException();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Public Methods Tests
			
			// Method GetObjectData
			//		Signature: mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context
			TEST(mscorlib_System_Security_SecurityException_Fixture,GetObjectData_Test)
			{
				
				
			}

			// Method ToString
			//		Signature: 
			TEST(mscorlib_System_Security_SecurityException_Fixture,ToString_Test)
			{
				
				
			}

			//Public Properties Tests
			
			// Property Action
			//		Return Type: mscorlib::System::Security::Permissions::SecurityAction::__ENUM__
			//			Property Get Method
			TEST(mscorlib_System_Security_SecurityException_Fixture,get_Action_Test)
			{
				
				
			}

			// Property Action
			//		Return Type: mscorlib::System::Security::Permissions::SecurityAction::__ENUM__
			//			Property Set Method
			TEST(mscorlib_System_Security_SecurityException_Fixture,set_Action_Test)
			{
				
				
			}

			// Property DenySetInstance
			//		Return Type: mscorlib::System::Object
			//			Property Get Method
			TEST(mscorlib_System_Security_SecurityException_Fixture,get_DenySetInstance_Test)
			{
				
				
			}

			// Property DenySetInstance
			//		Return Type: mscorlib::System::Object
			//			Property Set Method
			TEST(mscorlib_System_Security_SecurityException_Fixture,set_DenySetInstance_Test)
			{
				
				
			}

			// Property FailedAssemblyInfo
			//		Return Type: mscorlib::System::Reflection::AssemblyName
			//			Property Get Method
			TEST(mscorlib_System_Security_SecurityException_Fixture,get_FailedAssemblyInfo_Test)
			{
				
				
			}

			// Property FailedAssemblyInfo
			//		Return Type: mscorlib::System::Reflection::AssemblyName
			//			Property Set Method
			TEST(mscorlib_System_Security_SecurityException_Fixture,set_FailedAssemblyInfo_Test)
			{
				
				
			}

			// Property Method
			//		Return Type: mscorlib::System::Reflection::MethodInfo
			//			Property Get Method
			TEST(mscorlib_System_Security_SecurityException_Fixture,get_Method_Test)
			{
				
				
			}

			// Property Method
			//		Return Type: mscorlib::System::Reflection::MethodInfo
			//			Property Set Method
			TEST(mscorlib_System_Security_SecurityException_Fixture,set_Method_Test)
			{
				
				
			}

			// Property PermitOnlySetInstance
			//		Return Type: mscorlib::System::Object
			//			Property Get Method
			TEST(mscorlib_System_Security_SecurityException_Fixture,get_PermitOnlySetInstance_Test)
			{
				
				
			}

			// Property PermitOnlySetInstance
			//		Return Type: mscorlib::System::Object
			//			Property Set Method
			TEST(mscorlib_System_Security_SecurityException_Fixture,set_PermitOnlySetInstance_Test)
			{
				
				
			}

			// Property Url
			//		Return Type: mscorlib::System::String
			//			Property Get Method
			TEST(mscorlib_System_Security_SecurityException_Fixture,get_Url_Test)
			{
				
				
			}

			// Property Url
			//		Return Type: mscorlib::System::String
			//			Property Set Method
			TEST(mscorlib_System_Security_SecurityException_Fixture,set_Url_Test)
			{
				
				
			}

			// Property Zone
			//		Return Type: mscorlib::System::Security::SecurityZone::__ENUM__
			//			Property Get Method
			TEST(mscorlib_System_Security_SecurityException_Fixture,get_Zone_Test)
			{
				
				
			}

			// Property Zone
			//		Return Type: mscorlib::System::Security::SecurityZone::__ENUM__
			//			Property Set Method
			TEST(mscorlib_System_Security_SecurityException_Fixture,set_Zone_Test)
			{
				
				
			}

			// Property Demanded
			//		Return Type: mscorlib::System::Object
			//			Property Get Method
			TEST(mscorlib_System_Security_SecurityException_Fixture,get_Demanded_Test)
			{
				
				
			}

			// Property Demanded
			//		Return Type: mscorlib::System::Object
			//			Property Set Method
			TEST(mscorlib_System_Security_SecurityException_Fixture,set_Demanded_Test)
			{
				
				
			}

			// Property FirstPermissionThatFailed
			//		Return Type: mscorlib::System::Security::IPermission
			//			Property Get Method
			TEST(mscorlib_System_Security_SecurityException_Fixture,get_FirstPermissionThatFailed_Test)
			{
				
				
			}

			// Property FirstPermissionThatFailed
			//		Return Type: mscorlib::System::Security::IPermission
			//			Property Set Method
			TEST(mscorlib_System_Security_SecurityException_Fixture,set_FirstPermissionThatFailed_Test)
			{
				
				
			}

			// Property PermissionState
			//		Return Type: mscorlib::System::String
			//			Property Get Method
			TEST(mscorlib_System_Security_SecurityException_Fixture,get_PermissionState_Test)
			{
				
				
			}

			// Property PermissionState
			//		Return Type: mscorlib::System::String
			//			Property Set Method
			TEST(mscorlib_System_Security_SecurityException_Fixture,set_PermissionState_Test)
			{
				
				
			}

			// Property PermissionType
			//		Return Type: mscorlib::System::Type
			//			Property Get Method
			TEST(mscorlib_System_Security_SecurityException_Fixture,get_PermissionType_Test)
			{
				
				
			}

			// Property PermissionType
			//		Return Type: mscorlib::System::Type
			//			Property Set Method
			TEST(mscorlib_System_Security_SecurityException_Fixture,set_PermissionType_Test)
			{
				
				
			}

			// Property GrantedSet
			//		Return Type: mscorlib::System::String
			//			Property Get Method
			TEST(mscorlib_System_Security_SecurityException_Fixture,get_GrantedSet_Test)
			{
				
				
			}

			// Property GrantedSet
			//		Return Type: mscorlib::System::String
			//			Property Set Method
			TEST(mscorlib_System_Security_SecurityException_Fixture,set_GrantedSet_Test)
			{
				
				
			}

			// Property RefusedSet
			//		Return Type: mscorlib::System::String
			//			Property Get Method
			TEST(mscorlib_System_Security_SecurityException_Fixture,get_RefusedSet_Test)
			{
				
				
			}

			// Property RefusedSet
			//		Return Type: mscorlib::System::String
			//			Property Set Method
			TEST(mscorlib_System_Security_SecurityException_Fixture,set_RefusedSet_Test)
			{
				
				
			}

			// Property InnerException
			//		Return Type: mscorlib::System::Exception
			//			Property Get Method
			TEST(mscorlib_System_Security_SecurityException_Fixture,get_InnerException_Test)
			{
				
				
			}

			// Property HelpLink
			//		Return Type: mscorlib::System::String
			//			Property Get Method
			TEST(mscorlib_System_Security_SecurityException_Fixture,get_HelpLink_Test)
			{
				
				
			}

			// Property HelpLink
			//		Return Type: mscorlib::System::String
			//			Property Set Method
			TEST(mscorlib_System_Security_SecurityException_Fixture,set_HelpLink_Test)
			{
				
				
			}

			// Property HResult
			//		Return Type: mscorlib::System::Int32
			//			Property Get Method
			TEST(mscorlib_System_Security_SecurityException_Fixture,get_HResult_Test)
			{
				
				
			}

			// Property HResult
			//		Return Type: mscorlib::System::Int32
			//			Property Set Method
			TEST(mscorlib_System_Security_SecurityException_Fixture,set_HResult_Test)
			{
				
				
			}

			// Property Message
			//		Return Type: mscorlib::System::String
			//			Property Get Method
			TEST(mscorlib_System_Security_SecurityException_Fixture,get_Message_Test)
			{
				
				
			}

			// Property Source
			//		Return Type: mscorlib::System::String
			//			Property Get Method
			TEST(mscorlib_System_Security_SecurityException_Fixture,get_Source_Test)
			{
				
				
			}

			// Property Source
			//		Return Type: mscorlib::System::String
			//			Property Set Method
			TEST(mscorlib_System_Security_SecurityException_Fixture,set_Source_Test)
			{
				
				
			}

			// Property StackTrace
			//		Return Type: mscorlib::System::String
			//			Property Get Method
			TEST(mscorlib_System_Security_SecurityException_Fixture,get_StackTrace_Test)
			{
				
				
			}

			// Property TargetSite
			//		Return Type: mscorlib::System::Reflection::MethodBase
			//			Property Get Method
			TEST(mscorlib_System_Security_SecurityException_Fixture,get_TargetSite_Test)
			{
				
				
			}

			// Property Data
			//		Return Type: mscorlib::System::Collections::IDictionary
			//			Property Get Method
			TEST(mscorlib_System_Security_SecurityException_Fixture,get_Data_Test)
			{
				
				
			}


		}
	}
}
