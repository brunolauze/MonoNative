#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_IO_STRINGREADER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_IO_STRINGREADER_H

#include <mscorlib/System/IO/mscorlib_System_IO_TextReader.h>
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

			class StringReader
				: public mscorlib::System::IO::TextReader
				, public virtual mscorlib::System::IDisposable
			{
			public:
				StringReader(mscorlib::System::String s)
				: mscorlib::System::IO::TextReader(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.StringReader"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = (MonoObject*)s;
					__native_object__ = Global::New("mscorlib", "System.IO", "StringReader", 1, __parameter_types__, __parameters__);
				};
			
				StringReader(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::IO::TextReader(nativeTypeInfo)
				, mscorlib::System::IDisposable(NULL)
				{
				};
			
				StringReader(MonoObject *nativeObject)
				: mscorlib::System::IO::TextReader(nativeObject)
				, mscorlib::System::IDisposable(nativeObject)
				{
				};
			
				~StringReader()
				{
				};
			

				StringReader & operator=(StringReader &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual void  Close() override;
				virtual mscorlib::System::Int32  Peek() override;
				virtual mscorlib::System::Int32  Read() override;
				virtual mscorlib::System::Int32  Read(std::vector<mscorlib::System::Char*> buffer, mscorlib::System::Int32 index, mscorlib::System::Int32 count) override;
				virtual mscorlib::System::String  ReadLine() override;
				virtual mscorlib::System::String  ReadToEnd() override;
				virtual mscorlib::System::Threading::Tasks::Task<mscorlib::System::Int32>  ReadAsync(std::vector<mscorlib::System::Char*> buffer, mscorlib::System::Int32 index, mscorlib::System::Int32 count) override;
				virtual mscorlib::System::Threading::Tasks::Task<mscorlib::System::Int32>  ReadBlockAsync(std::vector<mscorlib::System::Char*> buffer, mscorlib::System::Int32 index, mscorlib::System::Int32 count) override;
				virtual mscorlib::System::Threading::Tasks::Task<mscorlib::System::String>  ReadLineAsync() override;
				virtual mscorlib::System::Threading::Tasks::Task<mscorlib::System::String>  ReadToEndAsync() override;
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
