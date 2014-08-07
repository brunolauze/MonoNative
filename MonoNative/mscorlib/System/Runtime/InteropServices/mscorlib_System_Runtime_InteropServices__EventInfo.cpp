#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__EventInfo.h>
#include <mscorlib/System/mscorlib_System_Delegate.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MethodInfo.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_Guid.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				//Public Methods
				void _EventInfo::AddEventHandler(mscorlib::System::Object target, mscorlib::System::Delegate handler)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(target).name());
						__parameter_types__[1] = Global::GetType(typeid(handler).name());
						__parameters__[0] = (MonoObject*)target;
						__parameters__[1] = (MonoObject*)handler;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_EventInfo", 0, NULL, "AddEventHandler", __mscorlib_System_Runtime_InteropServices__EventInfo, 2, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Boolean _EventInfo::Equals(mscorlib::System::Object other)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(other).name());
						__parameters__[0] = (MonoObject*)other;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_EventInfo", 0, NULL, "Equals", __mscorlib_System_Runtime_InteropServices__EventInfo, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Reflection::MethodInfo _EventInfo::GetAddMethod()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_EventInfo", 0, NULL, "GetAddMethod", __mscorlib_System_Runtime_InteropServices__EventInfo, 0, NULL, NULL, NULL);
						return mscorlib::System::Reflection::MethodInfo(__result__);
				}

				mscorlib::System::Reflection::MethodInfo _EventInfo::GetAddMethod(mscorlib::System::Boolean nonPublic)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(nonPublic).name());
						__parameters__[0] = reinterpret_cast<void*>(nonPublic);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_EventInfo", 0, NULL, "GetAddMethod", __mscorlib_System_Runtime_InteropServices__EventInfo, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::MethodInfo(__result__);
				}

				std::vector<mscorlib::System::Object*> _EventInfo::GetCustomAttributes(mscorlib::System::Boolean inherit)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(inherit).name());
						__parameters__[0] = reinterpret_cast<void*>(inherit);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_EventInfo", 0, NULL, "GetCustomAttributes", __mscorlib_System_Runtime_InteropServices__EventInfo, 1, __parameter_types__, __parameters__, NULL);
						MonoArray *__array_ptr__ = (MonoArray*)__result__;
						uintptr_t __array_length__ = mono_array_length(__array_ptr__);
						std::vector<mscorlib::System::Object*>  __array_result__(__array_length__);
						for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
						{
							MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
							__array_result__.push_back(new mscorlib::System::Object (__array_item__));
						}
						return __array_result__;
				}

				std::vector<mscorlib::System::Object*> _EventInfo::GetCustomAttributes(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(attributeType).name());
						__parameter_types__[1] = Global::GetType(typeid(inherit).name());
						__parameters__[0] = (MonoObject*)attributeType;
						__parameters__[1] = reinterpret_cast<void*>(inherit);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_EventInfo", 0, NULL, "GetCustomAttributes", __mscorlib_System_Runtime_InteropServices__EventInfo, 2, __parameter_types__, __parameters__, NULL);
						MonoArray *__array_ptr__ = (MonoArray*)__result__;
						uintptr_t __array_length__ = mono_array_length(__array_ptr__);
						std::vector<mscorlib::System::Object*>  __array_result__(__array_length__);
						for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
						{
							MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
							__array_result__.push_back(new mscorlib::System::Object (__array_item__));
						}
						return __array_result__;
				}

				mscorlib::System::Int32 _EventInfo::GetHashCode()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_EventInfo", 0, NULL, "GetHashCode", __mscorlib_System_Runtime_InteropServices__EventInfo, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				void _EventInfo::GetIDsOfNames(mscorlib::System::Guid riid, mscorlib::System::IntPtr rgszNames, mscorlib::System::UInt32 cNames, mscorlib::System::UInt32 lcid, mscorlib::System::IntPtr rgDispId)
				{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType(typeid(riid).name());
						__parameter_types__[1] = Global::GetType(typeid(rgszNames).name());
						__parameter_types__[2] = Global::GetType(typeid(cNames).name());
						__parameter_types__[3] = Global::GetType(typeid(lcid).name());
						__parameter_types__[4] = Global::GetType(typeid(rgDispId).name());
						__parameters__[0] = (MonoObject*)riid;
						__parameters__[1] = rgszNames;
						__parameters__[2] = &cNames;
						__parameters__[3] = &lcid;
						__parameters__[4] = rgDispId;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_EventInfo", 0, NULL, "GetIDsOfNames", __mscorlib_System_Runtime_InteropServices__EventInfo, 5, __parameter_types__, __parameters__, NULL);
				}

				void _EventInfo::GetTypeInfo(mscorlib::System::UInt32 iTInfo, mscorlib::System::UInt32 lcid, mscorlib::System::IntPtr ppTInfo)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(iTInfo).name());
						__parameter_types__[1] = Global::GetType(typeid(lcid).name());
						__parameter_types__[2] = Global::GetType(typeid(ppTInfo).name());
						__parameters__[0] = &iTInfo;
						__parameters__[1] = &lcid;
						__parameters__[2] = ppTInfo;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_EventInfo", 0, NULL, "GetTypeInfo", __mscorlib_System_Runtime_InteropServices__EventInfo, 3, __parameter_types__, __parameters__, NULL);
				}

				void _EventInfo::GetTypeInfoCount(mscorlib::System::UInt32 pcTInfo)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(pcTInfo).name());
						__parameters__[0] = &pcTInfo;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_EventInfo", 0, NULL, "GetTypeInfoCount", __mscorlib_System_Runtime_InteropServices__EventInfo, 1, __parameter_types__, __parameters__, NULL);
				}

				void _EventInfo::Invoke(mscorlib::System::UInt32 dispIdMember, mscorlib::System::Guid riid, mscorlib::System::UInt32 lcid, mscorlib::System::Int16 wFlags, mscorlib::System::IntPtr pDispParams, mscorlib::System::IntPtr pVarResult, mscorlib::System::IntPtr pExcepInfo, mscorlib::System::IntPtr puArgErr)
				{
						MonoType *__parameter_types__[8];
						void *__parameters__[8];
						__parameter_types__[0] = Global::GetType(typeid(dispIdMember).name());
						__parameter_types__[1] = Global::GetType(typeid(riid).name());
						__parameter_types__[2] = Global::GetType(typeid(lcid).name());
						__parameter_types__[3] = Global::GetType(typeid(wFlags).name());
						__parameter_types__[4] = Global::GetType(typeid(pDispParams).name());
						__parameter_types__[5] = Global::GetType(typeid(pVarResult).name());
						__parameter_types__[6] = Global::GetType(typeid(pExcepInfo).name());
						__parameter_types__[7] = Global::GetType(typeid(puArgErr).name());
						__parameters__[0] = &dispIdMember;
						__parameters__[1] = (MonoObject*)riid;
						__parameters__[2] = &lcid;
						__parameters__[3] = &wFlags;
						__parameters__[4] = pDispParams;
						__parameters__[5] = pVarResult;
						__parameters__[6] = pExcepInfo;
						__parameters__[7] = puArgErr;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_EventInfo", 0, NULL, "Invoke", __mscorlib_System_Runtime_InteropServices__EventInfo, 8, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Reflection::MethodInfo _EventInfo::GetRaiseMethod()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_EventInfo", 0, NULL, "GetRaiseMethod", __mscorlib_System_Runtime_InteropServices__EventInfo, 0, NULL, NULL, NULL);
						return mscorlib::System::Reflection::MethodInfo(__result__);
				}

				mscorlib::System::Reflection::MethodInfo _EventInfo::GetRaiseMethod(mscorlib::System::Boolean nonPublic)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(nonPublic).name());
						__parameters__[0] = reinterpret_cast<void*>(nonPublic);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_EventInfo", 0, NULL, "GetRaiseMethod", __mscorlib_System_Runtime_InteropServices__EventInfo, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::MethodInfo(__result__);
				}

				mscorlib::System::Reflection::MethodInfo _EventInfo::GetRemoveMethod()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_EventInfo", 0, NULL, "GetRemoveMethod", __mscorlib_System_Runtime_InteropServices__EventInfo, 0, NULL, NULL, NULL);
						return mscorlib::System::Reflection::MethodInfo(__result__);
				}

				mscorlib::System::Reflection::MethodInfo _EventInfo::GetRemoveMethod(mscorlib::System::Boolean nonPublic)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(nonPublic).name());
						__parameters__[0] = reinterpret_cast<void*>(nonPublic);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_EventInfo", 0, NULL, "GetRemoveMethod", __mscorlib_System_Runtime_InteropServices__EventInfo, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::MethodInfo(__result__);
				}

				mscorlib::System::Type _EventInfo::GetType()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_EventInfo", 0, NULL, "GetType", __mscorlib_System_Runtime_InteropServices__EventInfo, 0, NULL, NULL, NULL);
						return mscorlib::System::Type(__result__);
				}

				mscorlib::System::Boolean _EventInfo::IsDefined(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(attributeType).name());
						__parameter_types__[1] = Global::GetType(typeid(inherit).name());
						__parameters__[0] = (MonoObject*)attributeType;
						__parameters__[1] = reinterpret_cast<void*>(inherit);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_EventInfo", 0, NULL, "IsDefined", __mscorlib_System_Runtime_InteropServices__EventInfo, 2, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void _EventInfo::RemoveEventHandler(mscorlib::System::Object target, mscorlib::System::Delegate handler)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(target).name());
						__parameter_types__[1] = Global::GetType(typeid(handler).name());
						__parameters__[0] = (MonoObject*)target;
						__parameters__[1] = (MonoObject*)handler;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_EventInfo", 0, NULL, "RemoveEventHandler", __mscorlib_System_Runtime_InteropServices__EventInfo, 2, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::String _EventInfo::ToString()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_EventInfo", 0, NULL, "ToString", __mscorlib_System_Runtime_InteropServices__EventInfo, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
				}

				//Get Set Properties Methods
				//	Get:Attributes
				mscorlib::System::Reflection::EventAttributes::__ENUM__  _EventInfo::get_Attributes() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_EventInfo", 0, NULL, "get_Attributes", __mscorlib_System_Runtime_InteropServices__EventInfo, 0, NULL, NULL, NULL);
					return static_cast<mscorlib::System::Reflection::EventAttributes::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
				}


				//	Get:DeclaringType
				mscorlib::System::Type  _EventInfo::get_DeclaringType() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_EventInfo", 0, NULL, "get_DeclaringType", __mscorlib_System_Runtime_InteropServices__EventInfo, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}


				//	Get:EventHandlerType
				mscorlib::System::Type  _EventInfo::get_EventHandlerType() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_EventInfo", 0, NULL, "get_EventHandlerType", __mscorlib_System_Runtime_InteropServices__EventInfo, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}


				//	Get:IsMulticast
				mscorlib::System::Boolean  _EventInfo::get_IsMulticast() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_EventInfo", 0, NULL, "get_IsMulticast", __mscorlib_System_Runtime_InteropServices__EventInfo, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsSpecialName
				mscorlib::System::Boolean  _EventInfo::get_IsSpecialName() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_EventInfo", 0, NULL, "get_IsSpecialName", __mscorlib_System_Runtime_InteropServices__EventInfo, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:MemberType
				mscorlib::System::Reflection::MemberTypes::__ENUM__  _EventInfo::get_MemberType() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_EventInfo", 0, NULL, "get_MemberType", __mscorlib_System_Runtime_InteropServices__EventInfo, 0, NULL, NULL, NULL);
					return static_cast<mscorlib::System::Reflection::MemberTypes::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
				}


				//	Get:Name
				mscorlib::System::String  _EventInfo::get_Name() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_EventInfo", 0, NULL, "get_Name", __mscorlib_System_Runtime_InteropServices__EventInfo, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:ReflectedType
				mscorlib::System::Type  _EventInfo::get_ReflectedType() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_EventInfo", 0, NULL, "get_ReflectedType", __mscorlib_System_Runtime_InteropServices__EventInfo, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}



			}
		}
	}
}
