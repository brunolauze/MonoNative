#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_RawAcl.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_GenericAce.h>
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
				void RawAcl::GetBinaryForm(std::vector<mscorlib::System::Byte*> binaryForm, mscorlib::System::Int32 offset)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(binaryForm).name()))->eklass);
						__parameter_types__[1] = Global::GetType(typeid(offset).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(binaryForm, typeid(mscorlib::System::Byte).name());
						__parameters__[1] = &offset;
						Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "RawAcl", 0, NULL, "GetBinaryForm", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void RawAcl::InsertAce(mscorlib::System::Int32 index, mscorlib::System::Security::AccessControl::GenericAce ace)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(index).name());
						__parameter_types__[1] = Global::GetType(typeid(ace).name());
						__parameters__[0] = &index;
						__parameters__[1] = (MonoObject*)ace;
						Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "RawAcl", 0, NULL, "InsertAce", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void RawAcl::RemoveAce(mscorlib::System::Int32 index)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(index).name());
						__parameters__[0] = &index;
						Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "RawAcl", 0, NULL, "RemoveAce", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				//Get Set Properties Methods
				//	Get:BinaryLength
				mscorlib::System::Int32  RawAcl::get_BinaryLength()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "RawAcl", 0, NULL, "get_BinaryLength", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//	Get:Count
				mscorlib::System::Int32  RawAcl::get_Count()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "RawAcl", 0, NULL, "get_Count", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//	Get/Set:Item
				mscorlib::System::Security::AccessControl::GenericAce  RawAcl::get_Item(mscorlib::System::Int32 index)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(index).name());
					__parameters__[0] = &index;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "RawAcl", 0, NULL, "get_Item", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Security::AccessControl::GenericAce(__result__);
				}

				void RawAcl::set_Item(mscorlib::System::Int32 index, mscorlib::System::Security::AccessControl::GenericAce  value)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(index).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = &index;
					__parameters__[1] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "RawAcl", 0, NULL, "set_Item", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}


				//	Get:Revision
				mscorlib::System::Byte  RawAcl::get_Revision()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "RawAcl", 0, NULL, "get_Revision", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Byte(__result__);
				}


				//	Get:IsSynchronized
				mscorlib::System::Boolean  RawAcl::get_IsSynchronized()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericAcl", 0, NULL, "get_IsSynchronized", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:SyncRoot
				mscorlib::System::Object  RawAcl::get_SyncRoot()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericAcl", 0, NULL, "get_SyncRoot", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}



			}
		}
	}
}
