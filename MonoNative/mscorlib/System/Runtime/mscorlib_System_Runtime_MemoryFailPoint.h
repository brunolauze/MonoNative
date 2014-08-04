#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_MEMORYFAILPOINT_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_MEMORYFAILPOINT_H

#include <mscorlib/System/Runtime/ConstrainedExecution/mscorlib_System_Runtime_ConstrainedExecution_CriticalFinalizerObject.h>
#include <mscorlib/System/mscorlib_System_IDisposable.h>
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
		namespace Runtime
		{

			class MemoryFailPoint
				: public mscorlib::System::Runtime::ConstrainedExecution::CriticalFinalizerObject
				, public virtual mscorlib::System::IDisposable
			{
			public:
				MemoryFailPoint(mscorlib::System::Int32 sizeInMegabytes)
				: mscorlib::System::Runtime::ConstrainedExecution::CriticalFinalizerObject(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.MemoryFailPoint"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
					__parameters__[0] = &sizeInMegabytes;
					__native_object__ = Global::New("mscorlib", "System.Runtime", "MemoryFailPoint", 1, __parameter_types__, __parameters__);
				};
			
				MemoryFailPoint(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Runtime::ConstrainedExecution::CriticalFinalizerObject(nativeTypeInfo)
				, mscorlib::System::IDisposable(NULL)
				{
				};
			
				MemoryFailPoint(MonoObject *nativeObject)
				: mscorlib::System::Runtime::ConstrainedExecution::CriticalFinalizerObject(nativeObject)
				, mscorlib::System::IDisposable(nativeObject)
				{
				};
			
				~MemoryFailPoint()
				{
				};
			

				MemoryFailPoint & operator=(MemoryFailPoint &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual void  Dispose();
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
