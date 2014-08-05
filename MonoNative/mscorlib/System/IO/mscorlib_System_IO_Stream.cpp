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

			//Public Methods
			void Stream::Dispose()
			{
					Global::InvokeMethod("mscorlib", "System.IO", "Stream", 0, NULL, "Dispose", __native_object__, 0, NULL, NULL, NULL);
			}

			void Stream::Close()
			{
					Global::InvokeMethod("mscorlib", "System.IO", "Stream", 0, NULL, "Close", __native_object__, 0, NULL, NULL, NULL);
			}

			mscorlib::System::IO::Stream Stream::Synchronized(mscorlib::System::IO::Stream stream)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(stream).name());
					__parameters__[0] = (MonoObject*)stream;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Stream", 0, NULL, "Synchronized", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::IO::Stream(__result__);
			}

			void Stream::Flush()
			{
					Global::InvokeMethod("mscorlib", "System.IO", "Stream", 0, NULL, "Flush", __native_object__, 0, NULL, NULL, NULL);
			}

			mscorlib::System::Int32 Stream::Read(std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 offset, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(buffer).name()))->eklass);
					__parameter_types__[1] = Global::GetType(typeid(offset).name());
					__parameter_types__[2] = Global::GetType(typeid(count).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(buffer, typeid(mscorlib::System::Byte).name());
					__parameters__[1] = &offset;
					__parameters__[2] = &count;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Stream", 0, NULL, "Read", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 Stream::ReadByte()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Stream", 0, NULL, "ReadByte", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int64 Stream::Seek(mscorlib::System::Int64 offset, mscorlib::System::IO::SeekOrigin::__ENUM__ origin)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(offset).name());
					__parameter_types__[1] = Global::GetType(typeid(origin).name());
					__parameters__[0] = &offset;
					__parameters__[1] = reinterpret_cast<void*>(origin);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Stream", 0, NULL, "Seek", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
			}

			void Stream::SetLength(mscorlib::System::Int64 value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					Global::InvokeMethod("mscorlib", "System.IO", "Stream", 0, NULL, "SetLength", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void Stream::Write(std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 offset, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(buffer).name()))->eklass);
					__parameter_types__[1] = Global::GetType(typeid(offset).name());
					__parameter_types__[2] = Global::GetType(typeid(count).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(buffer, typeid(mscorlib::System::Byte).name());
					__parameters__[1] = &offset;
					__parameters__[2] = &count;
					Global::InvokeMethod("mscorlib", "System.IO", "Stream", 0, NULL, "Write", __native_object__, 3, __parameter_types__, __parameters__, NULL);
			}

			void Stream::WriteByte(mscorlib::System::Byte value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.IO", "Stream", 0, NULL, "WriteByte", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::IAsyncResult Stream::BeginRead(std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 offset, mscorlib::System::Int32 count, mscorlib::Callback<void  (mscorlib::System::IAsyncResult )> callback, mscorlib::System::Object state)
			{
					MonoType *__parameter_types__[5];
					void *__parameters__[5];
					__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(buffer).name()))->eklass);
					__parameter_types__[1] = Global::GetType(typeid(offset).name());
					__parameter_types__[2] = Global::GetType(typeid(count).name());
					__parameter_types__[3] = Global::GetType(typeid(callback).name());
					__parameter_types__[4] = Global::GetType(typeid(state).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(buffer, typeid(mscorlib::System::Byte).name());
					__parameters__[1] = &offset;
					__parameters__[2] = &count;
					__parameters__[3] = &callback;
					__parameters__[4] = (MonoObject*)state;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Stream", 0, NULL, "BeginRead", __native_object__, 5, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::IAsyncResult(__result__);
			}

			mscorlib::System::IAsyncResult Stream::BeginWrite(std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 offset, mscorlib::System::Int32 count, mscorlib::Callback<void  (mscorlib::System::IAsyncResult )> callback, mscorlib::System::Object state)
			{
					MonoType *__parameter_types__[5];
					void *__parameters__[5];
					__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(buffer).name()))->eklass);
					__parameter_types__[1] = Global::GetType(typeid(offset).name());
					__parameter_types__[2] = Global::GetType(typeid(count).name());
					__parameter_types__[3] = Global::GetType(typeid(callback).name());
					__parameter_types__[4] = Global::GetType(typeid(state).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(buffer, typeid(mscorlib::System::Byte).name());
					__parameters__[1] = &offset;
					__parameters__[2] = &count;
					__parameters__[3] = &callback;
					__parameters__[4] = (MonoObject*)state;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Stream", 0, NULL, "BeginWrite", __native_object__, 5, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::IAsyncResult(__result__);
			}

			mscorlib::System::Int32 Stream::EndRead(mscorlib::System::IAsyncResult asyncResult)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(asyncResult).name());
					__parameters__[0] = (MonoObject*)asyncResult;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Stream", 0, NULL, "EndRead", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			void Stream::EndWrite(mscorlib::System::IAsyncResult asyncResult)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(asyncResult).name());
					__parameters__[0] = (MonoObject*)asyncResult;
					Global::InvokeMethod("mscorlib", "System.IO", "Stream", 0, NULL, "EndWrite", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void Stream::CopyTo(mscorlib::System::IO::Stream destination)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(destination).name());
					__parameters__[0] = (MonoObject*)destination;
					Global::InvokeMethod("mscorlib", "System.IO", "Stream", 0, NULL, "CopyTo", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void Stream::CopyTo(mscorlib::System::IO::Stream destination, mscorlib::System::Int32 bufferSize)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(destination).name());
					__parameter_types__[1] = Global::GetType(typeid(bufferSize).name());
					__parameters__[0] = (MonoObject*)destination;
					__parameters__[1] = &bufferSize;
					Global::InvokeMethod("mscorlib", "System.IO", "Stream", 0, NULL, "CopyTo", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Threading::Tasks::TaskBase Stream::CopyToAsync(mscorlib::System::IO::Stream destination)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(destination).name());
					__parameters__[0] = (MonoObject*)destination;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Stream", 0, NULL, "CopyToAsync", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Threading::Tasks::TaskBase(__result__);
			}

			mscorlib::System::Threading::Tasks::TaskBase Stream::CopyToAsync(mscorlib::System::IO::Stream destination, mscorlib::System::Int32 bufferSize)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(destination).name());
					__parameter_types__[1] = Global::GetType(typeid(bufferSize).name());
					__parameters__[0] = (MonoObject*)destination;
					__parameters__[1] = &bufferSize;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Stream", 0, NULL, "CopyToAsync", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Threading::Tasks::TaskBase(__result__);
			}

			mscorlib::System::Threading::Tasks::TaskBase Stream::CopyToAsync(mscorlib::System::IO::Stream destination, mscorlib::System::Int32 bufferSize, mscorlib::System::Threading::CancellationToken cancellationToken)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(destination).name());
					__parameter_types__[1] = Global::GetType(typeid(bufferSize).name());
					__parameter_types__[2] = Global::GetType(typeid(cancellationToken).name());
					__parameters__[0] = (MonoObject*)destination;
					__parameters__[1] = &bufferSize;
					__parameters__[2] = (MonoObject*)cancellationToken;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Stream", 0, NULL, "CopyToAsync", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Threading::Tasks::TaskBase(__result__);
			}

			mscorlib::System::Threading::Tasks::TaskBase Stream::FlushAsync()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Stream", 0, NULL, "FlushAsync", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Threading::Tasks::TaskBase(__result__);
			}

			mscorlib::System::Threading::Tasks::TaskBase Stream::FlushAsync(mscorlib::System::Threading::CancellationToken cancellationToken)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(cancellationToken).name());
					__parameters__[0] = (MonoObject*)cancellationToken;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Stream", 0, NULL, "FlushAsync", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Threading::Tasks::TaskBase(__result__);
			}

			mscorlib::System::Threading::Tasks::Task<mscorlib::System::Int32> Stream::ReadAsync(std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 offset, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(buffer).name()))->eklass);
					__parameter_types__[1] = Global::GetType(typeid(offset).name());
					__parameter_types__[2] = Global::GetType(typeid(count).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(buffer, typeid(mscorlib::System::Byte).name());
					__parameters__[1] = &offset;
					__parameters__[2] = &count;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Stream", 0, NULL, "ReadAsync", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Threading::Tasks::Task<mscorlib::System::Int32>(__result__);
			}

			mscorlib::System::Threading::Tasks::Task<mscorlib::System::Int32> Stream::ReadAsync(std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 offset, mscorlib::System::Int32 count, mscorlib::System::Threading::CancellationToken cancellationToken)
			{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(buffer).name()))->eklass);
					__parameter_types__[1] = Global::GetType(typeid(offset).name());
					__parameter_types__[2] = Global::GetType(typeid(count).name());
					__parameter_types__[3] = Global::GetType(typeid(cancellationToken).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(buffer, typeid(mscorlib::System::Byte).name());
					__parameters__[1] = &offset;
					__parameters__[2] = &count;
					__parameters__[3] = (MonoObject*)cancellationToken;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Stream", 0, NULL, "ReadAsync", __native_object__, 4, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Threading::Tasks::Task<mscorlib::System::Int32>(__result__);
			}

			mscorlib::System::Threading::Tasks::TaskBase Stream::WriteAsync(std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 offset, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(buffer).name()))->eklass);
					__parameter_types__[1] = Global::GetType(typeid(offset).name());
					__parameter_types__[2] = Global::GetType(typeid(count).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(buffer, typeid(mscorlib::System::Byte).name());
					__parameters__[1] = &offset;
					__parameters__[2] = &count;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Stream", 0, NULL, "WriteAsync", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Threading::Tasks::TaskBase(__result__);
			}

			mscorlib::System::Threading::Tasks::TaskBase Stream::WriteAsync(std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 offset, mscorlib::System::Int32 count, mscorlib::System::Threading::CancellationToken cancellationToken)
			{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(buffer).name()))->eklass);
					__parameter_types__[1] = Global::GetType(typeid(offset).name());
					__parameter_types__[2] = Global::GetType(typeid(count).name());
					__parameter_types__[3] = Global::GetType(typeid(cancellationToken).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(buffer, typeid(mscorlib::System::Byte).name());
					__parameters__[1] = &offset;
					__parameters__[2] = &count;
					__parameters__[3] = (MonoObject*)cancellationToken;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Stream", 0, NULL, "WriteAsync", __native_object__, 4, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Threading::Tasks::TaskBase(__result__);
			}

			//Get Set Properties Methods
			//	Get:CanRead
			mscorlib::System::Boolean  Stream::get_CanRead() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Stream", 0, NULL, "get_CanRead", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:CanSeek
			mscorlib::System::Boolean  Stream::get_CanSeek() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Stream", 0, NULL, "get_CanSeek", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:CanWrite
			mscorlib::System::Boolean  Stream::get_CanWrite() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Stream", 0, NULL, "get_CanWrite", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:CanTimeout
			mscorlib::System::Boolean  Stream::get_CanTimeout() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Stream", 0, NULL, "get_CanTimeout", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:Length
			mscorlib::System::Int64  Stream::get_Length() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Stream", 0, NULL, "get_Length", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
			}


			//	Get/Set:Position
			mscorlib::System::Int64  Stream::get_Position() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Stream", 0, NULL, "get_Position", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
			}

			void Stream::set_Position(mscorlib::System::Int64  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				Global::InvokeMethod("mscorlib", "System.IO", "Stream", 0, NULL, "set_Position", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:ReadTimeout
			mscorlib::System::Int32  Stream::get_ReadTimeout() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Stream", 0, NULL, "get_ReadTimeout", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			void Stream::set_ReadTimeout(mscorlib::System::Int32  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				Global::InvokeMethod("mscorlib", "System.IO", "Stream", 0, NULL, "set_ReadTimeout", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:WriteTimeout
			mscorlib::System::Int32  Stream::get_WriteTimeout() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Stream", 0, NULL, "get_WriteTimeout", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			void Stream::set_WriteTimeout(mscorlib::System::Int32  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				Global::InvokeMethod("mscorlib", "System.IO", "Stream", 0, NULL, "set_WriteTimeout", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


				//	Get/Set:Null
			mscorlib::System::IO::Stream Stream::get_Null()
			{
				return Global::GetFieldValue("mscorlib", "System.IO", "Stream", 0, NULL, "Null");
			}

			void Stream::set_Null(mscorlib::System::IO::Stream  value)
			{
				throw;
			}


		}
	}
}
