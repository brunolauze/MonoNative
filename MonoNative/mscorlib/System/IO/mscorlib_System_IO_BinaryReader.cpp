#include <mscorlib/System/IO/mscorlib_System_IO_BinaryReader.h>
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
			void BinaryReader::Close()
			{
					Global::InvokeMethod("mscorlib", "System.IO", "BinaryReader", 0, NULL, "Close", __native_object__, 0, NULL, NULL, NULL);
			}

			void BinaryReader::Dispose()
			{
					Global::InvokeMethod("mscorlib", "System.IO", "BinaryReader", 0, NULL, "Dispose", __native_object__, 0, NULL, NULL, NULL);
			}

			mscorlib::System::Int32 BinaryReader::PeekChar()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "BinaryReader", 0, NULL, "PeekChar", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 BinaryReader::Read()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "BinaryReader", 0, NULL, "Read", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 BinaryReader::Read(std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 index, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
					__parameter_types__[1] = Global::GetType(typeid(index).name());
					__parameter_types__[2] = Global::GetType(typeid(count).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(buffer, typeid(mscorlib::System::Byte).name());
					__parameters__[1] = &index;
					__parameters__[2] = &count;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "BinaryReader", 0, NULL, "Read", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 BinaryReader::Read(std::vector<mscorlib::System::Char*> buffer, mscorlib::System::Int32 index, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Char")), 1));
					__parameter_types__[1] = Global::GetType(typeid(index).name());
					__parameter_types__[2] = Global::GetType(typeid(count).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Char*>(buffer, typeid(mscorlib::System::Char).name());
					__parameters__[1] = &index;
					__parameters__[2] = &count;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "BinaryReader", 0, NULL, "Read", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean BinaryReader::ReadBoolean()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "BinaryReader", 0, NULL, "ReadBoolean", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Byte BinaryReader::ReadByte()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "BinaryReader", 0, NULL, "ReadByte", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Byte(__result__);
			}

			std::vector<mscorlib::System::Byte*> BinaryReader::ReadBytes(mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(count).name());
					__parameters__[0] = &count;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "BinaryReader", 0, NULL, "ReadBytes", __native_object__, 1, __parameter_types__, __parameters__, NULL);
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

			mscorlib::System::Char BinaryReader::ReadChar()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "BinaryReader", 0, NULL, "ReadChar", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Char*)mono_object_unbox(__result__);
			}

			std::vector<mscorlib::System::Char*> BinaryReader::ReadChars(mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(count).name());
					__parameters__[0] = &count;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "BinaryReader", 0, NULL, "ReadChars", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::Char*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back((mscorlib::System::Char *)mono_object_unbox(__array_item__));
					}
					return __array_result__;
			}

			mscorlib::System::Decimal BinaryReader::ReadDecimal()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "BinaryReader", 0, NULL, "ReadDecimal", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Decimal(__result__);
			}

			mscorlib::System::Double BinaryReader::ReadDouble()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "BinaryReader", 0, NULL, "ReadDouble", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Double*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int16 BinaryReader::ReadInt16()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "BinaryReader", 0, NULL, "ReadInt16", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int16*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 BinaryReader::ReadInt32()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "BinaryReader", 0, NULL, "ReadInt32", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int64 BinaryReader::ReadInt64()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "BinaryReader", 0, NULL, "ReadInt64", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
			}

			mscorlib::System::SByte BinaryReader::ReadSByte()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "BinaryReader", 0, NULL, "ReadSByte", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::SByte(__result__);
			}

			mscorlib::System::String BinaryReader::ReadString()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "BinaryReader", 0, NULL, "ReadString", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::Single BinaryReader::ReadSingle()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "BinaryReader", 0, NULL, "ReadSingle", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Single*)mono_object_unbox(__result__);
			}

			mscorlib::System::UInt16 BinaryReader::ReadUInt16()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "BinaryReader", 0, NULL, "ReadUInt16", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::UInt16*)mono_object_unbox(__result__);
			}

			mscorlib::System::UInt32 BinaryReader::ReadUInt32()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "BinaryReader", 0, NULL, "ReadUInt32", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::UInt32*)mono_object_unbox(__result__);
			}

			mscorlib::System::UInt64 BinaryReader::ReadUInt64()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "BinaryReader", 0, NULL, "ReadUInt64", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::UInt64*)mono_object_unbox(__result__);
			}

			//Get Set Properties Methods
			//	Get:BaseStream
			mscorlib::System::IO::Stream  BinaryReader::get_BaseStream() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "BinaryReader", 0, NULL, "get_BaseStream", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::IO::Stream(__result__);
			}



		}
	}
}
