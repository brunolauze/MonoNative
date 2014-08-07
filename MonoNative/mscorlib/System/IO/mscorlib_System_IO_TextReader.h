#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_IO_TEXTREADER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_IO_TEXTREADER_H

#include <mscorlib/System/mscorlib_System_MarshalByRefObject.h>
#include <mscorlib/System/mscorlib_System_IDisposable.h>
#include <mscorlib/System/Threading/Tasks/mscorlib_System_Threading_Tasks_Task_1.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class String;
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

			class TextReader
				: public mscorlib::System::MarshalByRefObject
				, public virtual mscorlib::System::IDisposable
			{
			public:
				TextReader(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::MarshalByRefObject(nativeTypeInfo)
				, mscorlib::System::IDisposable(NULL)
				{
				};
			
				TextReader(MonoObject *nativeObject)
				: mscorlib::System::MarshalByRefObject(nativeObject)
				, mscorlib::System::IDisposable(nativeObject)
				{
				};
			
				~TextReader()
				{
				};
			

				TextReader & operator=(TextReader &value) { __native_object__ = value.GetNativeObject(); return value; };
				bool operator==(TextReader &value) { return mscorlib::System::Object::Equals(value); };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual void  Close();
				virtual void  Dispose();
				virtual mscorlib::System::Int32  Peek();
				virtual mscorlib::System::Int32  Read();
				virtual mscorlib::System::Int32  Read(std::vector<mscorlib::System::Char*> buffer, mscorlib::System::Int32 index, mscorlib::System::Int32 count);
				virtual mscorlib::System::Int32  ReadBlock(std::vector<mscorlib::System::Char*> buffer, mscorlib::System::Int32 index, mscorlib::System::Int32 count);
				virtual mscorlib::System::String  ReadLine();
				virtual mscorlib::System::String  ReadToEnd();
				static mscorlib::System::IO::TextReader  Synchronized(mscorlib::System::IO::TextReader reader);
				virtual mscorlib::System::Threading::Tasks::Task<mscorlib::System::Int32>  ReadAsync(std::vector<mscorlib::System::Char*> buffer, mscorlib::System::Int32 index, mscorlib::System::Int32 count);
				virtual mscorlib::System::Threading::Tasks::Task<mscorlib::System::Int32>  ReadBlockAsync(std::vector<mscorlib::System::Char*> buffer, mscorlib::System::Int32 index, mscorlib::System::Int32 count);
				virtual mscorlib::System::Threading::Tasks::Task<mscorlib::System::String>  ReadLineAsync();
				virtual mscorlib::System::Threading::Tasks::Task<mscorlib::System::String>  ReadToEndAsync();
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Static Fields
				static Property<mscorlib::System::IO::TextReader , mscorlib::System::IO::TextReader> Null;

				//	Get/Set:Null
				static mscorlib::System::IO::TextReader  get_Null();
				static void set_Null(mscorlib::System::IO::TextReader  value);

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
