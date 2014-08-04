#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_IO_UNMANAGEDMEMORYACCESSOR_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_SafeBuffer.h>
#include <mscorlib/System/IO/mscorlib_System_IO_FileAccess.h>
#include <mscorlib/System/mscorlib_System_IDisposable.h>

namespace mscorlib
{
	namespace System
	{

		class Byte;
		class Decimal;
		class SByte;
		class Type;
		class String;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace IO
		{

			class UnmanagedMemoryAccessor
				: public mscorlib::System::Object
				, public virtual mscorlib::System::IDisposable
			{
			public:
				UnmanagedMemoryAccessor(mscorlib::System::Runtime::InteropServices::SafeBuffer buffer, mscorlib::System::Int64 offset, mscorlib::System::Int64 capacity)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.UnmanagedMemoryAccessor"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.Runtime.InteropServices", "SafeBuffer");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int64");
					__parameter_types__[2] = Global::GetType("mscorlib", "System", "Int64");
					__parameters__[0] = (MonoObject*)buffer;
					__parameters__[1] = &offset;
					__parameters__[2] = &capacity;
					__native_object__ = Global::New("mscorlib", "System.IO", "UnmanagedMemoryAccessor", 3, __parameter_types__, __parameters__);
				};
			
				UnmanagedMemoryAccessor(mscorlib::System::Runtime::InteropServices::SafeBuffer buffer, mscorlib::System::Int64 offset, mscorlib::System::Int64 capacity, mscorlib::System::IO::FileAccess::__ENUM__ access)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.UnmanagedMemoryAccessor"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.Runtime.InteropServices", "SafeBuffer");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int64");
					__parameter_types__[2] = Global::GetType("mscorlib", "System", "Int64");
					__parameter_types__[3] = Global::GetType("mscorlib", "System.IO", "FileAccess");
					__parameters__[0] = (MonoObject*)buffer;
					__parameters__[1] = &offset;
					__parameters__[2] = &capacity;
					__parameters__[3] = reinterpret_cast<void*>(access);
					__native_object__ = Global::New("mscorlib", "System.IO", "UnmanagedMemoryAccessor", 4, __parameter_types__, __parameters__);
				};
			
				UnmanagedMemoryAccessor(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				, mscorlib::System::IDisposable(NULL)
				{
				};
			
				UnmanagedMemoryAccessor(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				, mscorlib::System::IDisposable(nativeObject)
				{
				};
			
				~UnmanagedMemoryAccessor()
				{
				};
			

				UnmanagedMemoryAccessor & operator=(UnmanagedMemoryAccessor &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual void  Dispose();
				mscorlib::System::Byte  ReadByte(mscorlib::System::Int64 position);
				mscorlib::System::Boolean  ReadBoolean(mscorlib::System::Int64 position);
				mscorlib::System::Char  ReadChar(mscorlib::System::Int64 position);
				mscorlib::System::Decimal  ReadDecimal(mscorlib::System::Int64 position);
				mscorlib::System::Double  ReadDouble(mscorlib::System::Int64 position);
				mscorlib::System::Int16  ReadInt16(mscorlib::System::Int64 position);
				mscorlib::System::Int32  ReadInt32(mscorlib::System::Int64 position);
				mscorlib::System::Int64  ReadInt64(mscorlib::System::Int64 position);
				mscorlib::System::SByte  ReadSByte(mscorlib::System::Int64 position);
				mscorlib::System::Single  ReadSingle(mscorlib::System::Int64 position);
				mscorlib::System::UInt16  ReadUInt16(mscorlib::System::Int64 position);
				mscorlib::System::UInt32  ReadUInt32(mscorlib::System::Int64 position);
				mscorlib::System::UInt64  ReadUInt64(mscorlib::System::Int64 position);
				template<typename T>
				void  Read(mscorlib::System::Int64 position, T structure)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(position).name());
					__parameter_types__[1] = Global::GetType(typeid(structure).name());
					__parameters__[0] = &position;
					__parameters__[1] = (MonoObject*)structure;
					Global::InvokeMethod("mscorlib", "System.IO", "UnmanagedMemoryAccessor", 0, NULL, "Read", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				};
				
				template<typename T>
				mscorlib::System::Int32  ReadArray(mscorlib::System::Int64 position, std::vector<T*> array, mscorlib::System::Int32 offset, mscorlib::System::Int32 count)
				{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = Global::GetType(typeid(position).name());
					__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(array).name()))->eklass);
					__parameter_types__[2] = Global::GetType(typeid(offset).name());
					__parameter_types__[3] = Global::GetType(typeid(count).name());
					__parameters__[0] = &position;
					__parameters__[1] = Global::FromArray<T*>(array, typeid(T).name());
					__parameters__[2] = &offset;
					__parameters__[3] = &count;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "UnmanagedMemoryAccessor", 0, NULL, "ReadArray", __native_object__, 4, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				};
				
				void  Write(mscorlib::System::Int64 position, mscorlib::System::Boolean value);
				void  Write(mscorlib::System::Int64 position, mscorlib::System::Byte value);
				void  Write(mscorlib::System::Int64 position, mscorlib::System::Char value);
				void  Write(mscorlib::System::Int64 position, mscorlib::System::Decimal value);
				void  Write(mscorlib::System::Int64 position, mscorlib::System::Double value);
				void  Write(mscorlib::System::Int64 position, mscorlib::System::Int16 value);
				void  Write(mscorlib::System::Int64 position, mscorlib::System::Int32 value);
				void  Write(mscorlib::System::Int64 position, mscorlib::System::Int64 value);
				void  Write(mscorlib::System::Int64 position, mscorlib::System::SByte value);
				void  Write(mscorlib::System::Int64 position, mscorlib::System::Single value);
				void  Write(mscorlib::System::Int64 position, mscorlib::System::UInt16 value);
				void  Write(mscorlib::System::Int64 position, mscorlib::System::UInt32 value);
				void  Write(mscorlib::System::Int64 position, mscorlib::System::UInt64 value);
				template<typename T>
				void  Write(mscorlib::System::Int64 position, T structure)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(position).name());
					__parameter_types__[1] = Global::GetType(typeid(structure).name());
					__parameters__[0] = &position;
					__parameters__[1] = (MonoObject*)structure;
					Global::InvokeMethod("mscorlib", "System.IO", "UnmanagedMemoryAccessor", 0, NULL, "Write", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				};
				
				template<typename T>
				void  WriteArray(mscorlib::System::Int64 position, std::vector<T*> array, mscorlib::System::Int32 offset, mscorlib::System::Int32 count)
				{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = Global::GetType(typeid(position).name());
					__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(array).name()))->eklass);
					__parameter_types__[2] = Global::GetType(typeid(offset).name());
					__parameter_types__[3] = Global::GetType(typeid(count).name());
					__parameters__[0] = &position;
					__parameters__[1] = Global::FromArray<T*>(array, typeid(T).name());
					__parameters__[2] = &offset;
					__parameters__[3] = &count;
					Global::InvokeMethod("mscorlib", "System.IO", "UnmanagedMemoryAccessor", 0, NULL, "WriteArray", __native_object__, 4, __parameter_types__, __parameters__, NULL);
				};
				
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_CanRead)) mscorlib::System::Boolean  CanRead;
				__declspec(property(get=get_CanWrite)) mscorlib::System::Boolean  CanWrite;
				__declspec(property(get=get_Capacity)) mscorlib::System::Int64  Capacity;

				//Get Set Properties Methods
				//	Get:CanRead
				mscorlib::System::Boolean  get_CanRead();

				//	Get:CanWrite
				mscorlib::System::Boolean  get_CanWrite();

				//	Get:Capacity
				mscorlib::System::Int64  get_Capacity();

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
