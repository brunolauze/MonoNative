#include <mscorlib/System/Diagnostics/mscorlib_System_Diagnostics_DebuggerDisplayAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Diagnostics
		{

			//Public Methods
			//Get Set Properties Methods
			//	Get:Value
			mscorlib::System::String  DebuggerDisplayAttribute::get_Value()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics", "DebuggerDisplayAttribute", 0, NULL, "get_Value", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get/Set:Target
			mscorlib::System::Type  DebuggerDisplayAttribute::get_Target()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics", "DebuggerDisplayAttribute", 0, NULL, "get_Target", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Type(__result__);
			}

			void DebuggerDisplayAttribute::set_Target(mscorlib::System::Type  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Diagnostics", "DebuggerDisplayAttribute", 0, NULL, "set_Target", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:TargetTypeName
			mscorlib::System::String  DebuggerDisplayAttribute::get_TargetTypeName()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics", "DebuggerDisplayAttribute", 0, NULL, "get_TargetTypeName", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}

			void DebuggerDisplayAttribute::set_TargetTypeName(mscorlib::System::String  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Diagnostics", "DebuggerDisplayAttribute", 0, NULL, "set_TargetTypeName", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:Type
			mscorlib::System::String  DebuggerDisplayAttribute::get_Type()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics", "DebuggerDisplayAttribute", 0, NULL, "get_Type", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}

			void DebuggerDisplayAttribute::set_Type(mscorlib::System::String  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Diagnostics", "DebuggerDisplayAttribute", 0, NULL, "set_Type", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:Name
			mscorlib::System::String  DebuggerDisplayAttribute::get_Name()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics", "DebuggerDisplayAttribute", 0, NULL, "get_Name", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}

			void DebuggerDisplayAttribute::set_Name(mscorlib::System::String  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Diagnostics", "DebuggerDisplayAttribute", 0, NULL, "set_Name", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get:TypeId
			mscorlib::System::Object  DebuggerDisplayAttribute::get_TypeId()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Object(__result__);
			}



		}
	}
}
