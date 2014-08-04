#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_IOBSERVABLE_1_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_IOBSERVABLE_1_H

#include <mscorlib/System/mscorlib_System_IDisposable.h>
#include <mscorlib/System/mscorlib_System_IObserver_1.h>

namespace mscorlib
{
	namespace System
	{

		template<typename T>
		class IObservable
		{
		public:
			IObservable(MonoObject *nativeObject)
			{
				__mscorlib_System_IObservable_1 = nativeObject;
			};
		
			~IObservable()
			{
			};
		

			IObservable & operator=(IObservable &value) { __mscorlib_System_IObservable_1 = value.__mscorlib_System_IObservable_1; return value; };
			operator MonoObject*() { return __mscorlib_System_IObservable_1; };
			MonoObject* operator=(MonoObject* value) { __mscorlib_System_IObservable_1 = value; return value; };


			virtual mscorlib::System::IDisposable  Subscribe(mscorlib::System::IObserver<T> observer)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(observer).name());
				__parameters__[0] = (MonoObject*)observer;
				MonoType *__generic_types__[1];
				__generic_types__[0] = Global::GetType(typeid(T).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "IObservable`1", 1, __generic_types__, "Subscribe", __mscorlib_System_IObservable_1, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::IDisposable(__result__);
			};
			


		
		protected:
			MonoObject *__mscorlib_System_IObservable_1;
		
		private:
		
		};

	}
}
#endif
