#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_IO_STRINGWRITER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_IO_STRINGWRITER_H

#include <mscorlib/System/IO/mscorlib_System_IO_TextWriter.h>
#include <mscorlib/System/mscorlib_System_IFormatProvider.h>
#include <mscorlib/System/Text/mscorlib_System_Text_StringBuilder.h>
#include <mscorlib/System/mscorlib_System_IDisposable.h>
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

			class StringWriter
				: public mscorlib::System::IO::TextWriter
				, public virtual mscorlib::System::IDisposable
			{
			public:
				StringWriter()
				: mscorlib::System::IO::TextWriter(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.StringWriter"))
				, mscorlib::System::IDisposable(NULL)
				{
					__native_object__ = Global::New("mscorlib", "System.IO", "StringWriter");
				};
			
				StringWriter(mscorlib::System::IFormatProvider formatProvider)
				: mscorlib::System::IO::TextWriter(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.StringWriter"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "IFormatProvider");
					__parameters__[0] = (MonoObject*)formatProvider;
					__native_object__ = Global::New("mscorlib", "System.IO", "StringWriter", 1, __parameter_types__, __parameters__);
				};
			
				StringWriter(mscorlib::System::Text::StringBuilder sb)
				: mscorlib::System::IO::TextWriter(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.StringWriter"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.Text", "StringBuilder");
					__parameters__[0] = (MonoObject*)sb;
					__native_object__ = Global::New("mscorlib", "System.IO", "StringWriter", 1, __parameter_types__, __parameters__);
				};
			
				StringWriter(mscorlib::System::Text::StringBuilder sb, mscorlib::System::IFormatProvider formatProvider)
				: mscorlib::System::IO::TextWriter(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.StringWriter"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.Text", "StringBuilder");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "IFormatProvider");
					__parameters__[0] = (MonoObject*)sb;
					__parameters__[1] = (MonoObject*)formatProvider;
					__native_object__ = Global::New("mscorlib", "System.IO", "StringWriter", 2, __parameter_types__, __parameters__);
				};
			
				StringWriter(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::IO::TextWriter(nativeTypeInfo)
				, mscorlib::System::IDisposable(NULL)
				{
				};
			
				StringWriter(MonoObject *nativeObject)
				: mscorlib::System::IO::TextWriter(nativeObject)
				, mscorlib::System::IDisposable(nativeObject)
				{
				};
			
				~StringWriter()
				{
				};
			

				StringWriter & operator=(StringWriter &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual void  Close() override;
				virtual mscorlib::System::Text::StringBuilder  GetStringBuilder();
				virtual mscorlib::System::String  ToString() override;
				virtual void  Write(mscorlib::System::Char value) override;
				virtual void  Write(mscorlib::System::String value) override;
				virtual void  Write(std::vector<mscorlib::System::Char*> buffer, mscorlib::System::Int32 index, mscorlib::System::Int32 count) override;
				virtual mscorlib::System::Threading::Tasks::TaskBase  FlushAsync() override;
				virtual mscorlib::System::Threading::Tasks::TaskBase  WriteAsync(mscorlib::System::Char value) override;
				virtual mscorlib::System::Threading::Tasks::TaskBase  WriteAsync(std::vector<mscorlib::System::Char*> buffer, mscorlib::System::Int32 index, mscorlib::System::Int32 count) override;
				virtual mscorlib::System::Threading::Tasks::TaskBase  WriteAsync(mscorlib::System::String value) override;
				virtual mscorlib::System::Threading::Tasks::TaskBase  WriteLineAsync(mscorlib::System::Char value) override;
				virtual mscorlib::System::Threading::Tasks::TaskBase  WriteLineAsync(std::vector<mscorlib::System::Char*> buffer, mscorlib::System::Int32 index, mscorlib::System::Int32 count) override;
				virtual mscorlib::System::Threading::Tasks::TaskBase  WriteLineAsync(mscorlib::System::String value) override;
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_Encoding)) mscorlib::System::Text::Encoding  Encoding;
				__declspec(property(get=get_FormatProvider)) mscorlib::System::IFormatProvider  FormatProvider;
				__declspec(property(get=get_NewLine, put=set_NewLine)) mscorlib::System::String  NewLine;

				//Get Set Properties Methods
				//	Get:Encoding
				mscorlib::System::Text::Encoding  get_Encoding() const;

				//	Get:FormatProvider
				mscorlib::System::IFormatProvider  get_FormatProvider() const;

				//	Get/Set:NewLine
				mscorlib::System::String  get_NewLine() const;
				void set_NewLine(mscorlib::System::String  value);

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
