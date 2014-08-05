#include <mscorlib/System/IO/mscorlib_System_IO_TextReader.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_ObjRef.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace IO
		{

			//Public Methods
			void TextReader::Close()
			{
					Global::InvokeMethod("mscorlib", "System.IO", "TextReader", 0, NULL, "Close", __native_object__, 0, NULL, NULL, NULL);
			}

			void TextReader::Dispose()
			{
					Global::InvokeMethod("mscorlib", "System.IO", "TextReader", 0, NULL, "Dispose", __native_object__, 0, NULL, NULL, NULL);
			}

			mscorlib::System::Int32 TextReader::Peek()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "TextReader", 0, NULL, "Peek", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 TextReader::Read()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "TextReader", 0, NULL, "Read", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 TextReader::Read(std::vector<mscorlib::System::Char*> buffer, mscorlib::System::Int32 index, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(buffer).name()))->eklass);
					__parameter_types__[1] = Global::GetType(typeid(index).name());
					__parameter_types__[2] = Global::GetType(typeid(count).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Char*>(buffer, typeid(mscorlib::System::Char).name());
					__parameters__[1] = &index;
					__parameters__[2] = &count;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "TextReader", 0, NULL, "Read", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 TextReader::ReadBlock(std::vector<mscorlib::System::Char*> buffer, mscorlib::System::Int32 index, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(buffer).name()))->eklass);
					__parameter_types__[1] = Global::GetType(typeid(index).name());
					__parameter_types__[2] = Global::GetType(typeid(count).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Char*>(buffer, typeid(mscorlib::System::Char).name());
					__parameters__[1] = &index;
					__parameters__[2] = &count;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "TextReader", 0, NULL, "ReadBlock", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::String TextReader::ReadLine()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "TextReader", 0, NULL, "ReadLine", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::String TextReader::ReadToEnd()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "TextReader", 0, NULL, "ReadToEnd", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::IO::TextReader TextReader::Synchronized(mscorlib::System::IO::TextReader reader)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(reader).name());
					__parameters__[0] = (MonoObject*)reader;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "TextReader", 0, NULL, "Synchronized", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::IO::TextReader(__result__);
			}

			mscorlib::System::Threading::Tasks::Task<mscorlib::System::Int32> TextReader::ReadAsync(std::vector<mscorlib::System::Char*> buffer, mscorlib::System::Int32 index, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(buffer).name()))->eklass);
					__parameter_types__[1] = Global::GetType(typeid(index).name());
					__parameter_types__[2] = Global::GetType(typeid(count).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Char*>(buffer, typeid(mscorlib::System::Char).name());
					__parameters__[1] = &index;
					__parameters__[2] = &count;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "TextReader", 0, NULL, "ReadAsync", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Threading::Tasks::Task<mscorlib::System::Int32>(__result__);
			}

			mscorlib::System::Threading::Tasks::Task<mscorlib::System::Int32> TextReader::ReadBlockAsync(std::vector<mscorlib::System::Char*> buffer, mscorlib::System::Int32 index, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(buffer).name()))->eklass);
					__parameter_types__[1] = Global::GetType(typeid(index).name());
					__parameter_types__[2] = Global::GetType(typeid(count).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Char*>(buffer, typeid(mscorlib::System::Char).name());
					__parameters__[1] = &index;
					__parameters__[2] = &count;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "TextReader", 0, NULL, "ReadBlockAsync", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Threading::Tasks::Task<mscorlib::System::Int32>(__result__);
			}

			mscorlib::System::Threading::Tasks::Task<mscorlib::System::String> TextReader::ReadLineAsync()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "TextReader", 0, NULL, "ReadLineAsync", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Threading::Tasks::Task<mscorlib::System::String>(__result__);
			}

			mscorlib::System::Threading::Tasks::Task<mscorlib::System::String> TextReader::ReadToEndAsync()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "TextReader", 0, NULL, "ReadToEndAsync", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Threading::Tasks::Task<mscorlib::System::String>(__result__);
			}

				//	Get/Set:Null
			mscorlib::System::IO::TextReader TextReader::get_Null()
			{
				return Global::GetFieldValue("mscorlib", "System.IO", "TextReader", 0, NULL, "Null");
			}

			void TextReader::set_Null(mscorlib::System::IO::TextReader  value)
			{
				throw;
			}


		}
	}
}
