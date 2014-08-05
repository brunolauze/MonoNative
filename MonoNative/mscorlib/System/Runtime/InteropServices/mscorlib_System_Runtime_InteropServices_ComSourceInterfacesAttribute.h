#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMSOURCEINTERFACESATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMSOURCEINTERFACESATTRIBUTE_H

#include <mscorlib/System/mscorlib_System_Attribute.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__Attribute.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				class ComSourceInterfacesAttribute
					: public mscorlib::System::Attribute
					, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
				{
				public:
					ComSourceInterfacesAttribute(mscorlib::System::String sourceInterfaces)
					: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.InteropServices.ComSourceInterfacesAttribute"))
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = (MonoObject*)sourceInterfaces;
						__native_object__ = Global::New("mscorlib", "System.Runtime.InteropServices", "ComSourceInterfacesAttribute", 1, __parameter_types__, __parameters__);
					};
				
					ComSourceInterfacesAttribute(mscorlib::System::Type sourceInterface)
					: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.InteropServices.ComSourceInterfacesAttribute"))
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Type");
						__parameters__[0] = (MonoObject*)sourceInterface;
						__native_object__ = Global::New("mscorlib", "System.Runtime.InteropServices", "ComSourceInterfacesAttribute", 1, __parameter_types__, __parameters__);
					};
				
					ComSourceInterfacesAttribute(mscorlib::System::Type sourceInterface1, mscorlib::System::Type sourceInterface2)
					: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.InteropServices.ComSourceInterfacesAttribute"))
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Type");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "Type");
						__parameters__[0] = (MonoObject*)sourceInterface1;
						__parameters__[1] = (MonoObject*)sourceInterface2;
						__native_object__ = Global::New("mscorlib", "System.Runtime.InteropServices", "ComSourceInterfacesAttribute", 2, __parameter_types__, __parameters__);
					};
				
					ComSourceInterfacesAttribute(mscorlib::System::Type sourceInterface1, mscorlib::System::Type sourceInterface2, mscorlib::System::Type sourceInterface3)
					: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.InteropServices.ComSourceInterfacesAttribute"))
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Type");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "Type");
						__parameter_types__[2] = Global::GetType("mscorlib", "System", "Type");
						__parameters__[0] = (MonoObject*)sourceInterface1;
						__parameters__[1] = (MonoObject*)sourceInterface2;
						__parameters__[2] = (MonoObject*)sourceInterface3;
						__native_object__ = Global::New("mscorlib", "System.Runtime.InteropServices", "ComSourceInterfacesAttribute", 3, __parameter_types__, __parameters__);
					};
				
					ComSourceInterfacesAttribute(mscorlib::System::Type sourceInterface1, mscorlib::System::Type sourceInterface2, mscorlib::System::Type sourceInterface3, mscorlib::System::Type sourceInterface4)
					: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.InteropServices.ComSourceInterfacesAttribute"))
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Type");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "Type");
						__parameter_types__[2] = Global::GetType("mscorlib", "System", "Type");
						__parameter_types__[3] = Global::GetType("mscorlib", "System", "Type");
						__parameters__[0] = (MonoObject*)sourceInterface1;
						__parameters__[1] = (MonoObject*)sourceInterface2;
						__parameters__[2] = (MonoObject*)sourceInterface3;
						__parameters__[3] = (MonoObject*)sourceInterface4;
						__native_object__ = Global::New("mscorlib", "System.Runtime.InteropServices", "ComSourceInterfacesAttribute", 4, __parameter_types__, __parameters__);
					};
				
					ComSourceInterfacesAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Attribute(nativeTypeInfo)
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
					};
				
					ComSourceInterfacesAttribute(MonoObject *nativeObject)
					: mscorlib::System::Attribute(nativeObject)
					, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
					{
					};
				
					~ComSourceInterfacesAttribute()
					{
					};
				

					ComSourceInterfacesAttribute & operator=(ComSourceInterfacesAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Value)) mscorlib::System::String  Value;
					__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

					//Get Set Properties Methods
					//	Get:Value
					mscorlib::System::String  get_Value() const;

					//	Get:TypeId
					mscorlib::System::Object  get_TypeId() const;

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
