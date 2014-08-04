#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_IdentityReferenceCollection.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Principal
			{

				//Public Methods
				void IdentityReferenceCollection::Add(mscorlib::System::Security::Principal::IdentityReference identity)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(identity).name());
						__parameters__[0] = (MonoObject*)identity;
						Global::InvokeMethod("mscorlib", "System.Security.Principal", "IdentityReferenceCollection", 0, NULL, "Add", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void IdentityReferenceCollection::Clear()
				{
						Global::InvokeMethod("mscorlib", "System.Security.Principal", "IdentityReferenceCollection", 0, NULL, "Clear", __native_object__, 0, NULL, NULL, NULL);
				}

				mscorlib::System::Boolean IdentityReferenceCollection::Contains(mscorlib::System::Security::Principal::IdentityReference identity)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(identity).name());
						__parameters__[0] = (MonoObject*)identity;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Principal", "IdentityReferenceCollection", 0, NULL, "Contains", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void IdentityReferenceCollection::CopyTo(std::vector<mscorlib::System::Security::Principal::IdentityReference*> array, mscorlib::System::Int32 offset)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(array).name()))->eklass);
						__parameter_types__[1] = Global::GetType(typeid(offset).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Security::Principal::IdentityReference*>(array, typeid(mscorlib::System::Security::Principal::IdentityReference).name());
						__parameters__[1] = &offset;
						Global::InvokeMethod("mscorlib", "System.Security.Principal", "IdentityReferenceCollection", 0, NULL, "CopyTo", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Collections::Generic::IEnumerator<mscorlib::System::Security::Principal::IdentityReference>* IdentityReferenceCollection::GetEnumerator()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Principal", "IdentityReferenceCollection", 0, NULL, "GetEnumerator", __native_object__, 0, NULL, NULL, NULL);
						return new mscorlib::System::Collections::Generic::IEnumerator<mscorlib::System::Security::Principal::IdentityReference>(__result__);
				}

				mscorlib::System::Boolean IdentityReferenceCollection::Remove(mscorlib::System::Security::Principal::IdentityReference identity)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(identity).name());
						__parameters__[0] = (MonoObject*)identity;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Principal", "IdentityReferenceCollection", 0, NULL, "Remove", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Security::Principal::IdentityReferenceCollection IdentityReferenceCollection::Translate(mscorlib::System::Type targetType)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(targetType).name());
						__parameters__[0] = (MonoObject*)targetType;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Principal", "IdentityReferenceCollection", 0, NULL, "Translate", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::Principal::IdentityReferenceCollection(__result__);
				}

				mscorlib::System::Security::Principal::IdentityReferenceCollection IdentityReferenceCollection::Translate(mscorlib::System::Type targetType, mscorlib::System::Boolean forceSuccess)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(targetType).name());
						__parameter_types__[1] = Global::GetType(typeid(forceSuccess).name());
						__parameters__[0] = (MonoObject*)targetType;
						__parameters__[1] = reinterpret_cast<void*>(forceSuccess);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Principal", "IdentityReferenceCollection", 0, NULL, "Translate", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::Principal::IdentityReferenceCollection(__result__);
				}

				//Get Set Properties Methods
				//	Get:Count
				mscorlib::System::Int32  IdentityReferenceCollection::get_Count()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Principal", "IdentityReferenceCollection", 0, NULL, "get_Count", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//	Get:IsReadOnly
				mscorlib::System::Boolean  IdentityReferenceCollection::get_IsReadOnly()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Principal", "IdentityReferenceCollection", 0, NULL, "get_IsReadOnly", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get/Set:Item
				mscorlib::System::Security::Principal::IdentityReference  IdentityReferenceCollection::get_Item(mscorlib::System::Int32 index)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(index).name());
					__parameters__[0] = &index;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Principal", "IdentityReferenceCollection", 0, NULL, "get_Item", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Security::Principal::IdentityReference(__result__);
				}

				void IdentityReferenceCollection::set_Item(mscorlib::System::Int32 index, mscorlib::System::Security::Principal::IdentityReference  value)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(index).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = &index;
					__parameters__[1] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Principal", "IdentityReferenceCollection", 0, NULL, "set_Item", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}



			}
		}
	}
}
