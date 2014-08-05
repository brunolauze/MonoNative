#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_TASKS_UNOBSERVEDTASKEXCEPTIONEVENTARGS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_TASKS_UNOBSERVEDTASKEXCEPTIONEVENTARGS_H

#include <mscorlib/System/mscorlib_System_EventArgs.h>
#include <mscorlib/System/mscorlib_System_AggregateException.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		class String;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{
			namespace Tasks
			{

				class UnobservedTaskExceptionEventArgs
					: public mscorlib::System::EventArgs
				{
				public:
					UnobservedTaskExceptionEventArgs(mscorlib::System::AggregateException exception)
					: mscorlib::System::EventArgs(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.Tasks.UnobservedTaskExceptionEventArgs"))
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "AggregateException");
						__parameters__[0] = (MonoObject*)exception;
						__native_object__ = Global::New("mscorlib", "System.Threading.Tasks", "UnobservedTaskExceptionEventArgs", 1, __parameter_types__, __parameters__);
					};
				
					UnobservedTaskExceptionEventArgs(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::EventArgs(nativeTypeInfo)
					{
					};
				
					UnobservedTaskExceptionEventArgs(MonoObject *nativeObject)
					: mscorlib::System::EventArgs(nativeObject)
					{
					};
				
					~UnobservedTaskExceptionEventArgs()
					{
					};
				

					UnobservedTaskExceptionEventArgs & operator=(UnobservedTaskExceptionEventArgs &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					void  SetObserved();
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Exception)) mscorlib::System::AggregateException  Exception;
					__declspec(property(get=get_Observed)) mscorlib::System::Boolean  Observed;

					//Get Set Properties Methods
					//	Get:Exception
					mscorlib::System::AggregateException  get_Exception() const;

					//	Get:Observed
					mscorlib::System::Boolean  get_Observed() const;

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
