#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_MethodToken.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{
			namespace Emit
			{

				//Public Methods
				mscorlib::System::Boolean MethodToken::Equals(mscorlib::System::Object obj)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(obj).name());
						__parameters__[0] = (MonoObject*)obj;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "MethodToken", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Boolean MethodToken::Equals(mscorlib::System::Reflection::Emit::MethodToken obj)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(obj).name());
						__parameters__[0] = (MonoObject*)obj;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "MethodToken", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Int32 MethodToken::GetHashCode()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "MethodToken", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				//Get Set Properties Methods
				//	Get:Token
				mscorlib::System::Int32  MethodToken::get_Token() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "MethodToken", 0, NULL, "get_Token", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


					//	Get/Set:Empty
				mscorlib::System::Reflection::Emit::MethodToken MethodToken::get_Empty()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "MethodToken", 0, NULL, "Empty");
				}

				void MethodToken::set_Empty(mscorlib::System::Reflection::Emit::MethodToken  value)
				{
					throw;
				}


			}
		}
	}
}
