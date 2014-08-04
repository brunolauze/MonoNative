#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_IFORMATPROVIDER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_IFORMATPROVIDER_H

#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		

	}
}
namespace mscorlib
{
	namespace System
	{

		class Type;
		

	}
}
namespace mscorlib
{
	namespace System
	{

		class IFormatProvider
		{
		public:
			IFormatProvider(MonoObject *nativeObject)
			{
				__mscorlib_System_IFormatProvider = nativeObject;
			};
		
			~IFormatProvider()
			{
			};
		

			IFormatProvider & operator=(IFormatProvider &value) { __mscorlib_System_IFormatProvider = value.__mscorlib_System_IFormatProvider; return value; };
			operator MonoObject*() { return __mscorlib_System_IFormatProvider; };
			MonoObject* operator=(MonoObject* value) { __mscorlib_System_IFormatProvider = value; return value; };


			virtual mscorlib::System::Object  GetFormat(mscorlib::System::Type formatType);


		
		protected:
			MonoObject *__mscorlib_System_IFormatProvider;
		
		private:
		
		};

	}
}
#endif
