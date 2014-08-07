#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_IO_BUFFEREDSTREAM_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_IO_BUFFEREDSTREAM_H

#include <mscorlib/System/IO/mscorlib_System_IO_Stream.h>
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

			class BufferedStream
				: public mscorlib::System::IO::Stream
				, public virtual mscorlib::System::IDisposable
			{
			public:
				BufferedStream(mscorlib::System::IO::Stream stream)
				: mscorlib::System::IO::Stream(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.BufferedStream"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.IO", "Stream");
					__parameters__[0] = (MonoObject*)stream;
					__native_object__ = Global::New("mscorlib", "System.IO", "BufferedStream", 1, __parameter_types__, __parameters__);
				};
			
				BufferedStream(mscorlib::System::IO::Stream stream, mscorlib::System::Int32 bufferSize)
				: mscorlib::System::IO::Stream(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.BufferedStream"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.IO", "Stream");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int32");
					__parameters__[0] = (MonoObject*)stream;
					__parameters__[1] = &bufferSize;
					__native_object__ = Global::New("mscorlib", "System.IO", "BufferedStream", 2, __parameter_types__, __parameters__);
				};
			
				BufferedStream(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::IO::Stream(nativeTypeInfo)
				, mscorlib::System::IDisposable(NULL)
				{
				};
			
				BufferedStream(MonoObject *nativeObject)
				: mscorlib::System::IO::Stream(nativeObject)
				, mscorlib::System::IDisposable(nativeObject)
				{
				};
			
				~BufferedStream()
				{
				};
			

				BufferedStream & operator=(BufferedStream &value) { __native_object__ = value.GetNativeObject(); return value; };
				bool operator==(BufferedStream &value) { return mscorlib::System::Object::Equals(value); };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual void  Flush() override;
				virtual mscorlib::System::Int64  Seek(mscorlib::System::Int64 offset, mscorlib::System::IO::SeekOrigin::__ENUM__ origin) override;
				virtual void  SetLength(mscorlib::System::Int64 value) override;
				virtual mscorlib::System::Int32  ReadByte() override;
				virtual void  WriteByte(mscorlib::System::Byte value) override;
				virtual mscorlib::System::Int32  Read(std::vector<mscorlib::System::Byte*> array, mscorlib::System::Int32 offset, mscorlib::System::Int32 count) override;
				virtual void  Write(std::vector<mscorlib::System::Byte*> array, mscorlib::System::Int32 offset, mscorlib::System::Int32 count) override;
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_CanRead)) mscorlib::System::Boolean  CanRead;
				__declspec(property(get=get_CanWrite)) mscorlib::System::Boolean  CanWrite;
				__declspec(property(get=get_CanSeek)) mscorlib::System::Boolean  CanSeek;
				__declspec(property(get=get_Length)) mscorlib::System::Int64  Length;
				__declspec(property(get=get_Position, put=set_Position)) mscorlib::System::Int64  Position;
				__declspec(property(get=get_CanTimeout)) mscorlib::System::Boolean  CanTimeout;
				__declspec(property(get=get_ReadTimeout, put=set_ReadTimeout)) mscorlib::System::Int32  ReadTimeout;
				__declspec(property(get=get_WriteTimeout, put=set_WriteTimeout)) mscorlib::System::Int32  WriteTimeout;

				//Get Set Properties Methods
				//	Get:CanRead
				mscorlib::System::Boolean  get_CanRead() const;

				//	Get:CanWrite
				mscorlib::System::Boolean  get_CanWrite() const;

				//	Get:CanSeek
				mscorlib::System::Boolean  get_CanSeek() const;

				//	Get:Length
				mscorlib::System::Int64  get_Length() const;

				//	Get/Set:Position
				mscorlib::System::Int64  get_Position() const;
				void set_Position(mscorlib::System::Int64  value);

				//	Get:CanTimeout
				mscorlib::System::Boolean  get_CanTimeout() const;

				//	Get/Set:ReadTimeout
				mscorlib::System::Int32  get_ReadTimeout() const;
				void set_ReadTimeout(mscorlib::System::Int32  value);

				//	Get/Set:WriteTimeout
				mscorlib::System::Int32  get_WriteTimeout() const;
				void set_WriteTimeout(mscorlib::System::Int32  value);

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
