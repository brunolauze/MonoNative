#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_TASKS_PARALLELOPTIONS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_TASKS_PARALLELOPTIONS_H

#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			class CancellationToken;
			

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

				class TaskScheduler;
				

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

				class ParallelOptions
					: public mscorlib::System::Object
				{
				public:
					ParallelOptions()
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.Tasks.ParallelOptions"))
					{
						__native_object__ = Global::New("mscorlib", "System.Threading.Tasks", "ParallelOptions");
					};
				
					ParallelOptions(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					ParallelOptions(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~ParallelOptions()
					{
					};
				

					ParallelOptions & operator=(ParallelOptions &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(ParallelOptions &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_CancellationToken, put=set_CancellationToken)) mscorlib::System::Threading::CancellationToken  CancellationToken;
					__declspec(property(get=get_MaxDegreeOfParallelism, put=set_MaxDegreeOfParallelism)) mscorlib::System::Int32  MaxDegreeOfParallelism;
					__declspec(property(get=get_TaskScheduler, put=set_TaskScheduler)) mscorlib::System::Threading::Tasks::TaskScheduler  TaskScheduler;

					//Get Set Properties Methods
					//	Get/Set:CancellationToken
					mscorlib::System::Threading::CancellationToken  get_CancellationToken() const;
					void set_CancellationToken(mscorlib::System::Threading::CancellationToken  value);

					//	Get/Set:MaxDegreeOfParallelism
					mscorlib::System::Int32  get_MaxDegreeOfParallelism() const;
					void set_MaxDegreeOfParallelism(mscorlib::System::Int32  value);

					//	Get/Set:TaskScheduler
					mscorlib::System::Threading::Tasks::TaskScheduler  get_TaskScheduler() const;
					void set_TaskScheduler(mscorlib::System::Threading::Tasks::TaskScheduler  value);

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
