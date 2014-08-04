#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Pointer.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			//Public Methods
			mscorlib::System::Object Pointer::Box(void*ptr, mscorlib::System::Type type)
			{
				return mscorlib::System::Object(mono_value_box(Global::GetDomain(), mono_type_get_class(mono_reflection_type_get_type((MonoReflectionType*)type.GetNativeObject())), ptr));
			}

			void* Pointer::Unbox(mscorlib::System::Object ptr)
			{
				return mono_object_unbox((MonoObject*)ptr);
			}


		}
	}
}
