#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_CONSOLECANCELEVENTARGS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_CONSOLECANCELEVENTARGS_H

#include <mscorlib/System/mscorlib_System_EventArgs.h>
#include <mscorlib/System/mscorlib_System_ConsoleSpecialKey.h>
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

		class ConsoleCancelEventArgs
			: public mscorlib::System::EventArgs
		{
		public:
			ConsoleCancelEventArgs(mscorlib::NativeTypeInfo *nativeTypeInfo)
			: mscorlib::System::EventArgs(nativeTypeInfo)
			{
			};
		
			ConsoleCancelEventArgs(MonoObject *nativeObject)
			: mscorlib::System::EventArgs(nativeObject)
			{
			};
		
			~ConsoleCancelEventArgs()
			{
			};
		

			ConsoleCancelEventArgs & operator=(ConsoleCancelEventArgs &value) { __native_object__ = value.GetNativeObject(); return value; };
			operator MonoObject*() { return __native_object__; };
			MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


			virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			//Public Properties
			__declspec(property(get=get_Cancel, put=set_Cancel)) mscorlib::System::Boolean  Cancel;
			__declspec(property(get=get_SpecialKey)) mscorlib::System::ConsoleSpecialKey::__ENUM__  SpecialKey;

			//Get Set Properties Methods
			//	Get/Set:Cancel
			mscorlib::System::Boolean  get_Cancel();
			void set_Cancel(mscorlib::System::Boolean  value);

			//	Get:SpecialKey
			mscorlib::System::ConsoleSpecialKey::__ENUM__  get_SpecialKey();

		
		protected:
		
		private:
		
		};

	}
}
#endif
