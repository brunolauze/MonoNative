#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_UNHANDLEDEXCEPTIONEVENTARGS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_UNHANDLEDEXCEPTIONEVENTARGS_H

#include <mscorlib/System/mscorlib_System_EventArgs.h>
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

		class UnhandledExceptionEventArgs
			: public mscorlib::System::EventArgs
		{
		public:
			UnhandledExceptionEventArgs(mscorlib::System::Object exception, mscorlib::System::Boolean isTerminating)
			: mscorlib::System::EventArgs(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.UnhandledExceptionEventArgs"))
			{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "Object");
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "Boolean");
				__parameters__[0] = (MonoObject*)exception;
				__parameters__[1] = reinterpret_cast<void*>(isTerminating);
				__native_object__ = Global::New("mscorlib", "System", "UnhandledExceptionEventArgs", 2, __parameter_types__, __parameters__);
			};
		
			UnhandledExceptionEventArgs(mscorlib::NativeTypeInfo *nativeTypeInfo)
			: mscorlib::System::EventArgs(nativeTypeInfo)
			{
			};
		
			UnhandledExceptionEventArgs(MonoObject *nativeObject)
			: mscorlib::System::EventArgs(nativeObject)
			{
			};
		
			~UnhandledExceptionEventArgs()
			{
			};
		

			UnhandledExceptionEventArgs & operator=(UnhandledExceptionEventArgs &value) { __native_object__ = value.GetNativeObject(); return value; };
			operator MonoObject*() { return __native_object__; };
			MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


			virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			//Public Properties
			__declspec(property(get=get_ExceptionObject)) mscorlib::System::Object  ExceptionObject;
			__declspec(property(get=get_IsTerminating)) mscorlib::System::Boolean  IsTerminating;

			//Get Set Properties Methods
			//	Get:ExceptionObject
			mscorlib::System::Object  get_ExceptionObject();

			//	Get:IsTerminating
			mscorlib::System::Boolean  get_IsTerminating();

		
		protected:
		
		private:
		
		};

	}
}
#endif
