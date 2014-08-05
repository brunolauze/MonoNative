#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_IFORMATTABLE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_IFORMATTABLE_H

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

		class IFormattable
		{
		public:
			IFormattable(MonoObject *nativeObject)
			{
				__mscorlib_System_IFormattable = nativeObject;
			};
		
			~IFormattable()
			{
			};
		

			IFormattable & operator=(IFormattable &value) { __mscorlib_System_IFormattable = value.__mscorlib_System_IFormattable; return value; };
			operator MonoObject*() { return __mscorlib_System_IFormattable; };
			MonoObject* operator=(MonoObject* value) { __mscorlib_System_IFormattable = value; return value; };


			virtual mscorlib::System::String  ToString(mscorlib::System::String format, mscorlib::System::IFormatProvider formatProvider);
			virtual mscorlib::System::String  ToString(const char *format, mscorlib::System::IFormatProvider formatProvider);


		
		protected:
			MonoObject *__mscorlib_System_IFormattable;
		
		private:
		
		};

	}
}
#endif
