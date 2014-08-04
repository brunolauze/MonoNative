// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.IO
// Name: MemoryStream
// C++ Typed Name: mscorlib::System::IO::MemoryStream


#include <gtest/gtest.h>
#include <mscorlib/System/IO/mscorlib_System_IO_MemoryStream.h>
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

			//Constructors Tests
			
			//MemoryStream()
			TEST(mscorlib_System_IO_MemoryStream_Fixture,DefaultConstructor)
			{
				
				mscorlib::System::IO::MemoryStream *value = new mscorlib::System::IO::MemoryStream();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//MemoryStream(mscorlib::System::Int32 capacity)
			TEST(mscorlib_System_IO_MemoryStream_Fixture,Constructor_2)
			{
				
				mscorlib::System::IO::MemoryStream *value = new mscorlib::System::IO::MemoryStream();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//MemoryStream(std::vector<mscorlib::System::Byte*> buffer)
			TEST(mscorlib_System_IO_MemoryStream_Fixture,Constructor_3)
			{
				
				mscorlib::System::IO::MemoryStream *value = new mscorlib::System::IO::MemoryStream();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//MemoryStream(std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Boolean writable)
			TEST(mscorlib_System_IO_MemoryStream_Fixture,Constructor_4)
			{
				
				mscorlib::System::IO::MemoryStream *value = new mscorlib::System::IO::MemoryStream();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//MemoryStream(std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 index, mscorlib::System::Int32 count)
			TEST(mscorlib_System_IO_MemoryStream_Fixture,Constructor_5)
			{
				
				mscorlib::System::IO::MemoryStream *value = new mscorlib::System::IO::MemoryStream();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//MemoryStream(std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 index, mscorlib::System::Int32 count, mscorlib::System::Boolean writable)
			TEST(mscorlib_System_IO_MemoryStream_Fixture,Constructor_6)
			{
				
				mscorlib::System::IO::MemoryStream *value = new mscorlib::System::IO::MemoryStream();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//MemoryStream(std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 index, mscorlib::System::Int32 count, mscorlib::System::Boolean writable, mscorlib::System::Boolean publiclyVisible)
			TEST(mscorlib_System_IO_MemoryStream_Fixture,Constructor_7)
			{
				
				mscorlib::System::IO::MemoryStream *value = new mscorlib::System::IO::MemoryStream();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Public Methods Tests
			
			// Method Flush
			//		Signature: 
			TEST(mscorlib_System_IO_MemoryStream_Fixture,Flush_Test)
			{
				
				
			}

			// Method GetBuffer
			//		Signature: 
			TEST(mscorlib_System_IO_MemoryStream_Fixture,GetBuffer_Test)
			{
				
				
			}

			// Method Read
			//		Signature: std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 offset, mscorlib::System::Int32 count
			TEST(mscorlib_System_IO_MemoryStream_Fixture,Read_Test)
			{
				
				
			}

			// Method ReadByte
			//		Signature: 
			TEST(mscorlib_System_IO_MemoryStream_Fixture,ReadByte_Test)
			{
				
				
			}

			// Method Seek
			//		Signature: mscorlib::System::Int64 offset, mscorlib::System::IO::SeekOrigin::__ENUM__ loc
			TEST(mscorlib_System_IO_MemoryStream_Fixture,Seek_Test)
			{
				
				
			}

			// Method SetLength
			//		Signature: mscorlib::System::Int64 value
			TEST(mscorlib_System_IO_MemoryStream_Fixture,SetLength_Test)
			{
				
				
			}

			// Method ToArray
			//		Signature: 
			TEST(mscorlib_System_IO_MemoryStream_Fixture,ToArray_Test)
			{
				
				
			}

			// Method Write
			//		Signature: std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 offset, mscorlib::System::Int32 count
			TEST(mscorlib_System_IO_MemoryStream_Fixture,Write_Test)
			{
				
				
			}

			// Method WriteByte
			//		Signature: mscorlib::System::Byte value
			TEST(mscorlib_System_IO_MemoryStream_Fixture,WriteByte_Test)
			{
				
				
			}

			// Method WriteTo
			//		Signature: mscorlib::System::IO::Stream stream
			TEST(mscorlib_System_IO_MemoryStream_Fixture,WriteTo_Test)
			{
				
				
			}

			// Method CopyToAsync
			//		Signature: mscorlib::System::IO::Stream destination, mscorlib::System::Int32 bufferSize, mscorlib::System::Threading::CancellationToken cancellationToken
			TEST(mscorlib_System_IO_MemoryStream_Fixture,CopyToAsync_Test)
			{
				
				
			}

			// Method FlushAsync
			//		Signature: mscorlib::System::Threading::CancellationToken cancellationToken
			TEST(mscorlib_System_IO_MemoryStream_Fixture,FlushAsync_Test)
			{
				
				
			}

			// Method ReadAsync
			//		Signature: std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 offset, mscorlib::System::Int32 count, mscorlib::System::Threading::CancellationToken cancellationToken
			TEST(mscorlib_System_IO_MemoryStream_Fixture,ReadAsync_Test)
			{
				
				
			}

			// Method WriteAsync
			//		Signature: std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 offset, mscorlib::System::Int32 count, mscorlib::System::Threading::CancellationToken cancellationToken
			TEST(mscorlib_System_IO_MemoryStream_Fixture,WriteAsync_Test)
			{
				
				
			}

			//Public Properties Tests
			
			// Property CanRead
			//		Return Type: mscorlib::System::Boolean
			//			Property Get Method
			TEST(mscorlib_System_IO_MemoryStream_Fixture,get_CanRead_Test)
			{
				
				
			}

			// Property CanSeek
			//		Return Type: mscorlib::System::Boolean
			//			Property Get Method
			TEST(mscorlib_System_IO_MemoryStream_Fixture,get_CanSeek_Test)
			{
				
				
			}

			// Property CanWrite
			//		Return Type: mscorlib::System::Boolean
			//			Property Get Method
			TEST(mscorlib_System_IO_MemoryStream_Fixture,get_CanWrite_Test)
			{
				
				
			}

			// Property Capacity
			//		Return Type: mscorlib::System::Int32
			//			Property Get Method
			TEST(mscorlib_System_IO_MemoryStream_Fixture,get_Capacity_Test)
			{
				
				
			}

			// Property Capacity
			//		Return Type: mscorlib::System::Int32
			//			Property Set Method
			TEST(mscorlib_System_IO_MemoryStream_Fixture,set_Capacity_Test)
			{
				
				
			}

			// Property Length
			//		Return Type: mscorlib::System::Int64
			//			Property Get Method
			TEST(mscorlib_System_IO_MemoryStream_Fixture,get_Length_Test)
			{
				
				
			}

			// Property Position
			//		Return Type: mscorlib::System::Int64
			//			Property Get Method
			TEST(mscorlib_System_IO_MemoryStream_Fixture,get_Position_Test)
			{
				
				
			}

			// Property Position
			//		Return Type: mscorlib::System::Int64
			//			Property Set Method
			TEST(mscorlib_System_IO_MemoryStream_Fixture,set_Position_Test)
			{
				
				
			}

			// Property CanTimeout
			//		Return Type: mscorlib::System::Boolean
			//			Property Get Method
			TEST(mscorlib_System_IO_MemoryStream_Fixture,get_CanTimeout_Test)
			{
				
				
			}

			// Property ReadTimeout
			//		Return Type: mscorlib::System::Int32
			//			Property Get Method
			TEST(mscorlib_System_IO_MemoryStream_Fixture,get_ReadTimeout_Test)
			{
				
				
			}

			// Property ReadTimeout
			//		Return Type: mscorlib::System::Int32
			//			Property Set Method
			TEST(mscorlib_System_IO_MemoryStream_Fixture,set_ReadTimeout_Test)
			{
				
				
			}

			// Property WriteTimeout
			//		Return Type: mscorlib::System::Int32
			//			Property Get Method
			TEST(mscorlib_System_IO_MemoryStream_Fixture,get_WriteTimeout_Test)
			{
				
				
			}

			// Property WriteTimeout
			//		Return Type: mscorlib::System::Int32
			//			Property Set Method
			TEST(mscorlib_System_IO_MemoryStream_Fixture,set_WriteTimeout_Test)
			{
				
				
			}


		}
	}
}
