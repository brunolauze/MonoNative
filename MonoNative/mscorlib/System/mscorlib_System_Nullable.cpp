#include <mscorlib/System/mscorlib_System_Nullable.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{

		//Public Methods
		mscorlib::System::Type NullableBase::GetUnderlyingType(mscorlib::System::Type nullableType)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(nullableType).name());
				__parameters__[0] = (MonoObject*)nullableType;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Nullable", 0, NULL, "GetUnderlyingType", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Type(__result__);
		}


	}
}
