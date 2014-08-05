#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_ICUSTOMFORMATTER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_ICUSTOMFORMATTER_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_IFormatProvider.h>

namespace mscorlib
{
	namespace System
	{

		class String;
		

	}
}
namespace mscorlib
{
	namespace System
	{

		class ICustomFormatter
		{
		public:
			ICustomFormatter(MonoObject *nativeObject)
			{
				__mscorlib_System_ICustomFormatter = nativeObject;
			};
		
			~ICustomFormatter()
			{
			};
		

			ICustomFormatter & operator=(ICustomFormatter &value) { __mscorlib_System_ICustomFormatter = value.__mscorlib_System_ICustomFormatter; return value; };
			operator MonoObject*() { return __mscorlib_System_ICustomFormatter; };
			MonoObject* operator=(MonoObject* value) { __mscorlib_System_ICustomFormatter = value; return value; };


			virtual mscorlib::System::String  Format(mscorlib::System::String format, mscorlib::System::Object arg, mscorlib::System::IFormatProvider formatProvider);
			virtual mscorlib::System::String  Format(const char *format, mscorlib::System::Object arg, mscorlib::System::IFormatProvider formatProvider);


		
		protected:
			MonoObject *__mscorlib_System_ICustomFormatter;
		
		private:
		
		};

	}
}
#endif
