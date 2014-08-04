// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.IO
// Name: Stream
// C++ Typed Name: mscorlib::System::IO::Stream


#include <gtest/gtest.h>
#include <mscorlib/System/IO/mscorlib_System_IO_Stream.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/Threading/Tasks/mscorlib_System_Threading_Tasks_Task.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_CancellationToken.h>
#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_ObjRef.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace IO
		{

			//Public Methods Tests
			
			// Method Dispose
			//		Signature: 
			TEST(mscorlib_System_IO_Stream_Fixture,Dispose_Test)
			{
				
				
			}

			// Method Close
			//		Signature: 
			TEST(mscorlib_System_IO_Stream_Fixture,Close_Test)
			{
				
				
			}

			// Method Flush
			//		Signature: 
			TEST(mscorlib_System_IO_Stream_Fixture,Flush_Test)
			{
				
				
			}

			// Method Read
			//		Signature: std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 offset, mscorlib::System::Int32 count
			TEST(mscorlib_System_IO_Stream_Fixture,Read_Test)
			{
				
				
			}

			// Method ReadByte
			//		Signature: 
			TEST(mscorlib_System_IO_Stream_Fixture,ReadByte_Test)
			{
				
				
			}

			// Method Seek
			//		Signature: mscorlib::System::Int64 offset, mscorlib::System::IO::SeekOrigin::__ENUM__ origin
			TEST(mscorlib_System_IO_Stream_Fixture,Seek_Test)
			{
				
				
			}

			// Method SetLength
			//		Signature: mscorlib::System::Int64 value
			TEST(mscorlib_System_IO_Stream_Fixture,SetLength_Test)
			{
				
				
			}

			// Method Write
			//		Signature: std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 offset, mscorlib::System::Int32 count
			TEST(mscorlib_System_IO_Stream_Fixture,Write_Test)
			{
				
				
			}

			// Method WriteByte
			//		Signature: mscorlib::System::Byte value
			TEST(mscorlib_System_IO_Stream_Fixture,WriteByte_Test)
			{
				
				
			}

			// Method BeginRead
			//		Signature: std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 offset, mscorlib::System::Int32 count, mscorlib::Callback<void  (mscorlib::System::IAsyncResult )> callback, mscorlib::System::Object state
			TEST(mscorlib_System_IO_Stream_Fixture,BeginRead_Test)
			{
				
				
			}

			// Method BeginWrite
			//		Signature: std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 offset, mscorlib::System::Int32 count, mscorlib::Callback<void  (mscorlib::System::IAsyncResult )> callback, mscorlib::System::Object state
			TEST(mscorlib_System_IO_Stream_Fixture,BeginWrite_Test)
			{
				
				
			}

			// Method EndRead
			//		Signature: mscorlib::System::IAsyncResult asyncResult
			TEST(mscorlib_System_IO_Stream_Fixture,EndRead_Test)
			{
				
				
			}

			// Method EndWrite
			//		Signature: mscorlib::System::IAsyncResult asyncResult
			TEST(mscorlib_System_IO_Stream_Fixture,EndWrite_Test)
			{
				
				
			}

			// Method CopyTo
			//		Signature: mscorlib::System::IO::Stream destination
			TEST(mscorlib_System_IO_Stream_Fixture,CopyTo_1_Test)
			{
				
				
			}

			// Method CopyTo
			//		Signature: mscorlib::System::IO::Stream destination, mscorlib::System::Int32 bufferSize
			TEST(mscorlib_System_IO_Stream_Fixture,CopyTo_2_Test)
			{
				
				
			}

			// Method CopyToAsync
			//		Signature: mscorlib::System::IO::Stream destination
			TEST(mscorlib_System_IO_Stream_Fixture,CopyToAsync_1_Test)
			{
				
				
			}

			// Method CopyToAsync
			//		Signature: mscorlib::System::IO::Stream destination, mscorlib::System::Int32 bufferSize
			TEST(mscorlib_System_IO_Stream_Fixture,CopyToAsync_2_Test)
			{
				
				
			}

			// Method CopyToAsync
			//		Signature: mscorlib::System::IO::Stream destination, mscorlib::System::Int32 bufferSize, mscorlib::System::Threading::CancellationToken cancellationToken
			TEST(mscorlib_System_IO_Stream_Fixture,CopyToAsync_3_Test)
			{
				
				
			}

			// Method FlushAsync
			//		Signature: 
			TEST(mscorlib_System_IO_Stream_Fixture,FlushAsync_1_Test)
			{
				
				
			}

			// Method FlushAsync
			//		Signature: mscorlib::System::Threading::CancellationToken cancellationToken
			TEST(mscorlib_System_IO_Stream_Fixture,FlushAsync_2_Test)
			{
				
				
			}

			// Method ReadAsync
			//		Signature: std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 offset, mscorlib::System::Int32 count
			TEST(mscorlib_System_IO_Stream_Fixture,ReadAsync_1_Test)
			{
				
				
			}

			// Method ReadAsync
			//		Signature: std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 offset, mscorlib::System::Int32 count, mscorlib::System::Threading::CancellationToken cancellationToken
			TEST(mscorlib_System_IO_Stream_Fixture,ReadAsync_2_Test)
			{
				
				
			}

			// Method WriteAsync
			//		Signature: std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 offset, mscorlib::System::Int32 count
			TEST(mscorlib_System_IO_Stream_Fixture,WriteAsync_1_Test)
			{
				
				
			}

			// Method WriteAsync
			//		Signature: std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 offset, mscorlib::System::Int32 count, mscorlib::System::Threading::CancellationToken cancellationToken
			TEST(mscorlib_System_IO_Stream_Fixture,WriteAsync_2_Test)
			{
				
				
			}

			//Public Static Methods Tests
			
			// Method Synchronized
			//		Signature: mscorlib::System::IO::Stream stream
			TEST(mscorlib_System_IO_Stream_Fixture,Synchronized_StaticTest)
			{
				
				
			}

			//Public Properties Tests
			
			// Property CanRead
			//		Return Type: mscorlib::System::Boolean
			//			Property Get Method
			TEST(mscorlib_System_IO_Stream_Fixture,get_CanRead_Test)
			{
				
				
			}

			// Property CanSeek
			//		Return Type: mscorlib::System::Boolean
			//			Property Get Method
			TEST(mscorlib_System_IO_Stream_Fixture,get_CanSeek_Test)
			{
				
				
			}

			// Property CanWrite
			//		Return Type: mscorlib::System::Boolean
			//			Property Get Method
			TEST(mscorlib_System_IO_Stream_Fixture,get_CanWrite_Test)
			{
				
				
			}

			// Property CanTimeout
			//		Return Type: mscorlib::System::Boolean
			//			Property Get Method
			TEST(mscorlib_System_IO_Stream_Fixture,get_CanTimeout_Test)
			{
				
				
			}

			// Property Length
			//		Return Type: mscorlib::System::Int64
			//			Property Get Method
			TEST(mscorlib_System_IO_Stream_Fixture,get_Length_Test)
			{
				
				
			}

			// Property Position
			//		Return Type: mscorlib::System::Int64
			//			Property Get Method
			TEST(mscorlib_System_IO_Stream_Fixture,get_Position_Test)
			{
				
				
			}

			// Property Position
			//		Return Type: mscorlib::System::Int64
			//			Property Set Method
			TEST(mscorlib_System_IO_Stream_Fixture,set_Position_Test)
			{
				
				
			}

			// Property ReadTimeout
			//		Return Type: mscorlib::System::Int32
			//			Property Get Method
			TEST(mscorlib_System_IO_Stream_Fixture,get_ReadTimeout_Test)
			{
				
				
			}

			// Property ReadTimeout
			//		Return Type: mscorlib::System::Int32
			//			Property Set Method
			TEST(mscorlib_System_IO_Stream_Fixture,set_ReadTimeout_Test)
			{
				
				
			}

			// Property WriteTimeout
			//		Return Type: mscorlib::System::Int32
			//			Property Get Method
			TEST(mscorlib_System_IO_Stream_Fixture,get_WriteTimeout_Test)
			{
				
				
			}

			// Property WriteTimeout
			//		Return Type: mscorlib::System::Int32
			//			Property Set Method
			TEST(mscorlib_System_IO_Stream_Fixture,set_WriteTimeout_Test)
			{
				
				
			}


		}
	}
}
