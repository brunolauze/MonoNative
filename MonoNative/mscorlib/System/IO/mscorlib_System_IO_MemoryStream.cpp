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

			//Public Methods
			void MemoryStream::Flush()
			{
					Global::InvokeMethod("mscorlib", "System.IO", "MemoryStream", 0, NULL, "Flush", __native_object__, 0, NULL, NULL, NULL);
			}

			std::vector<mscorlib::System::Byte*> MemoryStream::GetBuffer()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "MemoryStream", 0, NULL, "GetBuffer", __native_object__, 0, NULL, NULL, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::Byte*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back(new mscorlib::System::Byte (__array_item__));
					}
					return __array_result__;
			}

			mscorlib::System::Int32 MemoryStream::Read(std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 offset, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(buffer).name()))->eklass);
					__parameter_types__[1] = Global::GetType(typeid(offset).name());
					__parameter_types__[2] = Global::GetType(typeid(count).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(buffer, typeid(mscorlib::System::Byte).name());
					__parameters__[1] = &offset;
					__parameters__[2] = &count;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "MemoryStream", 0, NULL, "Read", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 MemoryStream::ReadByte()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "MemoryStream", 0, NULL, "ReadByte", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int64 MemoryStream::Seek(mscorlib::System::Int64 offset, mscorlib::System::IO::SeekOrigin::__ENUM__ loc)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(offset).name());
					__parameter_types__[1] = Global::GetType(typeid(loc).name());
					__parameters__[0] = &offset;
					__parameters__[1] = reinterpret_cast<void*>(loc);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "MemoryStream", 0, NULL, "Seek", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
			}

			void MemoryStream::SetLength(mscorlib::System::Int64 value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					Global::InvokeMethod("mscorlib", "System.IO", "MemoryStream", 0, NULL, "SetLength", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			std::vector<mscorlib::System::Byte*> MemoryStream::ToArray()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "MemoryStream", 0, NULL, "ToArray", __native_object__, 0, NULL, NULL, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::Byte*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back(new mscorlib::System::Byte (__array_item__));
					}
					return __array_result__;
			}

			void MemoryStream::Write(std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 offset, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(buffer).name()))->eklass);
					__parameter_types__[1] = Global::GetType(typeid(offset).name());
					__parameter_types__[2] = Global::GetType(typeid(count).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(buffer, typeid(mscorlib::System::Byte).name());
					__parameters__[1] = &offset;
					__parameters__[2] = &count;
					Global::InvokeMethod("mscorlib", "System.IO", "MemoryStream", 0, NULL, "Write", __native_object__, 3, __parameter_types__, __parameters__, NULL);
			}

			void MemoryStream::WriteByte(mscorlib::System::Byte value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.IO", "MemoryStream", 0, NULL, "WriteByte", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void MemoryStream::WriteTo(mscorlib::System::IO::Stream stream)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(stream).name());
					__parameters__[0] = (MonoObject*)stream;
					Global::InvokeMethod("mscorlib", "System.IO", "MemoryStream", 0, NULL, "WriteTo", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Threading::Tasks::TaskBase MemoryStream::CopyToAsync(mscorlib::System::IO::Stream destination, mscorlib::System::Int32 bufferSize, mscorlib::System::Threading::CancellationToken cancellationToken)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(destination).name());
					__parameter_types__[1] = Global::GetType(typeid(bufferSize).name());
					__parameter_types__[2] = Global::GetType(typeid(cancellationToken).name());
					__parameters__[0] = (MonoObject*)destination;
					__parameters__[1] = &bufferSize;
					__parameters__[2] = (MonoObject*)cancellationToken;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "MemoryStream", 0, NULL, "CopyToAsync", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Threading::Tasks::TaskBase(__result__);
			}

			mscorlib::System::Threading::Tasks::TaskBase MemoryStream::FlushAsync(mscorlib::System::Threading::CancellationToken cancellationToken)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(cancellationToken).name());
					__parameters__[0] = (MonoObject*)cancellationToken;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "MemoryStream", 0, NULL, "FlushAsync", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Threading::Tasks::TaskBase(__result__);
			}

			mscorlib::System::Threading::Tasks::Task<mscorlib::System::Int32> MemoryStream::ReadAsync(std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 offset, mscorlib::System::Int32 count, mscorlib::System::Threading::CancellationToken cancellationToken)
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
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "MemoryStream", 0, NULL, "ReadAsync", __native_object__, 4, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Threading::Tasks::Task<mscorlib::System::Int32>(__result__);
			}

			mscorlib::System::Threading::Tasks::TaskBase MemoryStream::WriteAsync(std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 offset, mscorlib::System::Int32 count, mscorlib::System::Threading::CancellationToken cancellationToken)
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
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "MemoryStream", 0, NULL, "WriteAsync", __native_object__, 4, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Threading::Tasks::TaskBase(__result__);
			}

			//Get Set Properties Methods
			//	Get:CanRead
			mscorlib::System::Boolean  MemoryStream::get_CanRead()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "MemoryStream", 0, NULL, "get_CanRead", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:CanSeek
			mscorlib::System::Boolean  MemoryStream::get_CanSeek()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "MemoryStream", 0, NULL, "get_CanSeek", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:CanWrite
			mscorlib::System::Boolean  MemoryStream::get_CanWrite()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "MemoryStream", 0, NULL, "get_CanWrite", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get/Set:Capacity
			mscorlib::System::Int32  MemoryStream::get_Capacity()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "MemoryStream", 0, NULL, "get_Capacity", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			void MemoryStream::set_Capacity(mscorlib::System::Int32  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				Global::InvokeMethod("mscorlib", "System.IO", "MemoryStream", 0, NULL, "set_Capacity", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get:Length
			mscorlib::System::Int64  MemoryStream::get_Length()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "MemoryStream", 0, NULL, "get_Length", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
			}


			//	Get/Set:Position
			mscorlib::System::Int64  MemoryStream::get_Position()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "MemoryStream", 0, NULL, "get_Position", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
			}

			void MemoryStream::set_Position(mscorlib::System::Int64  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				Global::InvokeMethod("mscorlib", "System.IO", "MemoryStream", 0, NULL, "set_Position", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get:CanTimeout
			mscorlib::System::Boolean  MemoryStream::get_CanTimeout()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Stream", 0, NULL, "get_CanTimeout", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get/Set:ReadTimeout
			mscorlib::System::Int32  MemoryStream::get_ReadTimeout()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Stream", 0, NULL, "get_ReadTimeout", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			void MemoryStream::set_ReadTimeout(mscorlib::System::Int32  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				Global::InvokeMethod("mscorlib", "System.IO", "Stream", 0, NULL, "set_ReadTimeout", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:WriteTimeout
			mscorlib::System::Int32  MemoryStream::get_WriteTimeout()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Stream", 0, NULL, "get_WriteTimeout", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			void MemoryStream::set_WriteTimeout(mscorlib::System::Int32  value)
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
