#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_TASKS_PARALLELLOOPSTATE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_TASKS_PARALLELLOOPSTATE_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_Nullable_1.h>

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

				class ParallelLoopState
					: public mscorlib::System::Object
				{
				public:
					ParallelLoopState(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					ParallelLoopState(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~ParallelLoopState()
					{
					};
				

					ParallelLoopState & operator=(ParallelLoopState &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					void  Break();
					void  Stop();
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_IsStopped)) mscorlib::System::Boolean  IsStopped;
					__declspec(property(get=get_IsExceptional)) mscorlib::System::Boolean  IsExceptional;
					__declspec(property(get=get_LowestBreakIteration)) mscorlib::System::Nullable<mscorlib::System::Int64>  LowestBreakIteration;
					__declspec(property(get=get_ShouldExitCurrentIteration)) mscorlib::System::Boolean  ShouldExitCurrentIteration;

					//Get Set Properties Methods
					//	Get:IsStopped
					mscorlib::System::Boolean  get_IsStopped() const;

					//	Get:IsExceptional
					mscorlib::System::Boolean  get_IsExceptional() const;

					//	Get:LowestBreakIteration
					mscorlib::System::Nullable<mscorlib::System::Int64>  get_LowestBreakIteration() const;

					//	Get:ShouldExitCurrentIteration
					mscorlib::System::Boolean  get_ShouldExitCurrentIteration() const;

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
