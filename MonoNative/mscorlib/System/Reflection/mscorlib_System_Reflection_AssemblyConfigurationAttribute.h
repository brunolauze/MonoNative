#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_ASSEMBLYCONFIGURATIONATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_ASSEMBLYCONFIGURATIONATTRIBUTE_H

#include <mscorlib/System/mscorlib_System_Attribute.h>
#include <mscorlib/System/mscorlib_System_String.h>
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
		namespace Reflection
		{

			class AssemblyConfigurationAttribute
				: public mscorlib::System::Attribute
				, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
			{
			public:
				AssemblyConfigurationAttribute(mscorlib::System::String configuration)
				: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Reflection.AssemblyConfigurationAttribute"))
				, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = (MonoObject*)configuration;
					__native_object__ = Global::New("mscorlib", "System.Reflection", "AssemblyConfigurationAttribute", 1, __parameter_types__, __parameters__);
				};
			
				AssemblyConfigurationAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Attribute(nativeTypeInfo)
				, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
				{
				};
			
				AssemblyConfigurationAttribute(MonoObject *nativeObject)
				: mscorlib::System::Attribute(nativeObject)
				, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
				{
				};
			
				~AssemblyConfigurationAttribute()
				{
				};
			

				AssemblyConfigurationAttribute & operator=(AssemblyConfigurationAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_Configuration)) mscorlib::System::String  Configuration;
				__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

				//Get Set Properties Methods
				//	Get:Configuration
				mscorlib::System::String  get_Configuration();

				//	Get:TypeId
				mscorlib::System::Object  get_TypeId();

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
