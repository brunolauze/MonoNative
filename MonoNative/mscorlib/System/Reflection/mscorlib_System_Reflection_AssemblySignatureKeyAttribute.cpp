#include <mscorlib/System/Reflection/mscorlib_System_Reflection_AssemblySignatureKeyAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			//Public Methods
			//Get Set Properties Methods
			//	Get/Set:PublicKey
			mscorlib::System::String  AssemblySignatureKeyAttribute::get_PublicKey()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "AssemblySignatureKeyAttribute", 0, NULL, "get_PublicKey", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}

			void AssemblySignatureKeyAttribute::set_PublicKey(mscorlib::System::String  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Reflection", "AssemblySignatureKeyAttribute", 0, NULL, "set_PublicKey", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:Countersignature
			mscorlib::System::String  AssemblySignatureKeyAttribute::get_Countersignature()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "AssemblySignatureKeyAttribute", 0, NULL, "get_Countersignature", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}

			void AssemblySignatureKeyAttribute::set_Countersignature(mscorlib::System::String  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Reflection", "AssemblySignatureKeyAttribute", 0, NULL, "set_Countersignature", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get:TypeId
			mscorlib::System::Object  AssemblySignatureKeyAttribute::get_TypeId()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Object(__result__);
			}



		}
	}
}
