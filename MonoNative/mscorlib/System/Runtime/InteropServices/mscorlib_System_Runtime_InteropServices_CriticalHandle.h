#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_CRITICALHANDLE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_CRITICALHANDLE_H

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
			namespace InteropServices
			{

				class CriticalHandle
					: public mscorlib::System::Runtime::ConstrainedExecution::CriticalFinalizerObject
					, public virtual mscorlib::System::IDisposable
				{
				public:
					CriticalHandle(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Runtime::ConstrainedExecution::CriticalFinalizerObject(nativeTypeInfo)
					, mscorlib::System::IDisposable(NULL)
					{
					};
				
					CriticalHandle(MonoObject *nativeObject)
					: mscorlib::System::Runtime::ConstrainedExecution::CriticalFinalizerObject(nativeObject)
					, mscorlib::System::IDisposable(nativeObject)
					{
					};
				
					~CriticalHandle()
					{
					};
				

					CriticalHandle & operator=(CriticalHandle &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(CriticalHandle &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					void  Close();
					virtual void  Dispose();
					void  SetHandleAsInvalid();
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_IsClosed)) mscorlib::System::Boolean  IsClosed;
					__declspec(property(get=get_IsInvalid)) mscorlib::System::Boolean  IsInvalid;

					//Get Set Properties Methods
					//	Get:IsClosed
					mscorlib::System::Boolean  get_IsClosed() const;

					//	Get:IsInvalid
					mscorlib::System::Boolean  get_IsInvalid() const;

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
