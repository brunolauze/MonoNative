#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_ICOMPARABLE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_ICOMPARABLE_H

#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class IObjectComparable
		{
		public:
			IObjectComparable(MonoObject *nativeObject)
			{
				__mscorlib_System_IComparable = nativeObject;
			};
		
			~IObjectComparable()
			{
			};
		

			IObjectComparable & operator=(IObjectComparable &value) { __mscorlib_System_IComparable = value.__mscorlib_System_IComparable; return value; };
			operator MonoObject*() { return __mscorlib_System_IComparable; };
			MonoObject* operator=(MonoObject* value) { __mscorlib_System_IComparable = value; return value; };


			virtual mscorlib::System::Int32  CompareTo(mscorlib::System::Object obj);


		
		protected:
			MonoObject *__mscorlib_System_IComparable;
		
		private:
		
		};

	}
}
#endif
