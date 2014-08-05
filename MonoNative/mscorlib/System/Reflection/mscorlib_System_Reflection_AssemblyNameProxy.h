#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_ASSEMBLYNAMEPROXY_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_ASSEMBLYNAMEPROXY_H

#include <mscorlib/System/mscorlib_System_MarshalByRefObject.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class AssemblyName;
			

		}
	}
}
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
		namespace Runtime
		{
			namespace Remoting
			{

				class ObjRef;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class AssemblyNameProxy
				: public mscorlib::System::MarshalByRefObject
			{
			public:
				AssemblyNameProxy()
				: mscorlib::System::MarshalByRefObject(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Reflection.AssemblyNameProxy"))
				{
					__native_object__ = Global::New("mscorlib", "System.Reflection", "AssemblyNameProxy");
				};
			
				AssemblyNameProxy(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::MarshalByRefObject(nativeTypeInfo)
				{
				};
			
				AssemblyNameProxy(MonoObject *nativeObject)
				: mscorlib::System::MarshalByRefObject(nativeObject)
				{
				};
			
				~AssemblyNameProxy()
				{
				};
			

				AssemblyNameProxy & operator=(AssemblyNameProxy &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				mscorlib::System::Reflection::AssemblyName  GetAssemblyName(mscorlib::System::String assemblyFile);
				mscorlib::System::Reflection::AssemblyName  GetAssemblyName(const char *assemblyFile);
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
