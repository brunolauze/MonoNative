#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_IO_STREAMREADER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_IO_STREAMREADER_H

#include <mscorlib/System/IO/mscorlib_System_IO_TextReader.h>
#include <mscorlib/System/IO/mscorlib_System_IO_Stream.h>
#include <mscorlib/System/Text/mscorlib_System_Text_Encoding.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_IDisposable.h>
#include <mscorlib/System/Threading/Tasks/mscorlib_System_Threading_Tasks_Task_1.h>
#include <mscorlib/System/mscorlib_System_Object.h>

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

		class Type;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace IO
		{

			class StreamReader
				: public mscorlib::System::IO::TextReader
				, public virtual mscorlib::System::IDisposable
			{
			public:
				StreamReader(mscorlib::System::IO::Stream stream)
				: mscorlib::System::IO::TextReader(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.StreamReader"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.IO", "Stream");
					__parameters__[0] = (MonoObject*)stream;
					__native_object__ = Global::New("mscorlib", "System.IO", "StreamReader", 1, __parameter_types__, __parameters__);
				};
			
				StreamReader(mscorlib::System::IO::Stream stream, mscorlib::System::Boolean detectEncodingFromByteOrderMarks)
				: mscorlib::System::IO::TextReader(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.StreamReader"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.IO", "Stream");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Boolean");
					__parameters__[0] = (MonoObject*)stream;
					__parameters__[1] = reinterpret_cast<void*>(detectEncodingFromByteOrderMarks);
					__native_object__ = Global::New("mscorlib", "System.IO", "StreamReader", 2, __parameter_types__, __parameters__);
				};
			
				StreamReader(mscorlib::System::IO::Stream stream, mscorlib::System::Text::Encoding encoding)
				: mscorlib::System::IO::TextReader(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.StreamReader"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.IO", "Stream");
					__parameter_types__[1] = Global::GetType("mscorlib", "System.Text", "Encoding");
					__parameters__[0] = (MonoObject*)stream;
					__parameters__[1] = (MonoObject*)encoding;
					__native_object__ = Global::New("mscorlib", "System.IO", "StreamReader", 2, __parameter_types__, __parameters__);
				};
			
				StreamReader(mscorlib::System::IO::Stream stream, mscorlib::System::Text::Encoding encoding, mscorlib::System::Boolean detectEncodingFromByteOrderMarks)
				: mscorlib::System::IO::TextReader(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.StreamReader"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.IO", "Stream");
					__parameter_types__[1] = Global::GetType("mscorlib", "System.Text", "Encoding");
					__parameter_types__[2] = Global::GetType("mscorlib", "System", "Boolean");
					__parameters__[0] = (MonoObject*)stream;
					__parameters__[1] = (MonoObject*)encoding;
					__parameters__[2] = reinterpret_cast<void*>(detectEncodingFromByteOrderMarks);
					__native_object__ = Global::New("mscorlib", "System.IO", "StreamReader", 3, __parameter_types__, __parameters__);
				};
			
				StreamReader(mscorlib::System::IO::Stream stream, mscorlib::System::Text::Encoding encoding, mscorlib::System::Boolean detectEncodingFromByteOrderMarks, mscorlib::System::Int32 bufferSize)
				: mscorlib::System::IO::TextReader(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.StreamReader"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.IO", "Stream");
					__parameter_types__[1] = Global::GetType("mscorlib", "System.Text", "Encoding");
					__parameter_types__[2] = Global::GetType("mscorlib", "System", "Boolean");
					__parameter_types__[3] = Global::GetType("mscorlib", "System", "Int32");
					__parameters__[0] = (MonoObject*)stream;
					__parameters__[1] = (MonoObject*)encoding;
					__parameters__[2] = reinterpret_cast<void*>(detectEncodingFromByteOrderMarks);
					__parameters__[3] = &bufferSize;
					__native_object__ = Global::New("mscorlib", "System.IO", "StreamReader", 4, __parameter_types__, __parameters__);
				};
			
				StreamReader(mscorlib::System::IO::Stream stream, mscorlib::System::Text::Encoding encoding, mscorlib::System::Boolean detectEncodingFromByteOrderMarks, mscorlib::System::Int32 bufferSize, mscorlib::System::Boolean leaveOpen)
				: mscorlib::System::IO::TextReader(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.StreamReader"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[5];
					void *__parameters__[5];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.IO", "Stream");
					__parameter_types__[1] = Global::GetType("mscorlib", "System.Text", "Encoding");
					__parameter_types__[2] = Global::GetType("mscorlib", "System", "Boolean");
					__parameter_types__[3] = Global::GetType("mscorlib", "System", "Int32");
					__parameter_types__[4] = Global::GetType("mscorlib", "System", "Boolean");
					__parameters__[0] = (MonoObject*)stream;
					__parameters__[1] = (MonoObject*)encoding;
					__parameters__[2] = reinterpret_cast<void*>(detectEncodingFromByteOrderMarks);
					__parameters__[3] = &bufferSize;
					__parameters__[4] = reinterpret_cast<void*>(leaveOpen);
					__native_object__ = Global::New("mscorlib", "System.IO", "StreamReader", 5, __parameter_types__, __parameters__);
				};
			
				StreamReader(mscorlib::System::String path)
				: mscorlib::System::IO::TextReader(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.StreamReader"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = (MonoObject*)path;
					__native_object__ = Global::New("mscorlib", "System.IO", "StreamReader", 1, __parameter_types__, __parameters__);
				};
			
				StreamReader(mscorlib::System::String path, mscorlib::System::Boolean detectEncodingFromByteOrderMarks)
				: mscorlib::System::IO::TextReader(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.StreamReader"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Boolean");
					__parameters__[0] = (MonoObject*)path;
					__parameters__[1] = reinterpret_cast<void*>(detectEncodingFromByteOrderMarks);
					__native_object__ = Global::New("mscorlib", "System.IO", "StreamReader", 2, __parameter_types__, __parameters__);
				};
			
				StreamReader(mscorlib::System::String path, mscorlib::System::Text::Encoding encoding)
				: mscorlib::System::IO::TextReader(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.StreamReader"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType("mscorlib", "System.Text", "Encoding");
					__parameters__[0] = (MonoObject*)path;
					__parameters__[1] = (MonoObject*)encoding;
					__native_object__ = Global::New("mscorlib", "System.IO", "StreamReader", 2, __parameter_types__, __parameters__);
				};
			
				StreamReader(mscorlib::System::String path, mscorlib::System::Text::Encoding encoding, mscorlib::System::Boolean detectEncodingFromByteOrderMarks)
				: mscorlib::System::IO::TextReader(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.StreamReader"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType("mscorlib", "System.Text", "Encoding");
					__parameter_types__[2] = Global::GetType("mscorlib", "System", "Boolean");
					__parameters__[0] = (MonoObject*)path;
					__parameters__[1] = (MonoObject*)encoding;
					__parameters__[2] = reinterpret_cast<void*>(detectEncodingFromByteOrderMarks);
					__native_object__ = Global::New("mscorlib", "System.IO", "StreamReader", 3, __parameter_types__, __parameters__);
				};
			
				StreamReader(mscorlib::System::String path, mscorlib::System::Text::Encoding encoding, mscorlib::System::Boolean detectEncodingFromByteOrderMarks, mscorlib::System::Int32 bufferSize)
				: mscorlib::System::IO::TextReader(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.StreamReader"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType("mscorlib", "System.Text", "Encoding");
					__parameter_types__[2] = Global::GetType("mscorlib", "System", "Boolean");
					__parameter_types__[3] = Global::GetType("mscorlib", "System", "Int32");
					__parameters__[0] = (MonoObject*)path;
					__parameters__[1] = (MonoObject*)encoding;
					__parameters__[2] = reinterpret_cast<void*>(detectEncodingFromByteOrderMarks);
					__parameters__[3] = &bufferSize;
					__native_object__ = Global::New("mscorlib", "System.IO", "StreamReader", 4, __parameter_types__, __parameters__);
				};
			
				StreamReader(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::IO::TextReader(nativeTypeInfo)
				, mscorlib::System::IDisposable(NULL)
				{
				};
			
				StreamReader(MonoObject *nativeObject)
				: mscorlib::System::IO::TextReader(nativeObject)
				, mscorlib::System::IDisposable(nativeObject)
				{
				};
			
				~StreamReader()
				{
				};
			

				StreamReader & operator=(StreamReader &value) { __native_object__ = value.GetNativeObject(); return value; };
				bool operator==(StreamReader &value) { return mscorlib::System::Object::Equals(value); };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual void  Close() override;
				void  DiscardBufferedData();
				virtual mscorlib::System::Int32  Peek() override;
				virtual mscorlib::System::Int32  Read() override;
				virtual mscorlib::System::Int32  Read(std::vector<mscorlib::System::Char*> buffer, mscorlib::System::Int32 index, mscorlib::System::Int32 count) override;
				virtual mscorlib::System::String  ReadLine() override;
				virtual mscorlib::System::String  ReadToEnd() override;
				virtual mscorlib::System::Int32  ReadBlock(std::vector<mscorlib::System::Char*> buffer, mscorlib::System::Int32 index, mscorlib::System::Int32 count) override;
				virtual mscorlib::System::Threading::Tasks::Task<mscorlib::System::Int32>  ReadAsync(std::vector<mscorlib::System::Char*> buffer, mscorlib::System::Int32 index, mscorlib::System::Int32 count) override;
				virtual mscorlib::System::Threading::Tasks::Task<mscorlib::System::Int32>  ReadBlockAsync(std::vector<mscorlib::System::Char*> buffer, mscorlib::System::Int32 index, mscorlib::System::Int32 count) override;
				virtual mscorlib::System::Threading::Tasks::Task<mscorlib::System::String>  ReadLineAsync() override;
				virtual mscorlib::System::Threading::Tasks::Task<mscorlib::System::String>  ReadToEndAsync() override;
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_BaseStream)) mscorlib::System::IO::Stream  BaseStream;
				__declspec(property(get=get_CurrentEncoding)) mscorlib::System::Text::Encoding  CurrentEncoding;
				__declspec(property(get=get_EndOfStream)) mscorlib::System::Boolean  EndOfStream;

				//Public Static Fields
				static Property<mscorlib::System::IO::StreamReader , mscorlib::System::IO::StreamReader> Null;

				//Get Set Properties Methods
				//	Get:BaseStream
				mscorlib::System::IO::Stream  get_BaseStream() const;

				//	Get:CurrentEncoding
				mscorlib::System::Text::Encoding  get_CurrentEncoding() const;

				//	Get:EndOfStream
				mscorlib::System::Boolean  get_EndOfStream() const;

				//	Get/Set:Null
				static mscorlib::System::IO::StreamReader  get_Null();
				static void set_Null(mscorlib::System::IO::StreamReader  value);

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
