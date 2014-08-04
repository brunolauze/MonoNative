#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_TRACING_EVENTCOMMANDEVENTARGS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_TRACING_EVENTCOMMANDEVENTARGS_H

#include <mscorlib/System/mscorlib_System_EventArgs.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IDictionary_2.h>
#include <mscorlib/System/Diagnostics/Tracing/mscorlib_System_Diagnostics_Tracing_EventCommand.h>
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
		namespace Diagnostics
		{
			namespace Tracing
			{

				class EventCommandEventArgs
					: public mscorlib::System::EventArgs
				{
				public:
					EventCommandEventArgs(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::EventArgs(nativeTypeInfo)
					{
					};
				
					EventCommandEventArgs(MonoObject *nativeObject)
					: mscorlib::System::EventArgs(nativeObject)
					{
					};
				
					~EventCommandEventArgs()
					{
					};
				

					EventCommandEventArgs & operator=(EventCommandEventArgs &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					mscorlib::System::Boolean  DisableEvent(mscorlib::System::Int32 eventId);
					mscorlib::System::Boolean  EnableEvent(mscorlib::System::Int32 eventId);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Arguments)) mscorlib::System::Collections::Generic::IDictionary<mscorlib::System::String,mscorlib::System::String>  Arguments;
					__declspec(property(get=get_Command)) mscorlib::System::Diagnostics::Tracing::EventCommand::__ENUM__  Command;

					//Get Set Properties Methods
					//	Get:Arguments
					mscorlib::System::Collections::Generic::IDictionary<mscorlib::System::String,mscorlib::System::String>  get_Arguments();

					//	Get:Command
					mscorlib::System::Diagnostics::Tracing::EventCommand::__ENUM__  get_Command();

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
