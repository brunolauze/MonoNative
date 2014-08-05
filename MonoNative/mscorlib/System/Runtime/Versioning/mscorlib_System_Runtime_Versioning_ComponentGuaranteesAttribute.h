#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_VERSIONING_COMPONENTGUARANTEESATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_VERSIONING_COMPONENTGUARANTEESATTRIBUTE_H

#include <mscorlib/System/mscorlib_System_Attribute.h>
#include <mscorlib/System/Runtime/Versioning/mscorlib_System_Runtime_Versioning_ComponentGuaranteesOptions.h>
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

				class ComponentGuaranteesAttribute
					: public mscorlib::System::Attribute
					, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
				{
				public:
					ComponentGuaranteesAttribute(mscorlib::System::Runtime::Versioning::ComponentGuaranteesOptions::__ENUM__ guarantees)
					: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Versioning.ComponentGuaranteesAttribute"))
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Runtime.Versioning", "ComponentGuaranteesOptions");
						__parameters__[0] = reinterpret_cast<void*>(guarantees);
						__native_object__ = Global::New("mscorlib", "System.Runtime.Versioning", "ComponentGuaranteesAttribute", 1, __parameter_types__, __parameters__);
					};
				
					ComponentGuaranteesAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Attribute(nativeTypeInfo)
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
					};
				
					ComponentGuaranteesAttribute(MonoObject *nativeObject)
					: mscorlib::System::Attribute(nativeObject)
					, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
					{
					};
				
					~ComponentGuaranteesAttribute()
					{
					};
				

					ComponentGuaranteesAttribute & operator=(ComponentGuaranteesAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Guarantees)) mscorlib::System::Runtime::Versioning::ComponentGuaranteesOptions::__ENUM__  Guarantees;
					__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

					//Get Set Properties Methods
					//	Get:Guarantees
					mscorlib::System::Runtime::Versioning::ComponentGuaranteesOptions::__ENUM__  get_Guarantees() const;

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
