#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_WellKnownServiceTypeEntry.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Remoting
			{

				//Public Methods
				mscorlib::System::String WellKnownServiceTypeEntry::ToString()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "WellKnownServiceTypeEntry", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
				}

				//Get Set Properties Methods
				//	Get/Set:ContextAttributes
				std::vector<mscorlib::System::Runtime::Remoting::Contexts::IContextAttribute*>  WellKnownServiceTypeEntry::get_ContextAttributes()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "WellKnownServiceTypeEntry", 0, NULL, "get_ContextAttributes", __native_object__, 0, NULL, NULL, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::Runtime::Remoting::Contexts::IContextAttribute*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back(new mscorlib::System::Runtime::Remoting::Contexts::IContextAttribute (__array_item__));
					}
					return __array_result__;
				}

				void WellKnownServiceTypeEntry::set_ContextAttributes(std::vector<mscorlib::System::Runtime::Remoting::Contexts::IContextAttribute*>  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(value).name()))->eklass);
					__parameters__[0] = Global::FromArray<mscorlib::System::Runtime::Remoting::Contexts::IContextAttribute*>(value, typeid(mscorlib::System::Runtime::Remoting::Contexts::IContextAttribute).name());
					Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "WellKnownServiceTypeEntry", 0, NULL, "set_ContextAttributes", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get:Mode
				mscorlib::System::Runtime::Remoting::WellKnownObjectMode::__ENUM__  WellKnownServiceTypeEntry::get_Mode()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "WellKnownServiceTypeEntry", 0, NULL, "get_Mode", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Runtime::Remoting::WellKnownObjectMode::__ENUM__*)mono_object_unbox(__result__);
				}


				//	Get:ObjectType
				mscorlib::System::Type  WellKnownServiceTypeEntry::get_ObjectType()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "WellKnownServiceTypeEntry", 0, NULL, "get_ObjectType", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}


				//	Get:ObjectUri
				mscorlib::System::String  WellKnownServiceTypeEntry::get_ObjectUri()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "WellKnownServiceTypeEntry", 0, NULL, "get_ObjectUri", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get/Set:AssemblyName
				mscorlib::System::String  WellKnownServiceTypeEntry::get_AssemblyName()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "TypeEntry", 0, NULL, "get_AssemblyName", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void WellKnownServiceTypeEntry::set_AssemblyName(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "TypeEntry", 0, NULL, "set_AssemblyName", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:TypeName
				mscorlib::System::String  WellKnownServiceTypeEntry::get_TypeName()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "TypeEntry", 0, NULL, "get_TypeName", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void WellKnownServiceTypeEntry::set_TypeName(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "TypeEntry", 0, NULL, "set_TypeName", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}



			}
		}
	}
}
