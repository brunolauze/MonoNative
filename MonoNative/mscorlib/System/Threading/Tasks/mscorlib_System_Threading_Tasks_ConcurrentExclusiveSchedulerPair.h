#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_TASKS_CONCURRENTEXCLUSIVESCHEDULERPAIR_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_TASKS_CONCURRENTEXCLUSIVESCHEDULERPAIR_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Threading/Tasks/mscorlib_System_Threading_Tasks_TaskScheduler.h>

namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{
			namespace Tasks
			{

				class TaskBase;
				

			}
		}
	}
}
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

				class ConcurrentExclusiveSchedulerPair
					: public mscorlib::System::Object
				{
				public:
					ConcurrentExclusiveSchedulerPair()
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.Tasks.ConcurrentExclusiveSchedulerPair"))
					{
						__native_object__ = Global::New("mscorlib", "System.Threading.Tasks", "ConcurrentExclusiveSchedulerPair");
					};
				
					ConcurrentExclusiveSchedulerPair(mscorlib::System::Threading::Tasks::TaskScheduler taskScheduler)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.Tasks.ConcurrentExclusiveSchedulerPair"))
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Threading.Tasks", "TaskScheduler");
						__parameters__[0] = (MonoObject*)taskScheduler;
						__native_object__ = Global::New("mscorlib", "System.Threading.Tasks", "ConcurrentExclusiveSchedulerPair", 1, __parameter_types__, __parameters__);
					};
				
					ConcurrentExclusiveSchedulerPair(mscorlib::System::Threading::Tasks::TaskScheduler taskScheduler, mscorlib::System::Int32 maxConcurrencyLevel)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.Tasks.ConcurrentExclusiveSchedulerPair"))
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Threading.Tasks", "TaskScheduler");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int32");
						__parameters__[0] = (MonoObject*)taskScheduler;
						__parameters__[1] = &maxConcurrencyLevel;
						__native_object__ = Global::New("mscorlib", "System.Threading.Tasks", "ConcurrentExclusiveSchedulerPair", 2, __parameter_types__, __parameters__);
					};
				
					ConcurrentExclusiveSchedulerPair(mscorlib::System::Threading::Tasks::TaskScheduler taskScheduler, mscorlib::System::Int32 maxConcurrencyLevel, mscorlib::System::Int32 maxItemsPerTask)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.Tasks.ConcurrentExclusiveSchedulerPair"))
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Threading.Tasks", "TaskScheduler");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int32");
						__parameter_types__[2] = Global::GetType("mscorlib", "System", "Int32");
						__parameters__[0] = (MonoObject*)taskScheduler;
						__parameters__[1] = &maxConcurrencyLevel;
						__parameters__[2] = &maxItemsPerTask;
						__native_object__ = Global::New("mscorlib", "System.Threading.Tasks", "ConcurrentExclusiveSchedulerPair", 3, __parameter_types__, __parameters__);
					};
				
					ConcurrentExclusiveSchedulerPair(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					ConcurrentExclusiveSchedulerPair(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~ConcurrentExclusiveSchedulerPair()
					{
					};
				

					ConcurrentExclusiveSchedulerPair & operator=(ConcurrentExclusiveSchedulerPair &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					void  Complete();
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_ConcurrentScheduler)) mscorlib::System::Threading::Tasks::TaskScheduler  ConcurrentScheduler;
					__declspec(property(get=get_ExclusiveScheduler)) mscorlib::System::Threading::Tasks::TaskScheduler  ExclusiveScheduler;
					__declspec(property(get=get_Completion)) mscorlib::System::Threading::Tasks::TaskBase  Completion;

					//Get Set Properties Methods
					//	Get:ConcurrentScheduler
					mscorlib::System::Threading::Tasks::TaskScheduler  get_ConcurrentScheduler();

					//	Get:ExclusiveScheduler
					mscorlib::System::Threading::Tasks::TaskScheduler  get_ExclusiveScheduler();

					//	Get:Completion
					mscorlib::System::Threading::Tasks::TaskBase  get_Completion();

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
