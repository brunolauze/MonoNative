// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.IO
// Name: File
// C++ Typed Name: mscorlib::System::IO::File


#include <gtest/gtest.h>
#include <mscorlib/System/IO/mscorlib_System_IO_File.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Text/mscorlib_System_Text_Encoding.h>
#include <mscorlib/System/IO/mscorlib_System_IO_StreamWriter.h>
#include <mscorlib/System/IO/mscorlib_System_IO_FileStream.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_FileSecurity.h>
#include <mscorlib/System/mscorlib_System_DateTime.h>
#include <mscorlib/System/IO/mscorlib_System_IO_StreamReader.h>
#include <mscorlib/System/mscorlib_System_Byte.h>



namespace mscorlib
{
	namespace System
	{
		namespace IO
		{

			//Public Methods Tests
			
			//Public Static Methods Tests
			
			// Method AppendAllText
			//		Signature: mscorlib::System::String path, mscorlib::System::String contents
			TEST(mscorlib_System_IO_File_Fixture,AppendAllText_1_StaticTest)
			{
				
				
			}

			// Method AppendAllText
			//		Signature: mscorlib::System::String path, mscorlib::System::String contents, mscorlib::System::Text::Encoding encoding
			TEST(mscorlib_System_IO_File_Fixture,AppendAllText_2_StaticTest)
			{
				
				
			}

			// Method AppendText
			//		Signature: mscorlib::System::String path
			TEST(mscorlib_System_IO_File_Fixture,AppendText_StaticTest)
			{
				
				
			}

			// Method Copy
			//		Signature: mscorlib::System::String sourceFileName, mscorlib::System::String destFileName
			TEST(mscorlib_System_IO_File_Fixture,Copy_1_StaticTest)
			{
				
				
			}

			// Method Copy
			//		Signature: mscorlib::System::String sourceFileName, mscorlib::System::String destFileName, mscorlib::System::Boolean overwrite
			TEST(mscorlib_System_IO_File_Fixture,Copy_2_StaticTest)
			{
				
				
			}

			// Method Create
			//		Signature: mscorlib::System::String path
			TEST(mscorlib_System_IO_File_Fixture,Create_1_StaticTest)
			{
				
				
			}

			// Method Create
			//		Signature: mscorlib::System::String path, mscorlib::System::Int32 bufferSize
			TEST(mscorlib_System_IO_File_Fixture,Create_2_StaticTest)
			{
				
				
			}

			// Method Create
			//		Signature: mscorlib::System::String path, mscorlib::System::Int32 bufferSize, mscorlib::System::IO::FileOptions::__ENUM__ options
			TEST(mscorlib_System_IO_File_Fixture,Create_3_StaticTest)
			{
				
				
			}

			// Method Create
			//		Signature: mscorlib::System::String path, mscorlib::System::Int32 bufferSize, mscorlib::System::IO::FileOptions::__ENUM__ options, mscorlib::System::Security::AccessControl::FileSecurity fileSecurity
			TEST(mscorlib_System_IO_File_Fixture,Create_4_StaticTest)
			{
				
				
			}

			// Method CreateText
			//		Signature: mscorlib::System::String path
			TEST(mscorlib_System_IO_File_Fixture,CreateText_StaticTest)
			{
				
				
			}

			// Method Delete
			//		Signature: mscorlib::System::String path
			TEST(mscorlib_System_IO_File_Fixture,Delete_StaticTest)
			{
				
				
			}

			// Method Exists
			//		Signature: mscorlib::System::String path
			TEST(mscorlib_System_IO_File_Fixture,Exists_StaticTest)
			{
				
				
			}

			// Method GetAccessControl
			//		Signature: mscorlib::System::String path
			TEST(mscorlib_System_IO_File_Fixture,GetAccessControl_1_StaticTest)
			{
				
				
			}

			// Method GetAccessControl
			//		Signature: mscorlib::System::String path, mscorlib::System::Security::AccessControl::AccessControlSections::__ENUM__ includeSections
			TEST(mscorlib_System_IO_File_Fixture,GetAccessControl_2_StaticTest)
			{
				
				
			}

			// Method GetAttributes
			//		Signature: mscorlib::System::String path
			TEST(mscorlib_System_IO_File_Fixture,GetAttributes_StaticTest)
			{
				
				
			}

			// Method GetCreationTime
			//		Signature: mscorlib::System::String path
			TEST(mscorlib_System_IO_File_Fixture,GetCreationTime_StaticTest)
			{
				
				
			}

			// Method GetCreationTimeUtc
			//		Signature: mscorlib::System::String path
			TEST(mscorlib_System_IO_File_Fixture,GetCreationTimeUtc_StaticTest)
			{
				
				
			}

			// Method GetLastAccessTime
			//		Signature: mscorlib::System::String path
			TEST(mscorlib_System_IO_File_Fixture,GetLastAccessTime_StaticTest)
			{
				
				
			}

			// Method GetLastAccessTimeUtc
			//		Signature: mscorlib::System::String path
			TEST(mscorlib_System_IO_File_Fixture,GetLastAccessTimeUtc_StaticTest)
			{
				
				
			}

			// Method GetLastWriteTime
			//		Signature: mscorlib::System::String path
			TEST(mscorlib_System_IO_File_Fixture,GetLastWriteTime_StaticTest)
			{
				
				
			}

			// Method GetLastWriteTimeUtc
			//		Signature: mscorlib::System::String path
			TEST(mscorlib_System_IO_File_Fixture,GetLastWriteTimeUtc_StaticTest)
			{
				
				
			}

			// Method Move
			//		Signature: mscorlib::System::String sourceFileName, mscorlib::System::String destFileName
			TEST(mscorlib_System_IO_File_Fixture,Move_StaticTest)
			{
				
				
			}

			// Method Open
			//		Signature: mscorlib::System::String path, mscorlib::System::IO::FileMode::__ENUM__ mode
			TEST(mscorlib_System_IO_File_Fixture,Open_1_StaticTest)
			{
				
				
			}

			// Method Open
			//		Signature: mscorlib::System::String path, mscorlib::System::IO::FileMode::__ENUM__ mode, mscorlib::System::IO::FileAccess::__ENUM__ access
			TEST(mscorlib_System_IO_File_Fixture,Open_2_StaticTest)
			{
				
				
			}

			// Method Open
			//		Signature: mscorlib::System::String path, mscorlib::System::IO::FileMode::__ENUM__ mode, mscorlib::System::IO::FileAccess::__ENUM__ access, mscorlib::System::IO::FileShare::__ENUM__ share
			TEST(mscorlib_System_IO_File_Fixture,Open_3_StaticTest)
			{
				
				
			}

			// Method OpenRead
			//		Signature: mscorlib::System::String path
			TEST(mscorlib_System_IO_File_Fixture,OpenRead_StaticTest)
			{
				
				
			}

			// Method OpenText
			//		Signature: mscorlib::System::String path
			TEST(mscorlib_System_IO_File_Fixture,OpenText_StaticTest)
			{
				
				
			}

			// Method OpenWrite
			//		Signature: mscorlib::System::String path
			TEST(mscorlib_System_IO_File_Fixture,OpenWrite_StaticTest)
			{
				
				
			}

			// Method Replace
			//		Signature: mscorlib::System::String sourceFileName, mscorlib::System::String destinationFileName, mscorlib::System::String destinationBackupFileName
			TEST(mscorlib_System_IO_File_Fixture,Replace_1_StaticTest)
			{
				
				
			}

			// Method Replace
			//		Signature: mscorlib::System::String sourceFileName, mscorlib::System::String destinationFileName, mscorlib::System::String destinationBackupFileName, mscorlib::System::Boolean ignoreMetadataErrors
			TEST(mscorlib_System_IO_File_Fixture,Replace_2_StaticTest)
			{
				
				
			}

			// Method SetAccessControl
			//		Signature: mscorlib::System::String path, mscorlib::System::Security::AccessControl::FileSecurity fileSecurity
			TEST(mscorlib_System_IO_File_Fixture,SetAccessControl_StaticTest)
			{
				
				
			}

			// Method SetAttributes
			//		Signature: mscorlib::System::String path, mscorlib::System::IO::FileAttributes::__ENUM__ fileAttributes
			TEST(mscorlib_System_IO_File_Fixture,SetAttributes_StaticTest)
			{
				
				
			}

			// Method SetCreationTime
			//		Signature: mscorlib::System::String path, mscorlib::System::DateTime creationTime
			TEST(mscorlib_System_IO_File_Fixture,SetCreationTime_StaticTest)
			{
				
				
			}

			// Method SetCreationTimeUtc
			//		Signature: mscorlib::System::String path, mscorlib::System::DateTime creationTimeUtc
			TEST(mscorlib_System_IO_File_Fixture,SetCreationTimeUtc_StaticTest)
			{
				
				
			}

			// Method SetLastAccessTime
			//		Signature: mscorlib::System::String path, mscorlib::System::DateTime lastAccessTime
			TEST(mscorlib_System_IO_File_Fixture,SetLastAccessTime_StaticTest)
			{
				
				
			}

			// Method SetLastAccessTimeUtc
			//		Signature: mscorlib::System::String path, mscorlib::System::DateTime lastAccessTimeUtc
			TEST(mscorlib_System_IO_File_Fixture,SetLastAccessTimeUtc_StaticTest)
			{
				
				
			}

			// Method SetLastWriteTime
			//		Signature: mscorlib::System::String path, mscorlib::System::DateTime lastWriteTime
			TEST(mscorlib_System_IO_File_Fixture,SetLastWriteTime_StaticTest)
			{
				
				
			}

			// Method SetLastWriteTimeUtc
			//		Signature: mscorlib::System::String path, mscorlib::System::DateTime lastWriteTimeUtc
			TEST(mscorlib_System_IO_File_Fixture,SetLastWriteTimeUtc_StaticTest)
			{
				
				
			}

			// Method ReadAllBytes
			//		Signature: mscorlib::System::String path
			TEST(mscorlib_System_IO_File_Fixture,ReadAllBytes_StaticTest)
			{
				
				
			}

			// Method ReadAllLines
			//		Signature: mscorlib::System::String path
			TEST(mscorlib_System_IO_File_Fixture,ReadAllLines_1_StaticTest)
			{
				
				
			}

			// Method ReadAllLines
			//		Signature: mscorlib::System::String path, mscorlib::System::Text::Encoding encoding
			TEST(mscorlib_System_IO_File_Fixture,ReadAllLines_2_StaticTest)
			{
				
				
			}

			// Method ReadAllText
			//		Signature: mscorlib::System::String path
			TEST(mscorlib_System_IO_File_Fixture,ReadAllText_1_StaticTest)
			{
				
				
			}

			// Method ReadAllText
			//		Signature: mscorlib::System::String path, mscorlib::System::Text::Encoding encoding
			TEST(mscorlib_System_IO_File_Fixture,ReadAllText_2_StaticTest)
			{
				
				
			}

			// Method WriteAllBytes
			//		Signature: mscorlib::System::String path, std::vector<mscorlib::System::Byte*> bytes
			TEST(mscorlib_System_IO_File_Fixture,WriteAllBytes_StaticTest)
			{
				
				
			}

			// Method WriteAllLines
			//		Signature: mscorlib::System::String path, std::vector<mscorlib::System::String*> contents
			TEST(mscorlib_System_IO_File_Fixture,WriteAllLines_1_StaticTest)
			{
				
				
			}

			// Method WriteAllLines
			//		Signature: mscorlib::System::String path, std::vector<mscorlib::System::String*> contents, mscorlib::System::Text::Encoding encoding
			TEST(mscorlib_System_IO_File_Fixture,WriteAllLines_2_StaticTest)
			{
				
				
			}

			// Method WriteAllText
			//		Signature: mscorlib::System::String path, mscorlib::System::String contents
			TEST(mscorlib_System_IO_File_Fixture,WriteAllText_1_StaticTest)
			{
				
				
			}

			// Method WriteAllText
			//		Signature: mscorlib::System::String path, mscorlib::System::String contents, mscorlib::System::Text::Encoding encoding
			TEST(mscorlib_System_IO_File_Fixture,WriteAllText_2_StaticTest)
			{
				
				
			}

			// Method Encrypt
			//		Signature: mscorlib::System::String path
			TEST(mscorlib_System_IO_File_Fixture,Encrypt_StaticTest)
			{
				
				
			}

			// Method Decrypt
			//		Signature: mscorlib::System::String path
			TEST(mscorlib_System_IO_File_Fixture,Decrypt_StaticTest)
			{
				
				
			}

			// Method ReadLines
			//		Signature: mscorlib::System::String path
			TEST(mscorlib_System_IO_File_Fixture,ReadLines_1_StaticTest)
			{
				
				
			}

			// Method ReadLines
			//		Signature: mscorlib::System::String path, mscorlib::System::Text::Encoding encoding
			TEST(mscorlib_System_IO_File_Fixture,ReadLines_2_StaticTest)
			{
				
				
			}

			// Method AppendAllLines
			//		Signature: mscorlib::System::String path, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String> contents
			TEST(mscorlib_System_IO_File_Fixture,AppendAllLines_1_StaticTest)
			{
				
				
			}

			// Method AppendAllLines
			//		Signature: mscorlib::System::String path, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String> contents, mscorlib::System::Text::Encoding encoding
			TEST(mscorlib_System_IO_File_Fixture,AppendAllLines_2_StaticTest)
			{
				
				
			}

			// Method WriteAllLines
			//		Signature: mscorlib::System::String path, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String> contents
			TEST(mscorlib_System_IO_File_Fixture,WriteAllLines_3_StaticTest)
			{
				
				
			}

			// Method WriteAllLines
			//		Signature: mscorlib::System::String path, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String> contents, mscorlib::System::Text::Encoding encoding
			TEST(mscorlib_System_IO_File_Fixture,WriteAllLines_4_StaticTest)
			{
				
				
			}


		}
	}
}
