#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_VERSIONING_RESOURCECONSUMPTIONATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_VERSIONING_RESOURCECONSUMPTIONATTRIBUTE_H

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

				class ResourceConsumptionAttribute
					: public mscorlib::System::Attribute
					, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
				{
				public:
					ResourceConsumptionAttribute(mscorlib::System::Runtime::Versioning::ResourceScope::__ENUM__ resourceScope)
					: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Versioning.ResourceConsumptionAttribute"))
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Runtime.Versioning", "ResourceScope");
						mscorlib::System::Int32 __param_resourceScope__ = resourceScope;
						__parameters__[0] = &__param_resourceScope__;
						__native_object__ = Global::New("mscorlib", "System.Runtime.Versioning", "ResourceConsumptionAttribute", 1, __parameter_types__, __parameters__);
					};
				
					ResourceConsumptionAttribute(mscorlib::System::Runtime::Versioning::ResourceScope::__ENUM__ resourceScope, mscorlib::System::Runtime::Versioning::ResourceScope::__ENUM__ consumptionScope)
					: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Versioning.ResourceConsumptionAttribute"))
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Runtime.Versioning", "ResourceScope");
						__parameter_types__[1] = Global::GetType("mscorlib", "System.Runtime.Versioning", "ResourceScope");
						mscorlib::System::Int32 __param_resourceScope__ = resourceScope;
						__parameters__[0] = &__param_resourceScope__;
						mscorlib::System::Int32 __param_consumptionScope__ = consumptionScope;
						__parameters__[1] = &__param_consumptionScope__;
						__native_object__ = Global::New("mscorlib", "System.Runtime.Versioning", "ResourceConsumptionAttribute", 2, __parameter_types__, __parameters__);
					};
				
					ResourceConsumptionAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Attribute(nativeTypeInfo)
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
					};
				
					ResourceConsumptionAttribute(MonoObject *nativeObject)
					: mscorlib::System::Attribute(nativeObject)
					, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
					{
					};
				
					~ResourceConsumptionAttribute()
					{
					};
				

					ResourceConsumptionAttribute & operator=(ResourceConsumptionAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(ResourceConsumptionAttribute &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_ConsumptionScope)) mscorlib::System::Runtime::Versioning::ResourceScope::__ENUM__  ConsumptionScope;
					__declspec(property(get=get_ResourceScope)) mscorlib::System::Runtime::Versioning::ResourceScope::__ENUM__  ResourceScope;
					__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

					//Get Set Properties Methods
					//	Get:ConsumptionScope
					mscorlib::System::Runtime::Versioning::ResourceScope::__ENUM__  get_ConsumptionScope() const;

					//	Get:ResourceScope
					mscorlib::System::Runtime::Versioning::ResourceScope::__ENUM__  get_ResourceScope() const;

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
