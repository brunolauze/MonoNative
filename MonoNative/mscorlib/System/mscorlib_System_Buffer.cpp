#include <mscorlib/System/mscorlib_System_Buffer.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Array.h>
#include <mscorlib/System/mscorlib_System_Byte.h>



namespace mscorlib
{
	namespace System
	{

		//Public Methods
		mscorlib::System::Int32 Buffer::ByteLength(mscorlib::System::Array array)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(array).name());
				__parameters__[0] = (MonoObject*)array;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Buffer", 0, NULL, "ByteLength", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Byte Buffer::GetByte(mscorlib::System::Array array, mscorlib::System::Int32 index)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(array).name());
				__parameter_types__[1] = Global::GetType(typeid(index).name());
				__parameters__[0] = (MonoObject*)array;
				__parameters__[1] = &index;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Buffer", 0, NULL, "GetByte", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Byte(__result__);
		}

		void Buffer::SetByte(mscorlib::System::Array array, mscorlib::System::Int32 index, mscorlib::System::Byte value)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(array).name());
				__parameter_types__[1] = Global::GetType(typeid(index).name());
				__parameter_types__[2] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)array;
				__parameters__[1] = &index;
				__parameters__[2] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System", "Buffer", 0, NULL, "SetByte", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
		}

		void Buffer::BlockCopy(mscorlib::System::Array src, mscorlib::System::Int32 srcOffset, mscorlib::System::Array dst, mscorlib::System::Int32 dstOffset, mscorlib::System::Int32 count)
		{
				MonoType *__parameter_types__[5];
				void *__parameters__[5];
				__parameter_types__[0] = Global::GetType(typeid(src).name());
				__parameter_types__[1] = Global::GetType(typeid(srcOffset).name());
				__parameter_types__[2] = Global::GetType(typeid(dst).name());
				__parameter_types__[3] = Global::GetType(typeid(dstOffset).name());
				__parameter_types__[4] = Global::GetType(typeid(count).name());
				__parameters__[0] = (MonoObject*)src;
				__parameters__[1] = &srcOffset;
				__parameters__[2] = (MonoObject*)dst;
				__parameters__[3] = &dstOffset;
				__parameters__[4] = &count;
				Global::InvokeMethod("mscorlib", "System", "Buffer", 0, NULL, "BlockCopy", NullMonoObject, 5, __parameter_types__, __parameters__, NULL);
		}


	}
}
