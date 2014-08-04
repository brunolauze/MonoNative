#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_IPROGRESS_1_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_IPROGRESS_1_H

#include <Global.h>

namespace mscorlib
{
	namespace System
	{

		template<typename T>
		class IProgress
		{
		public:
			IProgress(MonoObject *nativeObject)
			{
				__mscorlib_System_IProgress_1 = nativeObject;
			};
		
			~IProgress()
			{
			};
		

			IProgress & operator=(IProgress &value) { __mscorlib_System_IProgress_1 = value.__mscorlib_System_IProgress_1; return value; };
			operator MonoObject*() { return __mscorlib_System_IProgress_1; };
			MonoObject* operator=(MonoObject* value) { __mscorlib_System_IProgress_1 = value; return value; };


			virtual void  Report(T value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoType *__generic_types__[1];
				__generic_types__[0] = Global::GetType(typeid(T).name());
				Global::InvokeMethod("mscorlib", "System", "IProgress`1", 1, __generic_types__, "Report", __mscorlib_System_IProgress_1, 1, __parameter_types__, __parameters__, NULL);
			};
			


		
		protected:
			MonoObject *__mscorlib_System_IProgress_1;
		
		private:
		
		};

	}
}
#endif
