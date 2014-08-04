#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RESOLVEEVENTARGS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RESOLVEEVENTARGS_H

#include <mscorlib/System/mscorlib_System_EventArgs.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Assembly.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		

	}
}
namespace mscorlib
{
	namespace System
	{

		class ResolveEventArgs
			: public mscorlib::System::EventArgs
		{
		public:
			ResolveEventArgs(mscorlib::System::String name)
			: mscorlib::System::EventArgs(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.ResolveEventArgs"))
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameters__[0] = (MonoObject*)name;
				__native_object__ = Global::New("mscorlib", "System", "ResolveEventArgs", 1, __parameter_types__, __parameters__);
			};
		
			ResolveEventArgs(mscorlib::System::String name, mscorlib::System::Reflection::Assembly requestingAssembly)
			: mscorlib::System::EventArgs(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.ResolveEventArgs"))
			{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType("mscorlib", "System.Reflection", "Assembly");
				__parameters__[0] = (MonoObject*)name;
				__parameters__[1] = (MonoObject*)requestingAssembly;
				__native_object__ = Global::New("mscorlib", "System", "ResolveEventArgs", 2, __parameter_types__, __parameters__);
			};
		
			ResolveEventArgs(mscorlib::NativeTypeInfo *nativeTypeInfo)
			: mscorlib::System::EventArgs(nativeTypeInfo)
			{
			};
		
			ResolveEventArgs(MonoObject *nativeObject)
			: mscorlib::System::EventArgs(nativeObject)
			{
			};
		
			~ResolveEventArgs()
			{
			};
		

			ResolveEventArgs & operator=(ResolveEventArgs &value) { __native_object__ = value.GetNativeObject(); return value; };
			operator MonoObject*() { return __native_object__; };
			MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


			virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			//Public Properties
			__declspec(property(get=get_Name)) mscorlib::System::String  Name;
			__declspec(property(get=get_RequestingAssembly)) mscorlib::System::Reflection::Assembly  RequestingAssembly;

			//Get Set Properties Methods
			//	Get:Name
			mscorlib::System::String  get_Name();

			//	Get:RequestingAssembly
			mscorlib::System::Reflection::Assembly  get_RequestingAssembly();

		
		protected:
		
		private:
		
		};

	}
}
#endif
