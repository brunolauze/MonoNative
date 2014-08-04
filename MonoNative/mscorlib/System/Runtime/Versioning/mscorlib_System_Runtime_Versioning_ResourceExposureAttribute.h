#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_VERSIONING_RESOURCEEXPOSUREATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_VERSIONING_RESOURCEEXPOSUREATTRIBUTE_H

#include <mscorlib/System/mscorlib_System_Attribute.h>
#include <mscorlib/System/Runtime/Versioning/mscorlib_System_Runtime_Versioning_ResourceScope.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__Attribute.h>
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
		namespace Runtime
		{
			namespace Versioning
			{

				class ResourceExposureAttribute
					: public mscorlib::System::Attribute
					, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
				{
				public:
					ResourceExposureAttribute(mscorlib::System::Runtime::Versioning::ResourceScope::__ENUM__ exposureLevel)
					: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Versioning.ResourceExposureAttribute"))
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Runtime.Versioning", "ResourceScope");
						__parameters__[0] = reinterpret_cast<void*>(exposureLevel);
						__native_object__ = Global::New("mscorlib", "System.Runtime.Versioning", "ResourceExposureAttribute", 1, __parameter_types__, __parameters__);
					};
				
					ResourceExposureAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Attribute(nativeTypeInfo)
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
					};
				
					ResourceExposureAttribute(MonoObject *nativeObject)
					: mscorlib::System::Attribute(nativeObject)
					, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
					{
					};
				
					~ResourceExposureAttribute()
					{
					};
				

					ResourceExposureAttribute & operator=(ResourceExposureAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_ResourceExposureLevel)) mscorlib::System::Runtime::Versioning::ResourceScope::__ENUM__  ResourceExposureLevel;
					__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

					//Get Set Properties Methods
					//	Get:ResourceExposureLevel
					mscorlib::System::Runtime::Versioning::ResourceScope::__ENUM__  get_ResourceExposureLevel();

					//	Get:TypeId
					mscorlib::System::Object  get_TypeId();

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
