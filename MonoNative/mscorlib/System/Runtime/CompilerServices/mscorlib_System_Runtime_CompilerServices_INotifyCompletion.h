#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_COMPILERSERVICES_INOTIFYCOMPLETION_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_COMPILERSERVICES_INOTIFYCOMPLETION_H

#include <Global.h>

namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace CompilerServices
			{

				class INotifyCompletion
				{
				public:
					INotifyCompletion(MonoObject *nativeObject)
					{
						__mscorlib_System_Runtime_CompilerServices_INotifyCompletion = nativeObject;
					};
				
					~INotifyCompletion()
					{
					};
				

					INotifyCompletion & operator=(INotifyCompletion &value) { __mscorlib_System_Runtime_CompilerServices_INotifyCompletion = value.__mscorlib_System_Runtime_CompilerServices_INotifyCompletion; return value; };
					operator MonoObject*() { return __mscorlib_System_Runtime_CompilerServices_INotifyCompletion; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_CompilerServices_INotifyCompletion = value; return value; };


					virtual void  OnCompleted(mscorlib::Callback<void  ()> continuation);


				
				protected:
					MonoObject *__mscorlib_System_Runtime_CompilerServices_INotifyCompletion;
				
				private:
				
				};

			}
		}
	}
}
#endif
