#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_IO_BINARYWRITER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_IO_BINARYWRITER_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/IO/mscorlib_System_IO_Stream.h>
#include <mscorlib/System/Text/mscorlib_System_Text_Encoding.h>
#include <mscorlib/System/mscorlib_System_IDisposable.h>
#include <mscorlib/System/IO/mscorlib_System_IO_SeekOrigin.h>

namespace mscorlib
{
	namespace System
	{

		class Byte;
		class Decimal;
		class SByte;
		class String;
		class Type;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace IO
		{

			class BinaryWriter
				: public mscorlib::System::Object
				, public virtual mscorlib::System::IDisposable
			{
			public:
				BinaryWriter(mscorlib::System::IO::Stream output)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.BinaryWriter"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.IO", "Stream");
					__parameters__[0] = (MonoObject*)output;
					__native_object__ = Global::New("mscorlib", "System.IO", "BinaryWriter", 1, __parameter_types__, __parameters__);
				};
			
				BinaryWriter(mscorlib::System::IO::Stream output, mscorlib::System::Text::Encoding encoding)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.BinaryWriter"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.IO", "Stream");
					__parameter_types__[1] = Global::GetType("mscorlib", "System.Text", "Encoding");
					__parameters__[0] = (MonoObject*)output;
					__parameters__[1] = (MonoObject*)encoding;
					__native_object__ = Global::New("mscorlib", "System.IO", "BinaryWriter", 2, __parameter_types__, __parameters__);
				};
			
				BinaryWriter(mscorlib::System::IO::Stream output, mscorlib::System::Text::Encoding encoding, mscorlib::System::Boolean leaveOpen)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.BinaryWriter"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.IO", "Stream");
					__parameter_types__[1] = Global::GetType("mscorlib", "System.Text", "Encoding");
					__parameter_types__[2] = Global::GetType("mscorlib", "System", "Boolean");
					__parameters__[0] = (MonoObject*)output;
					__parameters__[1] = (MonoObject*)encoding;
					__parameters__[2] = reinterpret_cast<void*>(leaveOpen);
					__native_object__ = Global::New("mscorlib", "System.IO", "BinaryWriter", 3, __parameter_types__, __parameters__);
				};
			
				BinaryWriter(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				, mscorlib::System::IDisposable(NULL)
				{
				};
			
				BinaryWriter(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				, mscorlib::System::IDisposable(nativeObject)
				{
				};
			
				~BinaryWriter()
				{
				};
			

				BinaryWriter & operator=(BinaryWriter &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual void  Close();
				virtual void  Dispose();
				virtual void  Flush();
				virtual mscorlib::System::Int64  Seek(mscorlib::System::Int32 offset, mscorlib::System::IO::SeekOrigin::__ENUM__ origin);
				virtual void  Write(mscorlib::System::Boolean value);
				virtual void  Write(mscorlib::System::Byte value);
				virtual void  Write(std::vector<mscorlib::System::Byte*> buffer);
				virtual void  Write(std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 index, mscorlib::System::Int32 count);
				virtual void  Write(mscorlib::System::Char ch);
				virtual void  Write(std::vector<mscorlib::System::Char*> chars);
				virtual void  Write(std::vector<mscorlib::System::Char*> chars, mscorlib::System::Int32 index, mscorlib::System::Int32 count);
				virtual void  Write(mscorlib::System::Decimal value);
				virtual void  Write(mscorlib::System::Double value);
				virtual void  Write(mscorlib::System::Int16 value);
				virtual void  Write(mscorlib::System::Int32 value);
				virtual void  Write(mscorlib::System::Int64 value);
				virtual void  Write(mscorlib::System::SByte value);
				virtual void  Write(mscorlib::System::Single value);
				virtual void  Write(mscorlib::System::String value);
				virtual void  Write(mscorlib::System::UInt16 value);
				virtual void  Write(mscorlib::System::UInt32 value);
				virtual void  Write(mscorlib::System::UInt64 value);
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_BaseStream)) mscorlib::System::IO::Stream  BaseStream;

				//Public Static Fields
				static Property<mscorlib::System::IO::BinaryWriter , mscorlib::System::IO::BinaryWriter> Null;

				//Get Set Properties Methods
				//	Get:BaseStream
				mscorlib::System::IO::Stream  get_BaseStream() const;

				//	Get/Set:Null
				static mscorlib::System::IO::BinaryWriter  get_Null();
				static void set_Null(mscorlib::System::IO::BinaryWriter  value);

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
