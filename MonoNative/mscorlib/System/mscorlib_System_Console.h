#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_CONSOLE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_CONSOLE_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_ConsoleColor.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		class String;
		class Decimal;
		class ConsoleKeyInfo;
		class ConsoleCancelEventArgs;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace IO
		{

			class TextWriter;
			class TextReader;
			class Stream;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Text
		{

			class Encoding;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{

		class Console
			: public mscorlib::System::Object
		{
		public:
			Console(mscorlib::NativeTypeInfo *nativeTypeInfo)
			: mscorlib::System::Object(nativeTypeInfo)
			{
			};
		
			Console(MonoObject *nativeObject)
			: mscorlib::System::Object(nativeObject)
			{
			};
		
			~Console()
			{
			};
		

			Console & operator=(Console &value) { __native_object__ = value.GetNativeObject(); return value; };
			operator MonoObject*() { return __native_object__; };
			MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


			static mscorlib::System::IO::Stream  OpenStandardError();
			static mscorlib::System::IO::Stream  OpenStandardError(mscorlib::System::Int32 bufferSize);
			static mscorlib::System::IO::Stream  OpenStandardInput();
			static mscorlib::System::IO::Stream  OpenStandardInput(mscorlib::System::Int32 bufferSize);
			static mscorlib::System::IO::Stream  OpenStandardOutput();
			static mscorlib::System::IO::Stream  OpenStandardOutput(mscorlib::System::Int32 bufferSize);
			static void  SetError(mscorlib::System::IO::TextWriter newError);
			static void  SetIn(mscorlib::System::IO::TextReader newIn);
			static void  SetOut(mscorlib::System::IO::TextWriter newOut);
			static void  Write(mscorlib::System::Boolean value);
			static void  Write(mscorlib::System::Char value);
			static void  Write(std::vector<mscorlib::System::Char*> buffer);
			static void  Write(mscorlib::System::Decimal value);
			static void  Write(mscorlib::System::Double value);
			static void  Write(mscorlib::System::Int32 value);
			static void  Write(mscorlib::System::Int64 value);
			static void  Write(mscorlib::System::Object value);
			static void  Write(mscorlib::System::Single value);
			static void  Write(mscorlib::System::String value);
			static void  Write(mscorlib::System::UInt32 value);
			static void  Write(mscorlib::System::UInt64 value);
			static void  Write(mscorlib::System::String format, mscorlib::System::Object arg0);
			static void  Write(mscorlib::System::String format, std::vector<mscorlib::System::Object*> arg);
			static void  Write(std::vector<mscorlib::System::Char*> buffer, mscorlib::System::Int32 index, mscorlib::System::Int32 count);
			static void  Write(mscorlib::System::String format, mscorlib::System::Object arg0, mscorlib::System::Object arg1);
			static void  Write(mscorlib::System::String format, mscorlib::System::Object arg0, mscorlib::System::Object arg1, mscorlib::System::Object arg2);
			static void  Write(mscorlib::System::String format, mscorlib::System::Object arg0, mscorlib::System::Object arg1, mscorlib::System::Object arg2, mscorlib::System::Object arg3);
			static void  WriteLine();
			static void  WriteLine(mscorlib::System::Boolean value);
			static void  WriteLine(mscorlib::System::Char value);
			static void  WriteLine(std::vector<mscorlib::System::Char*> buffer);
			static void  WriteLine(mscorlib::System::Decimal value);
			static void  WriteLine(mscorlib::System::Double value);
			static void  WriteLine(mscorlib::System::Int32 value);
			static void  WriteLine(mscorlib::System::Int64 value);
			static void  WriteLine(mscorlib::System::Object value);
			static void  WriteLine(mscorlib::System::Single value);
			static void  WriteLine(mscorlib::System::String value);
			static void  WriteLine(mscorlib::System::UInt32 value);
			static void  WriteLine(mscorlib::System::UInt64 value);
			static void  WriteLine(mscorlib::System::String format, mscorlib::System::Object arg0);
			static void  WriteLine(mscorlib::System::String format, std::vector<mscorlib::System::Object*> arg);
			static void  WriteLine(std::vector<mscorlib::System::Char*> buffer, mscorlib::System::Int32 index, mscorlib::System::Int32 count);
			static void  WriteLine(mscorlib::System::String format, mscorlib::System::Object arg0, mscorlib::System::Object arg1);
			static void  WriteLine(mscorlib::System::String format, mscorlib::System::Object arg0, mscorlib::System::Object arg1, mscorlib::System::Object arg2);
			static void  WriteLine(mscorlib::System::String format, mscorlib::System::Object arg0, mscorlib::System::Object arg1, mscorlib::System::Object arg2, mscorlib::System::Object arg3);
			static mscorlib::System::Int32  Read();
			static mscorlib::System::String  ReadLine();
			static void  Beep();
			static void  Beep(mscorlib::System::Int32 frequency, mscorlib::System::Int32 duration);
			static void  Clear();
			static void  MoveBufferArea(mscorlib::System::Int32 sourceLeft, mscorlib::System::Int32 sourceTop, mscorlib::System::Int32 sourceWidth, mscorlib::System::Int32 sourceHeight, mscorlib::System::Int32 targetLeft, mscorlib::System::Int32 targetTop);
			static void  MoveBufferArea(mscorlib::System::Int32 sourceLeft, mscorlib::System::Int32 sourceTop, mscorlib::System::Int32 sourceWidth, mscorlib::System::Int32 sourceHeight, mscorlib::System::Int32 targetLeft, mscorlib::System::Int32 targetTop, mscorlib::System::Char sourceChar, mscorlib::System::ConsoleColor::__ENUM__ sourceForeColor, mscorlib::System::ConsoleColor::__ENUM__ sourceBackColor);
			static mscorlib::System::ConsoleKeyInfo  ReadKey();
			static mscorlib::System::ConsoleKeyInfo  ReadKey(mscorlib::System::Boolean intercept);
			static void  ResetColor();
			static void  SetBufferSize(mscorlib::System::Int32 width, mscorlib::System::Int32 height);
			static void  SetCursorPosition(mscorlib::System::Int32 left, mscorlib::System::Int32 top);
			static void  SetWindowPosition(mscorlib::System::Int32 left, mscorlib::System::Int32 top);
			static void  SetWindowSize(mscorlib::System::Int32 width, mscorlib::System::Int32 height);
			virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			//Public Static Properties
			static Property<mscorlib::System::IO::TextWriter> Error;
			static Property<mscorlib::System::IO::TextWriter> Out;
			static Property<mscorlib::System::IO::TextReader> In;
			static Property<mscorlib::System::Text::Encoding> InputEncoding;
			static Property<mscorlib::System::Text::Encoding> OutputEncoding;
			static Property<mscorlib::System::ConsoleColor::__ENUM__> BackgroundColor;
			static Property<mscorlib::System::Int32> BufferHeight;
			static Property<mscorlib::System::Int32> BufferWidth;
			static Property<mscorlib::System::Boolean> CapsLock;
			static Property<mscorlib::System::Int32> CursorLeft;
			static Property<mscorlib::System::Int32> CursorTop;
			static Property<mscorlib::System::Int32> CursorSize;
			static Property<mscorlib::System::Boolean> CursorVisible;
			static Property<mscorlib::System::ConsoleColor::__ENUM__> ForegroundColor;
			static Property<mscorlib::System::Boolean> KeyAvailable;
			static Property<mscorlib::System::Int32> LargestWindowHeight;
			static Property<mscorlib::System::Int32> LargestWindowWidth;
			static Property<mscorlib::System::Boolean> NumberLock;
			static Property<mscorlib::System::String> Title;
			static Property<mscorlib::System::Boolean> TreatControlCAsInput;
			static Property<mscorlib::System::Int32> WindowHeight;
			static Property<mscorlib::System::Int32> WindowLeft;
			static Property<mscorlib::System::Int32> WindowTop;
			static Property<mscorlib::System::Int32> WindowWidth;
			static Property<mscorlib::System::Boolean> IsErrorRedirected;
			static Property<mscorlib::System::Boolean> IsOutputRedirected;
			static Property<mscorlib::System::Boolean> IsInputRedirected;

			//Get Set Static Properties Methods
			//	Get:Error
			static mscorlib::System::IO::TextWriter  get_Error();

			//	Get:Out
			static mscorlib::System::IO::TextWriter  get_Out();

			//	Get:In
			static mscorlib::System::IO::TextReader  get_In();

			//	Get/Set:InputEncoding
			static mscorlib::System::Text::Encoding  get_InputEncoding();
			static void set_InputEncoding(mscorlib::System::Text::Encoding  value);

			//	Get/Set:OutputEncoding
			static mscorlib::System::Text::Encoding  get_OutputEncoding();
			static void set_OutputEncoding(mscorlib::System::Text::Encoding  value);

			//	Get/Set:BackgroundColor
			static mscorlib::System::ConsoleColor::__ENUM__  get_BackgroundColor();
			static void set_BackgroundColor(mscorlib::System::ConsoleColor::__ENUM__  value);

			//	Get/Set:BufferHeight
			static mscorlib::System::Int32  get_BufferHeight();
			static void set_BufferHeight(mscorlib::System::Int32  value);

			//	Get/Set:BufferWidth
			static mscorlib::System::Int32  get_BufferWidth();
			static void set_BufferWidth(mscorlib::System::Int32  value);

			//	Get:CapsLock
			static mscorlib::System::Boolean  get_CapsLock();

			//	Get/Set:CursorLeft
			static mscorlib::System::Int32  get_CursorLeft();
			static void set_CursorLeft(mscorlib::System::Int32  value);

			//	Get/Set:CursorTop
			static mscorlib::System::Int32  get_CursorTop();
			static void set_CursorTop(mscorlib::System::Int32  value);

			//	Get/Set:CursorSize
			static mscorlib::System::Int32  get_CursorSize();
			static void set_CursorSize(mscorlib::System::Int32  value);

			//	Get/Set:CursorVisible
			static mscorlib::System::Boolean  get_CursorVisible();
			static void set_CursorVisible(mscorlib::System::Boolean  value);

			//	Get/Set:ForegroundColor
			static mscorlib::System::ConsoleColor::__ENUM__  get_ForegroundColor();
			static void set_ForegroundColor(mscorlib::System::ConsoleColor::__ENUM__  value);

			//	Get:KeyAvailable
			static mscorlib::System::Boolean  get_KeyAvailable();

			//	Get:LargestWindowHeight
			static mscorlib::System::Int32  get_LargestWindowHeight();

			//	Get:LargestWindowWidth
			static mscorlib::System::Int32  get_LargestWindowWidth();

			//	Get:NumberLock
			static mscorlib::System::Boolean  get_NumberLock();

			//	Get/Set:Title
			static mscorlib::System::String  get_Title();
			static void set_Title(mscorlib::System::String  value);

			//	Get/Set:TreatControlCAsInput
			static mscorlib::System::Boolean  get_TreatControlCAsInput();
			static void set_TreatControlCAsInput(mscorlib::System::Boolean  value);

			//	Get/Set:WindowHeight
			static mscorlib::System::Int32  get_WindowHeight();
			static void set_WindowHeight(mscorlib::System::Int32  value);

			//	Get/Set:WindowLeft
			static mscorlib::System::Int32  get_WindowLeft();
			static void set_WindowLeft(mscorlib::System::Int32  value);

			//	Get/Set:WindowTop
			static mscorlib::System::Int32  get_WindowTop();
			static void set_WindowTop(mscorlib::System::Int32  value);

			//	Get/Set:WindowWidth
			static mscorlib::System::Int32  get_WindowWidth();
			static void set_WindowWidth(mscorlib::System::Int32  value);

			//	Get:IsErrorRedirected
			static mscorlib::System::Boolean  get_IsErrorRedirected();

			//	Get:IsOutputRedirected
			static mscorlib::System::Boolean  get_IsOutputRedirected();

			//	Get:IsInputRedirected
			static mscorlib::System::Boolean  get_IsInputRedirected();


		
		protected:
		
		private:
		
		};

	}
}
#endif
