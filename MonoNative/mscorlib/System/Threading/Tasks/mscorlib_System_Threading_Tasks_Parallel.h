#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_TASKS_PARALLEL_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_TASKS_PARALLEL_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Threading/Tasks/mscorlib_System_Threading_Tasks_ParallelLoopResult.h>
#include <mscorlib/System/Threading/Tasks/mscorlib_System_Threading_Tasks_ParallelOptions.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IEnumerable_1.h>
#include <mscorlib/System/Collections/Concurrent/mscorlib_System_Collections_Concurrent_Partitioner_1.h>

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

				class ParallelLoopState;
				

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

				class Parallel
					: public mscorlib::System::Object
				{
				public:
					Parallel(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					Parallel(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~Parallel()
					{
					};
				

					Parallel & operator=(Parallel &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(Parallel &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					static mscorlib::System::Threading::Tasks::ParallelLoopResult  For(mscorlib::System::Int32 fromInclusive, mscorlib::System::Int32 toExclusive, mscorlib::Callback<void  (mscorlib::System::Int32 )> body);
					static mscorlib::System::Threading::Tasks::ParallelLoopResult  For(mscorlib::System::Int32 fromInclusive, mscorlib::System::Int32 toExclusive, mscorlib::Callback<void  (mscorlib::System::Int32 , mscorlib::System::Threading::Tasks::ParallelLoopState )> body);
					static mscorlib::System::Threading::Tasks::ParallelLoopResult  For(mscorlib::System::Int32 fromInclusive, mscorlib::System::Int32 toExclusive, mscorlib::System::Threading::Tasks::ParallelOptions parallelOptions, mscorlib::Callback<void  (mscorlib::System::Int32 )> body);
					static mscorlib::System::Threading::Tasks::ParallelLoopResult  For(mscorlib::System::Int32 fromInclusive, mscorlib::System::Int32 toExclusive, mscorlib::System::Threading::Tasks::ParallelOptions parallelOptions, mscorlib::Callback<void  (mscorlib::System::Int32 , mscorlib::System::Threading::Tasks::ParallelLoopState )> body);
					template<typename TLocal>
					static mscorlib::System::Threading::Tasks::ParallelLoopResult  For(mscorlib::System::Int32 fromInclusive, mscorlib::System::Int32 toExclusive, mscorlib::Callback<TLocal  ()> localInit, mscorlib::Callback<TLocal  (mscorlib::System::Int32 , mscorlib::System::Threading::Tasks::ParallelLoopState , TLocal )> body, mscorlib::Callback<void  (TLocal )> localFinally)
					{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType(typeid(fromInclusive).name());
						__parameter_types__[1] = Global::GetType(typeid(toExclusive).name());
						__parameter_types__[2] = Global::GetType(typeid(localInit).name());
						__parameter_types__[3] = Global::GetType(typeid(body).name());
						__parameter_types__[4] = Global::GetType(typeid(localFinally).name());
						__parameters__[0] = &fromInclusive;
						__parameters__[1] = &toExclusive;
						__parameters__[2] = &localInit;
						__parameters__[3] = &body;
						__parameters__[4] = &localFinally;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TLocal).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Parallel", 0, NULL, "For", NullMonoObject, 1, __generic_types__, 5, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::ParallelLoopResult(__result__);
					};
					
					template<typename TLocal>
					static mscorlib::System::Threading::Tasks::ParallelLoopResult  For(mscorlib::System::Int32 fromInclusive, mscorlib::System::Int32 toExclusive, mscorlib::System::Threading::Tasks::ParallelOptions parallelOptions, mscorlib::Callback<TLocal  ()> localInit, mscorlib::Callback<TLocal  (mscorlib::System::Int32 , mscorlib::System::Threading::Tasks::ParallelLoopState , TLocal )> body, mscorlib::Callback<void  (TLocal )> localFinally)
					{
						MonoType *__parameter_types__[6];
						void *__parameters__[6];
						__parameter_types__[0] = Global::GetType(typeid(fromInclusive).name());
						__parameter_types__[1] = Global::GetType(typeid(toExclusive).name());
						__parameter_types__[2] = Global::GetType(typeid(parallelOptions).name());
						__parameter_types__[3] = Global::GetType(typeid(localInit).name());
						__parameter_types__[4] = Global::GetType(typeid(body).name());
						__parameter_types__[5] = Global::GetType(typeid(localFinally).name());
						__parameters__[0] = &fromInclusive;
						__parameters__[1] = &toExclusive;
						__parameters__[2] = (MonoObject*)parallelOptions;
						__parameters__[3] = &localInit;
						__parameters__[4] = &body;
						__parameters__[5] = &localFinally;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TLocal).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Parallel", 0, NULL, "For", NullMonoObject, 1, __generic_types__, 6, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::ParallelLoopResult(__result__);
					};
					
					static mscorlib::System::Threading::Tasks::ParallelLoopResult  For(mscorlib::System::Int64 fromInclusive, mscorlib::System::Int64 toExclusive, mscorlib::Callback<void  (mscorlib::System::Int64 )> body);
					static mscorlib::System::Threading::Tasks::ParallelLoopResult  For(mscorlib::System::Int64 fromInclusive, mscorlib::System::Int64 toExclusive, mscorlib::Callback<void  (mscorlib::System::Int64 , mscorlib::System::Threading::Tasks::ParallelLoopState )> body);
					static mscorlib::System::Threading::Tasks::ParallelLoopResult  For(mscorlib::System::Int64 fromInclusive, mscorlib::System::Int64 toExclusive, mscorlib::System::Threading::Tasks::ParallelOptions parallelOptions, mscorlib::Callback<void  (mscorlib::System::Int64 )> body);
					static mscorlib::System::Threading::Tasks::ParallelLoopResult  For(mscorlib::System::Int64 fromInclusive, mscorlib::System::Int64 toExclusive, mscorlib::System::Threading::Tasks::ParallelOptions parallelOptions, mscorlib::Callback<void  (mscorlib::System::Int64 , mscorlib::System::Threading::Tasks::ParallelLoopState )> body);
					template<typename TLocal>
					static mscorlib::System::Threading::Tasks::ParallelLoopResult  For(mscorlib::System::Int64 fromInclusive, mscorlib::System::Int64 toExclusive, mscorlib::Callback<TLocal  ()> localInit, mscorlib::Callback<TLocal  (mscorlib::System::Int64 , mscorlib::System::Threading::Tasks::ParallelLoopState , TLocal )> body, mscorlib::Callback<void  (TLocal )> localFinally)
					{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType(typeid(fromInclusive).name());
						__parameter_types__[1] = Global::GetType(typeid(toExclusive).name());
						__parameter_types__[2] = Global::GetType(typeid(localInit).name());
						__parameter_types__[3] = Global::GetType(typeid(body).name());
						__parameter_types__[4] = Global::GetType(typeid(localFinally).name());
						__parameters__[0] = &fromInclusive;
						__parameters__[1] = &toExclusive;
						__parameters__[2] = &localInit;
						__parameters__[3] = &body;
						__parameters__[4] = &localFinally;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TLocal).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Parallel", 0, NULL, "For", NullMonoObject, 1, __generic_types__, 5, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::ParallelLoopResult(__result__);
					};
					
					template<typename TLocal>
					static mscorlib::System::Threading::Tasks::ParallelLoopResult  For(mscorlib::System::Int64 fromInclusive, mscorlib::System::Int64 toExclusive, mscorlib::System::Threading::Tasks::ParallelOptions parallelOptions, mscorlib::Callback<TLocal  ()> localInit, mscorlib::Callback<TLocal  (mscorlib::System::Int64 , mscorlib::System::Threading::Tasks::ParallelLoopState , TLocal )> body, mscorlib::Callback<void  (TLocal )> localFinally)
					{
						MonoType *__parameter_types__[6];
						void *__parameters__[6];
						__parameter_types__[0] = Global::GetType(typeid(fromInclusive).name());
						__parameter_types__[1] = Global::GetType(typeid(toExclusive).name());
						__parameter_types__[2] = Global::GetType(typeid(parallelOptions).name());
						__parameter_types__[3] = Global::GetType(typeid(localInit).name());
						__parameter_types__[4] = Global::GetType(typeid(body).name());
						__parameter_types__[5] = Global::GetType(typeid(localFinally).name());
						__parameters__[0] = &fromInclusive;
						__parameters__[1] = &toExclusive;
						__parameters__[2] = (MonoObject*)parallelOptions;
						__parameters__[3] = &localInit;
						__parameters__[4] = &body;
						__parameters__[5] = &localFinally;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TLocal).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Parallel", 0, NULL, "For", NullMonoObject, 1, __generic_types__, 6, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::ParallelLoopResult(__result__);
					};
					
					template<typename TSource>
					static mscorlib::System::Threading::Tasks::ParallelLoopResult  ForEach(mscorlib::System::Collections::Generic::IEnumerable<TSource> source, mscorlib::Callback<void  (TSource )> body)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(source).name());
						__parameter_types__[1] = Global::GetType(typeid(body).name());
						__parameters__[0] = (MonoObject*)source;
						__parameters__[1] = &body;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TSource).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Parallel", 0, NULL, "ForEach", NullMonoObject, 1, __generic_types__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::ParallelLoopResult(__result__);
					};
					
					template<typename TSource>
					static mscorlib::System::Threading::Tasks::ParallelLoopResult  ForEach(mscorlib::System::Collections::Generic::IEnumerable<TSource> source, mscorlib::Callback<void  (TSource , mscorlib::System::Threading::Tasks::ParallelLoopState )> body)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(source).name());
						__parameter_types__[1] = Global::GetType(typeid(body).name());
						__parameters__[0] = (MonoObject*)source;
						__parameters__[1] = &body;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TSource).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Parallel", 0, NULL, "ForEach", NullMonoObject, 1, __generic_types__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::ParallelLoopResult(__result__);
					};
					
					template<typename TSource>
					static mscorlib::System::Threading::Tasks::ParallelLoopResult  ForEach(mscorlib::System::Collections::Generic::IEnumerable<TSource> source, mscorlib::Callback<void  (TSource , mscorlib::System::Threading::Tasks::ParallelLoopState , mscorlib::System::Int64 )> body)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(source).name());
						__parameter_types__[1] = Global::GetType(typeid(body).name());
						__parameters__[0] = (MonoObject*)source;
						__parameters__[1] = &body;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TSource).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Parallel", 0, NULL, "ForEach", NullMonoObject, 1, __generic_types__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::ParallelLoopResult(__result__);
					};
					
					template<typename TSource>
					static mscorlib::System::Threading::Tasks::ParallelLoopResult  ForEach(mscorlib::System::Collections::Concurrent::Partitioner<TSource> source, mscorlib::Callback<void  (TSource , mscorlib::System::Threading::Tasks::ParallelLoopState )> body)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(source).name());
						__parameter_types__[1] = Global::GetType(typeid(body).name());
						__parameters__[0] = (MonoObject*)source;
						__parameters__[1] = &body;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TSource).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Parallel", 0, NULL, "ForEach", NullMonoObject, 1, __generic_types__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::ParallelLoopResult(__result__);
					};
					
					template<typename TSource>
					static mscorlib::System::Threading::Tasks::ParallelLoopResult  ForEach(mscorlib::System::Collections::Concurrent::Partitioner<TSource> source, mscorlib::Callback<void  (TSource )> body)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(source).name());
						__parameter_types__[1] = Global::GetType(typeid(body).name());
						__parameters__[0] = (MonoObject*)source;
						__parameters__[1] = &body;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TSource).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Parallel", 0, NULL, "ForEach", NullMonoObject, 1, __generic_types__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::ParallelLoopResult(__result__);
					};
					
					template<typename TSource>
					static mscorlib::System::Threading::Tasks::ParallelLoopResult  ForEach(mscorlib::System::Collections::Generic::IEnumerable<TSource> source, mscorlib::System::Threading::Tasks::ParallelOptions parallelOptions, mscorlib::Callback<void  (TSource )> body)
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(source).name());
						__parameter_types__[1] = Global::GetType(typeid(parallelOptions).name());
						__parameter_types__[2] = Global::GetType(typeid(body).name());
						__parameters__[0] = (MonoObject*)source;
						__parameters__[1] = (MonoObject*)parallelOptions;
						__parameters__[2] = &body;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TSource).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Parallel", 0, NULL, "ForEach", NullMonoObject, 1, __generic_types__, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::ParallelLoopResult(__result__);
					};
					
					template<typename TSource>
					static mscorlib::System::Threading::Tasks::ParallelLoopResult  ForEach(mscorlib::System::Collections::Generic::IEnumerable<TSource> source, mscorlib::System::Threading::Tasks::ParallelOptions parallelOptions, mscorlib::Callback<void  (TSource , mscorlib::System::Threading::Tasks::ParallelLoopState )> body)
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(source).name());
						__parameter_types__[1] = Global::GetType(typeid(parallelOptions).name());
						__parameter_types__[2] = Global::GetType(typeid(body).name());
						__parameters__[0] = (MonoObject*)source;
						__parameters__[1] = (MonoObject*)parallelOptions;
						__parameters__[2] = &body;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TSource).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Parallel", 0, NULL, "ForEach", NullMonoObject, 1, __generic_types__, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::ParallelLoopResult(__result__);
					};
					
					template<typename TSource>
					static mscorlib::System::Threading::Tasks::ParallelLoopResult  ForEach(mscorlib::System::Collections::Generic::IEnumerable<TSource> source, mscorlib::System::Threading::Tasks::ParallelOptions parallelOptions, mscorlib::Callback<void  (TSource , mscorlib::System::Threading::Tasks::ParallelLoopState , mscorlib::System::Int64 )> body)
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(source).name());
						__parameter_types__[1] = Global::GetType(typeid(parallelOptions).name());
						__parameter_types__[2] = Global::GetType(typeid(body).name());
						__parameters__[0] = (MonoObject*)source;
						__parameters__[1] = (MonoObject*)parallelOptions;
						__parameters__[2] = &body;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TSource).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Parallel", 0, NULL, "ForEach", NullMonoObject, 1, __generic_types__, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::ParallelLoopResult(__result__);
					};
					
					template<typename TSource>
					static mscorlib::System::Threading::Tasks::ParallelLoopResult  ForEach(mscorlib::System::Collections::Concurrent::Partitioner<TSource> source, mscorlib::System::Threading::Tasks::ParallelOptions parallelOptions, mscorlib::Callback<void  (TSource )> body)
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(source).name());
						__parameter_types__[1] = Global::GetType(typeid(parallelOptions).name());
						__parameter_types__[2] = Global::GetType(typeid(body).name());
						__parameters__[0] = (MonoObject*)source;
						__parameters__[1] = (MonoObject*)parallelOptions;
						__parameters__[2] = &body;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TSource).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Parallel", 0, NULL, "ForEach", NullMonoObject, 1, __generic_types__, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::ParallelLoopResult(__result__);
					};
					
					template<typename TSource>
					static mscorlib::System::Threading::Tasks::ParallelLoopResult  ForEach(mscorlib::System::Collections::Concurrent::Partitioner<TSource> source, mscorlib::System::Threading::Tasks::ParallelOptions parallelOptions, mscorlib::Callback<void  (TSource , mscorlib::System::Threading::Tasks::ParallelLoopState )> body)
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(source).name());
						__parameter_types__[1] = Global::GetType(typeid(parallelOptions).name());
						__parameter_types__[2] = Global::GetType(typeid(body).name());
						__parameters__[0] = (MonoObject*)source;
						__parameters__[1] = (MonoObject*)parallelOptions;
						__parameters__[2] = &body;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TSource).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Parallel", 0, NULL, "ForEach", NullMonoObject, 1, __generic_types__, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::ParallelLoopResult(__result__);
					};
					
					template<typename TSource, typename TLocal>
					static mscorlib::System::Threading::Tasks::ParallelLoopResult  ForEach(mscorlib::System::Collections::Generic::IEnumerable<TSource> source, mscorlib::Callback<TLocal  ()> localInit, mscorlib::Callback<TLocal  (TSource , mscorlib::System::Threading::Tasks::ParallelLoopState , TLocal )> body, mscorlib::Callback<void  (TLocal )> localFinally)
					{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType(typeid(source).name());
						__parameter_types__[1] = Global::GetType(typeid(localInit).name());
						__parameter_types__[2] = Global::GetType(typeid(body).name());
						__parameter_types__[3] = Global::GetType(typeid(localFinally).name());
						__parameters__[0] = (MonoObject*)source;
						__parameters__[1] = &localInit;
						__parameters__[2] = &body;
						__parameters__[3] = &localFinally;
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TSource).name());
						__generic_types__[1] = Global::GetType(typeid(TLocal).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Parallel", 0, NULL, "ForEach", NullMonoObject, 2, __generic_types__, 4, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::ParallelLoopResult(__result__);
					};
					
					template<typename TSource, typename TLocal>
					static mscorlib::System::Threading::Tasks::ParallelLoopResult  ForEach(mscorlib::System::Collections::Generic::IEnumerable<TSource> source, mscorlib::Callback<TLocal  ()> localInit, mscorlib::Callback<TLocal  (TSource , mscorlib::System::Threading::Tasks::ParallelLoopState , mscorlib::System::Int64 , TLocal )> body, mscorlib::Callback<void  (TLocal )> localFinally)
					{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType(typeid(source).name());
						__parameter_types__[1] = Global::GetType(typeid(localInit).name());
						__parameter_types__[2] = Global::GetType(typeid(body).name());
						__parameter_types__[3] = Global::GetType(typeid(localFinally).name());
						__parameters__[0] = (MonoObject*)source;
						__parameters__[1] = &localInit;
						__parameters__[2] = &body;
						__parameters__[3] = &localFinally;
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TSource).name());
						__generic_types__[1] = Global::GetType(typeid(TLocal).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Parallel", 0, NULL, "ForEach", NullMonoObject, 2, __generic_types__, 4, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::ParallelLoopResult(__result__);
					};
					
					template<typename TSource, typename TLocal>
					static mscorlib::System::Threading::Tasks::ParallelLoopResult  ForEach(mscorlib::System::Collections::Concurrent::Partitioner<TSource> source, mscorlib::Callback<TLocal  ()> localInit, mscorlib::Callback<TLocal  (TSource , mscorlib::System::Threading::Tasks::ParallelLoopState , TLocal )> body, mscorlib::Callback<void  (TLocal )> localFinally)
					{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType(typeid(source).name());
						__parameter_types__[1] = Global::GetType(typeid(localInit).name());
						__parameter_types__[2] = Global::GetType(typeid(body).name());
						__parameter_types__[3] = Global::GetType(typeid(localFinally).name());
						__parameters__[0] = (MonoObject*)source;
						__parameters__[1] = &localInit;
						__parameters__[2] = &body;
						__parameters__[3] = &localFinally;
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TSource).name());
						__generic_types__[1] = Global::GetType(typeid(TLocal).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Parallel", 0, NULL, "ForEach", NullMonoObject, 2, __generic_types__, 4, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::ParallelLoopResult(__result__);
					};
					
					template<typename TSource, typename TLocal>
					static mscorlib::System::Threading::Tasks::ParallelLoopResult  ForEach(mscorlib::System::Collections::Generic::IEnumerable<TSource> source, mscorlib::System::Threading::Tasks::ParallelOptions parallelOptions, mscorlib::Callback<TLocal  ()> localInit, mscorlib::Callback<TLocal  (TSource , mscorlib::System::Threading::Tasks::ParallelLoopState , TLocal )> body, mscorlib::Callback<void  (TLocal )> localFinally)
					{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType(typeid(source).name());
						__parameter_types__[1] = Global::GetType(typeid(parallelOptions).name());
						__parameter_types__[2] = Global::GetType(typeid(localInit).name());
						__parameter_types__[3] = Global::GetType(typeid(body).name());
						__parameter_types__[4] = Global::GetType(typeid(localFinally).name());
						__parameters__[0] = (MonoObject*)source;
						__parameters__[1] = (MonoObject*)parallelOptions;
						__parameters__[2] = &localInit;
						__parameters__[3] = &body;
						__parameters__[4] = &localFinally;
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TSource).name());
						__generic_types__[1] = Global::GetType(typeid(TLocal).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Parallel", 0, NULL, "ForEach", NullMonoObject, 2, __generic_types__, 5, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::ParallelLoopResult(__result__);
					};
					
					template<typename TSource, typename TLocal>
					static mscorlib::System::Threading::Tasks::ParallelLoopResult  ForEach(mscorlib::System::Collections::Generic::IEnumerable<TSource> source, mscorlib::System::Threading::Tasks::ParallelOptions parallelOptions, mscorlib::Callback<TLocal  ()> localInit, mscorlib::Callback<TLocal  (TSource , mscorlib::System::Threading::Tasks::ParallelLoopState , mscorlib::System::Int64 , TLocal )> body, mscorlib::Callback<void  (TLocal )> localFinally)
					{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType(typeid(source).name());
						__parameter_types__[1] = Global::GetType(typeid(parallelOptions).name());
						__parameter_types__[2] = Global::GetType(typeid(localInit).name());
						__parameter_types__[3] = Global::GetType(typeid(body).name());
						__parameter_types__[4] = Global::GetType(typeid(localFinally).name());
						__parameters__[0] = (MonoObject*)source;
						__parameters__[1] = (MonoObject*)parallelOptions;
						__parameters__[2] = &localInit;
						__parameters__[3] = &body;
						__parameters__[4] = &localFinally;
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TSource).name());
						__generic_types__[1] = Global::GetType(typeid(TLocal).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Parallel", 0, NULL, "ForEach", NullMonoObject, 2, __generic_types__, 5, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::ParallelLoopResult(__result__);
					};
					
					template<typename TSource, typename TLocal>
					static mscorlib::System::Threading::Tasks::ParallelLoopResult  ForEach(mscorlib::System::Collections::Concurrent::Partitioner<TSource> source, mscorlib::System::Threading::Tasks::ParallelOptions parallelOptions, mscorlib::Callback<TLocal  ()> localInit, mscorlib::Callback<TLocal  (TSource , mscorlib::System::Threading::Tasks::ParallelLoopState , TLocal )> body, mscorlib::Callback<void  (TLocal )> localFinally)
					{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType(typeid(source).name());
						__parameter_types__[1] = Global::GetType(typeid(parallelOptions).name());
						__parameter_types__[2] = Global::GetType(typeid(localInit).name());
						__parameter_types__[3] = Global::GetType(typeid(body).name());
						__parameter_types__[4] = Global::GetType(typeid(localFinally).name());
						__parameters__[0] = (MonoObject*)source;
						__parameters__[1] = (MonoObject*)parallelOptions;
						__parameters__[2] = &localInit;
						__parameters__[3] = &body;
						__parameters__[4] = &localFinally;
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TSource).name());
						__generic_types__[1] = Global::GetType(typeid(TLocal).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Parallel", 0, NULL, "ForEach", NullMonoObject, 2, __generic_types__, 5, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::ParallelLoopResult(__result__);
					};
					
					static void  Invoke(std::vector<mscorlib::Callback<void  ()> *> actions);
					static void  Invoke(mscorlib::System::Threading::Tasks::ParallelOptions parallelOptions, std::vector<mscorlib::Callback<void  ()> *> actions);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
