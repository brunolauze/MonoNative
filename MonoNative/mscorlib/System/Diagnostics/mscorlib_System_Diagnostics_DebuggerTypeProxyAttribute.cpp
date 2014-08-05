#include <mscorlib/System/Diagnostics/mscorlib_System_Diagnostics_DebuggerTypeProxyAttribute.h>



namespace mscorlib
{
	namespace System
	{
		namespace Diagnostics
		{

			//Public Methods
			//Get Set Properties Methods
			//	Get:ProxyTypeName
			mscorlib::System::String  DebuggerTypeProxyAttribute::get_ProxyTypeName() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics", "DebuggerTypeProxyAttribute", 0, NULL, "get_ProxyTypeName", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get/Set:Target
			mscorlib::System::Type  DebuggerTypeProxyAttribute::get_Target() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics", "DebuggerTypeProxyAttribute", 0, NULL, "get_Target", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Type(__result__);
			}

			void DebuggerTypeProxyAttribute::set_Target(mscorlib::System::Type  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Diagnostics", "DebuggerTypeProxyAttribute", 0, NULL, "set_Target", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:TargetTypeName
			mscorlib::System::String  DebuggerTypeProxyAttribute::get_TargetTypeName() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics", "DebuggerTypeProxyAttribute", 0, NULL, "get_TargetTypeName", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}

			void DebuggerTypeProxyAttribute::set_TargetTypeName(mscorlib::System::String  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Diagnostics", "DebuggerTypeProxyAttribute", 0, NULL, "set_TargetTypeName", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get:TypeId
			mscorlib::System::Object  DebuggerTypeProxyAttribute::get_TypeId() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Object(__result__);
			}



		}
	}
}
