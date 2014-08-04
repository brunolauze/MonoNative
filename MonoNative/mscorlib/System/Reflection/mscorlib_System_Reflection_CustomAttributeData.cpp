#include <mscorlib/System/Reflection/mscorlib_System_Reflection_CustomAttributeData.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ConstructorInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_CustomAttributeTypedArgument.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_CustomAttributeNamedArgument.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Assembly.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MemberInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Module.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ParameterInfo.h>



namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			//Public Methods
			mscorlib::System::Collections::Generic::IList<mscorlib::System::Reflection::CustomAttributeData> CustomAttributeData::GetCustomAttributes(mscorlib::System::Reflection::Assembly target)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(target).name());
					__parameters__[0] = (MonoObject*)target;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "CustomAttributeData", 0, NULL, "GetCustomAttributes", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Collections::Generic::IList<mscorlib::System::Reflection::CustomAttributeData>(__result__);
			}

			mscorlib::System::Collections::Generic::IList<mscorlib::System::Reflection::CustomAttributeData> CustomAttributeData::GetCustomAttributes(mscorlib::System::Reflection::MemberInfo target)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(target).name());
					__parameters__[0] = (MonoObject*)target;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "CustomAttributeData", 0, NULL, "GetCustomAttributes", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Collections::Generic::IList<mscorlib::System::Reflection::CustomAttributeData>(__result__);
			}

			mscorlib::System::Collections::Generic::IList<mscorlib::System::Reflection::CustomAttributeData> CustomAttributeData::GetCustomAttributes(mscorlib::System::Reflection::Module target)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(target).name());
					__parameters__[0] = (MonoObject*)target;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "CustomAttributeData", 0, NULL, "GetCustomAttributes", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Collections::Generic::IList<mscorlib::System::Reflection::CustomAttributeData>(__result__);
			}

			mscorlib::System::Collections::Generic::IList<mscorlib::System::Reflection::CustomAttributeData> CustomAttributeData::GetCustomAttributes(mscorlib::System::Reflection::ParameterInfo target)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(target).name());
					__parameters__[0] = (MonoObject*)target;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "CustomAttributeData", 0, NULL, "GetCustomAttributes", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Collections::Generic::IList<mscorlib::System::Reflection::CustomAttributeData>(__result__);
			}

			mscorlib::System::String CustomAttributeData::ToString()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "CustomAttributeData", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::Boolean CustomAttributeData::Equals(mscorlib::System::Object obj)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(obj).name());
					__parameters__[0] = (MonoObject*)obj;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "CustomAttributeData", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 CustomAttributeData::GetHashCode()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "CustomAttributeData", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			//Get Set Properties Methods
			//	Get:Constructor
			mscorlib::System::Reflection::ConstructorInfo  CustomAttributeData::get_Constructor()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "CustomAttributeData", 0, NULL, "get_Constructor", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Reflection::ConstructorInfo(__result__);
			}


			//	Get:ConstructorArguments
			mscorlib::System::Collections::Generic::IList<mscorlib::System::Reflection::CustomAttributeTypedArgument>  CustomAttributeData::get_ConstructorArguments()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "CustomAttributeData", 0, NULL, "get_ConstructorArguments", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Collections::Generic::IList<mscorlib::System::Reflection::CustomAttributeTypedArgument>(__result__);
			}


			//	Get:NamedArguments
			mscorlib::System::Collections::Generic::IList<mscorlib::System::Reflection::CustomAttributeNamedArgument>  CustomAttributeData::get_NamedArguments()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "CustomAttributeData", 0, NULL, "get_NamedArguments", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Collections::Generic::IList<mscorlib::System::Reflection::CustomAttributeNamedArgument>(__result__);
			}


			//	Get:AttributeType
			mscorlib::System::Type  CustomAttributeData::get_AttributeType()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "CustomAttributeData", 0, NULL, "get_AttributeType", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Type(__result__);
			}



		}
	}
}
