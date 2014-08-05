#include <mscorlib/System/Reflection/mscorlib_System_Reflection_EventInfo.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_Delegate.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MethodInfo.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Module.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_CustomAttributeData.h>



namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			//Public Methods
			void EventInfo::AddEventHandler(mscorlib::System::Object target, mscorlib::System::Delegate handler)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(target).name());
					__parameter_types__[1] = Global::GetType(typeid(handler).name());
					__parameters__[0] = (MonoObject*)target;
					__parameters__[1] = (MonoObject*)handler;
					Global::InvokeMethod("mscorlib", "System.Reflection", "EventInfo", 0, NULL, "AddEventHandler", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Reflection::MethodInfo EventInfo::GetAddMethod()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "EventInfo", 0, NULL, "GetAddMethod", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Reflection::MethodInfo(__result__);
			}

			mscorlib::System::Reflection::MethodInfo EventInfo::GetAddMethod(mscorlib::System::Boolean nonPublic)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(nonPublic).name());
					__parameters__[0] = reinterpret_cast<void*>(nonPublic);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "EventInfo", 0, NULL, "GetAddMethod", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::MethodInfo(__result__);
			}

			mscorlib::System::Reflection::MethodInfo EventInfo::GetRaiseMethod()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "EventInfo", 0, NULL, "GetRaiseMethod", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Reflection::MethodInfo(__result__);
			}

			mscorlib::System::Reflection::MethodInfo EventInfo::GetRaiseMethod(mscorlib::System::Boolean nonPublic)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(nonPublic).name());
					__parameters__[0] = reinterpret_cast<void*>(nonPublic);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "EventInfo", 0, NULL, "GetRaiseMethod", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::MethodInfo(__result__);
			}

			mscorlib::System::Reflection::MethodInfo EventInfo::GetRemoveMethod()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "EventInfo", 0, NULL, "GetRemoveMethod", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Reflection::MethodInfo(__result__);
			}

			mscorlib::System::Reflection::MethodInfo EventInfo::GetRemoveMethod(mscorlib::System::Boolean nonPublic)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(nonPublic).name());
					__parameters__[0] = reinterpret_cast<void*>(nonPublic);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "EventInfo", 0, NULL, "GetRemoveMethod", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::MethodInfo(__result__);
			}

			std::vector<mscorlib::System::Reflection::MethodInfo*> EventInfo::GetOtherMethods(mscorlib::System::Boolean nonPublic)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(nonPublic).name());
					__parameters__[0] = reinterpret_cast<void*>(nonPublic);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "EventInfo", 0, NULL, "GetOtherMethods", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::Reflection::MethodInfo*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back(new mscorlib::System::Reflection::MethodInfo (__array_item__));
					}
					return __array_result__;
			}

			std::vector<mscorlib::System::Reflection::MethodInfo*> EventInfo::GetOtherMethods()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "EventInfo", 0, NULL, "GetOtherMethods", __native_object__, 0, NULL, NULL, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::Reflection::MethodInfo*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back(new mscorlib::System::Reflection::MethodInfo (__array_item__));
					}
					return __array_result__;
			}

			void EventInfo::RemoveEventHandler(mscorlib::System::Object target, mscorlib::System::Delegate handler)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(target).name());
					__parameter_types__[1] = Global::GetType(typeid(handler).name());
					__parameters__[0] = (MonoObject*)target;
					__parameters__[1] = (MonoObject*)handler;
					Global::InvokeMethod("mscorlib", "System.Reflection", "EventInfo", 0, NULL, "RemoveEventHandler", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Boolean EventInfo::Equals(mscorlib::System::Object obj)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(obj).name());
					__parameters__[0] = (MonoObject*)obj;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "EventInfo", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 EventInfo::GetHashCode()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "EventInfo", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			//Get Set Properties Methods
			//	Get:Attributes
			mscorlib::System::Reflection::EventAttributes::__ENUM__  EventInfo::get_Attributes() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "EventInfo", 0, NULL, "get_Attributes", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Reflection::EventAttributes::__ENUM__*)mono_object_unbox(__result__);
			}


			//	Get:EventHandlerType
			mscorlib::System::Type  EventInfo::get_EventHandlerType() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "EventInfo", 0, NULL, "get_EventHandlerType", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Type(__result__);
			}


			//	Get:IsMulticast
			mscorlib::System::Boolean  EventInfo::get_IsMulticast() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "EventInfo", 0, NULL, "get_IsMulticast", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsSpecialName
			mscorlib::System::Boolean  EventInfo::get_IsSpecialName() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "EventInfo", 0, NULL, "get_IsSpecialName", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:MemberType
			mscorlib::System::Reflection::MemberTypes::__ENUM__  EventInfo::get_MemberType() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "EventInfo", 0, NULL, "get_MemberType", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Reflection::MemberTypes::__ENUM__*)mono_object_unbox(__result__);
			}


			//	Get:AddMethod
			mscorlib::System::Reflection::MethodInfo  EventInfo::get_AddMethod() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "EventInfo", 0, NULL, "get_AddMethod", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Reflection::MethodInfo(__result__);
			}


			//	Get:RaiseMethod
			mscorlib::System::Reflection::MethodInfo  EventInfo::get_RaiseMethod() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "EventInfo", 0, NULL, "get_RaiseMethod", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Reflection::MethodInfo(__result__);
			}


			//	Get:RemoveMethod
			mscorlib::System::Reflection::MethodInfo  EventInfo::get_RemoveMethod() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "EventInfo", 0, NULL, "get_RemoveMethod", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Reflection::MethodInfo(__result__);
			}


			//	Get:DeclaringType
			mscorlib::System::Type  EventInfo::get_DeclaringType() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MemberInfo", 0, NULL, "get_DeclaringType", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Type(__result__);
			}


			//	Get:Name
			mscorlib::System::String  EventInfo::get_Name() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MemberInfo", 0, NULL, "get_Name", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:ReflectedType
			mscorlib::System::Type  EventInfo::get_ReflectedType() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MemberInfo", 0, NULL, "get_ReflectedType", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Type(__result__);
			}


			//	Get:Module
			mscorlib::System::Reflection::Module  EventInfo::get_Module() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MemberInfo", 0, NULL, "get_Module", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Reflection::Module(__result__);
			}


			//	Get:MetadataToken
			mscorlib::System::Int32  EventInfo::get_MetadataToken() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MemberInfo", 0, NULL, "get_MetadataToken", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}


			//	Get:CustomAttributes
			mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::CustomAttributeData>  EventInfo::get_CustomAttributes() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MemberInfo", 0, NULL, "get_CustomAttributes", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::CustomAttributeData>(__result__);
			}



		}
	}
}
