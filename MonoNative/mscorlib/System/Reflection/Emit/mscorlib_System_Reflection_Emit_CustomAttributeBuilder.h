#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_EMIT_CUSTOMATTRIBUTEBUILDER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_EMIT_CUSTOMATTRIBUTEBUILDER_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ConstructorInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_FieldInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_PropertyInfo.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__CustomAttributeBuilder.h>

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
		namespace Reflection
		{
			namespace Emit
			{

				class CustomAttributeBuilder
					: public mscorlib::System::Object
					, public virtual mscorlib::System::Runtime::InteropServices::_CustomAttributeBuilder
				{
				public:
					CustomAttributeBuilder(mscorlib::System::Reflection::ConstructorInfo con, std::vector<mscorlib::System::Object*> constructorArgs)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Reflection.Emit.CustomAttributeBuilder"))
					, mscorlib::System::Runtime::InteropServices::_CustomAttributeBuilder(NULL)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Reflection", "ConstructorInfo");
						__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
						__parameters__[0] = (MonoObject*)con;
						__parameters__[1] = Global::FromArray<mscorlib::System::Object*>(constructorArgs, "mscorlib", "System", "Object");
						__native_object__ = Global::New("mscorlib", "System.Reflection.Emit", "CustomAttributeBuilder", 2, __parameter_types__, __parameters__);
					};
				
					CustomAttributeBuilder(mscorlib::System::Reflection::ConstructorInfo con, std::vector<mscorlib::System::Object*> constructorArgs, std::vector<mscorlib::System::Reflection::FieldInfo*> namedFields, std::vector<mscorlib::System::Object*> fieldValues)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Reflection.Emit.CustomAttributeBuilder"))
					, mscorlib::System::Runtime::InteropServices::_CustomAttributeBuilder(NULL)
					{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Reflection", "ConstructorInfo");
						__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
						__parameter_types__[2] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System.Reflection", "FieldInfo")), 1));
						__parameter_types__[3] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
						__parameters__[0] = (MonoObject*)con;
						__parameters__[1] = Global::FromArray<mscorlib::System::Object*>(constructorArgs, "mscorlib", "System", "Object");
						__parameters__[2] = Global::FromArray<mscorlib::System::Reflection::FieldInfo*>(namedFields, "mscorlib", "System.Reflection", "FieldInfo");
						__parameters__[3] = Global::FromArray<mscorlib::System::Object*>(fieldValues, "mscorlib", "System", "Object");
						__native_object__ = Global::New("mscorlib", "System.Reflection.Emit", "CustomAttributeBuilder", 4, __parameter_types__, __parameters__);
					};
				
					CustomAttributeBuilder(mscorlib::System::Reflection::ConstructorInfo con, std::vector<mscorlib::System::Object*> constructorArgs, std::vector<mscorlib::System::Reflection::PropertyInfo*> namedProperties, std::vector<mscorlib::System::Object*> propertyValues)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Reflection.Emit.CustomAttributeBuilder"))
					, mscorlib::System::Runtime::InteropServices::_CustomAttributeBuilder(NULL)
					{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Reflection", "ConstructorInfo");
						__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
						__parameter_types__[2] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System.Reflection", "PropertyInfo")), 1));
						__parameter_types__[3] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
						__parameters__[0] = (MonoObject*)con;
						__parameters__[1] = Global::FromArray<mscorlib::System::Object*>(constructorArgs, "mscorlib", "System", "Object");
						__parameters__[2] = Global::FromArray<mscorlib::System::Reflection::PropertyInfo*>(namedProperties, "mscorlib", "System.Reflection", "PropertyInfo");
						__parameters__[3] = Global::FromArray<mscorlib::System::Object*>(propertyValues, "mscorlib", "System", "Object");
						__native_object__ = Global::New("mscorlib", "System.Reflection.Emit", "CustomAttributeBuilder", 4, __parameter_types__, __parameters__);
					};
				
					CustomAttributeBuilder(mscorlib::System::Reflection::ConstructorInfo con, std::vector<mscorlib::System::Object*> constructorArgs, std::vector<mscorlib::System::Reflection::PropertyInfo*> namedProperties, std::vector<mscorlib::System::Object*> propertyValues, std::vector<mscorlib::System::Reflection::FieldInfo*> namedFields, std::vector<mscorlib::System::Object*> fieldValues)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Reflection.Emit.CustomAttributeBuilder"))
					, mscorlib::System::Runtime::InteropServices::_CustomAttributeBuilder(NULL)
					{
						MonoType *__parameter_types__[6];
						void *__parameters__[6];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Reflection", "ConstructorInfo");
						__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
						__parameter_types__[2] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System.Reflection", "PropertyInfo")), 1));
						__parameter_types__[3] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
						__parameter_types__[4] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System.Reflection", "FieldInfo")), 1));
						__parameter_types__[5] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
						__parameters__[0] = (MonoObject*)con;
						__parameters__[1] = Global::FromArray<mscorlib::System::Object*>(constructorArgs, "mscorlib", "System", "Object");
						__parameters__[2] = Global::FromArray<mscorlib::System::Reflection::PropertyInfo*>(namedProperties, "mscorlib", "System.Reflection", "PropertyInfo");
						__parameters__[3] = Global::FromArray<mscorlib::System::Object*>(propertyValues, "mscorlib", "System", "Object");
						__parameters__[4] = Global::FromArray<mscorlib::System::Reflection::FieldInfo*>(namedFields, "mscorlib", "System.Reflection", "FieldInfo");
						__parameters__[5] = Global::FromArray<mscorlib::System::Object*>(fieldValues, "mscorlib", "System", "Object");
						__native_object__ = Global::New("mscorlib", "System.Reflection.Emit", "CustomAttributeBuilder", 6, __parameter_types__, __parameters__);
					};
				
					CustomAttributeBuilder(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					, mscorlib::System::Runtime::InteropServices::_CustomAttributeBuilder(NULL)
					{
					};
				
					CustomAttributeBuilder(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					, mscorlib::System::Runtime::InteropServices::_CustomAttributeBuilder(nativeObject)
					{
					};
				
					~CustomAttributeBuilder()
					{
					};
				

					CustomAttributeBuilder & operator=(CustomAttributeBuilder &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(CustomAttributeBuilder &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
