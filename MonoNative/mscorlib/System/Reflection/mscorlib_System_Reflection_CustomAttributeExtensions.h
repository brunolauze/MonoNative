#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_CUSTOMATTRIBUTEEXTENSIONS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_CUSTOMATTRIBUTEEXTENSIONS_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Assembly.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MemberInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Module.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ParameterInfo.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IEnumerable_1.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		class String;
		class Attribute;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class CustomAttributeExtensions
				: public mscorlib::System::Object
			{
			public:
				CustomAttributeExtensions(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				{
				};
			
				CustomAttributeExtensions(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				{
				};
			
				~CustomAttributeExtensions()
				{
				};
			

				CustomAttributeExtensions & operator=(CustomAttributeExtensions &value) { __native_object__ = value.GetNativeObject(); return value; };
				bool operator==(CustomAttributeExtensions &value) { return mscorlib::System::Object::Equals(value); };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				template<typename T>
				static T  GetCustomAttribute(mscorlib::System::Reflection::Assembly element)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(element).name());
					__parameters__[0] = (MonoObject*)element;
					MonoType *__generic_types__[1];
					__generic_types__[0] = Global::GetType(typeid(T).name());
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "CustomAttributeExtensions", 0, NULL, "GetCustomAttribute", NullMonoObject, 1, __generic_types__, 1, __parameter_types__, __parameters__, NULL);
					return T(__result__);
				};
				
				template<typename T>
				static T  GetCustomAttribute(mscorlib::System::Reflection::MemberInfo element)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(element).name());
					__parameters__[0] = (MonoObject*)element;
					MonoType *__generic_types__[1];
					__generic_types__[0] = Global::GetType(typeid(T).name());
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "CustomAttributeExtensions", 0, NULL, "GetCustomAttribute", NullMonoObject, 1, __generic_types__, 1, __parameter_types__, __parameters__, NULL);
					return T(__result__);
				};
				
				template<typename T>
				static T  GetCustomAttribute(mscorlib::System::Reflection::Module element)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(element).name());
					__parameters__[0] = (MonoObject*)element;
					MonoType *__generic_types__[1];
					__generic_types__[0] = Global::GetType(typeid(T).name());
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "CustomAttributeExtensions", 0, NULL, "GetCustomAttribute", NullMonoObject, 1, __generic_types__, 1, __parameter_types__, __parameters__, NULL);
					return T(__result__);
				};
				
				template<typename T>
				static T  GetCustomAttribute(mscorlib::System::Reflection::ParameterInfo element)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(element).name());
					__parameters__[0] = (MonoObject*)element;
					MonoType *__generic_types__[1];
					__generic_types__[0] = Global::GetType(typeid(T).name());
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "CustomAttributeExtensions", 0, NULL, "GetCustomAttribute", NullMonoObject, 1, __generic_types__, 1, __parameter_types__, __parameters__, NULL);
					return T(__result__);
				};
				
				template<typename T>
				static T  GetCustomAttribute(mscorlib::System::Reflection::MemberInfo element, mscorlib::System::Boolean inherit)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(element).name());
					__parameter_types__[1] = Global::GetType(typeid(inherit).name());
					__parameters__[0] = (MonoObject*)element;
					__parameters__[1] = reinterpret_cast<void*>(inherit);
					MonoType *__generic_types__[1];
					__generic_types__[0] = Global::GetType(typeid(T).name());
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "CustomAttributeExtensions", 0, NULL, "GetCustomAttribute", NullMonoObject, 1, __generic_types__, 2, __parameter_types__, __parameters__, NULL);
					return T(__result__);
				};
				
				template<typename T>
				static T  GetCustomAttribute(mscorlib::System::Reflection::ParameterInfo element, mscorlib::System::Boolean inherit)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(element).name());
					__parameter_types__[1] = Global::GetType(typeid(inherit).name());
					__parameters__[0] = (MonoObject*)element;
					__parameters__[1] = reinterpret_cast<void*>(inherit);
					MonoType *__generic_types__[1];
					__generic_types__[0] = Global::GetType(typeid(T).name());
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "CustomAttributeExtensions", 0, NULL, "GetCustomAttribute", NullMonoObject, 1, __generic_types__, 2, __parameter_types__, __parameters__, NULL);
					return T(__result__);
				};
				
				static mscorlib::System::Attribute  GetCustomAttribute(mscorlib::System::Reflection::Assembly element, mscorlib::System::Type attributeType);
				static mscorlib::System::Attribute  GetCustomAttribute(mscorlib::System::Reflection::MemberInfo element, mscorlib::System::Type attributeType);
				static mscorlib::System::Attribute  GetCustomAttribute(mscorlib::System::Reflection::MemberInfo element, mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit);
				static mscorlib::System::Attribute  GetCustomAttribute(mscorlib::System::Reflection::Module element, mscorlib::System::Type attributeType);
				static mscorlib::System::Attribute  GetCustomAttribute(mscorlib::System::Reflection::ParameterInfo element, mscorlib::System::Type attributeType);
				static mscorlib::System::Attribute  GetCustomAttribute(mscorlib::System::Reflection::ParameterInfo element, mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit);
				static mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Attribute>  GetCustomAttributes(mscorlib::System::Reflection::Assembly element);
				static mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Attribute>  GetCustomAttributes(mscorlib::System::Reflection::Assembly element, mscorlib::System::Type attributeType);
				static mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Attribute>  GetCustomAttributes(mscorlib::System::Reflection::Module element);
				static mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Attribute>  GetCustomAttributes(mscorlib::System::Reflection::Module element, mscorlib::System::Type attributeType);
				static mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Attribute>  GetCustomAttributes(mscorlib::System::Reflection::ParameterInfo element);
				static mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Attribute>  GetCustomAttributes(mscorlib::System::Reflection::ParameterInfo element, mscorlib::System::Boolean inherit);
				static mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Attribute>  GetCustomAttributes(mscorlib::System::Reflection::ParameterInfo element, mscorlib::System::Type attributeType);
				static mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Attribute>  GetCustomAttributes(mscorlib::System::Reflection::ParameterInfo element, mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit);
				static mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Attribute>  GetCustomAttributes(mscorlib::System::Reflection::MemberInfo element);
				static mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Attribute>  GetCustomAttributes(mscorlib::System::Reflection::MemberInfo element, mscorlib::System::Boolean inherit);
				static mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Attribute>  GetCustomAttributes(mscorlib::System::Reflection::MemberInfo element, mscorlib::System::Type attributeType);
				static mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Attribute>  GetCustomAttributes(mscorlib::System::Reflection::MemberInfo element, mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit);
				template<typename T>
				static mscorlib::System::Collections::Generic::IEnumerable<T>  GetCustomAttributes(mscorlib::System::Reflection::Assembly element)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(element).name());
					__parameters__[0] = (MonoObject*)element;
					MonoType *__generic_types__[1];
					__generic_types__[0] = Global::GetType(typeid(T).name());
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "CustomAttributeExtensions", 0, NULL, "GetCustomAttributes", NullMonoObject, 1, __generic_types__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<T>(__result__);
				};
				
				template<typename T>
				static mscorlib::System::Collections::Generic::IEnumerable<T>  GetCustomAttributes(mscorlib::System::Reflection::MemberInfo element)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(element).name());
					__parameters__[0] = (MonoObject*)element;
					MonoType *__generic_types__[1];
					__generic_types__[0] = Global::GetType(typeid(T).name());
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "CustomAttributeExtensions", 0, NULL, "GetCustomAttributes", NullMonoObject, 1, __generic_types__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<T>(__result__);
				};
				
				template<typename T>
				static mscorlib::System::Collections::Generic::IEnumerable<T>  GetCustomAttributes(mscorlib::System::Reflection::MemberInfo element, mscorlib::System::Boolean inherit)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(element).name());
					__parameter_types__[1] = Global::GetType(typeid(inherit).name());
					__parameters__[0] = (MonoObject*)element;
					__parameters__[1] = reinterpret_cast<void*>(inherit);
					MonoType *__generic_types__[1];
					__generic_types__[0] = Global::GetType(typeid(T).name());
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "CustomAttributeExtensions", 0, NULL, "GetCustomAttributes", NullMonoObject, 1, __generic_types__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<T>(__result__);
				};
				
				template<typename T>
				static mscorlib::System::Collections::Generic::IEnumerable<T>  GetCustomAttributes(mscorlib::System::Reflection::Module element)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(element).name());
					__parameters__[0] = (MonoObject*)element;
					MonoType *__generic_types__[1];
					__generic_types__[0] = Global::GetType(typeid(T).name());
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "CustomAttributeExtensions", 0, NULL, "GetCustomAttributes", NullMonoObject, 1, __generic_types__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<T>(__result__);
				};
				
				template<typename T>
				static mscorlib::System::Collections::Generic::IEnumerable<T>  GetCustomAttributes(mscorlib::System::Reflection::ParameterInfo element)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(element).name());
					__parameters__[0] = (MonoObject*)element;
					MonoType *__generic_types__[1];
					__generic_types__[0] = Global::GetType(typeid(T).name());
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "CustomAttributeExtensions", 0, NULL, "GetCustomAttributes", NullMonoObject, 1, __generic_types__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<T>(__result__);
				};
				
				template<typename T>
				static mscorlib::System::Collections::Generic::IEnumerable<T>  GetCustomAttributes(mscorlib::System::Reflection::ParameterInfo element, mscorlib::System::Boolean inherit)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(element).name());
					__parameter_types__[1] = Global::GetType(typeid(inherit).name());
					__parameters__[0] = (MonoObject*)element;
					__parameters__[1] = reinterpret_cast<void*>(inherit);
					MonoType *__generic_types__[1];
					__generic_types__[0] = Global::GetType(typeid(T).name());
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "CustomAttributeExtensions", 0, NULL, "GetCustomAttributes", NullMonoObject, 1, __generic_types__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<T>(__result__);
				};
				
				static mscorlib::System::Boolean  IsDefined(mscorlib::System::Reflection::Assembly element, mscorlib::System::Type attributeType);
				static mscorlib::System::Boolean  IsDefined(mscorlib::System::Reflection::MemberInfo element, mscorlib::System::Type attributeType);
				static mscorlib::System::Boolean  IsDefined(mscorlib::System::Reflection::Module element, mscorlib::System::Type attributeType);
				static mscorlib::System::Boolean  IsDefined(mscorlib::System::Reflection::ParameterInfo element, mscorlib::System::Type attributeType);
				static mscorlib::System::Boolean  IsDefined(mscorlib::System::Reflection::MemberInfo element, mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit);
				static mscorlib::System::Boolean  IsDefined(mscorlib::System::Reflection::ParameterInfo element, mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit);
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
