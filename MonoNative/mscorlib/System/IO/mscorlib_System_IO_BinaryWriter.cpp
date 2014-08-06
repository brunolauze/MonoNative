#include <mscorlib/System/IO/mscorlib_System_IO_BinaryWriter.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/mscorlib_System_Decimal.h>
#include <mscorlib/System/mscorlib_System_SByte.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace IO
		{

			//Public Methods
			void BinaryWriter::Close()
			{
					Global::InvokeMethod("mscorlib", "System.IO", "BinaryWriter", 0, NULL, "Close", __native_object__, 0, NULL, NULL, NULL);
			}

			void BinaryWriter::Dispose()
			{
					Global::InvokeMethod("mscorlib", "System.IO", "BinaryWriter", 0, NULL, "Dispose", __native_object__, 0, NULL, NULL, NULL);
			}

			void BinaryWriter::Flush()
			{
					Global::InvokeMethod("mscorlib", "System.IO", "BinaryWriter", 0, NULL, "Flush", __native_object__, 0, NULL, NULL, NULL);
			}

			mscorlib::System::Int64 BinaryWriter::Seek(mscorlib::System::Int32 offset, mscorlib::System::IO::SeekOrigin::__ENUM__ origin)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(offset).name());
					__parameter_types__[1] = Global::GetType(typeid(origin).name());
					__parameters__[0] = &offset;
					mscorlib::System::Int32 __param_origin__ = origin;
					__parameters__[1] = &__param_origin__;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "BinaryWriter", 0, NULL, "Seek", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
			}

			void BinaryWriter::Write(mscorlib::System::Boolean value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.IO", "BinaryWriter", 0, NULL, "Write", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void BinaryWriter::Write(mscorlib::System::Byte value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.IO", "BinaryWriter", 0, NULL, "Write", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void BinaryWriter::Write(std::vector<mscorlib::System::Byte*> buffer)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
					__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(buffer, typeid(mscorlib::System::Byte).name());
					Global::InvokeMethod("mscorlib", "System.IO", "BinaryWriter", 0, NULL, "Write", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void BinaryWriter::Write(std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 index, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
					__parameter_types__[1] = Global::GetType(typeid(index).name());
					__parameter_types__[2] = Global::GetType(typeid(count).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(buffer, typeid(mscorlib::System::Byte).name());
					__parameters__[1] = &index;
					__parameters__[2] = &count;
					Global::InvokeMethod("mscorlib", "System.IO", "BinaryWriter", 0, NULL, "Write", __native_object__, 3, __parameter_types__, __parameters__, NULL);
			}

			void BinaryWriter::Write(mscorlib::System::Char ch)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(ch).name());
					__parameters__[0] = &ch;
					Global::InvokeMethod("mscorlib", "System.IO", "BinaryWriter", 0, NULL, "Write", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void BinaryWriter::Write(std::vector<mscorlib::System::Char*> chars)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Char")), 1));
					__parameters__[0] = Global::FromArray<mscorlib::System::Char*>(chars, typeid(mscorlib::System::Char).name());
					Global::InvokeMethod("mscorlib", "System.IO", "BinaryWriter", 0, NULL, "Write", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void BinaryWriter::Write(std::vector<mscorlib::System::Char*> chars, mscorlib::System::Int32 index, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Char")), 1));
					__parameter_types__[1] = Global::GetType(typeid(index).name());
					__parameter_types__[2] = Global::GetType(typeid(count).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Char*>(chars, typeid(mscorlib::System::Char).name());
					__parameters__[1] = &index;
					__parameters__[2] = &count;
					Global::InvokeMethod("mscorlib", "System.IO", "BinaryWriter", 0, NULL, "Write", __native_object__, 3, __parameter_types__, __parameters__, NULL);
			}

			void BinaryWriter::Write(mscorlib::System::Decimal value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.IO", "BinaryWriter", 0, NULL, "Write", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void BinaryWriter::Write(mscorlib::System::Double value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					Global::InvokeMethod("mscorlib", "System.IO", "BinaryWriter", 0, NULL, "Write", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void BinaryWriter::Write(mscorlib::System::Int16 value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					Global::InvokeMethod("mscorlib", "System.IO", "BinaryWriter", 0, NULL, "Write", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void BinaryWriter::Write(mscorlib::System::Int32 value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					Global::InvokeMethod("mscorlib", "System.IO", "BinaryWriter", 0, NULL, "Write", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void BinaryWriter::Write(mscorlib::System::Int64 value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					Global::InvokeMethod("mscorlib", "System.IO", "BinaryWriter", 0, NULL, "Write", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void BinaryWriter::Write(mscorlib::System::SByte value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.IO", "BinaryWriter", 0, NULL, "Write", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void BinaryWriter::Write(mscorlib::System::Single value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					Global::InvokeMethod("mscorlib", "System.IO", "BinaryWriter", 0, NULL, "Write", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void BinaryWriter::Write(mscorlib::System::String value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.IO", "BinaryWriter", 0, NULL, "Write", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void BinaryWriter::Write(const char *value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), value);
					Global::InvokeMethod("mscorlib", "System.IO", "BinaryWriter", 0, NULL, "Write", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void BinaryWriter::Write(mscorlib::System::UInt16 value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					Global::InvokeMethod("mscorlib", "System.IO", "BinaryWriter", 0, NULL, "Write", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void BinaryWriter::Write(mscorlib::System::UInt32 value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					Global::InvokeMethod("mscorlib", "System.IO", "BinaryWriter", 0, NULL, "Write", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void BinaryWriter::Write(mscorlib::System::UInt64 value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					Global::InvokeMethod("mscorlib", "System.IO", "BinaryWriter", 0, NULL, "Write", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			//Get Set Properties Methods
			//	Get:BaseStream
			mscorlib::System::IO::Stream  BinaryWriter::get_BaseStream() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "BinaryWriter", 0, NULL, "get_BaseStream", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::IO::Stream(__result__);
			}


				//	Get/Set:Null
			mscorlib::System::IO::BinaryWriter BinaryWriter::get_Null()
			{
				return Global::GetFieldValue("mscorlib", "System.IO", "BinaryWriter", 0, NULL, "Null");
			}

			void BinaryWriter::set_Null(mscorlib::System::IO::BinaryWriter  value)
			{
				throw;
			}


		}
	}
}
