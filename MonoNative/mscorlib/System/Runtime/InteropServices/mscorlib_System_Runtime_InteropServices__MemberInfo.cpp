#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__MemberInfo.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				//Public Methods
				mscorlib::System::Boolean _MemberInfo::Equals(mscorlib::System::Object other)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(other).name());
						__parameters__[0] = (MonoObject*)other;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_MemberInfo", 0, NULL, "Equals", __mscorlib_System_Runtime_InteropServices__MemberInfo, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				std::vector<mscorlib::System::Object*> _MemberInfo::GetCustomAttributes(mscorlib::System::Boolean inherit)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(inherit).name());
						__parameters__[0] = reinterpret_cast<void*>(inherit);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_MemberInfo", 0, NULL, "GetCustomAttributes", __mscorlib_System_Runtime_InteropServices__MemberInfo, 1, __parameter_types__, __parameters__, NULL);
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

				std::vector<mscorlib::System::Object*> _MemberInfo::GetCustomAttributes(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(attributeType).name());
						__parameter_types__[1] = Global::GetType(typeid(inherit).name());
						__parameters__[0] = (MonoObject*)attributeType;
						__parameters__[1] = reinterpret_cast<void*>(inherit);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_MemberInfo", 0, NULL, "GetCustomAttributes", __mscorlib_System_Runtime_InteropServices__MemberInfo, 2, __parameter_types__, __parameters__, NULL);
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

				mscorlib::System::Int32 _MemberInfo::GetHashCode()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_MemberInfo", 0, NULL, "GetHashCode", __mscorlib_System_Runtime_InteropServices__MemberInfo, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				mscorlib::System::Type _MemberInfo::GetType()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_MemberInfo", 0, NULL, "GetType", __mscorlib_System_Runtime_InteropServices__MemberInfo, 0, NULL, NULL, NULL);
						return mscorlib::System::Type(__result__);
				}

				mscorlib::System::Boolean _MemberInfo::IsDefined(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(attributeType).name());
						__parameter_types__[1] = Global::GetType(typeid(inherit).name());
						__parameters__[0] = (MonoObject*)attributeType;
						__parameters__[1] = reinterpret_cast<void*>(inherit);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_MemberInfo", 0, NULL, "IsDefined", __mscorlib_System_Runtime_InteropServices__MemberInfo, 2, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::String _MemberInfo::ToString()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_MemberInfo", 0, NULL, "ToString", __mscorlib_System_Runtime_InteropServices__MemberInfo, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
				}

				void _MemberInfo::GetIDsOfNames(mscorlib::System::Guid riid, mscorlib::System::IntPtr rgszNames, mscorlib::System::UInt32 cNames, mscorlib::System::UInt32 lcid, mscorlib::System::IntPtr rgDispId)
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
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_MemberInfo", 0, NULL, "GetIDsOfNames", __mscorlib_System_Runtime_InteropServices__MemberInfo, 5, __parameter_types__, __parameters__, NULL);
				}

				void _MemberInfo::GetTypeInfo(mscorlib::System::UInt32 iTInfo, mscorlib::System::UInt32 lcid, mscorlib::System::IntPtr ppTInfo)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(iTInfo).name());
						__parameter_types__[1] = Global::GetType(typeid(lcid).name());
						__parameter_types__[2] = Global::GetType(typeid(ppTInfo).name());
						__parameters__[0] = &iTInfo;
						__parameters__[1] = &lcid;
						__parameters__[2] = (MonoObject*)ppTInfo;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_MemberInfo", 0, NULL, "GetTypeInfo", __mscorlib_System_Runtime_InteropServices__MemberInfo, 3, __parameter_types__, __parameters__, NULL);
				}

				void _MemberInfo::GetTypeInfoCount(mscorlib::System::UInt32 pcTInfo)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(pcTInfo).name());
						__parameters__[0] = &pcTInfo;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_MemberInfo", 0, NULL, "GetTypeInfoCount", __mscorlib_System_Runtime_InteropServices__MemberInfo, 1, __parameter_types__, __parameters__, NULL);
				}

				void _MemberInfo::Invoke(mscorlib::System::UInt32 dispIdMember, mscorlib::System::Guid riid, mscorlib::System::UInt32 lcid, mscorlib::System::Int16 wFlags, mscorlib::System::IntPtr pDispParams, mscorlib::System::IntPtr pVarResult, mscorlib::System::IntPtr pExcepInfo, mscorlib::System::IntPtr puArgErr)
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
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_MemberInfo", 0, NULL, "Invoke", __mscorlib_System_Runtime_InteropServices__MemberInfo, 8, __parameter_types__, __parameters__, NULL);
				}

				//Get Set Properties Methods
				//	Get:DeclaringType
				mscorlib::System::Type  _MemberInfo::get_DeclaringType()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_MemberInfo", 0, NULL, "get_DeclaringType", __mscorlib_System_Runtime_InteropServices__MemberInfo, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}


				//	Get:MemberType
				mscorlib::System::Reflection::MemberTypes::__ENUM__  _MemberInfo::get_MemberType()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_MemberInfo", 0, NULL, "get_MemberType", __mscorlib_System_Runtime_InteropServices__MemberInfo, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Reflection::MemberTypes::__ENUM__*)mono_object_unbox(__result__);
				}


				//	Get:Name
				mscorlib::System::String  _MemberInfo::get_Name()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_MemberInfo", 0, NULL, "get_Name", __mscorlib_System_Runtime_InteropServices__MemberInfo, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:ReflectedType
				mscorlib::System::Type  _MemberInfo::get_ReflectedType()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_MemberInfo", 0, NULL, "get_ReflectedType", __mscorlib_System_Runtime_InteropServices__MemberInfo, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}



			}
		}
	}
}
