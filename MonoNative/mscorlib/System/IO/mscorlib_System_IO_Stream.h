#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_IO_STREAM_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_IO_STREAM_H

#include <mscorlib/System/mscorlib_System_MarshalByRefObject.h>
#include <mscorlib/System/mscorlib_System_IDisposable.h>
#include <mscorlib/System/IO/mscorlib_System_IO_SeekOrigin.h>
#include <mscorlib/System/mscorlib_System_IAsyncResult.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Threading/Tasks/mscorlib_System_Threading_Tasks_Task_1.h>

namespace mscorlib
{
	namespace System
	{

		class Byte;
		class Type;
		class String;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{
			namespace Tasks
			{

				class TaskBase;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			class CancellationToken;
			

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

				class ObjRef;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace IO
		{

			class Stream
				: public mscorlib::System::MarshalByRefObject
				, public virtual mscorlib::System::IDisposable
			{
			public:
				Stream(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::MarshalByRefObject(nativeTypeInfo)
				, mscorlib::System::IDisposable(NULL)
				{
				};
			
				Stream(MonoObject *nativeObject)
				: mscorlib::System::MarshalByRefObject(nativeObject)
				, mscorlib::System::IDisposable(nativeObject)
				{
				};
			
				~Stream()
				{
				};
			

				Stream & operator=(Stream &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual void  Dispose();
				virtual void  Close();
				static mscorlib::System::IO::Stream  Synchronized(mscorlib::System::IO::Stream stream);
				virtual void  Flush();
				virtual mscorlib::System::Int32  Read(std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 offset, mscorlib::System::Int32 count);
				virtual mscorlib::System::Int32  ReadByte();
				virtual mscorlib::System::Int64  Seek(mscorlib::System::Int64 offset, mscorlib::System::IO::SeekOrigin::__ENUM__ origin);
				virtual void  SetLength(mscorlib::System::Int64 value);
				virtual void  Write(std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 offset, mscorlib::System::Int32 count);
				virtual void  WriteByte(mscorlib::System::Byte value);
				virtual mscorlib::System::IAsyncResult  BeginRead(std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 offset, mscorlib::System::Int32 count, mscorlib::Callback<void  (mscorlib::System::IAsyncResult )> callback, mscorlib::System::Object state);
				virtual mscorlib::System::IAsyncResult  BeginWrite(std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 offset, mscorlib::System::Int32 count, mscorlib::Callback<void  (mscorlib::System::IAsyncResult )> callback, mscorlib::System::Object state);
				virtual mscorlib::System::Int32  EndRead(mscorlib::System::IAsyncResult asyncResult);
				virtual void  EndWrite(mscorlib::System::IAsyncResult asyncResult);
				void  CopyTo(mscorlib::System::IO::Stream destination);
				void  CopyTo(mscorlib::System::IO::Stream destination, mscorlib::System::Int32 bufferSize);
				mscorlib::System::Threading::Tasks::TaskBase  CopyToAsync(mscorlib::System::IO::Stream destination);
				mscorlib::System::Threading::Tasks::TaskBase  CopyToAsync(mscorlib::System::IO::Stream destination, mscorlib::System::Int32 bufferSize);
				virtual mscorlib::System::Threading::Tasks::TaskBase  CopyToAsync(mscorlib::System::IO::Stream destination, mscorlib::System::Int32 bufferSize, mscorlib::System::Threading::CancellationToken cancellationToken);
				mscorlib::System::Threading::Tasks::TaskBase  FlushAsync();
				virtual mscorlib::System::Threading::Tasks::TaskBase  FlushAsync(mscorlib::System::Threading::CancellationToken cancellationToken);
				mscorlib::System::Threading::Tasks::Task<mscorlib::System::Int32>  ReadAsync(std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 offset, mscorlib::System::Int32 count);
				virtual mscorlib::System::Threading::Tasks::Task<mscorlib::System::Int32>  ReadAsync(std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 offset, mscorlib::System::Int32 count, mscorlib::System::Threading::CancellationToken cancellationToken);
				mscorlib::System::Threading::Tasks::TaskBase  WriteAsync(std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 offset, mscorlib::System::Int32 count);
				virtual mscorlib::System::Threading::Tasks::TaskBase  WriteAsync(std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 offset, mscorlib::System::Int32 count, mscorlib::System::Threading::CancellationToken cancellationToken);
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_CanRead)) mscorlib::System::Boolean  CanRead;
				__declspec(property(get=get_CanSeek)) mscorlib::System::Boolean  CanSeek;
				__declspec(property(get=get_CanWrite)) mscorlib::System::Boolean  CanWrite;
				__declspec(property(get=get_CanTimeout)) mscorlib::System::Boolean  CanTimeout;
				__declspec(property(get=get_Length)) mscorlib::System::Int64  Length;
				__declspec(property(get=get_Position, put=set_Position)) mscorlib::System::Int64  Position;
				__declspec(property(get=get_ReadTimeout, put=set_ReadTimeout)) mscorlib::System::Int32  ReadTimeout;
				__declspec(property(get=get_WriteTimeout, put=set_WriteTimeout)) mscorlib::System::Int32  WriteTimeout;

				//Public Static Fields
				static Property<mscorlib::System::IO::Stream , mscorlib::System::IO::Stream> Null;

				//Get Set Properties Methods
				//	Get:CanRead
				mscorlib::System::Boolean  get_CanRead() const;

				//	Get:CanSeek
				mscorlib::System::Boolean  get_CanSeek() const;

				//	Get:CanWrite
				mscorlib::System::Boolean  get_CanWrite() const;

				//	Get:CanTimeout
				mscorlib::System::Boolean  get_CanTimeout() const;

				//	Get:Length
				mscorlib::System::Int64  get_Length() const;

				//	Get/Set:Position
				mscorlib::System::Int64  get_Position() const;
				void set_Position(mscorlib::System::Int64  value);

				//	Get/Set:ReadTimeout
				mscorlib::System::Int32  get_ReadTimeout() const;
				void set_ReadTimeout(mscorlib::System::Int32  value);

				//	Get/Set:WriteTimeout
				mscorlib::System::Int32  get_WriteTimeout() const;
				void set_WriteTimeout(mscorlib::System::Int32  value);

				//	Get/Set:Null
				static mscorlib::System::IO::Stream  get_Null();
				static void set_Null(mscorlib::System::IO::Stream  value);

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
