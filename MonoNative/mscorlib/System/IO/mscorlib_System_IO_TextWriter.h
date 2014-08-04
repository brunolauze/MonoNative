#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_IO_TEXTWRITER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_IO_TEXTWRITER_H

#include <mscorlib/System/mscorlib_System_MarshalByRefObject.h>
#include <mscorlib/System/mscorlib_System_IDisposable.h>
#include <mscorlib/System/mscorlib_System_IFormatProvider.h>
#include <mscorlib/System/mscorlib_System_Object.h>

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

		class String;
		class Decimal;
		class Type;
		

	}
}
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

			class TextWriter
				: public mscorlib::System::MarshalByRefObject
				, public virtual mscorlib::System::IDisposable
			{
			public:
				TextWriter(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::MarshalByRefObject(nativeTypeInfo)
				, mscorlib::System::IDisposable(NULL)
				{
				};
			
				TextWriter(MonoObject *nativeObject)
				: mscorlib::System::MarshalByRefObject(nativeObject)
				, mscorlib::System::IDisposable(nativeObject)
				{
				};
			
				~TextWriter()
				{
				};
			

				TextWriter & operator=(TextWriter &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual void  Close();
				virtual void  Dispose();
				virtual void  Flush();
				static mscorlib::System::IO::TextWriter  Synchronized(mscorlib::System::IO::TextWriter writer);
				virtual void  Write(mscorlib::System::Boolean value);
				virtual void  Write(mscorlib::System::Char value);
				virtual void  Write(std::vector<mscorlib::System::Char*> buffer);
				virtual void  Write(mscorlib::System::Decimal value);
				virtual void  Write(mscorlib::System::Double value);
				virtual void  Write(mscorlib::System::Int32 value);
				virtual void  Write(mscorlib::System::Int64 value);
				virtual void  Write(mscorlib::System::Object value);
				virtual void  Write(mscorlib::System::Single value);
				virtual void  Write(mscorlib::System::String value);
				virtual void  Write(mscorlib::System::UInt32 value);
				virtual void  Write(mscorlib::System::UInt64 value);
				virtual void  Write(mscorlib::System::String format, mscorlib::System::Object arg0);
				virtual void  Write(mscorlib::System::String format, std::vector<mscorlib::System::Object*> arg);
				virtual void  Write(std::vector<mscorlib::System::Char*> buffer, mscorlib::System::Int32 index, mscorlib::System::Int32 count);
				virtual void  Write(mscorlib::System::String format, mscorlib::System::Object arg0, mscorlib::System::Object arg1);
				virtual void  Write(mscorlib::System::String format, mscorlib::System::Object arg0, mscorlib::System::Object arg1, mscorlib::System::Object arg2);
				virtual void  WriteLine();
				virtual void  WriteLine(mscorlib::System::Boolean value);
				virtual void  WriteLine(mscorlib::System::Char value);
				virtual void  WriteLine(std::vector<mscorlib::System::Char*> buffer);
				virtual void  WriteLine(mscorlib::System::Decimal value);
				virtual void  WriteLine(mscorlib::System::Double value);
				virtual void  WriteLine(mscorlib::System::Int32 value);
				virtual void  WriteLine(mscorlib::System::Int64 value);
				virtual void  WriteLine(mscorlib::System::Object value);
				virtual void  WriteLine(mscorlib::System::Single value);
				virtual void  WriteLine(mscorlib::System::String value);
				virtual void  WriteLine(mscorlib::System::UInt32 value);
				virtual void  WriteLine(mscorlib::System::UInt64 value);
				virtual void  WriteLine(mscorlib::System::String format, mscorlib::System::Object arg0);
				virtual void  WriteLine(mscorlib::System::String format, std::vector<mscorlib::System::Object*> arg);
				virtual void  WriteLine(std::vector<mscorlib::System::Char*> buffer, mscorlib::System::Int32 index, mscorlib::System::Int32 count);
				virtual void  WriteLine(mscorlib::System::String format, mscorlib::System::Object arg0, mscorlib::System::Object arg1);
				virtual void  WriteLine(mscorlib::System::String format, mscorlib::System::Object arg0, mscorlib::System::Object arg1, mscorlib::System::Object arg2);
				virtual mscorlib::System::Threading::Tasks::TaskBase  FlushAsync();
				virtual mscorlib::System::Threading::Tasks::TaskBase  WriteAsync(mscorlib::System::Char value);
				mscorlib::System::Threading::Tasks::TaskBase  WriteAsync(std::vector<mscorlib::System::Char*> buffer);
				virtual mscorlib::System::Threading::Tasks::TaskBase  WriteAsync(std::vector<mscorlib::System::Char*> buffer, mscorlib::System::Int32 index, mscorlib::System::Int32 count);
				virtual mscorlib::System::Threading::Tasks::TaskBase  WriteAsync(mscorlib::System::String value);
				virtual mscorlib::System::Threading::Tasks::TaskBase  WriteLineAsync();
				virtual mscorlib::System::Threading::Tasks::TaskBase  WriteLineAsync(mscorlib::System::Char value);
				mscorlib::System::Threading::Tasks::TaskBase  WriteLineAsync(std::vector<mscorlib::System::Char*> buffer);
				virtual mscorlib::System::Threading::Tasks::TaskBase  WriteLineAsync(std::vector<mscorlib::System::Char*> buffer, mscorlib::System::Int32 index, mscorlib::System::Int32 count);
				virtual mscorlib::System::Threading::Tasks::TaskBase  WriteLineAsync(mscorlib::System::String value);
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_Encoding)) mscorlib::System::Text::Encoding  Encoding;
				__declspec(property(get=get_FormatProvider)) mscorlib::System::IFormatProvider  FormatProvider;
				__declspec(property(get=get_NewLine, put=set_NewLine)) mscorlib::System::String  NewLine;

				//Public Static Fields
				static Property<mscorlib::System::IO::TextWriter> Null;

				//Get Set Properties Methods
				//	Get:Encoding
				mscorlib::System::Text::Encoding  get_Encoding();

				//	Get:FormatProvider
				mscorlib::System::IFormatProvider  get_FormatProvider();

				//	Get/Set:NewLine
				mscorlib::System::String  get_NewLine();
				void set_NewLine(mscorlib::System::String  value);

				//	Get/Set:Null
				static mscorlib::System::IO::TextWriter  get_Null();

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
