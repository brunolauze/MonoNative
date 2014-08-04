#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_IO_BINARYREADER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_IO_BINARYREADER_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/IO/mscorlib_System_IO_Stream.h>
#include <mscorlib/System/Text/mscorlib_System_Text_Encoding.h>
#include <mscorlib/System/mscorlib_System_IDisposable.h>

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

			class BinaryReader
				: public mscorlib::System::Object
				, public virtual mscorlib::System::IDisposable
			{
			public:
				BinaryReader(mscorlib::System::IO::Stream input)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.BinaryReader"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.IO", "Stream");
					__parameters__[0] = (MonoObject*)input;
					__native_object__ = Global::New("mscorlib", "System.IO", "BinaryReader", 1, __parameter_types__, __parameters__);
				};
			
				BinaryReader(mscorlib::System::IO::Stream input, mscorlib::System::Text::Encoding encoding)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.BinaryReader"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.IO", "Stream");
					__parameter_types__[1] = Global::GetType("mscorlib", "System.Text", "Encoding");
					__parameters__[0] = (MonoObject*)input;
					__parameters__[1] = (MonoObject*)encoding;
					__native_object__ = Global::New("mscorlib", "System.IO", "BinaryReader", 2, __parameter_types__, __parameters__);
				};
			
				BinaryReader(mscorlib::System::IO::Stream input, mscorlib::System::Text::Encoding encoding, mscorlib::System::Boolean leaveOpen)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.BinaryReader"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.IO", "Stream");
					__parameter_types__[1] = Global::GetType("mscorlib", "System.Text", "Encoding");
					__parameter_types__[2] = Global::GetType("mscorlib", "System", "Boolean");
					__parameters__[0] = (MonoObject*)input;
					__parameters__[1] = (MonoObject*)encoding;
					__parameters__[2] = reinterpret_cast<void*>(leaveOpen);
					__native_object__ = Global::New("mscorlib", "System.IO", "BinaryReader", 3, __parameter_types__, __parameters__);
				};
			
				BinaryReader(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				, mscorlib::System::IDisposable(NULL)
				{
				};
			
				BinaryReader(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				, mscorlib::System::IDisposable(nativeObject)
				{
				};
			
				~BinaryReader()
				{
				};
			

				BinaryReader & operator=(BinaryReader &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual void  Close();
				virtual void  Dispose();
				virtual mscorlib::System::Int32  PeekChar();
				virtual mscorlib::System::Int32  Read();
				virtual mscorlib::System::Int32  Read(std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 index, mscorlib::System::Int32 count);
				virtual mscorlib::System::Int32  Read(std::vector<mscorlib::System::Char*> buffer, mscorlib::System::Int32 index, mscorlib::System::Int32 count);
				virtual mscorlib::System::Boolean  ReadBoolean();
				virtual mscorlib::System::Byte  ReadByte();
				virtual std::vector<mscorlib::System::Byte*>  ReadBytes(mscorlib::System::Int32 count);
				virtual mscorlib::System::Char  ReadChar();
				virtual std::vector<mscorlib::System::Char*>  ReadChars(mscorlib::System::Int32 count);
				virtual mscorlib::System::Decimal  ReadDecimal();
				virtual mscorlib::System::Double  ReadDouble();
				virtual mscorlib::System::Int16  ReadInt16();
				virtual mscorlib::System::Int32  ReadInt32();
				virtual mscorlib::System::Int64  ReadInt64();
				virtual mscorlib::System::SByte  ReadSByte();
				virtual mscorlib::System::String  ReadString();
				virtual mscorlib::System::Single  ReadSingle();
				virtual mscorlib::System::UInt16  ReadUInt16();
				virtual mscorlib::System::UInt32  ReadUInt32();
				virtual mscorlib::System::UInt64  ReadUInt64();
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_BaseStream)) mscorlib::System::IO::Stream  BaseStream;

				//Get Set Properties Methods
				//	Get:BaseStream
				mscorlib::System::IO::Stream  get_BaseStream();

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
