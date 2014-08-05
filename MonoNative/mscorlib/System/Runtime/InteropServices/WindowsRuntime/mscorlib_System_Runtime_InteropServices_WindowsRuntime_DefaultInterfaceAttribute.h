#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_WINDOWSRUNTIME_DEFAULTINTERFACEATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_WINDOWSRUNTIME_DEFAULTINTERFACEATTRIBUTE_H

#include <mscorlib/System/mscorlib_System_Attribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__Attribute.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class String;
		

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
				namespace WindowsRuntime
				{

					class DefaultInterfaceAttribute
						: public mscorlib::System::Attribute
						, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
					{
					public:
						DefaultInterfaceAttribute(mscorlib::System::Type defaultInterface)
						: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.InteropServices.WindowsRuntime.DefaultInterfaceAttribute"))
						, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
						{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType("mscorlib", "System", "Type");
							__parameters__[0] = (MonoObject*)defaultInterface;
							__native_object__ = Global::New("mscorlib", "System.Runtime.InteropServices.WindowsRuntime", "DefaultInterfaceAttribute", 1, __parameter_types__, __parameters__);
						};
					
						DefaultInterfaceAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::Attribute(nativeTypeInfo)
						, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
						{
						};
					
						DefaultInterfaceAttribute(MonoObject *nativeObject)
						: mscorlib::System::Attribute(nativeObject)
						, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
						{
						};
					
						~DefaultInterfaceAttribute()
						{
						};
					

						DefaultInterfaceAttribute & operator=(DefaultInterfaceAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


						//Public Properties
						__declspec(property(get=get_DefaultInterface, put=set_DefaultInterface)) mscorlib::System::Type  DefaultInterface;
						__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

						//Get Set Properties Methods
						//	Get/Set:DefaultInterface
						mscorlib::System::Type  get_DefaultInterface() const;
						void set_DefaultInterface(mscorlib::System::Type  value);

						//	Get:TypeId
						mscorlib::System::Object  get_TypeId() const;

					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
