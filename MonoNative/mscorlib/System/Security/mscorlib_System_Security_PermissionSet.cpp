#include <mscorlib/System/Security/mscorlib_System_Security_PermissionSet.h>
#include <mscorlib/System/mscorlib_System_Array.h>
#include <mscorlib/System/Security/mscorlib_System_Security_SecurityElement.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Byte.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{

			//Public Methods
			mscorlib::System::Security::IPermission PermissionSet::AddPermission(mscorlib::System::Security::IPermission perm)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(perm).name());
					__parameters__[0] = (MonoObject*)perm;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "PermissionSet", 0, NULL, "AddPermission", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Security::IPermission(__result__);
			}

			void PermissionSet::Assert()
			{
					Global::InvokeMethod("mscorlib", "System.Security", "PermissionSet", 0, NULL, "Assert", __native_object__, 0, NULL, NULL, NULL);
			}

			mscorlib::System::Security::PermissionSet PermissionSet::Copy()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "PermissionSet", 0, NULL, "Copy", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::PermissionSet(__result__);
			}

			void PermissionSet::CopyTo(mscorlib::System::Array array, mscorlib::System::Int32 index)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(array).name());
					__parameter_types__[1] = Global::GetType(typeid(index).name());
					__parameters__[0] = (MonoObject*)array;
					__parameters__[1] = &index;
					Global::InvokeMethod("mscorlib", "System.Security", "PermissionSet", 0, NULL, "CopyTo", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			void PermissionSet::Demand()
			{
					Global::InvokeMethod("mscorlib", "System.Security", "PermissionSet", 0, NULL, "Demand", __native_object__, 0, NULL, NULL, NULL);
			}

			void PermissionSet::Deny()
			{
					Global::InvokeMethod("mscorlib", "System.Security", "PermissionSet", 0, NULL, "Deny", __native_object__, 0, NULL, NULL, NULL);
			}

			void PermissionSet::FromXml(mscorlib::System::Security::SecurityElement et)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(et).name());
					__parameters__[0] = (MonoObject*)et;
					Global::InvokeMethod("mscorlib", "System.Security", "PermissionSet", 0, NULL, "FromXml", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Collections::IEnumerator* PermissionSet::GetEnumerator()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "PermissionSet", 0, NULL, "GetEnumerator", __native_object__, 0, NULL, NULL, NULL);
					return new mscorlib::System::Collections::IEnumerator(__result__);
			}

			mscorlib::System::Boolean PermissionSet::IsSubsetOf(mscorlib::System::Security::PermissionSet target)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(target).name());
					__parameters__[0] = (MonoObject*)target;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "PermissionSet", 0, NULL, "IsSubsetOf", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			void PermissionSet::PermitOnly()
			{
					Global::InvokeMethod("mscorlib", "System.Security", "PermissionSet", 0, NULL, "PermitOnly", __native_object__, 0, NULL, NULL, NULL);
			}

			mscorlib::System::Boolean PermissionSet::ContainsNonCodeAccessPermissions()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "PermissionSet", 0, NULL, "ContainsNonCodeAccessPermissions", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			std::vector<mscorlib::System::Byte*> PermissionSet::ConvertPermissionSet(mscorlib::System::String inFormat, std::vector<mscorlib::System::Byte*> inData, mscorlib::System::String outFormat)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(inFormat).name());
					__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(inData).name()))->eklass);
					__parameter_types__[2] = Global::GetType(typeid(outFormat).name());
					__parameters__[0] = (MonoObject*)inFormat;
					__parameters__[1] = Global::FromArray<mscorlib::System::Byte*>(inData, typeid(mscorlib::System::Byte).name());
					__parameters__[2] = (MonoObject*)outFormat;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "PermissionSet", 0, NULL, "ConvertPermissionSet", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::Byte*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back(new mscorlib::System::Byte (__array_item__));
					}
					return __array_result__;
			}

			mscorlib::System::Security::IPermission PermissionSet::GetPermission(mscorlib::System::Type permClass)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(permClass).name());
					__parameters__[0] = (MonoObject*)permClass;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "PermissionSet", 0, NULL, "GetPermission", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Security::IPermission(__result__);
			}

			mscorlib::System::Security::PermissionSet PermissionSet::Intersect(mscorlib::System::Security::PermissionSet other)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(other).name());
					__parameters__[0] = (MonoObject*)other;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "PermissionSet", 0, NULL, "Intersect", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Security::PermissionSet(__result__);
			}

			mscorlib::System::Boolean PermissionSet::IsEmpty()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "PermissionSet", 0, NULL, "IsEmpty", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean PermissionSet::IsUnrestricted()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "PermissionSet", 0, NULL, "IsUnrestricted", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Security::IPermission PermissionSet::RemovePermission(mscorlib::System::Type permClass)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(permClass).name());
					__parameters__[0] = (MonoObject*)permClass;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "PermissionSet", 0, NULL, "RemovePermission", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Security::IPermission(__result__);
			}

			mscorlib::System::Security::IPermission PermissionSet::SetPermission(mscorlib::System::Security::IPermission perm)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(perm).name());
					__parameters__[0] = (MonoObject*)perm;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "PermissionSet", 0, NULL, "SetPermission", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Security::IPermission(__result__);
			}

			mscorlib::System::String PermissionSet::ToString()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "PermissionSet", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::Security::SecurityElement PermissionSet::ToXml()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "PermissionSet", 0, NULL, "ToXml", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::SecurityElement(__result__);
			}

			mscorlib::System::Security::PermissionSet PermissionSet::Union(mscorlib::System::Security::PermissionSet other)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(other).name());
					__parameters__[0] = (MonoObject*)other;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "PermissionSet", 0, NULL, "Union", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Security::PermissionSet(__result__);
			}

			mscorlib::System::Boolean PermissionSet::Equals(mscorlib::System::Object obj)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(obj).name());
					__parameters__[0] = (MonoObject*)obj;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "PermissionSet", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 PermissionSet::GetHashCode()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "PermissionSet", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			void PermissionSet::RevertAssert()
			{
					Global::InvokeMethod("mscorlib", "System.Security", "PermissionSet", 0, NULL, "RevertAssert", NullMonoObject, 0, NULL, NULL, NULL);
			}

			//Get Set Properties Methods
			//	Get:Count
			mscorlib::System::Int32  PermissionSet::get_Count() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "PermissionSet", 0, NULL, "get_Count", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}


			//	Get:IsSynchronized
			mscorlib::System::Boolean  PermissionSet::get_IsSynchronized() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "PermissionSet", 0, NULL, "get_IsSynchronized", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsReadOnly
			mscorlib::System::Boolean  PermissionSet::get_IsReadOnly() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "PermissionSet", 0, NULL, "get_IsReadOnly", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:SyncRoot
			mscorlib::System::Object  PermissionSet::get_SyncRoot() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "PermissionSet", 0, NULL, "get_SyncRoot", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Object(__result__);
			}



		}
	}
}
