#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_COMPILERSERVICES_ICRITICALNOTIFYCOMPLETION_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_COMPILERSERVICES_ICRITICALNOTIFYCOMPLETION_H

#include <mscorlib/System/Runtime/CompilerServices/mscorlib_System_Runtime_CompilerServices_INotifyCompletion.h>

namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace CompilerServices
			{

				class ICriticalNotifyCompletion
					: public virtual mscorlib::System::Runtime::CompilerServices::INotifyCompletion
				{
				public:
					ICriticalNotifyCompletion(MonoObject *nativeObject)
					: mscorlib::System::Runtime::CompilerServices::INotifyCompletion(nativeObject)
					{
					};
				
					~ICriticalNotifyCompletion()
					{
					};
				

					__declspec(property(get=get___mscorlib_System_Runtime_CompilerServices_ICriticalNotifyCompletion, put=set___mscorlib_System_Runtime_CompilerServices_ICriticalNotifyCompletion)) MonoObject *__mscorlib_System_Runtime_CompilerServices_ICriticalNotifyCompletion;
					MonoObject* get___mscorlib_System_Runtime_CompilerServices_ICriticalNotifyCompletion()
					{
						return ICriticalNotifyCompletion::__mscorlib_System_Runtime_CompilerServices_INotifyCompletion;
					}
					void set___mscorlib_System_Runtime_CompilerServices_ICriticalNotifyCompletion(MonoObject *value)
					{
						ICriticalNotifyCompletion::__mscorlib_System_Runtime_CompilerServices_INotifyCompletion = value;
					}
					ICriticalNotifyCompletion & operator=(ICriticalNotifyCompletion &value) { __mscorlib_System_Runtime_CompilerServices_ICriticalNotifyCompletion = value.__mscorlib_System_Runtime_CompilerServices_ICriticalNotifyCompletion; return value; };
					operator MonoObject*() { return __mscorlib_System_Runtime_CompilerServices_ICriticalNotifyCompletion; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_CompilerServices_ICriticalNotifyCompletion = value; return value; };


					virtual void  UnsafeOnCompleted(mscorlib::Callback<void  ()> continuation);


				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
