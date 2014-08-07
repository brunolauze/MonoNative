#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_HOSTING_APPLICATIONACTIVATOR_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_HOSTING_APPLICATIONACTIVATOR_H

#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Remoting
			{

				class ObjectHandle;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{

		class ActivationContext;
		class String;
		class Type;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Hosting
			{

				class ApplicationActivator
					: public mscorlib::System::Object
				{
				public:
					ApplicationActivator()
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Hosting.ApplicationActivator"))
					{
						__native_object__ = Global::New("mscorlib", "System.Runtime.Hosting", "ApplicationActivator");
					};
				
					ApplicationActivator(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					ApplicationActivator(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~ApplicationActivator()
					{
					};
				

					ApplicationActivator & operator=(ApplicationActivator &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(ApplicationActivator &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Runtime::Remoting::ObjectHandle  CreateInstance(mscorlib::System::ActivationContext activationContext);
					virtual mscorlib::System::Runtime::Remoting::ObjectHandle  CreateInstance(mscorlib::System::ActivationContext activationContext, std::vector<mscorlib::System::String*> activationCustomData);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
