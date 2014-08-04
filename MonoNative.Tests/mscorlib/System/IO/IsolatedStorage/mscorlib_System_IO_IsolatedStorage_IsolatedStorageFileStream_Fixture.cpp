// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.IO.IsolatedStorage
// Name: IsolatedStorageFileStream
// C++ Typed Name: mscorlib::System::IO::IsolatedStorage::IsolatedStorageFileStream


#include <gtest/gtest.h>
#include <mscorlib/System/IO/IsolatedStorage/mscorlib_System_IO_IsolatedStorage_IsolatedStorageFileStream.h>
#include <mscorlib/Microsoft/Win32/SafeHandles/mscorlib_Microsoft_Win32_SafeHandles_SafeFileHandle.h>
#include <mscorlib/System/mscorlib_System_IntPtr.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_FileSecurity.h>
#include <mscorlib/System/Threading/Tasks/mscorlib_System_Threading_Tasks_Task.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_CancellationToken.h>
#include <mscorlib/System/IO/mscorlib_System_IO_Stream.h>
#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_ObjRef.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace IO
		{
			namespace IsolatedStorage
			{

				//Constructors Tests
				
				//IsolatedStorageFileStream(mscorlib::System::String path, mscorlib::System::IO::FileMode::__ENUM__ mode)
				TEST(mscorlib_System_IO_IsolatedStorage_IsolatedStorageFileStream_Fixture,Constructor_1)
				{
					
					
					
				}
				
				//IsolatedStorageFileStream(mscorlib::System::String path, mscorlib::System::IO::FileMode::__ENUM__ mode, mscorlib::System::IO::FileAccess::__ENUM__ access)
				TEST(mscorlib_System_IO_IsolatedStorage_IsolatedStorageFileStream_Fixture,Constructor_2)
				{
					
					
					
				}
				
				//IsolatedStorageFileStream(mscorlib::System::String path, mscorlib::System::IO::FileMode::__ENUM__ mode, mscorlib::System::IO::FileAccess::__ENUM__ access, mscorlib::System::IO::FileShare::__ENUM__ share)
				TEST(mscorlib_System_IO_IsolatedStorage_IsolatedStorageFileStream_Fixture,Constructor_3)
				{
					
					
					
				}
				
				//IsolatedStorageFileStream(mscorlib::System::String path, mscorlib::System::IO::FileMode::__ENUM__ mode, mscorlib::System::IO::FileAccess::__ENUM__ access, mscorlib::System::IO::FileShare::__ENUM__ share, mscorlib::System::Int32 bufferSize)
				TEST(mscorlib_System_IO_IsolatedStorage_IsolatedStorageFileStream_Fixture,Constructor_4)
				{
					
					
					
				}
				
				//IsolatedStorageFileStream(mscorlib::System::String path, mscorlib::System::IO::FileMode::__ENUM__ mode, mscorlib::System::IO::FileAccess::__ENUM__ access, mscorlib::System::IO::FileShare::__ENUM__ share, mscorlib::System::Int32 bufferSize, mscorlib::System::IO::IsolatedStorage::IsolatedStorageFile isf)
				TEST(mscorlib_System_IO_IsolatedStorage_IsolatedStorageFileStream_Fixture,Constructor_5)
				{
					
					
					
				}
				
				//IsolatedStorageFileStream(mscorlib::System::String path, mscorlib::System::IO::FileMode::__ENUM__ mode, mscorlib::System::IO::FileAccess::__ENUM__ access, mscorlib::System::IO::FileShare::__ENUM__ share, mscorlib::System::IO::IsolatedStorage::IsolatedStorageFile isf)
				TEST(mscorlib_System_IO_IsolatedStorage_IsolatedStorageFileStream_Fixture,Constructor_6)
				{
					
					
					
				}
				
				//IsolatedStorageFileStream(mscorlib::System::String path, mscorlib::System::IO::FileMode::__ENUM__ mode, mscorlib::System::IO::FileAccess::__ENUM__ access, mscorlib::System::IO::IsolatedStorage::IsolatedStorageFile isf)
				TEST(mscorlib_System_IO_IsolatedStorage_IsolatedStorageFileStream_Fixture,Constructor_7)
				{
					
					
					
				}
				
				//IsolatedStorageFileStream(mscorlib::System::String path, mscorlib::System::IO::FileMode::__ENUM__ mode, mscorlib::System::IO::IsolatedStorage::IsolatedStorageFile isf)
				TEST(mscorlib_System_IO_IsolatedStorage_IsolatedStorageFileStream_Fixture,Constructor_8)
				{
					
					
					
				}
				
				//Public Methods Tests
				
				// Method BeginRead
				//		Signature: std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 offset, mscorlib::System::Int32 numBytes, mscorlib::Callback<void  (mscorlib::System::IAsyncResult )> userCallback, mscorlib::System::Object stateObject
				TEST(mscorlib_System_IO_IsolatedStorage_IsolatedStorageFileStream_Fixture,BeginRead_Test)
				{
					
					
				}

				// Method BeginWrite
				//		Signature: std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 offset, mscorlib::System::Int32 numBytes, mscorlib::Callback<void  (mscorlib::System::IAsyncResult )> userCallback, mscorlib::System::Object stateObject
				TEST(mscorlib_System_IO_IsolatedStorage_IsolatedStorageFileStream_Fixture,BeginWrite_Test)
				{
					
					
				}

				// Method EndRead
				//		Signature: mscorlib::System::IAsyncResult asyncResult
				TEST(mscorlib_System_IO_IsolatedStorage_IsolatedStorageFileStream_Fixture,EndRead_Test)
				{
					
					
				}

				// Method EndWrite
				//		Signature: mscorlib::System::IAsyncResult asyncResult
				TEST(mscorlib_System_IO_IsolatedStorage_IsolatedStorageFileStream_Fixture,EndWrite_Test)
				{
					
					
				}

				// Method Flush
				//		Signature: 
				TEST(mscorlib_System_IO_IsolatedStorage_IsolatedStorageFileStream_Fixture,Flush_1_Test)
				{
					
					
				}

				// Method Flush
				//		Signature: mscorlib::System::Boolean flushToDisk
				TEST(mscorlib_System_IO_IsolatedStorage_IsolatedStorageFileStream_Fixture,Flush_2_Test)
				{
					
					
				}

				// Method Read
				//		Signature: std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 offset, mscorlib::System::Int32 count
				TEST(mscorlib_System_IO_IsolatedStorage_IsolatedStorageFileStream_Fixture,Read_Test)
				{
					
					
				}

				// Method ReadByte
				//		Signature: 
				TEST(mscorlib_System_IO_IsolatedStorage_IsolatedStorageFileStream_Fixture,ReadByte_Test)
				{
					
					
				}

				// Method Seek
				//		Signature: mscorlib::System::Int64 offset, mscorlib::System::IO::SeekOrigin::__ENUM__ origin
				TEST(mscorlib_System_IO_IsolatedStorage_IsolatedStorageFileStream_Fixture,Seek_Test)
				{
					
					
				}

				// Method SetLength
				//		Signature: mscorlib::System::Int64 value
				TEST(mscorlib_System_IO_IsolatedStorage_IsolatedStorageFileStream_Fixture,SetLength_Test)
				{
					
					
				}

				// Method Write
				//		Signature: std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 offset, mscorlib::System::Int32 count
				TEST(mscorlib_System_IO_IsolatedStorage_IsolatedStorageFileStream_Fixture,Write_Test)
				{
					
					
				}

				// Method WriteByte
				//		Signature: mscorlib::System::Byte value
				TEST(mscorlib_System_IO_IsolatedStorage_IsolatedStorageFileStream_Fixture,WriteByte_Test)
				{
					
					
				}

				//Public Properties Tests
				
				// Property CanRead
				//		Return Type: mscorlib::System::Boolean
				//			Property Get Method
				TEST(mscorlib_System_IO_IsolatedStorage_IsolatedStorageFileStream_Fixture,get_CanRead_Test)
				{
					
					
				}

				// Property CanSeek
				//		Return Type: mscorlib::System::Boolean
				//			Property Get Method
				TEST(mscorlib_System_IO_IsolatedStorage_IsolatedStorageFileStream_Fixture,get_CanSeek_Test)
				{
					
					
				}

				// Property CanWrite
				//		Return Type: mscorlib::System::Boolean
				//			Property Get Method
				TEST(mscorlib_System_IO_IsolatedStorage_IsolatedStorageFileStream_Fixture,get_CanWrite_Test)
				{
					
					
				}

				// Property SafeFileHandle
				//		Return Type: mscorlib::Microsoft::Win32::SafeHandles::SafeFileHandle
				//			Property Get Method
				TEST(mscorlib_System_IO_IsolatedStorage_IsolatedStorageFileStream_Fixture,get_SafeFileHandle_Test)
				{
					
					
				}

				// Property Handle
				//		Return Type: mscorlib::System::IntPtr
				//			Property Get Method
				TEST(mscorlib_System_IO_IsolatedStorage_IsolatedStorageFileStream_Fixture,get_Handle_Test)
				{
					
					
				}

				// Property IsAsync
				//		Return Type: mscorlib::System::Boolean
				//			Property Get Method
				TEST(mscorlib_System_IO_IsolatedStorage_IsolatedStorageFileStream_Fixture,get_IsAsync_Test)
				{
					
					
				}

				// Property Length
				//		Return Type: mscorlib::System::Int64
				//			Property Get Method
				TEST(mscorlib_System_IO_IsolatedStorage_IsolatedStorageFileStream_Fixture,get_Length_Test)
				{
					
					
				}

				// Property Position
				//		Return Type: mscorlib::System::Int64
				//			Property Get Method
				TEST(mscorlib_System_IO_IsolatedStorage_IsolatedStorageFileStream_Fixture,get_Position_Test)
				{
					
					
				}

				// Property Position
				//		Return Type: mscorlib::System::Int64
				//			Property Set Method
				TEST(mscorlib_System_IO_IsolatedStorage_IsolatedStorageFileStream_Fixture,set_Position_Test)
				{
					
					
				}

				// Property Name
				//		Return Type: mscorlib::System::String
				//			Property Get Method
				TEST(mscorlib_System_IO_IsolatedStorage_IsolatedStorageFileStream_Fixture,get_Name_Test)
				{
					
					
				}

				// Property CanTimeout
				//		Return Type: mscorlib::System::Boolean
				//			Property Get Method
				TEST(mscorlib_System_IO_IsolatedStorage_IsolatedStorageFileStream_Fixture,get_CanTimeout_Test)
				{
					
					
				}

				// Property ReadTimeout
				//		Return Type: mscorlib::System::Int32
				//			Property Get Method
				TEST(mscorlib_System_IO_IsolatedStorage_IsolatedStorageFileStream_Fixture,get_ReadTimeout_Test)
				{
					
					
				}

				// Property ReadTimeout
				//		Return Type: mscorlib::System::Int32
				//			Property Set Method
				TEST(mscorlib_System_IO_IsolatedStorage_IsolatedStorageFileStream_Fixture,set_ReadTimeout_Test)
				{
					
					
				}

				// Property WriteTimeout
				//		Return Type: mscorlib::System::Int32
				//			Property Get Method
				TEST(mscorlib_System_IO_IsolatedStorage_IsolatedStorageFileStream_Fixture,get_WriteTimeout_Test)
				{
					
					
				}

				// Property WriteTimeout
				//		Return Type: mscorlib::System::Int32
				//			Property Set Method
				TEST(mscorlib_System_IO_IsolatedStorage_IsolatedStorageFileStream_Fixture,set_WriteTimeout_Test)
				{
					
					
				}


			}
		}
	}
}
