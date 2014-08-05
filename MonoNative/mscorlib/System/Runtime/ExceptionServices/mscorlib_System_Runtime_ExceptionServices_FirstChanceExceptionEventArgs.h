#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_EXCEPTIONSERVICES_FIRSTCHANCEEXCEPTIONEVENTARGS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_EXCEPTIONSERVICES_FIRSTCHANCEEXCEPTIONEVENTARGS_H

#include <mscorlib/System/mscorlib_System_EventArgs.h>
#include <mscorlib/System/mscorlib_System_Exception.h>
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
			namespace ExceptionServices
			{

				class FirstChanceExceptionEventArgs
					: public mscorlib::System::EventArgs
				{
				public:
					FirstChanceExceptionEventArgs(mscorlib::System::Exception exception)
					: mscorlib::System::EventArgs(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs"))
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Exception");
						__parameters__[0] = (MonoObject*)exception;
						__native_object__ = Global::New("mscorlib", "System.Runtime.ExceptionServices", "FirstChanceExceptionEventArgs", 1, __parameter_types__, __parameters__);
					};
				
					FirstChanceExceptionEventArgs(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::EventArgs(nativeTypeInfo)
					{
					};
				
					FirstChanceExceptionEventArgs(MonoObject *nativeObject)
					: mscorlib::System::EventArgs(nativeObject)
					{
					};
				
					~FirstChanceExceptionEventArgs()
					{
					};
				

					FirstChanceExceptionEventArgs & operator=(FirstChanceExceptionEventArgs &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Exception)) mscorlib::System::Exception  Exception;

					//Get Set Properties Methods
					//	Get:Exception
					mscorlib::System::Exception  get_Exception() const;

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
