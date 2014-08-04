#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_IOBSERVER_1_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_IOBSERVER_1_H

#include <Global.h>

namespace mscorlib
{
	namespace System
	{

		class Exception;
		

	}
}
namespace mscorlib
{
	namespace System
	{

		template<typename T>
		class IObserver
		{
		public:
			IObserver(MonoObject *nativeObject)
			{
				__mscorlib_System_IObserver_1 = nativeObject;
			};
		
			~IObserver()
			{
			};
		

			IObserver & operator=(IObserver &value) { __mscorlib_System_IObserver_1 = value.__mscorlib_System_IObserver_1; return value; };
			operator MonoObject*() { return __mscorlib_System_IObserver_1; };
			MonoObject* operator=(MonoObject* value) { __mscorlib_System_IObserver_1 = value; return value; };


			virtual void  OnCompleted()
			{
				MonoType *__generic_types__[1];
				__generic_types__[0] = Global::GetType(typeid(T).name());
				Global::InvokeMethod("mscorlib", "System", "IObserver`1", 1, __generic_types__, "OnCompleted", __mscorlib_System_IObserver_1, 0, NULL, NULL, NULL);
			};
			
			virtual void  OnError(mscorlib::System::Exception error)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(error).name());
				__parameters__[0] = (MonoObject*)error;
				MonoType *__generic_types__[1];
				__generic_types__[0] = Global::GetType(typeid(T).name());
				Global::InvokeMethod("mscorlib", "System", "IObserver`1", 1, __generic_types__, "OnError", __mscorlib_System_IObserver_1, 1, __parameter_types__, __parameters__, NULL);
			};
			
			virtual void  OnNext(T value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoType *__generic_types__[1];
				__generic_types__[0] = Global::GetType(typeid(T).name());
				Global::InvokeMethod("mscorlib", "System", "IObserver`1", 1, __generic_types__, "OnNext", __mscorlib_System_IObserver_1, 1, __parameter_types__, __parameters__, NULL);
			};
			


		
		protected:
			MonoObject *__mscorlib_System_IObserver_1;
		
		private:
		
		};

	}
}
#endif
