#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_IO_STREAMWRITER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_IO_STREAMWRITER_H

#include <mscorlib/System/IO/mscorlib_System_IO_TextWriter.h>
#include <mscorlib/System/IO/mscorlib_System_IO_Stream.h>
#include <mscorlib/System/Text/mscorlib_System_Text_Encoding.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_IDisposable.h>
#include <mscorlib/System/mscorlib_System_IFormatProvider.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{
			namespace Tasks
			{

				class TaskBase;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{

		class Decimal;
		class Type;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Remoting
			{

				class ObjRef;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace IO
		{

			class StreamWriter
				: public mscorlib::System::IO::TextWriter
				, public virtual mscorlib::System::IDisposable
			{
			public:
				StreamWriter(mscorlib::System::IO::Stream stream)
				: mscorlib::System::IO::TextWriter(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.StreamWriter"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.IO", "Stream");
					__parameters__[0] = (MonoObject*)stream;
					__native_object__ = Global::New("mscorlib", "System.IO", "StreamWriter", 1, __parameter_types__, __parameters__);
				};
			
				StreamWriter(mscorlib::System::IO::Stream stream, mscorlib::System::Text::Encoding encoding)
				: mscorlib::System::IO::TextWriter(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.StreamWriter"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.IO", "Stream");
					__parameter_types__[1] = Global::GetType("mscorlib", "System.Text", "Encoding");
					__parameters__[0] = (MonoObject*)stream;
					__parameters__[1] = (MonoObject*)encoding;
					__native_object__ = Global::New("mscorlib", "System.IO", "StreamWriter", 2, __parameter_types__, __parameters__);
				};
			
				StreamWriter(mscorlib::System::IO::Stream stream, mscorlib::System::Text::Encoding encoding, mscorlib::System::Int32 bufferSize)
				: mscorlib::System::IO::TextWriter(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.StreamWriter"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.IO", "Stream");
					__parameter_types__[1] = Global::GetType("mscorlib", "System.Text", "Encoding");
					__parameter_types__[2] = Global::GetType("mscorlib", "System", "Int32");
					__parameters__[0] = (MonoObject*)stream;
					__parameters__[1] = (MonoObject*)encoding;
					__parameters__[2] = &bufferSize;
					__native_object__ = Global::New("mscorlib", "System.IO", "StreamWriter", 3, __parameter_types__, __parameters__);
				};
			
				StreamWriter(mscorlib::System::IO::Stream stream, mscorlib::System::Text::Encoding encoding, mscorlib::System::Int32 bufferSize, mscorlib::System::Boolean leaveOpen)
				: mscorlib::System::IO::TextWriter(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.StreamWriter"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.IO", "Stream");
					__parameter_types__[1] = Global::GetType("mscorlib", "System.Text", "Encoding");
					__parameter_types__[2] = Global::GetType("mscorlib", "System", "Int32");
					__parameter_types__[3] = Global::GetType("mscorlib", "System", "Boolean");
					__parameters__[0] = (MonoObject*)stream;
					__parameters__[1] = (MonoObject*)encoding;
					__parameters__[2] = &bufferSize;
					__parameters__[3] = reinterpret_cast<void*>(leaveOpen);
					__native_object__ = Global::New("mscorlib", "System.IO", "StreamWriter", 4, __parameter_types__, __parameters__);
				};
			
				StreamWriter(mscorlib::System::String path)
				: mscorlib::System::IO::TextWriter(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.StreamWriter"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = (MonoObject*)path;
					__native_object__ = Global::New("mscorlib", "System.IO", "StreamWriter", 1, __parameter_types__, __parameters__);
				};
			
				StreamWriter(mscorlib::System::String path, mscorlib::System::Boolean append)
				: mscorlib::System::IO::TextWriter(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.StreamWriter"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Boolean");
					__parameters__[0] = (MonoObject*)path;
					__parameters__[1] = reinterpret_cast<void*>(append);
					__native_object__ = Global::New("mscorlib", "System.IO", "StreamWriter", 2, __parameter_types__, __parameters__);
				};
			
				StreamWriter(mscorlib::System::String path, mscorlib::System::Boolean append, mscorlib::System::Text::Encoding encoding)
				: mscorlib::System::IO::TextWriter(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.StreamWriter"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Boolean");
					__parameter_types__[2] = Global::GetType("mscorlib", "System.Text", "Encoding");
					__parameters__[0] = (MonoObject*)path;
					__parameters__[1] = reinterpret_cast<void*>(append);
					__parameters__[2] = (MonoObject*)encoding;
					__native_object__ = Global::New("mscorlib", "System.IO", "StreamWriter", 3, __parameter_types__, __parameters__);
				};
			
				StreamWriter(mscorlib::System::String path, mscorlib::System::Boolean append, mscorlib::System::Text::Encoding encoding, mscorlib::System::Int32 bufferSize)
				: mscorlib::System::IO::TextWriter(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.StreamWriter"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Boolean");
					__parameter_types__[2] = Global::GetType("mscorlib", "System.Text", "Encoding");
					__parameter_types__[3] = Global::GetType("mscorlib", "System", "Int32");
					__parameters__[0] = (MonoObject*)path;
					__parameters__[1] = reinterpret_cast<void*>(append);
					__parameters__[2] = (MonoObject*)encoding;
					__parameters__[3] = &bufferSize;
					__native_object__ = Global::New("mscorlib", "System.IO", "StreamWriter", 4, __parameter_types__, __parameters__);
				};
			
				StreamWriter(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::IO::TextWriter(nativeTypeInfo)
				, mscorlib::System::IDisposable(NULL)
				{
				};
			
				StreamWriter(MonoObject *nativeObject)
				: mscorlib::System::IO::TextWriter(nativeObject)
				, mscorlib::System::IDisposable(nativeObject)
				{
				};
			
				~StreamWriter()
				{
				};
			

				StreamWriter & operator=(StreamWriter &value) { __native_object__ = value.GetNativeObject(); return value; };
				bool operator==(StreamWriter &value) { return mscorlib::System::Object::Equals(value); };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual void  Flush() override;
				virtual void  Write(std::vector<mscorlib::System::Char*> buffer, mscorlib::System::Int32 index, mscorlib::System::Int32 count) override;
				virtual void  Write(mscorlib::System::Char value) override;
				virtual void  Write(std::vector<mscorlib::System::Char*> buffer) override;
				virtual void  Write(mscorlib::System::String value) override;
				virtual void  Write(const char *value) override;
				virtual void  Close() override;
				virtual mscorlib::System::Threading::Tasks::TaskBase  FlushAsync() override;
				virtual mscorlib::System::Threading::Tasks::TaskBase  WriteAsync(mscorlib::System::Char value) override;
				virtual mscorlib::System::Threading::Tasks::TaskBase  WriteAsync(std::vector<mscorlib::System::Char*> buffer, mscorlib::System::Int32 index, mscorlib::System::Int32 count) override;
				virtual mscorlib::System::Threading::Tasks::TaskBase  WriteAsync(mscorlib::System::String value) override;
				virtual mscorlib::System::Threading::Tasks::TaskBase  WriteAsync(const char *value) override;
				virtual mscorlib::System::Threading::Tasks::TaskBase  WriteLineAsync() override;
				virtual mscorlib::System::Threading::Tasks::TaskBase  WriteLineAsync(mscorlib::System::Char value) override;
				virtual mscorlib::System::Threading::Tasks::TaskBase  WriteLineAsync(std::vector<mscorlib::System::Char*> buffer, mscorlib::System::Int32 index, mscorlib::System::Int32 count) override;
				virtual mscorlib::System::Threading::Tasks::TaskBase  WriteLineAsync(mscorlib::System::String value) override;
				virtual mscorlib::System::Threading::Tasks::TaskBase  WriteLineAsync(const char *value) override;
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_AutoFlush, put=set_AutoFlush)) mscorlib::System::Boolean  AutoFlush;
				__declspec(property(get=get_BaseStream)) mscorlib::System::IO::Stream  BaseStream;
				__declspec(property(get=get_Encoding)) mscorlib::System::Text::Encoding  Encoding;
				__declspec(property(get=get_FormatProvider)) mscorlib::System::IFormatProvider  FormatProvider;
				__declspec(property(get=get_NewLine, put=set_NewLine)) mscorlib::System::String  NewLine;

				//Public Static Fields
				static Property<mscorlib::System::IO::StreamWriter , mscorlib::System::IO::StreamWriter> Null;

				//Get Set Properties Methods
				//	Get/Set:AutoFlush
				mscorlib::System::Boolean  get_AutoFlush() const;
				void set_AutoFlush(mscorlib::System::Boolean  value);

				//	Get:BaseStream
				mscorlib::System::IO::Stream  get_BaseStream() const;

				//	Get:Encoding
				mscorlib::System::Text::Encoding  get_Encoding() const;

				//	Get:FormatProvider
				mscorlib::System::IFormatProvider  get_FormatProvider() const;

				//	Get/Set:NewLine
				mscorlib::System::String  get_NewLine() const;
				void set_NewLine(mscorlib::System::String  value);

				//	Get/Set:Null
				static mscorlib::System::IO::StreamWriter  get_Null();
				static void set_Null(mscorlib::System::IO::StreamWriter  value);

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
