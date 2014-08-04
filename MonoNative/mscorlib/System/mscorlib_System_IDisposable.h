#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_IDISPOSABLE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_IDISPOSABLE_H

#include <Global.h>

namespace mscorlib
{
	namespace System
	{

		class IDisposable
		{
		public:
			IDisposable(MonoObject *nativeObject)
			{
				__mscorlib_System_IDisposable = nativeObject;
			};
		
			~IDisposable()
			{
			};
		

			IDisposable & operator=(IDisposable &value) { __mscorlib_System_IDisposable = value.__mscorlib_System_IDisposable; return value; };
			operator MonoObject*() { return __mscorlib_System_IDisposable; };
			MonoObject* operator=(MonoObject* value) { __mscorlib_System_IDisposable = value; return value; };


			virtual void  Dispose();


		
		protected:
			MonoObject *__mscorlib_System_IDisposable;
		
		private:
		
		};

	}
}
#endif
