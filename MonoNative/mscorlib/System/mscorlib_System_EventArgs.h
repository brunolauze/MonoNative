#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_EVENTARGS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_EVENTARGS_H

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

		class EventArgs
			: public mscorlib::System::Object
		{
		public:
			EventArgs()
			: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.EventArgs"))
			{
				__native_object__ = Global::New("mscorlib", "System", "EventArgs");
			};
		
			EventArgs(mscorlib::NativeTypeInfo *nativeTypeInfo)
			: mscorlib::System::Object(nativeTypeInfo)
			{
			};
		
			EventArgs(MonoObject *nativeObject)
			: mscorlib::System::Object(nativeObject)
			{
			};
		
			~EventArgs()
			{
			};
		

			EventArgs & operator=(EventArgs &value) { __native_object__ = value.GetNativeObject(); return value; };
			operator MonoObject*() { return __native_object__; };
			MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


			virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			//Public Static Fields
			static Property<mscorlib::System::EventArgs> Empty;

			//	Get/Set:Empty
			static mscorlib::System::EventArgs  get_Empty();

		
		protected:
		
		private:
		
		};

	}
}
#endif
