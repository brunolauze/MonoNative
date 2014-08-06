#include <mscorlib/System/IO/mscorlib_System_IO_FileStream.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/Threading/Tasks/mscorlib_System_Threading_Tasks_Task.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_CancellationToken.h>
#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_ObjRef.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace IO
		{

			//Public Methods
			mscorlib::System::Int32 FileStream::ReadByte()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileStream", 0, NULL, "ReadByte", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			void FileStream::WriteByte(mscorlib::System::Byte value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.IO", "FileStream", 0, NULL, "WriteByte", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Int32 FileStream::Read(std::vector<mscorlib::System::Byte*> array, mscorlib::System::Int32 offset, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
					__parameter_types__[1] = Global::GetType(typeid(offset).name());
					__parameter_types__[2] = Global::GetType(typeid(count).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(array, typeid(mscorlib::System::Byte).name());
					__parameters__[1] = &offset;
					__parameters__[2] = &count;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileStream", 0, NULL, "Read", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::IAsyncResult FileStream::BeginRead(std::vector<mscorlib::System::Byte*> array, mscorlib::System::Int32 offset, mscorlib::System::Int32 numBytes, mscorlib::Callback<void  (mscorlib::System::IAsyncResult )> userCallback, mscorlib::System::Object stateObject)
			{
					MonoType *__parameter_types__[5];
					void *__parameters__[5];
					__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
					__parameter_types__[1] = Global::GetType(typeid(offset).name());
					__parameter_types__[2] = Global::GetType(typeid(numBytes).name());
					__parameter_types__[3] = Global::GetType(typeid(userCallback).name());
					__parameter_types__[4] = Global::GetType(typeid(stateObject).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(array, typeid(mscorlib::System::Byte).name());
					__parameters__[1] = &offset;
					__parameters__[2] = &numBytes;
					__parameters__[3] = &userCallback;
					__parameters__[4] = (MonoObject*)stateObject;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileStream", 0, NULL, "BeginRead", __native_object__, 5, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::IAsyncResult(__result__);
			}

			mscorlib::System::Int32 FileStream::EndRead(mscorlib::System::IAsyncResult asyncResult)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(asyncResult).name());
					__parameters__[0] = (MonoObject*)asyncResult;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileStream", 0, NULL, "EndRead", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			void FileStream::Write(std::vector<mscorlib::System::Byte*> array, mscorlib::System::Int32 offset, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
					__parameter_types__[1] = Global::GetType(typeid(offset).name());
					__parameter_types__[2] = Global::GetType(typeid(count).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(array, typeid(mscorlib::System::Byte).name());
					__parameters__[1] = &offset;
					__parameters__[2] = &count;
					Global::InvokeMethod("mscorlib", "System.IO", "FileStream", 0, NULL, "Write", __native_object__, 3, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::IAsyncResult FileStream::BeginWrite(std::vector<mscorlib::System::Byte*> array, mscorlib::System::Int32 offset, mscorlib::System::Int32 numBytes, mscorlib::Callback<void  (mscorlib::System::IAsyncResult )> userCallback, mscorlib::System::Object stateObject)
			{
					MonoType *__parameter_types__[5];
					void *__parameters__[5];
					__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
					__parameter_types__[1] = Global::GetType(typeid(offset).name());
					__parameter_types__[2] = Global::GetType(typeid(numBytes).name());
					__parameter_types__[3] = Global::GetType(typeid(userCallback).name());
					__parameter_types__[4] = Global::GetType(typeid(stateObject).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(array, typeid(mscorlib::System::Byte).name());
					__parameters__[1] = &offset;
					__parameters__[2] = &numBytes;
					__parameters__[3] = &userCallback;
					__parameters__[4] = (MonoObject*)stateObject;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileStream", 0, NULL, "BeginWrite", __native_object__, 5, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::IAsyncResult(__result__);
			}

			void FileStream::EndWrite(mscorlib::System::IAsyncResult asyncResult)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(asyncResult).name());
					__parameters__[0] = (MonoObject*)asyncResult;
					Global::InvokeMethod("mscorlib", "System.IO", "FileStream", 0, NULL, "EndWrite", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Int64 FileStream::Seek(mscorlib::System::Int64 offset, mscorlib::System::IO::SeekOrigin::__ENUM__ origin)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(offset).name());
					__parameter_types__[1] = Global::GetType(typeid(origin).name());
					__parameters__[0] = &offset;
					mscorlib::System::Int32 __param_origin__ = origin;
					__parameters__[1] = &__param_origin__;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileStream", 0, NULL, "Seek", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
			}

			void FileStream::SetLength(mscorlib::System::Int64 value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					Global::InvokeMethod("mscorlib", "System.IO", "FileStream", 0, NULL, "SetLength", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void FileStream::Flush()
			{
					Global::InvokeMethod("mscorlib", "System.IO", "FileStream", 0, NULL, "Flush", __native_object__, 0, NULL, NULL, NULL);
			}

			void FileStream::Flush(mscorlib::System::Boolean flushToDisk)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(flushToDisk).name());
					__parameters__[0] = reinterpret_cast<void*>(flushToDisk);
					Global::InvokeMethod("mscorlib", "System.IO", "FileStream", 0, NULL, "Flush", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void FileStream::Lock(mscorlib::System::Int64 position, mscorlib::System::Int64 length)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(position).name());
					__parameter_types__[1] = Global::GetType(typeid(length).name());
					__parameters__[0] = &position;
					__parameters__[1] = &length;
					Global::InvokeMethod("mscorlib", "System.IO", "FileStream", 0, NULL, "Lock", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			void FileStream::Unlock(mscorlib::System::Int64 position, mscorlib::System::Int64 length)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(position).name());
					__parameter_types__[1] = Global::GetType(typeid(length).name());
					__parameters__[0] = &position;
					__parameters__[1] = &length;
					Global::InvokeMethod("mscorlib", "System.IO", "FileStream", 0, NULL, "Unlock", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Security::AccessControl::FileSecurity FileStream::GetAccessControl()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileStream", 0, NULL, "GetAccessControl", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::AccessControl::FileSecurity(__result__);
			}

			void FileStream::SetAccessControl(mscorlib::System::Security::AccessControl::FileSecurity fileSecurity)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(fileSecurity).name());
					__parameters__[0] = (MonoObject*)fileSecurity;
					Global::InvokeMethod("mscorlib", "System.IO", "FileStream", 0, NULL, "SetAccessControl", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Threading::Tasks::TaskBase FileStream::FlushAsync(mscorlib::System::Threading::CancellationToken cancellationToken)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(cancellationToken).name());
					__parameters__[0] = (MonoObject*)cancellationToken;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileStream", 0, NULL, "FlushAsync", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Threading::Tasks::TaskBase(__result__);
			}

			mscorlib::System::Threading::Tasks::Task<mscorlib::System::Int32> FileStream::ReadAsync(std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 offset, mscorlib::System::Int32 count, mscorlib::System::Threading::CancellationToken cancellationToken)
			{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
					__parameter_types__[1] = Global::GetType(typeid(offset).name());
					__parameter_types__[2] = Global::GetType(typeid(count).name());
					__parameter_types__[3] = Global::GetType(typeid(cancellationToken).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(buffer, typeid(mscorlib::System::Byte).name());
					__parameters__[1] = &offset;
					__parameters__[2] = &count;
					__parameters__[3] = (MonoObject*)cancellationToken;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileStream", 0, NULL, "ReadAsync", __native_object__, 4, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Threading::Tasks::Task<mscorlib::System::Int32>(__result__);
			}

			mscorlib::System::Threading::Tasks::TaskBase FileStream::WriteAsync(std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 offset, mscorlib::System::Int32 count, mscorlib::System::Threading::CancellationToken cancellationToken)
			{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
					__parameter_types__[1] = Global::GetType(typeid(offset).name());
					__parameter_types__[2] = Global::GetType(typeid(count).name());
					__parameter_types__[3] = Global::GetType(typeid(cancellationToken).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(buffer, typeid(mscorlib::System::Byte).name());
					__parameters__[1] = &offset;
					__parameters__[2] = &count;
					__parameters__[3] = (MonoObject*)cancellationToken;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileStream", 0, NULL, "WriteAsync", __native_object__, 4, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Threading::Tasks::TaskBase(__result__);
			}

			//Get Set Properties Methods
			//	Get:CanRead
			mscorlib::System::Boolean  FileStream::get_CanRead() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileStream", 0, NULL, "get_CanRead", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:CanWrite
			mscorlib::System::Boolean  FileStream::get_CanWrite() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileStream", 0, NULL, "get_CanWrite", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:CanSeek
			mscorlib::System::Boolean  FileStream::get_CanSeek() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileStream", 0, NULL, "get_CanSeek", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsAsync
			mscorlib::System::Boolean  FileStream::get_IsAsync() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileStream", 0, NULL, "get_IsAsync", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:Name
			mscorlib::System::String  FileStream::get_Name() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileStream", 0, NULL, "get_Name", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:Length
			mscorlib::System::Int64  FileStream::get_Length() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileStream", 0, NULL, "get_Length", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
			}


			//	Get/Set:Position
			mscorlib::System::Int64  FileStream::get_Position() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileStream", 0, NULL, "get_Position", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
			}

			void FileStream::set_Position(mscorlib::System::Int64  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				Global::InvokeMethod("mscorlib", "System.IO", "FileStream", 0, NULL, "set_Position", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get:Handle
			mscorlib::System::IntPtr  FileStream::get_Handle() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileStream", 0, NULL, "get_Handle", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::IntPtr(__result__);
			}


			//	Get:SafeFileHandle
			mscorlib::Microsoft::Win32::SafeHandles::SafeFileHandle  FileStream::get_SafeFileHandle() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileStream", 0, NULL, "get_SafeFileHandle", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::Microsoft::Win32::SafeHandles::SafeFileHandle(__result__);
			}


			//	Get:CanTimeout
			mscorlib::System::Boolean  FileStream::get_CanTimeout() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Stream", 0, NULL, "get_CanTimeout", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get/Set:ReadTimeout
			mscorlib::System::Int32  FileStream::get_ReadTimeout() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Stream", 0, NULL, "get_ReadTimeout", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			void FileStream::set_ReadTimeout(mscorlib::System::Int32  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				Global::InvokeMethod("mscorlib", "System.IO", "Stream", 0, NULL, "set_ReadTimeout", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:WriteTimeout
			mscorlib::System::Int32  FileStream::get_WriteTimeout() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Stream", 0, NULL, "get_WriteTimeout", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			void FileStream::set_WriteTimeout(mscorlib::System::Int32  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				Global::InvokeMethod("mscorlib", "System.IO", "Stream", 0, NULL, "set_WriteTimeout", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}



		}
	}
}
