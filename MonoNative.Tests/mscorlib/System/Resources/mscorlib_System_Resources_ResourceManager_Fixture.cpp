// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Resources
// Name: ResourceManager
// C++ Typed Name: mscorlib::System::Resources::ResourceManager


#include <gtest/gtest.h>
#include <mscorlib/System/Resources/mscorlib_System_Resources_ResourceManager.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_CultureInfo.h>
#include <mscorlib/System/Resources/mscorlib_System_Resources_ResourceSet.h>
#include <mscorlib/System/IO/mscorlib_System_IO_UnmanagedMemoryStream.h>



namespace mscorlib
{
	namespace System
	{
		namespace Resources
		{

			//Constructors Tests
			
			//ResourceManager(mscorlib::System::Type resourceSource)
			TEST(mscorlib_System_Resources_ResourceManager_Fixture,Constructor_1)
			{
				
				
				
			}
			
			//ResourceManager(mscorlib::System::String baseName, mscorlib::System::Reflection::Assembly assembly)
			TEST(mscorlib_System_Resources_ResourceManager_Fixture,Constructor_2)
			{
				
				
				
			}
			
			//ResourceManager(mscorlib::System::String baseName, mscorlib::System::Reflection::Assembly assembly, mscorlib::System::Type usingResourceSet)
			TEST(mscorlib_System_Resources_ResourceManager_Fixture,Constructor_3)
			{
				
				
				
			}
			
			//Public Methods Tests
			
			// Method GetObject
			//		Signature: mscorlib::System::String name
			TEST(mscorlib_System_Resources_ResourceManager_Fixture,GetObject_1_Test)
			{
				
				
			}

			// Method GetObject
			//		Signature: mscorlib::System::String name, mscorlib::System::Globalization::CultureInfo culture
			TEST(mscorlib_System_Resources_ResourceManager_Fixture,GetObject_2_Test)
			{
				
				
			}

			// Method GetResourceSet
			//		Signature: mscorlib::System::Globalization::CultureInfo culture, mscorlib::System::Boolean createIfNotExists, mscorlib::System::Boolean tryParents
			TEST(mscorlib_System_Resources_ResourceManager_Fixture,GetResourceSet_Test)
			{
				
				
			}

			// Method GetString
			//		Signature: mscorlib::System::String name
			TEST(mscorlib_System_Resources_ResourceManager_Fixture,GetString_1_Test)
			{
				
				
			}

			// Method GetString
			//		Signature: mscorlib::System::String name, mscorlib::System::Globalization::CultureInfo culture
			TEST(mscorlib_System_Resources_ResourceManager_Fixture,GetString_2_Test)
			{
				
				
			}

			// Method GetStream
			//		Signature: mscorlib::System::String name
			TEST(mscorlib_System_Resources_ResourceManager_Fixture,GetStream_1_Test)
			{
				
				
			}

			// Method GetStream
			//		Signature: mscorlib::System::String name, mscorlib::System::Globalization::CultureInfo culture
			TEST(mscorlib_System_Resources_ResourceManager_Fixture,GetStream_2_Test)
			{
				
				
			}

			// Method ReleaseAllResources
			//		Signature: 
			TEST(mscorlib_System_Resources_ResourceManager_Fixture,ReleaseAllResources_Test)
			{
				
				
			}

			//Public Static Methods Tests
			
			// Method CreateFileBasedResourceManager
			//		Signature: mscorlib::System::String baseName, mscorlib::System::String resourceDir, mscorlib::System::Type usingResourceSet
			TEST(mscorlib_System_Resources_ResourceManager_Fixture,CreateFileBasedResourceManager_StaticTest)
			{
				
				
			}

			//Public Properties Tests
			
			// Property BaseName
			//		Return Type: mscorlib::System::String
			//			Property Get Method
			TEST(mscorlib_System_Resources_ResourceManager_Fixture,get_BaseName_Test)
			{
				
				
			}

			// Property IgnoreCase
			//		Return Type: mscorlib::System::Boolean
			//			Property Get Method
			TEST(mscorlib_System_Resources_ResourceManager_Fixture,get_IgnoreCase_Test)
			{
				
				
			}

			// Property IgnoreCase
			//		Return Type: mscorlib::System::Boolean
			//			Property Set Method
			TEST(mscorlib_System_Resources_ResourceManager_Fixture,set_IgnoreCase_Test)
			{
				
				
			}

			// Property ResourceSetType
			//		Return Type: mscorlib::System::Type
			//			Property Get Method
			TEST(mscorlib_System_Resources_ResourceManager_Fixture,get_ResourceSetType_Test)
			{
				
				
			}


		}
	}
}
