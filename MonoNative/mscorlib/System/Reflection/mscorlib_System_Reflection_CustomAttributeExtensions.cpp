#include <mscorlib/System/Reflection/mscorlib_System_Reflection_CustomAttributeExtensions.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Attribute.h>



namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			//Public Methods
			mscorlib::System::Attribute CustomAttributeExtensions::GetCustomAttribute(mscorlib::System::Reflection::Assembly element, mscorlib::System::Type attributeType)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(element).name());
					__parameter_types__[1] = Global::GetType(typeid(attributeType).name());
					__parameters__[0] = (MonoObject*)element;
					__parameters__[1] = (MonoObject*)attributeType;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "CustomAttributeExtensions", 0, NULL, "GetCustomAttribute", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Attribute(__result__);
			}

			mscorlib::System::Attribute CustomAttributeExtensions::GetCustomAttribute(mscorlib::System::Reflection::MemberInfo element, mscorlib::System::Type attributeType)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(element).name());
					__parameter_types__[1] = Global::GetType(typeid(attributeType).name());
					__parameters__[0] = (MonoObject*)element;
					__parameters__[1] = (MonoObject*)attributeType;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "CustomAttributeExtensions", 0, NULL, "GetCustomAttribute", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Attribute(__result__);
			}

			mscorlib::System::Attribute CustomAttributeExtensions::GetCustomAttribute(mscorlib::System::Reflection::MemberInfo element, mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(element).name());
					__parameter_types__[1] = Global::GetType(typeid(attributeType).name());
					__parameter_types__[2] = Global::GetType(typeid(inherit).name());
					__parameters__[0] = (MonoObject*)element;
					__parameters__[1] = (MonoObject*)attributeType;
					__parameters__[2] = reinterpret_cast<void*>(inherit);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "CustomAttributeExtensions", 0, NULL, "GetCustomAttribute", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Attribute(__result__);
			}

			mscorlib::System::Attribute CustomAttributeExtensions::GetCustomAttribute(mscorlib::System::Reflection::Module element, mscorlib::System::Type attributeType)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(element).name());
					__parameter_types__[1] = Global::GetType(typeid(attributeType).name());
					__parameters__[0] = (MonoObject*)element;
					__parameters__[1] = (MonoObject*)attributeType;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "CustomAttributeExtensions", 0, NULL, "GetCustomAttribute", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Attribute(__result__);
			}

			mscorlib::System::Attribute CustomAttributeExtensions::GetCustomAttribute(mscorlib::System::Reflection::ParameterInfo element, mscorlib::System::Type attributeType)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(element).name());
					__parameter_types__[1] = Global::GetType(typeid(attributeType).name());
					__parameters__[0] = (MonoObject*)element;
					__parameters__[1] = (MonoObject*)attributeType;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "CustomAttributeExtensions", 0, NULL, "GetCustomAttribute", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Attribute(__result__);
			}

			mscorlib::System::Attribute CustomAttributeExtensions::GetCustomAttribute(mscorlib::System::Reflection::ParameterInfo element, mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(element).name());
					__parameter_types__[1] = Global::GetType(typeid(attributeType).name());
					__parameter_types__[2] = Global::GetType(typeid(inherit).name());
					__parameters__[0] = (MonoObject*)element;
					__parameters__[1] = (MonoObject*)attributeType;
					__parameters__[2] = reinterpret_cast<void*>(inherit);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "CustomAttributeExtensions", 0, NULL, "GetCustomAttribute", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Attribute(__result__);
			}

			mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Attribute> CustomAttributeExtensions::GetCustomAttributes(mscorlib::System::Reflection::Assembly element)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(element).name());
					__parameters__[0] = (MonoObject*)element;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "CustomAttributeExtensions", 0, NULL, "GetCustomAttributes", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Attribute>(__result__);
			}

			mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Attribute> CustomAttributeExtensions::GetCustomAttributes(mscorlib::System::Reflection::Assembly element, mscorlib::System::Type attributeType)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(element).name());
					__parameter_types__[1] = Global::GetType(typeid(attributeType).name());
					__parameters__[0] = (MonoObject*)element;
					__parameters__[1] = (MonoObject*)attributeType;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "CustomAttributeExtensions", 0, NULL, "GetCustomAttributes", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Attribute>(__result__);
			}

			mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Attribute> CustomAttributeExtensions::GetCustomAttributes(mscorlib::System::Reflection::Module element)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(element).name());
					__parameters__[0] = (MonoObject*)element;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "CustomAttributeExtensions", 0, NULL, "GetCustomAttributes", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Attribute>(__result__);
			}

			mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Attribute> CustomAttributeExtensions::GetCustomAttributes(mscorlib::System::Reflection::Module element, mscorlib::System::Type attributeType)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(element).name());
					__parameter_types__[1] = Global::GetType(typeid(attributeType).name());
					__parameters__[0] = (MonoObject*)element;
					__parameters__[1] = (MonoObject*)attributeType;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "CustomAttributeExtensions", 0, NULL, "GetCustomAttributes", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Attribute>(__result__);
			}

			mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Attribute> CustomAttributeExtensions::GetCustomAttributes(mscorlib::System::Reflection::ParameterInfo element)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(element).name());
					__parameters__[0] = (MonoObject*)element;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "CustomAttributeExtensions", 0, NULL, "GetCustomAttributes", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Attribute>(__result__);
			}

			mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Attribute> CustomAttributeExtensions::GetCustomAttributes(mscorlib::System::Reflection::ParameterInfo element, mscorlib::System::Boolean inherit)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(element).name());
					__parameter_types__[1] = Global::GetType(typeid(inherit).name());
					__parameters__[0] = (MonoObject*)element;
					__parameters__[1] = reinterpret_cast<void*>(inherit);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "CustomAttributeExtensions", 0, NULL, "GetCustomAttributes", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Attribute>(__result__);
			}

			mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Attribute> CustomAttributeExtensions::GetCustomAttributes(mscorlib::System::Reflection::ParameterInfo element, mscorlib::System::Type attributeType)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(element).name());
					__parameter_types__[1] = Global::GetType(typeid(attributeType).name());
					__parameters__[0] = (MonoObject*)element;
					__parameters__[1] = (MonoObject*)attributeType;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "CustomAttributeExtensions", 0, NULL, "GetCustomAttributes", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Attribute>(__result__);
			}

			mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Attribute> CustomAttributeExtensions::GetCustomAttributes(mscorlib::System::Reflection::ParameterInfo element, mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(element).name());
					__parameter_types__[1] = Global::GetType(typeid(attributeType).name());
					__parameter_types__[2] = Global::GetType(typeid(inherit).name());
					__parameters__[0] = (MonoObject*)element;
					__parameters__[1] = (MonoObject*)attributeType;
					__parameters__[2] = reinterpret_cast<void*>(inherit);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "CustomAttributeExtensions", 0, NULL, "GetCustomAttributes", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Attribute>(__result__);
			}

			mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Attribute> CustomAttributeExtensions::GetCustomAttributes(mscorlib::System::Reflection::MemberInfo element)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(element).name());
					__parameters__[0] = (MonoObject*)element;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "CustomAttributeExtensions", 0, NULL, "GetCustomAttributes", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Attribute>(__result__);
			}

			mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Attribute> CustomAttributeExtensions::GetCustomAttributes(mscorlib::System::Reflection::MemberInfo element, mscorlib::System::Boolean inherit)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(element).name());
					__parameter_types__[1] = Global::GetType(typeid(inherit).name());
					__parameters__[0] = (MonoObject*)element;
					__parameters__[1] = reinterpret_cast<void*>(inherit);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "CustomAttributeExtensions", 0, NULL, "GetCustomAttributes", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Attribute>(__result__);
			}

			mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Attribute> CustomAttributeExtensions::GetCustomAttributes(mscorlib::System::Reflection::MemberInfo element, mscorlib::System::Type attributeType)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(element).name());
					__parameter_types__[1] = Global::GetType(typeid(attributeType).name());
					__parameters__[0] = (MonoObject*)element;
					__parameters__[1] = (MonoObject*)attributeType;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "CustomAttributeExtensions", 0, NULL, "GetCustomAttributes", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Attribute>(__result__);
			}

			mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Attribute> CustomAttributeExtensions::GetCustomAttributes(mscorlib::System::Reflection::MemberInfo element, mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(element).name());
					__parameter_types__[1] = Global::GetType(typeid(attributeType).name());
					__parameter_types__[2] = Global::GetType(typeid(inherit).name());
					__parameters__[0] = (MonoObject*)element;
					__parameters__[1] = (MonoObject*)attributeType;
					__parameters__[2] = reinterpret_cast<void*>(inherit);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "CustomAttributeExtensions", 0, NULL, "GetCustomAttributes", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Attribute>(__result__);
			}

			mscorlib::System::Boolean CustomAttributeExtensions::IsDefined(mscorlib::System::Reflection::Assembly element, mscorlib::System::Type attributeType)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(element).name());
					__parameter_types__[1] = Global::GetType(typeid(attributeType).name());
					__parameters__[0] = (MonoObject*)element;
					__parameters__[1] = (MonoObject*)attributeType;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "CustomAttributeExtensions", 0, NULL, "IsDefined", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean CustomAttributeExtensions::IsDefined(mscorlib::System::Reflection::MemberInfo element, mscorlib::System::Type attributeType)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(element).name());
					__parameter_types__[1] = Global::GetType(typeid(attributeType).name());
					__parameters__[0] = (MonoObject*)element;
					__parameters__[1] = (MonoObject*)attributeType;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "CustomAttributeExtensions", 0, NULL, "IsDefined", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean CustomAttributeExtensions::IsDefined(mscorlib::System::Reflection::Module element, mscorlib::System::Type attributeType)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(element).name());
					__parameter_types__[1] = Global::GetType(typeid(attributeType).name());
					__parameters__[0] = (MonoObject*)element;
					__parameters__[1] = (MonoObject*)attributeType;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "CustomAttributeExtensions", 0, NULL, "IsDefined", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean CustomAttributeExtensions::IsDefined(mscorlib::System::Reflection::ParameterInfo element, mscorlib::System::Type attributeType)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(element).name());
					__parameter_types__[1] = Global::GetType(typeid(attributeType).name());
					__parameters__[0] = (MonoObject*)element;
					__parameters__[1] = (MonoObject*)attributeType;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "CustomAttributeExtensions", 0, NULL, "IsDefined", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean CustomAttributeExtensions::IsDefined(mscorlib::System::Reflection::MemberInfo element, mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(element).name());
					__parameter_types__[1] = Global::GetType(typeid(attributeType).name());
					__parameter_types__[2] = Global::GetType(typeid(inherit).name());
					__parameters__[0] = (MonoObject*)element;
					__parameters__[1] = (MonoObject*)attributeType;
					__parameters__[2] = reinterpret_cast<void*>(inherit);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "CustomAttributeExtensions", 0, NULL, "IsDefined", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean CustomAttributeExtensions::IsDefined(mscorlib::System::Reflection::ParameterInfo element, mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(element).name());
					__parameter_types__[1] = Global::GetType(typeid(attributeType).name());
					__parameter_types__[2] = Global::GetType(typeid(inherit).name());
					__parameters__[0] = (MonoObject*)element;
					__parameters__[1] = (MonoObject*)attributeType;
					__parameters__[2] = reinterpret_cast<void*>(inherit);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "CustomAttributeExtensions", 0, NULL, "IsDefined", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


		}
	}
}
