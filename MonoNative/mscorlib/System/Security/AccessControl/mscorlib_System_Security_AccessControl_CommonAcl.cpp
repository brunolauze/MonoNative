#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_CommonAcl.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_GenericAce.h>
#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_SecurityIdentifier.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace AccessControl
			{

				//Public Methods
				void CommonAcl::GetBinaryForm(std::vector<mscorlib::System::Byte*> binaryForm, mscorlib::System::Int32 offset)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(binaryForm).name()))->eklass);
						__parameter_types__[1] = Global::GetType(typeid(offset).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(binaryForm, typeid(mscorlib::System::Byte).name());
						__parameters__[1] = &offset;
						Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "CommonAcl", 0, NULL, "GetBinaryForm", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void CommonAcl::Purge(mscorlib::System::Security::Principal::SecurityIdentifier sid)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(sid).name());
						__parameters__[0] = (MonoObject*)sid;
						Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "CommonAcl", 0, NULL, "Purge", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void CommonAcl::RemoveInheritedAces()
				{
						Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "CommonAcl", 0, NULL, "RemoveInheritedAces", __native_object__, 0, NULL, NULL, NULL);
				}

				//Get Set Properties Methods
				//	Get:BinaryLength
				mscorlib::System::Int32  CommonAcl::get_BinaryLength() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "CommonAcl", 0, NULL, "get_BinaryLength", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//	Get:Count
				mscorlib::System::Int32  CommonAcl::get_Count() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "CommonAcl", 0, NULL, "get_Count", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//	Get:IsCanonical
				mscorlib::System::Boolean  CommonAcl::get_IsCanonical() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "CommonAcl", 0, NULL, "get_IsCanonical", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsContainer
				mscorlib::System::Boolean  CommonAcl::get_IsContainer() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "CommonAcl", 0, NULL, "get_IsContainer", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsDS
				mscorlib::System::Boolean  CommonAcl::get_IsDS() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "CommonAcl", 0, NULL, "get_IsDS", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:Revision
				mscorlib::System::Byte  CommonAcl::get_Revision() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "CommonAcl", 0, NULL, "get_Revision", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Byte(__result__);
				}


				//	Get/Set:Item
				mscorlib::System::Security::AccessControl::GenericAce  CommonAcl::get_Item(mscorlib::System::Int32 index) const
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(index).name());
					__parameters__[0] = &index;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "CommonAcl", 0, NULL, "get_Item", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Security::AccessControl::GenericAce(__result__);
				}

				void CommonAcl::set_Item(mscorlib::System::Int32 index, mscorlib::System::Security::AccessControl::GenericAce  value)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(index).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = &index;
					__parameters__[1] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "CommonAcl", 0, NULL, "set_Item", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}


				//	Get:IsSynchronized
				mscorlib::System::Boolean  CommonAcl::get_IsSynchronized() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericAcl", 0, NULL, "get_IsSynchronized", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:SyncRoot
				mscorlib::System::Object  CommonAcl::get_SyncRoot() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericAcl", 0, NULL, "get_SyncRoot", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}



			}
		}
	}
}
