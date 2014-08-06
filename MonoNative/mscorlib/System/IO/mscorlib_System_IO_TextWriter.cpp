#include <mscorlib/System/IO/mscorlib_System_IO_TextWriter.h>
#include <mscorlib/System/Text/mscorlib_System_Text_Encoding.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Decimal.h>
#include <mscorlib/System/Threading/Tasks/mscorlib_System_Threading_Tasks_Task.h>
#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_ObjRef.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace IO
		{

			//Public Methods
			void TextWriter::Close()
			{
					Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "Close", __native_object__, 0, NULL, NULL, NULL);
			}

			void TextWriter::Dispose()
			{
					Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "Dispose", __native_object__, 0, NULL, NULL, NULL);
			}

			void TextWriter::Flush()
			{
					Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "Flush", __native_object__, 0, NULL, NULL, NULL);
			}

			mscorlib::System::IO::TextWriter TextWriter::Synchronized(mscorlib::System::IO::TextWriter writer)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(writer).name());
					__parameters__[0] = (MonoObject*)writer;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "Synchronized", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::IO::TextWriter(__result__);
			}

			void TextWriter::Write(mscorlib::System::Boolean value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "Write", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void TextWriter::Write(mscorlib::System::Char value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "Write", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void TextWriter::Write(std::vector<mscorlib::System::Char*> buffer)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Char")), 1));
					__parameters__[0] = Global::FromArray<mscorlib::System::Char*>(buffer, typeid(mscorlib::System::Char).name());
					Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "Write", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void TextWriter::Write(mscorlib::System::Decimal value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "Write", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void TextWriter::Write(mscorlib::System::Double value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "Write", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void TextWriter::Write(mscorlib::System::Int32 value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "Write", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void TextWriter::Write(mscorlib::System::Int64 value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "Write", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void TextWriter::Write(mscorlib::System::Object value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "Write", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void TextWriter::Write(mscorlib::System::Single value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "Write", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void TextWriter::Write(mscorlib::System::String value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "Write", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void TextWriter::Write(const char *value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), value);
					Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "Write", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void TextWriter::Write(mscorlib::System::UInt32 value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "Write", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void TextWriter::Write(mscorlib::System::UInt64 value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "Write", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void TextWriter::Write(mscorlib::System::String format, mscorlib::System::Object arg0)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(format).name());
					__parameter_types__[1] = Global::GetType(typeid(arg0).name());
					__parameters__[0] = (MonoObject*)format;
					__parameters__[1] = (MonoObject*)arg0;
					Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "Write", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			void TextWriter::Write(const char *format, mscorlib::System::Object arg0)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType(typeid(arg0).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), format);
					__parameters__[1] = (MonoObject*)arg0;
					Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "Write", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			void TextWriter::Write(mscorlib::System::String format, std::vector<mscorlib::System::Object*> arg)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(format).name());
					__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
					__parameters__[0] = (MonoObject*)format;
					__parameters__[1] = Global::FromArray<mscorlib::System::Object*>(arg, typeid(mscorlib::System::Object).name());
					Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "Write", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			void TextWriter::Write(const char *format, std::vector<mscorlib::System::Object*> arg)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
					__parameters__[0] = mono_string_new(Global::GetDomain(), format);
					__parameters__[1] = Global::FromArray<mscorlib::System::Object*>(arg, typeid(mscorlib::System::Object).name());
					Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "Write", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			void TextWriter::Write(std::vector<mscorlib::System::Char*> buffer, mscorlib::System::Int32 index, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Char")), 1));
					__parameter_types__[1] = Global::GetType(typeid(index).name());
					__parameter_types__[2] = Global::GetType(typeid(count).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Char*>(buffer, typeid(mscorlib::System::Char).name());
					__parameters__[1] = &index;
					__parameters__[2] = &count;
					Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "Write", __native_object__, 3, __parameter_types__, __parameters__, NULL);
			}

			void TextWriter::Write(mscorlib::System::String format, mscorlib::System::Object arg0, mscorlib::System::Object arg1)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(format).name());
					__parameter_types__[1] = Global::GetType(typeid(arg0).name());
					__parameter_types__[2] = Global::GetType(typeid(arg1).name());
					__parameters__[0] = (MonoObject*)format;
					__parameters__[1] = (MonoObject*)arg0;
					__parameters__[2] = (MonoObject*)arg1;
					Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "Write", __native_object__, 3, __parameter_types__, __parameters__, NULL);
			}

			void TextWriter::Write(const char *format, mscorlib::System::Object arg0, mscorlib::System::Object arg1)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType(typeid(arg0).name());
					__parameter_types__[2] = Global::GetType(typeid(arg1).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), format);
					__parameters__[1] = (MonoObject*)arg0;
					__parameters__[2] = (MonoObject*)arg1;
					Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "Write", __native_object__, 3, __parameter_types__, __parameters__, NULL);
			}

			void TextWriter::Write(mscorlib::System::String format, mscorlib::System::Object arg0, mscorlib::System::Object arg1, mscorlib::System::Object arg2)
			{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = Global::GetType(typeid(format).name());
					__parameter_types__[1] = Global::GetType(typeid(arg0).name());
					__parameter_types__[2] = Global::GetType(typeid(arg1).name());
					__parameter_types__[3] = Global::GetType(typeid(arg2).name());
					__parameters__[0] = (MonoObject*)format;
					__parameters__[1] = (MonoObject*)arg0;
					__parameters__[2] = (MonoObject*)arg1;
					__parameters__[3] = (MonoObject*)arg2;
					Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "Write", __native_object__, 4, __parameter_types__, __parameters__, NULL);
			}

			void TextWriter::Write(const char *format, mscorlib::System::Object arg0, mscorlib::System::Object arg1, mscorlib::System::Object arg2)
			{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType(typeid(arg0).name());
					__parameter_types__[2] = Global::GetType(typeid(arg1).name());
					__parameter_types__[3] = Global::GetType(typeid(arg2).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), format);
					__parameters__[1] = (MonoObject*)arg0;
					__parameters__[2] = (MonoObject*)arg1;
					__parameters__[3] = (MonoObject*)arg2;
					Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "Write", __native_object__, 4, __parameter_types__, __parameters__, NULL);
			}

			void TextWriter::WriteLine()
			{
					Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "WriteLine", __native_object__, 0, NULL, NULL, NULL);
			}

			void TextWriter::WriteLine(mscorlib::System::Boolean value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "WriteLine", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void TextWriter::WriteLine(mscorlib::System::Char value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "WriteLine", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void TextWriter::WriteLine(std::vector<mscorlib::System::Char*> buffer)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Char")), 1));
					__parameters__[0] = Global::FromArray<mscorlib::System::Char*>(buffer, typeid(mscorlib::System::Char).name());
					Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "WriteLine", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void TextWriter::WriteLine(mscorlib::System::Decimal value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "WriteLine", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void TextWriter::WriteLine(mscorlib::System::Double value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "WriteLine", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void TextWriter::WriteLine(mscorlib::System::Int32 value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "WriteLine", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void TextWriter::WriteLine(mscorlib::System::Int64 value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "WriteLine", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void TextWriter::WriteLine(mscorlib::System::Object value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "WriteLine", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void TextWriter::WriteLine(mscorlib::System::Single value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "WriteLine", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void TextWriter::WriteLine(mscorlib::System::String value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "WriteLine", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void TextWriter::WriteLine(const char *value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), value);
					Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "WriteLine", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void TextWriter::WriteLine(mscorlib::System::UInt32 value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "WriteLine", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void TextWriter::WriteLine(mscorlib::System::UInt64 value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "WriteLine", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void TextWriter::WriteLine(mscorlib::System::String format, mscorlib::System::Object arg0)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(format).name());
					__parameter_types__[1] = Global::GetType(typeid(arg0).name());
					__parameters__[0] = (MonoObject*)format;
					__parameters__[1] = (MonoObject*)arg0;
					Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "WriteLine", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			void TextWriter::WriteLine(const char *format, mscorlib::System::Object arg0)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType(typeid(arg0).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), format);
					__parameters__[1] = (MonoObject*)arg0;
					Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "WriteLine", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			void TextWriter::WriteLine(mscorlib::System::String format, std::vector<mscorlib::System::Object*> arg)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(format).name());
					__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
					__parameters__[0] = (MonoObject*)format;
					__parameters__[1] = Global::FromArray<mscorlib::System::Object*>(arg, typeid(mscorlib::System::Object).name());
					Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "WriteLine", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			void TextWriter::WriteLine(const char *format, std::vector<mscorlib::System::Object*> arg)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
					__parameters__[0] = mono_string_new(Global::GetDomain(), format);
					__parameters__[1] = Global::FromArray<mscorlib::System::Object*>(arg, typeid(mscorlib::System::Object).name());
					Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "WriteLine", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			void TextWriter::WriteLine(std::vector<mscorlib::System::Char*> buffer, mscorlib::System::Int32 index, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Char")), 1));
					__parameter_types__[1] = Global::GetType(typeid(index).name());
					__parameter_types__[2] = Global::GetType(typeid(count).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Char*>(buffer, typeid(mscorlib::System::Char).name());
					__parameters__[1] = &index;
					__parameters__[2] = &count;
					Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "WriteLine", __native_object__, 3, __parameter_types__, __parameters__, NULL);
			}

			void TextWriter::WriteLine(mscorlib::System::String format, mscorlib::System::Object arg0, mscorlib::System::Object arg1)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(format).name());
					__parameter_types__[1] = Global::GetType(typeid(arg0).name());
					__parameter_types__[2] = Global::GetType(typeid(arg1).name());
					__parameters__[0] = (MonoObject*)format;
					__parameters__[1] = (MonoObject*)arg0;
					__parameters__[2] = (MonoObject*)arg1;
					Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "WriteLine", __native_object__, 3, __parameter_types__, __parameters__, NULL);
			}

			void TextWriter::WriteLine(const char *format, mscorlib::System::Object arg0, mscorlib::System::Object arg1)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType(typeid(arg0).name());
					__parameter_types__[2] = Global::GetType(typeid(arg1).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), format);
					__parameters__[1] = (MonoObject*)arg0;
					__parameters__[2] = (MonoObject*)arg1;
					Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "WriteLine", __native_object__, 3, __parameter_types__, __parameters__, NULL);
			}

			void TextWriter::WriteLine(mscorlib::System::String format, mscorlib::System::Object arg0, mscorlib::System::Object arg1, mscorlib::System::Object arg2)
			{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = Global::GetType(typeid(format).name());
					__parameter_types__[1] = Global::GetType(typeid(arg0).name());
					__parameter_types__[2] = Global::GetType(typeid(arg1).name());
					__parameter_types__[3] = Global::GetType(typeid(arg2).name());
					__parameters__[0] = (MonoObject*)format;
					__parameters__[1] = (MonoObject*)arg0;
					__parameters__[2] = (MonoObject*)arg1;
					__parameters__[3] = (MonoObject*)arg2;
					Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "WriteLine", __native_object__, 4, __parameter_types__, __parameters__, NULL);
			}

			void TextWriter::WriteLine(const char *format, mscorlib::System::Object arg0, mscorlib::System::Object arg1, mscorlib::System::Object arg2)
			{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType(typeid(arg0).name());
					__parameter_types__[2] = Global::GetType(typeid(arg1).name());
					__parameter_types__[3] = Global::GetType(typeid(arg2).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), format);
					__parameters__[1] = (MonoObject*)arg0;
					__parameters__[2] = (MonoObject*)arg1;
					__parameters__[3] = (MonoObject*)arg2;
					Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "WriteLine", __native_object__, 4, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Threading::Tasks::TaskBase TextWriter::FlushAsync()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "FlushAsync", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Threading::Tasks::TaskBase(__result__);
			}

			mscorlib::System::Threading::Tasks::TaskBase TextWriter::WriteAsync(mscorlib::System::Char value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "WriteAsync", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Threading::Tasks::TaskBase(__result__);
			}

			mscorlib::System::Threading::Tasks::TaskBase TextWriter::WriteAsync(std::vector<mscorlib::System::Char*> buffer)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Char")), 1));
					__parameters__[0] = Global::FromArray<mscorlib::System::Char*>(buffer, typeid(mscorlib::System::Char).name());
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "WriteAsync", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Threading::Tasks::TaskBase(__result__);
			}

			mscorlib::System::Threading::Tasks::TaskBase TextWriter::WriteAsync(std::vector<mscorlib::System::Char*> buffer, mscorlib::System::Int32 index, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Char")), 1));
					__parameter_types__[1] = Global::GetType(typeid(index).name());
					__parameter_types__[2] = Global::GetType(typeid(count).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Char*>(buffer, typeid(mscorlib::System::Char).name());
					__parameters__[1] = &index;
					__parameters__[2] = &count;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "WriteAsync", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Threading::Tasks::TaskBase(__result__);
			}

			mscorlib::System::Threading::Tasks::TaskBase TextWriter::WriteAsync(mscorlib::System::String value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "WriteAsync", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Threading::Tasks::TaskBase(__result__);
			}

			mscorlib::System::Threading::Tasks::TaskBase TextWriter::WriteAsync(const char *value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), value);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "WriteAsync", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Threading::Tasks::TaskBase(__result__);
			}

			mscorlib::System::Threading::Tasks::TaskBase TextWriter::WriteLineAsync()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "WriteLineAsync", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Threading::Tasks::TaskBase(__result__);
			}

			mscorlib::System::Threading::Tasks::TaskBase TextWriter::WriteLineAsync(mscorlib::System::Char value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "WriteLineAsync", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Threading::Tasks::TaskBase(__result__);
			}

			mscorlib::System::Threading::Tasks::TaskBase TextWriter::WriteLineAsync(std::vector<mscorlib::System::Char*> buffer)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Char")), 1));
					__parameters__[0] = Global::FromArray<mscorlib::System::Char*>(buffer, typeid(mscorlib::System::Char).name());
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "WriteLineAsync", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Threading::Tasks::TaskBase(__result__);
			}

			mscorlib::System::Threading::Tasks::TaskBase TextWriter::WriteLineAsync(std::vector<mscorlib::System::Char*> buffer, mscorlib::System::Int32 index, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Char")), 1));
					__parameter_types__[1] = Global::GetType(typeid(index).name());
					__parameter_types__[2] = Global::GetType(typeid(count).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Char*>(buffer, typeid(mscorlib::System::Char).name());
					__parameters__[1] = &index;
					__parameters__[2] = &count;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "WriteLineAsync", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Threading::Tasks::TaskBase(__result__);
			}

			mscorlib::System::Threading::Tasks::TaskBase TextWriter::WriteLineAsync(mscorlib::System::String value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "WriteLineAsync", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Threading::Tasks::TaskBase(__result__);
			}

			mscorlib::System::Threading::Tasks::TaskBase TextWriter::WriteLineAsync(const char *value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), value);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "WriteLineAsync", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Threading::Tasks::TaskBase(__result__);
			}

			//Get Set Properties Methods
			//	Get:Encoding
			mscorlib::System::Text::Encoding  TextWriter::get_Encoding() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "get_Encoding", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Text::Encoding(__result__);
			}


			//	Get:FormatProvider
			mscorlib::System::IFormatProvider  TextWriter::get_FormatProvider() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "get_FormatProvider", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::IFormatProvider(__result__);
			}


			//	Get/Set:NewLine
			mscorlib::System::String  TextWriter::get_NewLine() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "get_NewLine", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}

			void TextWriter::set_NewLine(mscorlib::System::String  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "set_NewLine", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


				//	Get/Set:Null
			mscorlib::System::IO::TextWriter TextWriter::get_Null()
			{
				return Global::GetFieldValue("mscorlib", "System.IO", "TextWriter", 0, NULL, "Null");
			}

			void TextWriter::set_Null(mscorlib::System::IO::TextWriter  value)
			{
				throw;
			}


		}
	}
}
