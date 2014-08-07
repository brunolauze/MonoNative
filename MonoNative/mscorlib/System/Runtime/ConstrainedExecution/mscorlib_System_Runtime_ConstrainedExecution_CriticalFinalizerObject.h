#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_CONSTRAINEDEXECUTION_CRITICALFINALIZEROBJECT_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_CONSTRAINEDEXECUTION_CRITICALFINALIZEROBJECT_H

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
			namespace ConstrainedExecution
			{

				class CriticalFinalizerObject
					: public mscorlib::System::Object
				{
				public:
					CriticalFinalizerObject(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					CriticalFinalizerObject(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~CriticalFinalizerObject()
					{
					};
				

					CriticalFinalizerObject & operator=(CriticalFinalizerObject &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(CriticalFinalizerObject &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
