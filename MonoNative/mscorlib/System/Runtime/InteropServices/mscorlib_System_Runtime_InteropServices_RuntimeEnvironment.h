#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_RUNTIMEENVIRONMENT_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_RUNTIMEENVIRONMENT_H

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
		namespace Reflection
		{

			class Assembly;
			

		}
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

				class RuntimeEnvironment
					: public mscorlib::System::Object
				{
				public:
					RuntimeEnvironment()
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.InteropServices.RuntimeEnvironment"))
					{
						__native_object__ = Global::New("mscorlib", "System.Runtime.InteropServices", "RuntimeEnvironment");
					};
				
					RuntimeEnvironment(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					RuntimeEnvironment(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~RuntimeEnvironment()
					{
					};
				

					RuntimeEnvironment & operator=(RuntimeEnvironment &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					static mscorlib::System::Boolean  FromGlobalAccessCache(mscorlib::System::Reflection::Assembly a);
					static mscorlib::System::String  GetRuntimeDirectory();
					static mscorlib::System::String  GetSystemVersion();
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Static Properties
					static Property<mscorlib::System::String> SystemConfigurationFile;

					//Get Set Static Properties Methods
					//	Get:SystemConfigurationFile
					static mscorlib::System::String  get_SystemConfigurationFile();


				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
