#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_IO_MEMORYSTREAM_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_IO_MEMORYSTREAM_H

#include <mscorlib/System/IO/mscorlib_System_IO_Stream.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/mscorlib_System_IDisposable.h>
#include <mscorlib/System/IO/mscorlib_System_IO_SeekOrigin.h>
#include <mscorlib/System/Threading/Tasks/mscorlib_System_Threading_Tasks_Task_1.h>
#include <mscorlib/System/mscorlib_System_IAsyncResult.h>
#include <mscorlib/System/mscorlib_System_Object.h>

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

		class Type;
		class String;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace IO
		{

			class MemoryStream
				: public mscorlib::System::IO::Stream
				, public virtual mscorlib::System::IDisposable
			{
			public:
				MemoryStream()
				: mscorlib::System::IO::Stream(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.MemoryStream"))
				, mscorlib::System::IDisposable(NULL)
				{
					__native_object__ = Global::New("mscorlib", "System.IO", "MemoryStream");
				};
			
				MemoryStream(mscorlib::System::Int32 capacity)
				: mscorlib::System::IO::Stream(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.MemoryStream"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
					__parameters__[0] = &capacity;
					__native_object__ = Global::New("mscorlib", "System.IO", "MemoryStream", 1, __parameter_types__, __parameters__);
				};
			
				MemoryStream(std::vector<mscorlib::System::Byte*> buffer)
				: mscorlib::System::IO::Stream(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.MemoryStream"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
					__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(buffer, "mscorlib", "System", "Byte");
					__native_object__ = Global::New("mscorlib", "System.IO", "MemoryStream", 1, __parameter_types__, __parameters__);
				};
			
				MemoryStream(std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Boolean writable)
				: mscorlib::System::IO::Stream(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.MemoryStream"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Boolean");
					__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(buffer, "mscorlib", "System", "Byte");
					__parameters__[1] = reinterpret_cast<void*>(writable);
					__native_object__ = Global::New("mscorlib", "System.IO", "MemoryStream", 2, __parameter_types__, __parameters__);
				};
			
				MemoryStream(std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 index, mscorlib::System::Int32 count)
				: mscorlib::System::IO::Stream(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.MemoryStream"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int32");
					__parameter_types__[2] = Global::GetType("mscorlib", "System", "Int32");
					__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(buffer, "mscorlib", "System", "Byte");
					__parameters__[1] = &index;
					__parameters__[2] = &count;
					__native_object__ = Global::New("mscorlib", "System.IO", "MemoryStream", 3, __parameter_types__, __parameters__);
				};
			
				MemoryStream(std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 index, mscorlib::System::Int32 count, mscorlib::System::Boolean writable)
				: mscorlib::System::IO::Stream(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.MemoryStream"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int32");
					__parameter_types__[2] = Global::GetType("mscorlib", "System", "Int32");
					__parameter_types__[3] = Global::GetType("mscorlib", "System", "Boolean");
					__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(buffer, "mscorlib", "System", "Byte");
					__parameters__[1] = &index;
					__parameters__[2] = &count;
					__parameters__[3] = reinterpret_cast<void*>(writable);
					__native_object__ = Global::New("mscorlib", "System.IO", "MemoryStream", 4, __parameter_types__, __parameters__);
				};
			
				MemoryStream(std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 index, mscorlib::System::Int32 count, mscorlib::System::Boolean writable, mscorlib::System::Boolean publiclyVisible)
				: mscorlib::System::IO::Stream(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.MemoryStream"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[5];
					void *__parameters__[5];
					__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int32");
					__parameter_types__[2] = Global::GetType("mscorlib", "System", "Int32");
					__parameter_types__[3] = Global::GetType("mscorlib", "System", "Boolean");
					__parameter_types__[4] = Global::GetType("mscorlib", "System", "Boolean");
					__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(buffer, "mscorlib", "System", "Byte");
					__parameters__[1] = &index;
					__parameters__[2] = &count;
					__parameters__[3] = reinterpret_cast<void*>(writable);
					__parameters__[4] = reinterpret_cast<void*>(publiclyVisible);
					__native_object__ = Global::New("mscorlib", "System.IO", "MemoryStream", 5, __parameter_types__, __parameters__);
				};
			
				MemoryStream(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::IO::Stream(nativeTypeInfo)
				, mscorlib::System::IDisposable(NULL)
				{
				};
			
				MemoryStream(MonoObject *nativeObject)
				: mscorlib::System::IO::Stream(nativeObject)
				, mscorlib::System::IDisposable(nativeObject)
				{
				};
			
				~MemoryStream()
				{
				};
			

				MemoryStream & operator=(MemoryStream &value) { __native_object__ = value.GetNativeObject(); return value; };
				bool operator==(MemoryStream &value) { return mscorlib::System::Object::Equals(value); };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual void  Flush() override;
				virtual std::vector<mscorlib::System::Byte*>  GetBuffer();
				virtual mscorlib::System::Int32  Read(std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 offset, mscorlib::System::Int32 count) override;
				virtual mscorlib::System::Int32  ReadByte() override;
				virtual mscorlib::System::Int64  Seek(mscorlib::System::Int64 offset, mscorlib::System::IO::SeekOrigin::__ENUM__ loc) override;
				virtual void  SetLength(mscorlib::System::Int64 value) override;
				virtual std::vector<mscorlib::System::Byte*>  ToArray();
				virtual void  Write(std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 offset, mscorlib::System::Int32 count) override;
				virtual void  WriteByte(mscorlib::System::Byte value) override;
				virtual void  WriteTo(mscorlib::System::IO::Stream stream);
				virtual mscorlib::System::Threading::Tasks::TaskBase  CopyToAsync(mscorlib::System::IO::Stream destination, mscorlib::System::Int32 bufferSize, mscorlib::System::Threading::CancellationToken cancellationToken) override;
				virtual mscorlib::System::Threading::Tasks::TaskBase  FlushAsync(mscorlib::System::Threading::CancellationToken cancellationToken) override;
				virtual mscorlib::System::Threading::Tasks::Task<mscorlib::System::Int32>  ReadAsync(std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 offset, mscorlib::System::Int32 count, mscorlib::System::Threading::CancellationToken cancellationToken) override;
				virtual mscorlib::System::Threading::Tasks::TaskBase  WriteAsync(std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 offset, mscorlib::System::Int32 count, mscorlib::System::Threading::CancellationToken cancellationToken) override;
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_CanRead)) mscorlib::System::Boolean  CanRead;
				__declspec(property(get=get_CanSeek)) mscorlib::System::Boolean  CanSeek;
				__declspec(property(get=get_CanWrite)) mscorlib::System::Boolean  CanWrite;
				__declspec(property(get=get_Capacity, put=set_Capacity)) mscorlib::System::Int32  Capacity;
				__declspec(property(get=get_Length)) mscorlib::System::Int64  Length;
				__declspec(property(get=get_Position, put=set_Position)) mscorlib::System::Int64  Position;
				__declspec(property(get=get_CanTimeout)) mscorlib::System::Boolean  CanTimeout;
				__declspec(property(get=get_ReadTimeout, put=set_ReadTimeout)) mscorlib::System::Int32  ReadTimeout;
				__declspec(property(get=get_WriteTimeout, put=set_WriteTimeout)) mscorlib::System::Int32  WriteTimeout;

				//Get Set Properties Methods
				//	Get:CanRead
				mscorlib::System::Boolean  get_CanRead() const;

				//	Get:CanSeek
				mscorlib::System::Boolean  get_CanSeek() const;

				//	Get:CanWrite
				mscorlib::System::Boolean  get_CanWrite() const;

				//	Get/Set:Capacity
				mscorlib::System::Int32  get_Capacity() const;
				void set_Capacity(mscorlib::System::Int32  value);

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
