#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_SafeBuffer.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				//Public Methods
				void SafeBuffer::Initialize(mscorlib::System::UInt64 numBytes)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(numBytes).name());
						__parameters__[0] = &numBytes;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "SafeBuffer", 0, NULL, "Initialize", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void SafeBuffer::Initialize(mscorlib::System::UInt32 numElements, mscorlib::System::UInt32 sizeOfEachElement)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(numElements).name());
						__parameter_types__[1] = Global::GetType(typeid(sizeOfEachElement).name());
						__parameters__[0] = &numElements;
						__parameters__[1] = &sizeOfEachElement;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "SafeBuffer", 0, NULL, "Initialize", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void SafeBuffer::AcquirePointer(mscorlib::System::Byte* pointer)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(pointer).name());
						__parameters__[0] = pointer->GetNativeObject();
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "SafeBuffer", 0, NULL, "AcquirePointer", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void SafeBuffer::ReleasePointer()
				{
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "SafeBuffer", 0, NULL, "ReleasePointer", __native_object__, 0, NULL, NULL, NULL);
				}

				//Get Set Properties Methods
				//	Get:ByteLength
				mscorlib::System::UInt64  SafeBuffer::get_ByteLength() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "SafeBuffer", 0, NULL, "get_ByteLength", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::UInt64*)mono_object_unbox(__result__);
				}


				//	Get:IsInvalid
				mscorlib::System::Boolean  SafeBuffer::get_IsInvalid() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "Microsoft.Win32.SafeHandles", "SafeHandleZeroOrMinusOneIsInvalid", 0, NULL, "get_IsInvalid", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsClosed
				mscorlib::System::Boolean  SafeBuffer::get_IsClosed() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "SafeHandle", 0, NULL, "get_IsClosed", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}



			}
		}
	}
}
