#include <mscorlib/System/Reflection/mscorlib_System_Reflection_CustomAttributeNamedArgument.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			//Public Methods
			mscorlib::System::String CustomAttributeNamedArgument::ToString()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "CustomAttributeNamedArgument", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::Boolean CustomAttributeNamedArgument::Equals(mscorlib::System::Object obj)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(obj).name());
					__parameters__[0] = (MonoObject*)obj;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "CustomAttributeNamedArgument", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 CustomAttributeNamedArgument::GetHashCode()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "CustomAttributeNamedArgument", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			//Get Set Properties Methods
			//	Get:MemberInfo
			mscorlib::System::Reflection::MemberInfo  CustomAttributeNamedArgument::get_MemberInfo() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "CustomAttributeNamedArgument", 0, NULL, "get_MemberInfo", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Reflection::MemberInfo(__result__);
			}


			//	Get:TypedValue
			mscorlib::System::Reflection::CustomAttributeTypedArgument  CustomAttributeNamedArgument::get_TypedValue() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "CustomAttributeNamedArgument", 0, NULL, "get_TypedValue", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Reflection::CustomAttributeTypedArgument(__result__);
			}


			//	Get:IsField
			mscorlib::System::Boolean  CustomAttributeNamedArgument::get_IsField() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "CustomAttributeNamedArgument", 0, NULL, "get_IsField", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:MemberName
			mscorlib::System::String  CustomAttributeNamedArgument::get_MemberName() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "CustomAttributeNamedArgument", 0, NULL, "get_MemberName", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}



		}
	}
}
