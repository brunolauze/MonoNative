#include <mscorlib/System/IO/mscorlib_System_IO_UnmanagedMemoryAccessor.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/mscorlib_System_Decimal.h>
#include <mscorlib/System/mscorlib_System_SByte.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace IO
		{

			//Public Methods
			void UnmanagedMemoryAccessor::Dispose()
			{
					Global::InvokeMethod("mscorlib", "System.IO", "UnmanagedMemoryAccessor", 0, NULL, "Dispose", __native_object__, 0, NULL, NULL, NULL);
			}

			mscorlib::System::Byte UnmanagedMemoryAccessor::ReadByte(mscorlib::System::Int64 position)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(position).name());
					__parameters__[0] = &position;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "UnmanagedMemoryAccessor", 0, NULL, "ReadByte", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Byte(__result__);
			}

			mscorlib::System::Boolean UnmanagedMemoryAccessor::ReadBoolean(mscorlib::System::Int64 position)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(position).name());
					__parameters__[0] = &position;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "UnmanagedMemoryAccessor", 0, NULL, "ReadBoolean", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Char UnmanagedMemoryAccessor::ReadChar(mscorlib::System::Int64 position)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(position).name());
					__parameters__[0] = &position;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "UnmanagedMemoryAccessor", 0, NULL, "ReadChar", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Char*)mono_object_unbox(__result__);
			}

			mscorlib::System::Decimal UnmanagedMemoryAccessor::ReadDecimal(mscorlib::System::Int64 position)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(position).name());
					__parameters__[0] = &position;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "UnmanagedMemoryAccessor", 0, NULL, "ReadDecimal", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Decimal(__result__);
			}

			mscorlib::System::Double UnmanagedMemoryAccessor::ReadDouble(mscorlib::System::Int64 position)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(position).name());
					__parameters__[0] = &position;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "UnmanagedMemoryAccessor", 0, NULL, "ReadDouble", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Double*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int16 UnmanagedMemoryAccessor::ReadInt16(mscorlib::System::Int64 position)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(position).name());
					__parameters__[0] = &position;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "UnmanagedMemoryAccessor", 0, NULL, "ReadInt16", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int16*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 UnmanagedMemoryAccessor::ReadInt32(mscorlib::System::Int64 position)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(position).name());
					__parameters__[0] = &position;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "UnmanagedMemoryAccessor", 0, NULL, "ReadInt32", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int64 UnmanagedMemoryAccessor::ReadInt64(mscorlib::System::Int64 position)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(position).name());
					__parameters__[0] = &position;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "UnmanagedMemoryAccessor", 0, NULL, "ReadInt64", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
			}

			mscorlib::System::SByte UnmanagedMemoryAccessor::ReadSByte(mscorlib::System::Int64 position)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(position).name());
					__parameters__[0] = &position;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "UnmanagedMemoryAccessor", 0, NULL, "ReadSByte", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::SByte(__result__);
			}

			mscorlib::System::Single UnmanagedMemoryAccessor::ReadSingle(mscorlib::System::Int64 position)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(position).name());
					__parameters__[0] = &position;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "UnmanagedMemoryAccessor", 0, NULL, "ReadSingle", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Single*)mono_object_unbox(__result__);
			}

			mscorlib::System::UInt16 UnmanagedMemoryAccessor::ReadUInt16(mscorlib::System::Int64 position)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(position).name());
					__parameters__[0] = &position;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "UnmanagedMemoryAccessor", 0, NULL, "ReadUInt16", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::UInt16*)mono_object_unbox(__result__);
			}

			mscorlib::System::UInt32 UnmanagedMemoryAccessor::ReadUInt32(mscorlib::System::Int64 position)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(position).name());
					__parameters__[0] = &position;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "UnmanagedMemoryAccessor", 0, NULL, "ReadUInt32", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::UInt32*)mono_object_unbox(__result__);
			}

			mscorlib::System::UInt64 UnmanagedMemoryAccessor::ReadUInt64(mscorlib::System::Int64 position)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(position).name());
					__parameters__[0] = &position;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "UnmanagedMemoryAccessor", 0, NULL, "ReadUInt64", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::UInt64*)mono_object_unbox(__result__);
			}

			void UnmanagedMemoryAccessor::Write(mscorlib::System::Int64 position, mscorlib::System::Boolean value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(position).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = &position;
					__parameters__[1] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.IO", "UnmanagedMemoryAccessor", 0, NULL, "Write", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			void UnmanagedMemoryAccessor::Write(mscorlib::System::Int64 position, mscorlib::System::Byte value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(position).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = &position;
					__parameters__[1] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.IO", "UnmanagedMemoryAccessor", 0, NULL, "Write", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			void UnmanagedMemoryAccessor::Write(mscorlib::System::Int64 position, mscorlib::System::Char value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(position).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = &position;
					__parameters__[1] = &value;
					Global::InvokeMethod("mscorlib", "System.IO", "UnmanagedMemoryAccessor", 0, NULL, "Write", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			void UnmanagedMemoryAccessor::Write(mscorlib::System::Int64 position, mscorlib::System::Decimal value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(position).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = &position;
					__parameters__[1] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.IO", "UnmanagedMemoryAccessor", 0, NULL, "Write", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			void UnmanagedMemoryAccessor::Write(mscorlib::System::Int64 position, mscorlib::System::Double value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(position).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = &position;
					__parameters__[1] = &value;
					Global::InvokeMethod("mscorlib", "System.IO", "UnmanagedMemoryAccessor", 0, NULL, "Write", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			void UnmanagedMemoryAccessor::Write(mscorlib::System::Int64 position, mscorlib::System::Int16 value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(position).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = &position;
					__parameters__[1] = &value;
					Global::InvokeMethod("mscorlib", "System.IO", "UnmanagedMemoryAccessor", 0, NULL, "Write", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			void UnmanagedMemoryAccessor::Write(mscorlib::System::Int64 position, mscorlib::System::Int32 value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(position).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = &position;
					__parameters__[1] = &value;
					Global::InvokeMethod("mscorlib", "System.IO", "UnmanagedMemoryAccessor", 0, NULL, "Write", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			void UnmanagedMemoryAccessor::Write(mscorlib::System::Int64 position, mscorlib::System::Int64 value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(position).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = &position;
					__parameters__[1] = &value;
					Global::InvokeMethod("mscorlib", "System.IO", "UnmanagedMemoryAccessor", 0, NULL, "Write", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			void UnmanagedMemoryAccessor::Write(mscorlib::System::Int64 position, mscorlib::System::SByte value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(position).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = &position;
					__parameters__[1] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.IO", "UnmanagedMemoryAccessor", 0, NULL, "Write", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			void UnmanagedMemoryAccessor::Write(mscorlib::System::Int64 position, mscorlib::System::Single value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(position).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = &position;
					__parameters__[1] = &value;
					Global::InvokeMethod("mscorlib", "System.IO", "UnmanagedMemoryAccessor", 0, NULL, "Write", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			void UnmanagedMemoryAccessor::Write(mscorlib::System::Int64 position, mscorlib::System::UInt16 value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(position).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = &position;
					__parameters__[1] = &value;
					Global::InvokeMethod("mscorlib", "System.IO", "UnmanagedMemoryAccessor", 0, NULL, "Write", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			void UnmanagedMemoryAccessor::Write(mscorlib::System::Int64 position, mscorlib::System::UInt32 value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(position).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = &position;
					__parameters__[1] = &value;
					Global::InvokeMethod("mscorlib", "System.IO", "UnmanagedMemoryAccessor", 0, NULL, "Write", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			void UnmanagedMemoryAccessor::Write(mscorlib::System::Int64 position, mscorlib::System::UInt64 value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(position).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = &position;
					__parameters__[1] = &value;
					Global::InvokeMethod("mscorlib", "System.IO", "UnmanagedMemoryAccessor", 0, NULL, "Write", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			//Get Set Properties Methods
			//	Get:CanRead
			mscorlib::System::Boolean  UnmanagedMemoryAccessor::get_CanRead() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "UnmanagedMemoryAccessor", 0, NULL, "get_CanRead", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:CanWrite
			mscorlib::System::Boolean  UnmanagedMemoryAccessor::get_CanWrite() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "UnmanagedMemoryAccessor", 0, NULL, "get_CanWrite", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:Capacity
			mscorlib::System::Int64  UnmanagedMemoryAccessor::get_Capacity() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "UnmanagedMemoryAccessor", 0, NULL, "get_Capacity", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
			}



		}
	}
}
