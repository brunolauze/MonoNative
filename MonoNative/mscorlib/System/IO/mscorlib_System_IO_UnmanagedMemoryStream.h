#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_IO_UNMANAGEDMEMORYSTREAM_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_IO_UNMANAGEDMEMORYSTREAM_H

#include <mscorlib/System/IO/mscorlib_System_IO_Stream.h>
#include <mscorlib/System/IO/mscorlib_System_IO_FileAccess.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_SafeBuffer.h>
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

			class UnmanagedMemoryStream
				: public mscorlib::System::IO::Stream
				, public virtual mscorlib::System::IDisposable
			{
			public:
				UnmanagedMemoryStream(mscorlib::System::Byte* pointer, mscorlib::System::Int64 length)
				: mscorlib::System::IO::Stream(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.UnmanagedMemoryStream"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Byte*");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int64");
					__parameters__[0] = pointer->GetNativeObject();
					__parameters__[1] = &length;
					__native_object__ = Global::New("mscorlib", "System.IO", "UnmanagedMemoryStream", 2, __parameter_types__, __parameters__);
				};
			
				UnmanagedMemoryStream(mscorlib::System::Byte* pointer, mscorlib::System::Int64 length, mscorlib::System::Int64 capacity, mscorlib::System::IO::FileAccess::__ENUM__ access)
				: mscorlib::System::IO::Stream(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.UnmanagedMemoryStream"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Byte*");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int64");
					__parameter_types__[2] = Global::GetType("mscorlib", "System", "Int64");
					__parameter_types__[3] = Global::GetType("mscorlib", "System.IO", "FileAccess");
					__parameters__[0] = pointer->GetNativeObject();
					__parameters__[1] = &length;
					__parameters__[2] = &capacity;
					__parameters__[3] = reinterpret_cast<void*>(access);
					__native_object__ = Global::New("mscorlib", "System.IO", "UnmanagedMemoryStream", 4, __parameter_types__, __parameters__);
				};
			
				UnmanagedMemoryStream(mscorlib::System::Runtime::InteropServices::SafeBuffer buffer, mscorlib::System::Int64 offset, mscorlib::System::Int64 length)
				: mscorlib::System::IO::Stream(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.UnmanagedMemoryStream"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.Runtime.InteropServices", "SafeBuffer");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int64");
					__parameter_types__[2] = Global::GetType("mscorlib", "System", "Int64");
					__parameters__[0] = (MonoObject*)buffer;
					__parameters__[1] = &offset;
					__parameters__[2] = &length;
					__native_object__ = Global::New("mscorlib", "System.IO", "UnmanagedMemoryStream", 3, __parameter_types__, __parameters__);
				};
			
				UnmanagedMemoryStream(mscorlib::System::Runtime::InteropServices::SafeBuffer buffer, mscorlib::System::Int64 offset, mscorlib::System::Int64 length, mscorlib::System::IO::FileAccess::__ENUM__ access)
				: mscorlib::System::IO::Stream(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.UnmanagedMemoryStream"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.Runtime.InteropServices", "SafeBuffer");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int64");
					__parameter_types__[2] = Global::GetType("mscorlib", "System", "Int64");
					__parameter_types__[3] = Global::GetType("mscorlib", "System.IO", "FileAccess");
					__parameters__[0] = (MonoObject*)buffer;
					__parameters__[1] = &offset;
					__parameters__[2] = &length;
					__parameters__[3] = reinterpret_cast<void*>(access);
					__native_object__ = Global::New("mscorlib", "System.IO", "UnmanagedMemoryStream", 4, __parameter_types__, __parameters__);
				};
			
				UnmanagedMemoryStream(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::IO::Stream(nativeTypeInfo)
				, mscorlib::System::IDisposable(NULL)
				{
				};
			
				UnmanagedMemoryStream(MonoObject *nativeObject)
				: mscorlib::System::IO::Stream(nativeObject)
				, mscorlib::System::IDisposable(nativeObject)
				{
				};
			
				~UnmanagedMemoryStream()
				{
				};
			

				UnmanagedMemoryStream & operator=(UnmanagedMemoryStream &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual mscorlib::System::Int32  Read(std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 offset, mscorlib::System::Int32 count) override;
				virtual mscorlib::System::Int32  ReadByte() override;
				virtual mscorlib::System::Int64  Seek(mscorlib::System::Int64 offset, mscorlib::System::IO::SeekOrigin::__ENUM__ loc) override;
				virtual void  SetLength(mscorlib::System::Int64 value) override;
				virtual void  Flush() override;
				virtual void  Write(std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 offset, mscorlib::System::Int32 count) override;
				virtual void  WriteByte(mscorlib::System::Byte value) override;
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_CanRead)) mscorlib::System::Boolean  CanRead;
				__declspec(property(get=get_CanSeek)) mscorlib::System::Boolean  CanSeek;
				__declspec(property(get=get_CanWrite)) mscorlib::System::Boolean  CanWrite;
				__declspec(property(get=get_Capacity)) mscorlib::System::Int64  Capacity;
				__declspec(property(get=get_Length)) mscorlib::System::Int64  Length;
				__declspec(property(get=get_Position, put=set_Position)) mscorlib::System::Int64  Position;
				__declspec(property(get=get_PositionPointer, put=set_PositionPointer)) mscorlib::System::Byte*  PositionPointer;
				__declspec(property(get=get_CanTimeout)) mscorlib::System::Boolean  CanTimeout;
				__declspec(property(get=get_ReadTimeout, put=set_ReadTimeout)) mscorlib::System::Int32  ReadTimeout;
				__declspec(property(get=get_WriteTimeout, put=set_WriteTimeout)) mscorlib::System::Int32  WriteTimeout;

				//Get Set Properties Methods
				//	Get:CanRead
				mscorlib::System::Boolean  get_CanRead();

				//	Get:CanSeek
				mscorlib::System::Boolean  get_CanSeek();

				//	Get:CanWrite
				mscorlib::System::Boolean  get_CanWrite();

				//	Get:Capacity
				mscorlib::System::Int64  get_Capacity();

				//	Get:Length
				mscorlib::System::Int64  get_Length();

				//	Get/Set:Position
				mscorlib::System::Int64  get_Position();
				void set_Position(mscorlib::System::Int64  value);

				//	Get/Set:PositionPointer
				mscorlib::System::Byte*  get_PositionPointer();
				void set_PositionPointer(mscorlib::System::Byte*  value);

				//	Get:CanTimeout
				mscorlib::System::Boolean  get_CanTimeout();

				//	Get/Set:ReadTimeout
				mscorlib::System::Int32  get_ReadTimeout();
				void set_ReadTimeout(mscorlib::System::Int32  value);

				//	Get/Set:WriteTimeout
				mscorlib::System::Int32  get_WriteTimeout();
				void set_WriteTimeout(mscorlib::System::Int32  value);

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
