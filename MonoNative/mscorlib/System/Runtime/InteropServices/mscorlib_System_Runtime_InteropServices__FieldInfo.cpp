#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__FieldInfo.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_Guid.h>
#include <mscorlib/System/mscorlib_System_IntPtr.h>
#include <mscorlib/System/mscorlib_System_TypedReference.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Binder.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_CultureInfo.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_RuntimeFieldHandle.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				//Public Methods
				mscorlib::System::Boolean _FieldInfo::Equals(mscorlib::System::Object other)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(other).name());
						__parameters__[0] = (MonoObject*)other;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_FieldInfo", 0, NULL, "Equals", __mscorlib_System_Runtime_InteropServices__FieldInfo, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				std::vector<mscorlib::System::Object*> _FieldInfo::GetCustomAttributes(mscorlib::System::Boolean inherit)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(inherit).name());
						__parameters__[0] = reinterpret_cast<void*>(inherit);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_FieldInfo", 0, NULL, "GetCustomAttributes", __mscorlib_System_Runtime_InteropServices__FieldInfo, 1, __parameter_types__, __parameters__, NULL);
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

				std::vector<mscorlib::System::Object*> _FieldInfo::GetCustomAttributes(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(attributeType).name());
						__parameter_types__[1] = Global::GetType(typeid(inherit).name());
						__parameters__[0] = (MonoObject*)attributeType;
						__parameters__[1] = reinterpret_cast<void*>(inherit);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_FieldInfo", 0, NULL, "GetCustomAttributes", __mscorlib_System_Runtime_InteropServices__FieldInfo, 2, __parameter_types__, __parameters__, NULL);
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

				mscorlib::System::Int32 _FieldInfo::GetHashCode()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_FieldInfo", 0, NULL, "GetHashCode", __mscorlib_System_Runtime_InteropServices__FieldInfo, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				mscorlib::System::Type _FieldInfo::GetType()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_FieldInfo", 0, NULL, "GetType", __mscorlib_System_Runtime_InteropServices__FieldInfo, 0, NULL, NULL, NULL);
						return mscorlib::System::Type(__result__);
				}

				void _FieldInfo::GetIDsOfNames(mscorlib::System::Guid riid, mscorlib::System::IntPtr rgszNames, mscorlib::System::UInt32 cNames, mscorlib::System::UInt32 lcid, mscorlib::System::IntPtr rgDispId)
				{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType(typeid(riid).name());
						__parameter_types__[1] = Global::GetType(typeid(rgszNames).name());
						__parameter_types__[2] = Global::GetType(typeid(cNames).name());
						__parameter_types__[3] = Global::GetType(typeid(lcid).name());
						__parameter_types__[4] = Global::GetType(typeid(rgDispId).name());
						__parameters__[0] = (MonoObject*)riid;
						__parameters__[1] = (MonoObject*)rgszNames;
						__parameters__[2] = &cNames;
						__parameters__[3] = &lcid;
						__parameters__[4] = (MonoObject*)rgDispId;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_FieldInfo", 0, NULL, "GetIDsOfNames", __mscorlib_System_Runtime_InteropServices__FieldInfo, 5, __parameter_types__, __parameters__, NULL);
				}

				void _FieldInfo::GetTypeInfo(mscorlib::System::UInt32 iTInfo, mscorlib::System::UInt32 lcid, mscorlib::System::IntPtr ppTInfo)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(iTInfo).name());
						__parameter_types__[1] = Global::GetType(typeid(lcid).name());
						__parameter_types__[2] = Global::GetType(typeid(ppTInfo).name());
						__parameters__[0] = &iTInfo;
						__parameters__[1] = &lcid;
						__parameters__[2] = (MonoObject*)ppTInfo;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_FieldInfo", 0, NULL, "GetTypeInfo", __mscorlib_System_Runtime_InteropServices__FieldInfo, 3, __parameter_types__, __parameters__, NULL);
				}

				void _FieldInfo::GetTypeInfoCount(mscorlib::System::UInt32 pcTInfo)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(pcTInfo).name());
						__parameters__[0] = &pcTInfo;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_FieldInfo", 0, NULL, "GetTypeInfoCount", __mscorlib_System_Runtime_InteropServices__FieldInfo, 1, __parameter_types__, __parameters__, NULL);
				}

				void _FieldInfo::Invoke(mscorlib::System::UInt32 dispIdMember, mscorlib::System::Guid riid, mscorlib::System::UInt32 lcid, mscorlib::System::Int16 wFlags, mscorlib::System::IntPtr pDispParams, mscorlib::System::IntPtr pVarResult, mscorlib::System::IntPtr pExcepInfo, mscorlib::System::IntPtr puArgErr)
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
						__parameters__[4] = (MonoObject*)pDispParams;
						__parameters__[5] = (MonoObject*)pVarResult;
						__parameters__[6] = (MonoObject*)pExcepInfo;
						__parameters__[7] = (MonoObject*)puArgErr;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_FieldInfo", 0, NULL, "Invoke", __mscorlib_System_Runtime_InteropServices__FieldInfo, 8, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Object _FieldInfo::GetValue(mscorlib::System::Object obj)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(obj).name());
						__parameters__[0] = (MonoObject*)obj;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_FieldInfo", 0, NULL, "GetValue", __mscorlib_System_Runtime_InteropServices__FieldInfo, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Object(__result__);
				}

				mscorlib::System::Object _FieldInfo::GetValueDirect(mscorlib::System::TypedReference obj)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(obj).name());
						__parameters__[0] = (MonoObject*)obj;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_FieldInfo", 0, NULL, "GetValueDirect", __mscorlib_System_Runtime_InteropServices__FieldInfo, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Object(__result__);
				}

				mscorlib::System::Boolean _FieldInfo::IsDefined(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(attributeType).name());
						__parameter_types__[1] = Global::GetType(typeid(inherit).name());
						__parameters__[0] = (MonoObject*)attributeType;
						__parameters__[1] = reinterpret_cast<void*>(inherit);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_FieldInfo", 0, NULL, "IsDefined", __mscorlib_System_Runtime_InteropServices__FieldInfo, 2, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void _FieldInfo::SetValue(mscorlib::System::Object obj, mscorlib::System::Object value)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(obj).name());
						__parameter_types__[1] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)obj;
						__parameters__[1] = (MonoObject*)value;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_FieldInfo", 0, NULL, "SetValue", __mscorlib_System_Runtime_InteropServices__FieldInfo, 2, __parameter_types__, __parameters__, NULL);
				}

				void _FieldInfo::SetValue(mscorlib::System::Object obj, mscorlib::System::Object value, mscorlib::System::Reflection::BindingFlags::__ENUM__ invokeAttr, mscorlib::System::Reflection::Binder binder, mscorlib::System::Globalization::CultureInfo culture)
				{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType(typeid(obj).name());
						__parameter_types__[1] = Global::GetType(typeid(value).name());
						__parameter_types__[2] = Global::GetType(typeid(invokeAttr).name());
						__parameter_types__[3] = Global::GetType(typeid(binder).name());
						__parameter_types__[4] = Global::GetType(typeid(culture).name());
						__parameters__[0] = (MonoObject*)obj;
						__parameters__[1] = (MonoObject*)value;
						__parameters__[2] = reinterpret_cast<void*>(invokeAttr);
						__parameters__[3] = (MonoObject*)binder;
						__parameters__[4] = (MonoObject*)culture;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_FieldInfo", 0, NULL, "SetValue", __mscorlib_System_Runtime_InteropServices__FieldInfo, 5, __parameter_types__, __parameters__, NULL);
				}

				void _FieldInfo::SetValueDirect(mscorlib::System::TypedReference obj, mscorlib::System::Object value)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(obj).name());
						__parameter_types__[1] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)obj;
						__parameters__[1] = (MonoObject*)value;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_FieldInfo", 0, NULL, "SetValueDirect", __mscorlib_System_Runtime_InteropServices__FieldInfo, 2, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::String _FieldInfo::ToString()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_FieldInfo", 0, NULL, "ToString", __mscorlib_System_Runtime_InteropServices__FieldInfo, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
				}

				//Get Set Properties Methods
				//	Get:Attributes
				mscorlib::System::Reflection::FieldAttributes::__ENUM__  _FieldInfo::get_Attributes()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_FieldInfo", 0, NULL, "get_Attributes", __mscorlib_System_Runtime_InteropServices__FieldInfo, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Reflection::FieldAttributes::__ENUM__*)mono_object_unbox(__result__);
				}


				//	Get:DeclaringType
				mscorlib::System::Type  _FieldInfo::get_DeclaringType()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_FieldInfo", 0, NULL, "get_DeclaringType", __mscorlib_System_Runtime_InteropServices__FieldInfo, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}


				//	Get:FieldHandle
				mscorlib::System::RuntimeFieldHandle  _FieldInfo::get_FieldHandle()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_FieldInfo", 0, NULL, "get_FieldHandle", __mscorlib_System_Runtime_InteropServices__FieldInfo, 0, NULL, NULL, NULL);
					return mscorlib::System::RuntimeFieldHandle(__result__);
				}


				//	Get:FieldType
				mscorlib::System::Type  _FieldInfo::get_FieldType()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_FieldInfo", 0, NULL, "get_FieldType", __mscorlib_System_Runtime_InteropServices__FieldInfo, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}


				//	Get:IsAssembly
				mscorlib::System::Boolean  _FieldInfo::get_IsAssembly()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_FieldInfo", 0, NULL, "get_IsAssembly", __mscorlib_System_Runtime_InteropServices__FieldInfo, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsFamily
				mscorlib::System::Boolean  _FieldInfo::get_IsFamily()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_FieldInfo", 0, NULL, "get_IsFamily", __mscorlib_System_Runtime_InteropServices__FieldInfo, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsFamilyAndAssembly
				mscorlib::System::Boolean  _FieldInfo::get_IsFamilyAndAssembly()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_FieldInfo", 0, NULL, "get_IsFamilyAndAssembly", __mscorlib_System_Runtime_InteropServices__FieldInfo, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsFamilyOrAssembly
				mscorlib::System::Boolean  _FieldInfo::get_IsFamilyOrAssembly()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_FieldInfo", 0, NULL, "get_IsFamilyOrAssembly", __mscorlib_System_Runtime_InteropServices__FieldInfo, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsInitOnly
				mscorlib::System::Boolean  _FieldInfo::get_IsInitOnly()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_FieldInfo", 0, NULL, "get_IsInitOnly", __mscorlib_System_Runtime_InteropServices__FieldInfo, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsLiteral
				mscorlib::System::Boolean  _FieldInfo::get_IsLiteral()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_FieldInfo", 0, NULL, "get_IsLiteral", __mscorlib_System_Runtime_InteropServices__FieldInfo, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsNotSerialized
				mscorlib::System::Boolean  _FieldInfo::get_IsNotSerialized()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_FieldInfo", 0, NULL, "get_IsNotSerialized", __mscorlib_System_Runtime_InteropServices__FieldInfo, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsPinvokeImpl
				mscorlib::System::Boolean  _FieldInfo::get_IsPinvokeImpl()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_FieldInfo", 0, NULL, "get_IsPinvokeImpl", __mscorlib_System_Runtime_InteropServices__FieldInfo, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsPrivate
				mscorlib::System::Boolean  _FieldInfo::get_IsPrivate()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_FieldInfo", 0, NULL, "get_IsPrivate", __mscorlib_System_Runtime_InteropServices__FieldInfo, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsPublic
				mscorlib::System::Boolean  _FieldInfo::get_IsPublic()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_FieldInfo", 0, NULL, "get_IsPublic", __mscorlib_System_Runtime_InteropServices__FieldInfo, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsSpecialName
				mscorlib::System::Boolean  _FieldInfo::get_IsSpecialName()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_FieldInfo", 0, NULL, "get_IsSpecialName", __mscorlib_System_Runtime_InteropServices__FieldInfo, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsStatic
				mscorlib::System::Boolean  _FieldInfo::get_IsStatic()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_FieldInfo", 0, NULL, "get_IsStatic", __mscorlib_System_Runtime_InteropServices__FieldInfo, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:MemberType
				mscorlib::System::Reflection::MemberTypes::__ENUM__  _FieldInfo::get_MemberType()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_FieldInfo", 0, NULL, "get_MemberType", __mscorlib_System_Runtime_InteropServices__FieldInfo, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Reflection::MemberTypes::__ENUM__*)mono_object_unbox(__result__);
				}


				//	Get:Name
				mscorlib::System::String  _FieldInfo::get_Name()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_FieldInfo", 0, NULL, "get_Name", __mscorlib_System_Runtime_InteropServices__FieldInfo, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:ReflectedType
				mscorlib::System::Type  _FieldInfo::get_ReflectedType()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_FieldInfo", 0, NULL, "get_ReflectedType", __mscorlib_System_Runtime_InteropServices__FieldInfo, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}



			}
		}
	}
}
