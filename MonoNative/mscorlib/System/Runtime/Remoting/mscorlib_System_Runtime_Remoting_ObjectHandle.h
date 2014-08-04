#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_OBJECTHANDLE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_OBJECTHANDLE_H

#include <mscorlib/System/mscorlib_System_MarshalByRefObject.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_IObjectHandle.h>

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
			namespace Remoting
			{

				class ObjectHandle
					: public mscorlib::System::MarshalByRefObject
					, public virtual mscorlib::System::Runtime::Remoting::IObjectHandle
				{
				public:
					ObjectHandle(mscorlib::System::Object o)
					: mscorlib::System::MarshalByRefObject(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Remoting.ObjectHandle"))
					, mscorlib::System::Runtime::Remoting::IObjectHandle(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Object");
						__parameters__[0] = (MonoObject*)o;
						__native_object__ = Global::New("mscorlib", "System.Runtime.Remoting", "ObjectHandle", 1, __parameter_types__, __parameters__);
					};
				
					ObjectHandle(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::MarshalByRefObject(nativeTypeInfo)
					, mscorlib::System::Runtime::Remoting::IObjectHandle(NULL)
					{
					};
				
					ObjectHandle(MonoObject *nativeObject)
					: mscorlib::System::MarshalByRefObject(nativeObject)
					, mscorlib::System::Runtime::Remoting::IObjectHandle(nativeObject)
					{
					};
				
					~ObjectHandle()
					{
					};
				

					ObjectHandle & operator=(ObjectHandle &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Object  InitializeLifetimeService() override;
					virtual mscorlib::System::Object  Unwrap();
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
