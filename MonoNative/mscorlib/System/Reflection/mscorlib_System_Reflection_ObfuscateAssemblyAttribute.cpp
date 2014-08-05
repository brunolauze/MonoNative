#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ObfuscateAssemblyAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			//Public Methods
			//Get Set Properties Methods
			//	Get:AssemblyIsPrivate
			mscorlib::System::Boolean  ObfuscateAssemblyAttribute::get_AssemblyIsPrivate() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "ObfuscateAssemblyAttribute", 0, NULL, "get_AssemblyIsPrivate", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get/Set:StripAfterObfuscation
			mscorlib::System::Boolean  ObfuscateAssemblyAttribute::get_StripAfterObfuscation() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "ObfuscateAssemblyAttribute", 0, NULL, "get_StripAfterObfuscation", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			void ObfuscateAssemblyAttribute::set_StripAfterObfuscation(mscorlib::System::Boolean  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = reinterpret_cast<void*>(value);
				Global::InvokeMethod("mscorlib", "System.Reflection", "ObfuscateAssemblyAttribute", 0, NULL, "set_StripAfterObfuscation", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get:TypeId
			mscorlib::System::Object  ObfuscateAssemblyAttribute::get_TypeId() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Object(__result__);
			}



		}
	}
}
