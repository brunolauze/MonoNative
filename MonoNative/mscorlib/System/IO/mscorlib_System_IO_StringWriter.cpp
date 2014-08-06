#include <mscorlib/System/IO/mscorlib_System_IO_StringWriter.h>
#include <mscorlib/System/Text/mscorlib_System_Text_Encoding.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Threading/Tasks/mscorlib_System_Threading_Tasks_Task.h>
#include <mscorlib/System/mscorlib_System_Decimal.h>
#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_ObjRef.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace IO
		{

			//Public Methods
			void StringWriter::Close()
			{
					Global::InvokeMethod("mscorlib", "System.IO", "StringWriter", 0, NULL, "Close", __native_object__, 0, NULL, NULL, NULL);
			}

			mscorlib::System::Text::StringBuilder StringWriter::GetStringBuilder()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "StringWriter", 0, NULL, "GetStringBuilder", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Text::StringBuilder(__result__);
			}

			mscorlib::System::String StringWriter::ToString()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "StringWriter", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
			}

			void StringWriter::Write(mscorlib::System::Char value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					Global::InvokeMethod("mscorlib", "System.IO", "StringWriter", 0, NULL, "Write", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void StringWriter::Write(mscorlib::System::String value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.IO", "StringWriter", 0, NULL, "Write", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void StringWriter::Write(const char *value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), value);
					Global::InvokeMethod("mscorlib", "System.IO", "StringWriter", 0, NULL, "Write", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void StringWriter::Write(std::vector<mscorlib::System::Char*> buffer, mscorlib::System::Int32 index, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Char")), 1));
					__parameter_types__[1] = Global::GetType(typeid(index).name());
					__parameter_types__[2] = Global::GetType(typeid(count).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Char*>(buffer, typeid(mscorlib::System::Char).name());
					__parameters__[1] = &index;
					__parameters__[2] = &count;
					Global::InvokeMethod("mscorlib", "System.IO", "StringWriter", 0, NULL, "Write", __native_object__, 3, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Threading::Tasks::TaskBase StringWriter::FlushAsync()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "StringWriter", 0, NULL, "FlushAsync", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Threading::Tasks::TaskBase(__result__);
			}

			mscorlib::System::Threading::Tasks::TaskBase StringWriter::WriteAsync(mscorlib::System::Char value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "StringWriter", 0, NULL, "WriteAsync", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Threading::Tasks::TaskBase(__result__);
			}

			mscorlib::System::Threading::Tasks::TaskBase StringWriter::WriteAsync(std::vector<mscorlib::System::Char*> buffer, mscorlib::System::Int32 index, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Char")), 1));
					__parameter_types__[1] = Global::GetType(typeid(index).name());
					__parameter_types__[2] = Global::GetType(typeid(count).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Char*>(buffer, typeid(mscorlib::System::Char).name());
					__parameters__[1] = &index;
					__parameters__[2] = &count;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "StringWriter", 0, NULL, "WriteAsync", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Threading::Tasks::TaskBase(__result__);
			}

			mscorlib::System::Threading::Tasks::TaskBase StringWriter::WriteAsync(mscorlib::System::String value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "StringWriter", 0, NULL, "WriteAsync", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Threading::Tasks::TaskBase(__result__);
			}

			mscorlib::System::Threading::Tasks::TaskBase StringWriter::WriteAsync(const char *value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), value);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "StringWriter", 0, NULL, "WriteAsync", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Threading::Tasks::TaskBase(__result__);
			}

			mscorlib::System::Threading::Tasks::TaskBase StringWriter::WriteLineAsync(mscorlib::System::Char value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "StringWriter", 0, NULL, "WriteLineAsync", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Threading::Tasks::TaskBase(__result__);
			}

			mscorlib::System::Threading::Tasks::TaskBase StringWriter::WriteLineAsync(std::vector<mscorlib::System::Char*> buffer, mscorlib::System::Int32 index, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Char")), 1));
					__parameter_types__[1] = Global::GetType(typeid(index).name());
					__parameter_types__[2] = Global::GetType(typeid(count).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Char*>(buffer, typeid(mscorlib::System::Char).name());
					__parameters__[1] = &index;
					__parameters__[2] = &count;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "StringWriter", 0, NULL, "WriteLineAsync", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Threading::Tasks::TaskBase(__result__);
			}

			mscorlib::System::Threading::Tasks::TaskBase StringWriter::WriteLineAsync(mscorlib::System::String value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "StringWriter", 0, NULL, "WriteLineAsync", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Threading::Tasks::TaskBase(__result__);
			}

			mscorlib::System::Threading::Tasks::TaskBase StringWriter::WriteLineAsync(const char *value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), value);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "StringWriter", 0, NULL, "WriteLineAsync", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Threading::Tasks::TaskBase(__result__);
			}

			//Get Set Properties Methods
			//	Get:Encoding
			mscorlib::System::Text::Encoding  StringWriter::get_Encoding() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "StringWriter", 0, NULL, "get_Encoding", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Text::Encoding(__result__);
			}


			//	Get:FormatProvider
			mscorlib::System::IFormatProvider  StringWriter::get_FormatProvider() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "get_FormatProvider", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::IFormatProvider(__result__);
			}


			//	Get/Set:NewLine
			mscorlib::System::String  StringWriter::get_NewLine() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "get_NewLine", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}

			void StringWriter::set_NewLine(mscorlib::System::String  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.IO", "TextWriter", 0, NULL, "set_NewLine", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}



		}
	}
}
