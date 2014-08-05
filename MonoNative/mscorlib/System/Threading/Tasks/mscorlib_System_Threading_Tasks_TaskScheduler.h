#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_TASKS_TASKSCHEDULER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_TASKS_TASKSCHEDULER_H

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

				class UnobservedTaskExceptionEventArgs;
				

			}
		}
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

				class TaskScheduler
					: public mscorlib::System::Object
				{
				public:
					TaskScheduler(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					TaskScheduler(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~TaskScheduler()
					{
					};
				

					TaskScheduler & operator=(TaskScheduler &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					static mscorlib::System::Threading::Tasks::TaskScheduler  FromCurrentSynchronizationContext();
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Id)) mscorlib::System::Int32  Id;
					__declspec(property(get=get_MaximumConcurrencyLevel)) mscorlib::System::Int32  MaximumConcurrencyLevel;

					//Public Static Properties
					static Property<mscorlib::System::Threading::Tasks::TaskScheduler , mscorlib::System::Threading::Tasks::TaskScheduler> Default;
					static Property<mscorlib::System::Threading::Tasks::TaskScheduler , mscorlib::System::Threading::Tasks::TaskScheduler> Current;

					//Get Set Properties Methods
					//	Get:Id
					mscorlib::System::Int32  get_Id() const;

					//	Get:MaximumConcurrencyLevel
					mscorlib::System::Int32  get_MaximumConcurrencyLevel() const;

					//Get Set Static Properties Methods
					//	Get:Default
					static mscorlib::System::Threading::Tasks::TaskScheduler  get_Default();
					static void set_Default(mscorlib::System::Threading::Tasks::TaskScheduler  value);

					//	Get/Set:Current
					static mscorlib::System::Threading::Tasks::TaskScheduler  get_Current();
					static void set_Current(mscorlib::System::Threading::Tasks::TaskScheduler  value);


				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
