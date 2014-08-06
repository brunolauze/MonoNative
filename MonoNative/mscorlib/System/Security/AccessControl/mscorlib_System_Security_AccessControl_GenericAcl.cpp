#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_GenericAcl.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_GenericAce.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
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
				void GenericAcl::CopyTo(std::vector<mscorlib::System::Security::AccessControl::GenericAce*> array, mscorlib::System::Int32 index)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System.Security.AccessControl", "GenericAce")), 1));
						__parameter_types__[1] = Global::GetType(typeid(index).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Security::AccessControl::GenericAce*>(array, typeid(mscorlib::System::Security::AccessControl::GenericAce).name());
						__parameters__[1] = &index;
						Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericAcl", 0, NULL, "CopyTo", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void GenericAcl::GetBinaryForm(std::vector<mscorlib::System::Byte*> binaryForm, mscorlib::System::Int32 offset)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
						__parameter_types__[1] = Global::GetType(typeid(offset).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(binaryForm, typeid(mscorlib::System::Byte).name());
						__parameters__[1] = &offset;
						Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericAcl", 0, NULL, "GetBinaryForm", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Security::AccessControl::AceEnumerator* GenericAcl::GetEnumerator()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericAcl", 0, NULL, "GetEnumerator", __native_object__, 0, NULL, NULL, NULL);
						return new mscorlib::System::Security::AccessControl::AceEnumerator(__result__);
				}

				//Get Set Properties Methods
				//	Get:BinaryLength
				mscorlib::System::Int32  GenericAcl::get_BinaryLength() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericAcl", 0, NULL, "get_BinaryLength", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//	Get:Count
				mscorlib::System::Int32  GenericAcl::get_Count() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericAcl", 0, NULL, "get_Count", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//	Get:IsSynchronized
				mscorlib::System::Boolean  GenericAcl::get_IsSynchronized() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericAcl", 0, NULL, "get_IsSynchronized", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get/Set:Item
				mscorlib::System::Security::AccessControl::GenericAce  GenericAcl::get_Item(mscorlib::System::Int32 index) const
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(index).name());
					__parameters__[0] = &index;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericAcl", 0, NULL, "get_Item", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Security::AccessControl::GenericAce(__result__);
				}

				void GenericAcl::set_Item(mscorlib::System::Int32 index, mscorlib::System::Security::AccessControl::GenericAce  value)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(index).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = &index;
					__parameters__[1] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericAcl", 0, NULL, "set_Item", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}


				//	Get:Revision
				mscorlib::System::Byte  GenericAcl::get_Revision() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericAcl", 0, NULL, "get_Revision", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Byte(__result__);
				}


				//	Get:SyncRoot
				mscorlib::System::Object  GenericAcl::get_SyncRoot() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericAcl", 0, NULL, "get_SyncRoot", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}


					//	Get/Set:AclRevision
				mscorlib::System::Byte GenericAcl::get_AclRevision()
				{
					return Global::GetFieldValue("mscorlib", "System.Security.AccessControl", "GenericAcl", 0, NULL, "AclRevision");
				}

				void GenericAcl::set_AclRevision(mscorlib::System::Byte  value)
				{
					throw;
				}

					//	Get/Set:AclRevisionDS
				mscorlib::System::Byte GenericAcl::get_AclRevisionDS()
				{
					return Global::GetFieldValue("mscorlib", "System.Security.AccessControl", "GenericAcl", 0, NULL, "AclRevisionDS");
				}

				void GenericAcl::set_AclRevisionDS(mscorlib::System::Byte  value)
				{
					throw;
				}

					//	Get/Set:MaxBinaryLength
				mscorlib::System::Int32 GenericAcl::get_MaxBinaryLength()
				{
					return Global::GetFieldInt32Value("mscorlib", "System.Security.AccessControl", "GenericAcl", 0, NULL, "MaxBinaryLength");
				}

				void GenericAcl::set_MaxBinaryLength(mscorlib::System::Int32  value)
				{
					throw;
				}


			}
		}
	}
}
