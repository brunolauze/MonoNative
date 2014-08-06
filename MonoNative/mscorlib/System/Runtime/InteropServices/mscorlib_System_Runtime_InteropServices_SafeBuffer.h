#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_SAFEBUFFER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_SAFEBUFFER_H

#include <mscorlib/Microsoft/Win32/SafeHandles/mscorlib_Microsoft_Win32_SafeHandles_SafeHandleZeroOrMinusOneIsInvalid.h>
#include <mscorlib/System/mscorlib_System_IDisposable.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class Byte;
		class IntPtr;
		class Type;
		class String;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				class SafeBuffer
					: public mscorlib::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid
					, public virtual mscorlib::System::IDisposable
				{
				public:
					SafeBuffer(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid(nativeTypeInfo)
					, mscorlib::System::IDisposable(NULL)
					{
					};
				
					SafeBuffer(MonoObject *nativeObject)
					: mscorlib::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid(nativeObject)
					, mscorlib::System::IDisposable(nativeObject)
					{
					};
				
					~SafeBuffer()
					{
					};
				

					SafeBuffer & operator=(SafeBuffer &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					void  Initialize(mscorlib::System::UInt64 numBytes);
					void  Initialize(mscorlib::System::UInt32 numElements, mscorlib::System::UInt32 sizeOfEachElement);
					template<typename T>
					void  Initialize(mscorlib::System::UInt32 numElements)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(numElements).name());
						__parameters__[0] = &numElements;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "SafeBuffer", 0, NULL, "Initialize", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					};
					
					void  AcquirePointer(mscorlib::System::Byte* pointer);
					void  ReleasePointer();
					template<typename T>
					T  Read(mscorlib::System::UInt64 byteOffset)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(byteOffset).name());
						__parameters__[0] = &byteOffset;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "SafeBuffer", 0, NULL, "Read", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return T(__result__);
					};
					
					template<typename T>
					void  ReadArray(mscorlib::System::UInt64 byteOffset, std::vector<T*> array, mscorlib::System::Int32 index, mscorlib::System::Int32 count)
					{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType(typeid(byteOffset).name());
						__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System.Runtime.InteropServices", "T")), 1));
						__parameter_types__[2] = Global::GetType(typeid(index).name());
						__parameter_types__[3] = Global::GetType(typeid(count).name());
						__parameters__[0] = &byteOffset;
						__parameters__[1] = Global::FromArray<T*>(array, typeid(T).name());
						__parameters__[2] = &index;
						__parameters__[3] = &count;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "SafeBuffer", 0, NULL, "ReadArray", __native_object__, 4, __parameter_types__, __parameters__, NULL);
					};
					
					template<typename T>
					void  Write(mscorlib::System::UInt64 byteOffset, T value)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(byteOffset).name());
						__parameter_types__[1] = Global::GetType(typeid(value).name());
						__parameters__[0] = &byteOffset;
						__parameters__[1] = (MonoObject*)value;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "SafeBuffer", 0, NULL, "Write", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					};
					
					template<typename T>
					void  WriteArray(mscorlib::System::UInt64 byteOffset, std::vector<T*> array, mscorlib::System::Int32 index, mscorlib::System::Int32 count)
					{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType(typeid(byteOffset).name());
						__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System.Runtime.InteropServices", "T")), 1));
						__parameter_types__[2] = Global::GetType(typeid(index).name());
						__parameter_types__[3] = Global::GetType(typeid(count).name());
						__parameters__[0] = &byteOffset;
						__parameters__[1] = Global::FromArray<T*>(array, typeid(T).name());
						__parameters__[2] = &index;
						__parameters__[3] = &count;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "SafeBuffer", 0, NULL, "WriteArray", __native_object__, 4, __parameter_types__, __parameters__, NULL);
					};
					
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_ByteLength)) mscorlib::System::UInt64  ByteLength;
					__declspec(property(get=get_IsInvalid)) mscorlib::System::Boolean  IsInvalid;
					__declspec(property(get=get_IsClosed)) mscorlib::System::Boolean  IsClosed;

					//Get Set Properties Methods
					//	Get:ByteLength
					mscorlib::System::UInt64  get_ByteLength() const;

					//	Get:IsInvalid
					mscorlib::System::Boolean  get_IsInvalid() const;

					//	Get:IsClosed
					mscorlib::System::Boolean  get_IsClosed() const;

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
