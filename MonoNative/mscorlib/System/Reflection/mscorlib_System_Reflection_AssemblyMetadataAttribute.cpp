#include <mscorlib/System/Reflection/mscorlib_System_Reflection_AssemblyMetadataAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			//Public Methods
			//Get Set Properties Methods
			//	Get/Set:Key
			mscorlib::System::String  AssemblyMetadataAttribute::get_Key() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "AssemblyMetadataAttribute", 0, NULL, "get_Key", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}

			void AssemblyMetadataAttribute::set_Key(mscorlib::System::String  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Reflection", "AssemblyMetadataAttribute", 0, NULL, "set_Key", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:Value
			mscorlib::System::String  AssemblyMetadataAttribute::get_Value() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "AssemblyMetadataAttribute", 0, NULL, "get_Value", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}

			void AssemblyMetadataAttribute::set_Value(mscorlib::System::String  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Reflection", "AssemblyMetadataAttribute", 0, NULL, "set_Value", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get:TypeId
			mscorlib::System::Object  AssemblyMetadataAttribute::get_TypeId() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Object(__result__);
			}



		}
	}
}
