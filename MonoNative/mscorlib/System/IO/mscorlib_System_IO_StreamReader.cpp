#include <mscorlib/System/IO/mscorlib_System_IO_StreamReader.h>
#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_ObjRef.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace IO
		{

			//Public Methods
			void StreamReader::Close()
			{
					Global::InvokeMethod("mscorlib", "System.IO", "StreamReader", 0, NULL, "Close", __native_object__, 0, NULL, NULL, NULL);
			}

			void StreamReader::DiscardBufferedData()
			{
					Global::InvokeMethod("mscorlib", "System.IO", "StreamReader", 0, NULL, "DiscardBufferedData", __native_object__, 0, NULL, NULL, NULL);
			}

			mscorlib::System::Int32 StreamReader::Peek()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "StreamReader", 0, NULL, "Peek", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 StreamReader::Read()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "StreamReader", 0, NULL, "Read", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 StreamReader::Read(std::vector<mscorlib::System::Char*> buffer, mscorlib::System::Int32 index, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Char")), 1));
					__parameter_types__[1] = Global::GetType(typeid(index).name());
					__parameter_types__[2] = Global::GetType(typeid(count).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Char*>(buffer, typeid(mscorlib::System::Char).name());
					__parameters__[1] = &index;
					__parameters__[2] = &count;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "StreamReader", 0, NULL, "Read", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::String StreamReader::ReadLine()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "StreamReader", 0, NULL, "ReadLine", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::String StreamReader::ReadToEnd()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "StreamReader", 0, NULL, "ReadToEnd", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::Int32 StreamReader::ReadBlock(std::vector<mscorlib::System::Char*> buffer, mscorlib::System::Int32 index, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Char")), 1));
					__parameter_types__[1] = Global::GetType(typeid(index).name());
					__parameter_types__[2] = Global::GetType(typeid(count).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Char*>(buffer, typeid(mscorlib::System::Char).name());
					__parameters__[1] = &index;
					__parameters__[2] = &count;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "StreamReader", 0, NULL, "ReadBlock", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Threading::Tasks::Task<mscorlib::System::Int32> StreamReader::ReadAsync(std::vector<mscorlib::System::Char*> buffer, mscorlib::System::Int32 index, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Char")), 1));
					__parameter_types__[1] = Global::GetType(typeid(index).name());
					__parameter_types__[2] = Global::GetType(typeid(count).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Char*>(buffer, typeid(mscorlib::System::Char).name());
					__parameters__[1] = &index;
					__parameters__[2] = &count;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "StreamReader", 0, NULL, "ReadAsync", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Threading::Tasks::Task<mscorlib::System::Int32>(__result__);
			}

			mscorlib::System::Threading::Tasks::Task<mscorlib::System::Int32> StreamReader::ReadBlockAsync(std::vector<mscorlib::System::Char*> buffer, mscorlib::System::Int32 index, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Char")), 1));
					__parameter_types__[1] = Global::GetType(typeid(index).name());
					__parameter_types__[2] = Global::GetType(typeid(count).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Char*>(buffer, typeid(mscorlib::System::Char).name());
					__parameters__[1] = &index;
					__parameters__[2] = &count;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "StreamReader", 0, NULL, "ReadBlockAsync", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Threading::Tasks::Task<mscorlib::System::Int32>(__result__);
			}

			mscorlib::System::Threading::Tasks::Task<mscorlib::System::String> StreamReader::ReadLineAsync()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "StreamReader", 0, NULL, "ReadLineAsync", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Threading::Tasks::Task<mscorlib::System::String>(__result__);
			}

			mscorlib::System::Threading::Tasks::Task<mscorlib::System::String> StreamReader::ReadToEndAsync()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "StreamReader", 0, NULL, "ReadToEndAsync", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Threading::Tasks::Task<mscorlib::System::String>(__result__);
			}

			//Get Set Properties Methods
			//	Get:BaseStream
			mscorlib::System::IO::Stream  StreamReader::get_BaseStream() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "StreamReader", 0, NULL, "get_BaseStream", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::IO::Stream(__result__);
			}


			//	Get:CurrentEncoding
			mscorlib::System::Text::Encoding  StreamReader::get_CurrentEncoding() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "StreamReader", 0, NULL, "get_CurrentEncoding", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Text::Encoding(__result__);
			}


			//	Get:EndOfStream
			mscorlib::System::Boolean  StreamReader::get_EndOfStream() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "StreamReader", 0, NULL, "get_EndOfStream", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


				//	Get/Set:Null
			mscorlib::System::IO::StreamReader StreamReader::get_Null()
			{
				return Global::GetFieldValue("mscorlib", "System.IO", "StreamReader", 0, NULL, "Null");
			}

			void StreamReader::set_Null(mscorlib::System::IO::StreamReader  value)
			{
				throw;
			}


		}
	}
}
