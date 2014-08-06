#include <mscorlib/System/mscorlib_System_IFormattable.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{

		//Public Methods
		mscorlib::System::String IFormattable::ToString(mscorlib::System::String format, mscorlib::System::IFormatProvider formatProvider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(format).name());
				__parameter_types__[1] = Global::GetType(typeid(formatProvider).name());
				__parameters__[0] = (MonoObject*)format;
				__parameters__[1] = (MonoObject*)formatProvider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "IFormattable", 0, NULL, "ToString", __mscorlib_System_IFormattable, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String IFormattable::ToString(const char *format, mscorlib::System::IFormatProvider formatProvider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(formatProvider).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), format);
				__parameters__[1] = (MonoObject*)formatProvider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "IFormattable", 0, NULL, "ToString", __mscorlib_System_IFormattable, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}


	}
}
