#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_ICLONEABLE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_ICLONEABLE_H

#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class ICloneable
		{
		public:
			ICloneable(MonoObject *nativeObject)
			{
				__mscorlib_System_ICloneable = nativeObject;
			};
		
			~ICloneable()
			{
			};
		

			ICloneable & operator=(ICloneable &value) { __mscorlib_System_ICloneable = value.__mscorlib_System_ICloneable; return value; };
			operator MonoObject*() { return __mscorlib_System_ICloneable; };
			MonoObject* operator=(MonoObject* value) { __mscorlib_System_ICloneable = value; return value; };


			virtual mscorlib::System::Object  Clone();


		
		protected:
			MonoObject *__mscorlib_System_ICloneable;
		
		private:
		
		};

	}
}
#endif
