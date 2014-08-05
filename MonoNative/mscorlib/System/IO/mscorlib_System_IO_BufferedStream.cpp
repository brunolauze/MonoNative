#include <mscorlib/System/IO/mscorlib_System_IO_BufferedStream.h>
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
			void BufferedStream::Flush()
			{
					Global::InvokeMethod("mscorlib", "System.IO", "BufferedStream", 0, NULL, "Flush", __native_object__, 0, NULL, NULL, NULL);
			}

			mscorlib::System::Int64 BufferedStream::Seek(mscorlib::System::Int64 offset, mscorlib::System::IO::SeekOrigin::__ENUM__ origin)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(offset).name());
					__parameter_types__[1] = Global::GetType(typeid(origin).name());
					__parameters__[0] = &offset;
					__parameters__[1] = reinterpret_cast<void*>(origin);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "BufferedStream", 0, NULL, "Seek", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
			}

			void BufferedStream::SetLength(mscorlib::System::Int64 value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					Global::InvokeMethod("mscorlib", "System.IO", "BufferedStream", 0, NULL, "SetLength", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Int32 BufferedStream::ReadByte()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "BufferedStream", 0, NULL, "ReadByte", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			void BufferedStream::WriteByte(mscorlib::System::Byte value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.IO", "BufferedStream", 0, NULL, "WriteByte", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Int32 BufferedStream::Read(std::vector<mscorlib::System::Byte*> array, mscorlib::System::Int32 offset, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(array).name()))->eklass);
					__parameter_types__[1] = Global::GetType(typeid(offset).name());
					__parameter_types__[2] = Global::GetType(typeid(count).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(array, typeid(mscorlib::System::Byte).name());
					__parameters__[1] = &offset;
					__parameters__[2] = &count;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "BufferedStream", 0, NULL, "Read", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			void BufferedStream::Write(std::vector<mscorlib::System::Byte*> array, mscorlib::System::Int32 offset, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(array).name()))->eklass);
					__parameter_types__[1] = Global::GetType(typeid(offset).name());
					__parameter_types__[2] = Global::GetType(typeid(count).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(array, typeid(mscorlib::System::Byte).name());
					__parameters__[1] = &offset;
					__parameters__[2] = &count;
					Global::InvokeMethod("mscorlib", "System.IO", "BufferedStream", 0, NULL, "Write", __native_object__, 3, __parameter_types__, __parameters__, NULL);
			}

			//Get Set Properties Methods
			//	Get:CanRead
			mscorlib::System::Boolean  BufferedStream::get_CanRead() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "BufferedStream", 0, NULL, "get_CanRead", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:CanWrite
			mscorlib::System::Boolean  BufferedStream::get_CanWrite() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "BufferedStream", 0, NULL, "get_CanWrite", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:CanSeek
			mscorlib::System::Boolean  BufferedStream::get_CanSeek() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "BufferedStream", 0, NULL, "get_CanSeek", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:Length
			mscorlib::System::Int64  BufferedStream::get_Length() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "BufferedStream", 0, NULL, "get_Length", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
			}


			//	Get/Set:Position
			mscorlib::System::Int64  BufferedStream::get_Position() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "BufferedStream", 0, NULL, "get_Position", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
			}

			void BufferedStream::set_Position(mscorlib::System::Int64  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				Global::InvokeMethod("mscorlib", "System.IO", "BufferedStream", 0, NULL, "set_Position", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get:CanTimeout
			mscorlib::System::Boolean  BufferedStream::get_CanTimeout() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Stream", 0, NULL, "get_CanTimeout", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get/Set:ReadTimeout
			mscorlib::System::Int32  BufferedStream::get_ReadTimeout() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Stream", 0, NULL, "get_ReadTimeout", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			void BufferedStream::set_ReadTimeout(mscorlib::System::Int32  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				Global::InvokeMethod("mscorlib", "System.IO", "Stream", 0, NULL, "set_ReadTimeout", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:WriteTimeout
			mscorlib::System::Int32  BufferedStream::get_WriteTimeout() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Stream", 0, NULL, "get_WriteTimeout", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			void BufferedStream::set_WriteTimeout(mscorlib::System::Int32  value)
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
