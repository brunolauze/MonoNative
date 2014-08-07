#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_WINDOWSRUNTIME_INTERFACEIMPLEMENTEDINVERSIONATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_WINDOWSRUNTIME_INTERFACEIMPLEMENTEDINVERSIONATTRIBUTE_H

#include <mscorlib/System/mscorlib_System_Attribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
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

					class InterfaceImplementedInVersionAttribute
						: public mscorlib::System::Attribute
						, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
					{
					public:
						InterfaceImplementedInVersionAttribute(mscorlib::System::Type interfaceType, mscorlib::System::Byte majorVersion, mscorlib::System::Byte minorVersion, mscorlib::System::Byte buildVersion, mscorlib::System::Byte revisionVersion)
						: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.InteropServices.WindowsRuntime.InterfaceImplementedInVersionAttribute"))
						, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
						{
							MonoType *__parameter_types__[5];
							void *__parameters__[5];
							__parameter_types__[0] = Global::GetType("mscorlib", "System", "Type");
							__parameter_types__[1] = Global::GetType("mscorlib", "System", "Byte");
							__parameter_types__[2] = Global::GetType("mscorlib", "System", "Byte");
							__parameter_types__[3] = Global::GetType("mscorlib", "System", "Byte");
							__parameter_types__[4] = Global::GetType("mscorlib", "System", "Byte");
							__parameters__[0] = (MonoObject*)interfaceType;
							__parameters__[1] = (MonoObject*)majorVersion;
							__parameters__[2] = (MonoObject*)minorVersion;
							__parameters__[3] = (MonoObject*)buildVersion;
							__parameters__[4] = (MonoObject*)revisionVersion;
							__native_object__ = Global::New("mscorlib", "System.Runtime.InteropServices.WindowsRuntime", "InterfaceImplementedInVersionAttribute", 5, __parameter_types__, __parameters__);
						};
					
						InterfaceImplementedInVersionAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::Attribute(nativeTypeInfo)
						, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
						{
						};
					
						InterfaceImplementedInVersionAttribute(MonoObject *nativeObject)
						: mscorlib::System::Attribute(nativeObject)
						, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
						{
						};
					
						~InterfaceImplementedInVersionAttribute()
						{
						};
					

						InterfaceImplementedInVersionAttribute & operator=(InterfaceImplementedInVersionAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
						bool operator==(InterfaceImplementedInVersionAttribute &value) { return mscorlib::System::Object::Equals(value); };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


						//Public Properties
						__declspec(property(get=get_BuildVersion, put=set_BuildVersion)) mscorlib::System::Byte  BuildVersion;
						__declspec(property(get=get_InterfaceType, put=set_InterfaceType)) mscorlib::System::Type  InterfaceType;
						__declspec(property(get=get_MajorVersion, put=set_MajorVersion)) mscorlib::System::Byte  MajorVersion;
						__declspec(property(get=get_MinorVersion, put=set_MinorVersion)) mscorlib::System::Byte  MinorVersion;
						__declspec(property(get=get_RevisionVersion, put=set_RevisionVersion)) mscorlib::System::Byte  RevisionVersion;
						__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

						//Get Set Properties Methods
						//	Get/Set:BuildVersion
						mscorlib::System::Byte  get_BuildVersion() const;
						void set_BuildVersion(mscorlib::System::Byte  value);

						//	Get/Set:InterfaceType
						mscorlib::System::Type  get_InterfaceType() const;
						void set_InterfaceType(mscorlib::System::Type  value);

						//	Get/Set:MajorVersion
						mscorlib::System::Byte  get_MajorVersion() const;
						void set_MajorVersion(mscorlib::System::Byte  value);

						//	Get/Set:MinorVersion
						mscorlib::System::Byte  get_MinorVersion() const;
						void set_MinorVersion(mscorlib::System::Byte  value);

						//	Get/Set:RevisionVersion
						mscorlib::System::Byte  get_RevisionVersion() const;
						void set_RevisionVersion(mscorlib::System::Byte  value);

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
