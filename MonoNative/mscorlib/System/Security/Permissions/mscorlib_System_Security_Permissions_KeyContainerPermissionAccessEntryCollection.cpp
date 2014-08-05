#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_KeyContainerPermissionAccessEntryCollection.h>
#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_KeyContainerPermissionAccessEntry.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Permissions
			{

				//Public Methods
				mscorlib::System::Int32 KeyContainerPermissionAccessEntryCollection::Add(mscorlib::System::Security::Permissions::KeyContainerPermissionAccessEntry accessEntry)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(accessEntry).name());
						__parameters__[0] = (MonoObject*)accessEntry;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "KeyContainerPermissionAccessEntryCollection", 0, NULL, "Add", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				void KeyContainerPermissionAccessEntryCollection::Clear()
				{
						Global::InvokeMethod("mscorlib", "System.Security.Permissions", "KeyContainerPermissionAccessEntryCollection", 0, NULL, "Clear", __native_object__, 0, NULL, NULL, NULL);
				}

				void KeyContainerPermissionAccessEntryCollection::CopyTo(std::vector<mscorlib::System::Security::Permissions::KeyContainerPermissionAccessEntry*> array, mscorlib::System::Int32 index)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(array).name()))->eklass);
						__parameter_types__[1] = Global::GetType(typeid(index).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Security::Permissions::KeyContainerPermissionAccessEntry*>(array, typeid(mscorlib::System::Security::Permissions::KeyContainerPermissionAccessEntry).name());
						__parameters__[1] = &index;
						Global::InvokeMethod("mscorlib", "System.Security.Permissions", "KeyContainerPermissionAccessEntryCollection", 0, NULL, "CopyTo", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Security::Permissions::KeyContainerPermissionAccessEntryEnumerator* KeyContainerPermissionAccessEntryCollection::GetEnumerator()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "KeyContainerPermissionAccessEntryCollection", 0, NULL, "GetEnumerator", __native_object__, 0, NULL, NULL, NULL);
						return new mscorlib::System::Security::Permissions::KeyContainerPermissionAccessEntryEnumerator(__result__);
				}

				mscorlib::System::Int32 KeyContainerPermissionAccessEntryCollection::IndexOf(mscorlib::System::Security::Permissions::KeyContainerPermissionAccessEntry accessEntry)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(accessEntry).name());
						__parameters__[0] = (MonoObject*)accessEntry;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "KeyContainerPermissionAccessEntryCollection", 0, NULL, "IndexOf", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				void KeyContainerPermissionAccessEntryCollection::Remove(mscorlib::System::Security::Permissions::KeyContainerPermissionAccessEntry accessEntry)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(accessEntry).name());
						__parameters__[0] = (MonoObject*)accessEntry;
						Global::InvokeMethod("mscorlib", "System.Security.Permissions", "KeyContainerPermissionAccessEntryCollection", 0, NULL, "Remove", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				//Get Set Properties Methods
				//	Get:Count
				mscorlib::System::Int32  KeyContainerPermissionAccessEntryCollection::get_Count() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "KeyContainerPermissionAccessEntryCollection", 0, NULL, "get_Count", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//	Get:IsSynchronized
				mscorlib::System::Boolean  KeyContainerPermissionAccessEntryCollection::get_IsSynchronized() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "KeyContainerPermissionAccessEntryCollection", 0, NULL, "get_IsSynchronized", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:Item
				mscorlib::System::Security::Permissions::KeyContainerPermissionAccessEntry  KeyContainerPermissionAccessEntryCollection::get_Item(mscorlib::System::Int32 index) const
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(index).name());
					__parameters__[0] = &index;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "KeyContainerPermissionAccessEntryCollection", 0, NULL, "get_Item", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Security::Permissions::KeyContainerPermissionAccessEntry(__result__);
				}


				//	Get:SyncRoot
				mscorlib::System::Object  KeyContainerPermissionAccessEntryCollection::get_SyncRoot() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "KeyContainerPermissionAccessEntryCollection", 0, NULL, "get_SyncRoot", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}



			}
		}
	}
}
