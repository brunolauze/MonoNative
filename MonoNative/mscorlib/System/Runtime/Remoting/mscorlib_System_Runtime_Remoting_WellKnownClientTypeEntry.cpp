#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_WellKnownClientTypeEntry.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Remoting
			{

				//Public Methods
				mscorlib::System::String WellKnownClientTypeEntry::ToString()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "WellKnownClientTypeEntry", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
				}

				//Get Set Properties Methods
				//	Get/Set:ApplicationUrl
				mscorlib::System::String  WellKnownClientTypeEntry::get_ApplicationUrl() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "WellKnownClientTypeEntry", 0, NULL, "get_ApplicationUrl", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void WellKnownClientTypeEntry::set_ApplicationUrl(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), value);
					Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "WellKnownClientTypeEntry", 0, NULL, "set_ApplicationUrl", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get:ObjectType
				mscorlib::System::Type  WellKnownClientTypeEntry::get_ObjectType() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "WellKnownClientTypeEntry", 0, NULL, "get_ObjectType", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}


				//	Get:ObjectUrl
				mscorlib::System::String  WellKnownClientTypeEntry::get_ObjectUrl() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "WellKnownClientTypeEntry", 0, NULL, "get_ObjectUrl", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get/Set:AssemblyName
				mscorlib::System::String  WellKnownClientTypeEntry::get_AssemblyName() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "TypeEntry", 0, NULL, "get_AssemblyName", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void WellKnownClientTypeEntry::set_AssemblyName(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), value);
					Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "TypeEntry", 0, NULL, "set_AssemblyName", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:TypeName
				mscorlib::System::String  WellKnownClientTypeEntry::get_TypeName() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "TypeEntry", 0, NULL, "get_TypeName", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void WellKnownClientTypeEntry::set_TypeName(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), value);
					Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "TypeEntry", 0, NULL, "set_TypeName", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}



			}
		}
	}
}
