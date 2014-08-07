#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_ASSEMBLYLOADEVENTARGS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_ASSEMBLYLOADEVENTARGS_H

#include <mscorlib/System/mscorlib_System_EventArgs.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Assembly.h>
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

		class AssemblyLoadEventArgs
			: public mscorlib::System::EventArgs
		{
		public:
			AssemblyLoadEventArgs(mscorlib::System::Reflection::Assembly loadedAssembly)
			: mscorlib::System::EventArgs(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.AssemblyLoadEventArgs"))
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System.Reflection", "Assembly");
				__parameters__[0] = (MonoObject*)loadedAssembly;
				__native_object__ = Global::New("mscorlib", "System", "AssemblyLoadEventArgs", 1, __parameter_types__, __parameters__);
			};
		
			AssemblyLoadEventArgs(mscorlib::NativeTypeInfo *nativeTypeInfo)
			: mscorlib::System::EventArgs(nativeTypeInfo)
			{
			};
		
			AssemblyLoadEventArgs(MonoObject *nativeObject)
			: mscorlib::System::EventArgs(nativeObject)
			{
			};
		
			~AssemblyLoadEventArgs()
			{
			};
		

			AssemblyLoadEventArgs & operator=(AssemblyLoadEventArgs &value) { __native_object__ = value.GetNativeObject(); return value; };
			bool operator==(AssemblyLoadEventArgs &value) { return mscorlib::System::Object::Equals(value); };
			operator MonoObject*() { return __native_object__; };
			MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


			virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			//Public Properties
			__declspec(property(get=get_LoadedAssembly)) mscorlib::System::Reflection::Assembly  LoadedAssembly;

			//Get Set Properties Methods
			//	Get:LoadedAssembly
			mscorlib::System::Reflection::Assembly  get_LoadedAssembly() const;

		
		protected:
		
		private:
		
		};

	}
}
#endif
