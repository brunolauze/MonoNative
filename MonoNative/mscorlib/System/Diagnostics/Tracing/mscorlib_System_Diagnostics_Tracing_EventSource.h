#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_IDisposable.h>
#include <mscorlib/System/Diagnostics/Tracing/mscorlib_System_Diagnostics_Tracing_EventLevel.h>
#include <mscorlib/System/Diagnostics/Tracing/mscorlib_System_Diagnostics_Tracing_EventKeywords.h>

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
		namespace Diagnostics
		{
			namespace Tracing
			{

				class EventSource
					: public mscorlib::System::Object
					, public virtual mscorlib::System::IDisposable
				{
				public:
					EventSource(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					, mscorlib::System::IDisposable(NULL)
					{
					};
				
					EventSource(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					, mscorlib::System::IDisposable(nativeObject)
					{
					};
				
					~EventSource()
					{
					};
				

					EventSource & operator=(EventSource &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(EventSource &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					mscorlib::System::Boolean  IsEnabled();
					mscorlib::System::Boolean  IsEnabled(mscorlib::System::Diagnostics::Tracing::EventLevel::__ENUM__ level, mscorlib::System::Diagnostics::Tracing::EventKeywords::__ENUM__ keywords);
					virtual void  Dispose();
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
