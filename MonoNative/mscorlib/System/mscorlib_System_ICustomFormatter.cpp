#include <mscorlib/System/mscorlib_System_ICustomFormatter.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{

		//Public Methods
		mscorlib::System::String ICustomFormatter::Format(mscorlib::System::String format, mscorlib::System::Object arg, mscorlib::System::IFormatProvider formatProvider)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(format).name());
				__parameter_types__[1] = Global::GetType(typeid(arg).name());
				__parameter_types__[2] = Global::GetType(typeid(formatProvider).name());
				__parameters__[0] = (MonoObject*)format;
				__parameters__[1] = (MonoObject*)arg;
				__parameters__[2] = (MonoObject*)formatProvider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "ICustomFormatter", 0, NULL, "Format", __mscorlib_System_ICustomFormatter, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}


	}
}
