#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RESOURCES_NEUTRALRESOURCESLANGUAGEATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RESOURCES_NEUTRALRESOURCESLANGUAGEATTRIBUTE_H

#include <mscorlib/System/mscorlib_System_Attribute.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Resources/mscorlib_System_Resources_UltimateResourceFallbackLocation.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__Attribute.h>
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
		namespace Resources
		{

			class NeutralResourcesLanguageAttribute
				: public mscorlib::System::Attribute
				, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
			{
			public:
				NeutralResourcesLanguageAttribute(mscorlib::System::String cultureName)
				: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Resources.NeutralResourcesLanguageAttribute"))
				, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = (MonoObject*)cultureName;
					__native_object__ = Global::New("mscorlib", "System.Resources", "NeutralResourcesLanguageAttribute", 1, __parameter_types__, __parameters__);
				};
			
				NeutralResourcesLanguageAttribute(mscorlib::System::String cultureName, mscorlib::System::Resources::UltimateResourceFallbackLocation::__ENUM__ location)
				: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Resources.NeutralResourcesLanguageAttribute"))
				, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType("mscorlib", "System.Resources", "UltimateResourceFallbackLocation");
					__parameters__[0] = (MonoObject*)cultureName;
					mscorlib::System::Int32 __param_location__ = location;
					__parameters__[1] = &__param_location__;
					__native_object__ = Global::New("mscorlib", "System.Resources", "NeutralResourcesLanguageAttribute", 2, __parameter_types__, __parameters__);
				};
			
				NeutralResourcesLanguageAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Attribute(nativeTypeInfo)
				, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
				{
				};
			
				NeutralResourcesLanguageAttribute(MonoObject *nativeObject)
				: mscorlib::System::Attribute(nativeObject)
				, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
				{
				};
			
				~NeutralResourcesLanguageAttribute()
				{
				};
			

				NeutralResourcesLanguageAttribute & operator=(NeutralResourcesLanguageAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_CultureName)) mscorlib::System::String  CultureName;
				__declspec(property(get=get_Location)) mscorlib::System::Resources::UltimateResourceFallbackLocation::__ENUM__  Location;
				__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

				//Get Set Properties Methods
				//	Get:CultureName
				mscorlib::System::String  get_CultureName() const;

				//	Get:Location
				mscorlib::System::Resources::UltimateResourceFallbackLocation::__ENUM__  get_Location() const;

				//	Get:TypeId
				mscorlib::System::Object  get_TypeId() const;

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
