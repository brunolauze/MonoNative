#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_TASKS_PARALLELLOOPRESULT_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_TASKS_PARALLELLOOPRESULT_H

#include <mscorlib/System/mscorlib_System_ValueType.h>
#include <mscorlib/System/mscorlib_System_Nullable_1.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class String;
		class Type;
		

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

				class ParallelLoopResult
					: public mscorlib::System::ValueType
				{
				public:
					ParallelLoopResult(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::ValueType(nativeTypeInfo)
					{
					};
				
					ParallelLoopResult(MonoObject *nativeObject)
					: mscorlib::System::ValueType(nativeObject)
					{
					};
				
					~ParallelLoopResult()
					{
					};
				

					ParallelLoopResult & operator=(ParallelLoopResult &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_LowestBreakIteration, put=set_LowestBreakIteration)) mscorlib::System::Nullable<mscorlib::System::Int64>  LowestBreakIteration;
					__declspec(property(get=get_IsCompleted, put=set_IsCompleted)) mscorlib::System::Boolean  IsCompleted;

					//Get Set Properties Methods
					//	Get/Set:LowestBreakIteration
					mscorlib::System::Nullable<mscorlib::System::Int64>  get_LowestBreakIteration();
					void set_LowestBreakIteration(mscorlib::System::Nullable<mscorlib::System::Int64>  value);

					//	Get/Set:IsCompleted
					mscorlib::System::Boolean  get_IsCompleted();
					void set_IsCompleted(mscorlib::System::Boolean  value);

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
