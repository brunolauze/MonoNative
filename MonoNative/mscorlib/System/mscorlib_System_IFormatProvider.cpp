#include <mscorlib/System/mscorlib_System_IFormatProvider.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{

		//Public Methods
		mscorlib::System::Object IFormatProvider::GetFormat(mscorlib::System::Type formatType)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(formatType).name());
				__parameters__[0] = (MonoObject*)formatType;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "IFormatProvider", 0, NULL, "GetFormat", __mscorlib_System_IFormatProvider, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
		}


	}
}
