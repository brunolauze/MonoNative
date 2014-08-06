#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_ApplicationTrustCollection.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_ApplicationTrust.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_ApplicationIdentity.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Policy
			{

				//Public Methods
				mscorlib::System::Int32 ApplicationTrustCollection::Add(mscorlib::System::Security::Policy::ApplicationTrust trust)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(trust).name());
						__parameters__[0] = (MonoObject*)trust;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "ApplicationTrustCollection", 0, NULL, "Add", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				void ApplicationTrustCollection::AddRange(std::vector<mscorlib::System::Security::Policy::ApplicationTrust*> trusts)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System.Security.Policy", "ApplicationTrust")), 1));
						__parameters__[0] = Global::FromArray<mscorlib::System::Security::Policy::ApplicationTrust*>(trusts, typeid(mscorlib::System::Security::Policy::ApplicationTrust).name());
						Global::InvokeMethod("mscorlib", "System.Security.Policy", "ApplicationTrustCollection", 0, NULL, "AddRange", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void ApplicationTrustCollection::AddRange(mscorlib::System::Security::Policy::ApplicationTrustCollection trusts)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(trusts).name());
						__parameters__[0] = (MonoObject*)trusts;
						Global::InvokeMethod("mscorlib", "System.Security.Policy", "ApplicationTrustCollection", 0, NULL, "AddRange", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void ApplicationTrustCollection::Clear()
				{
						Global::InvokeMethod("mscorlib", "System.Security.Policy", "ApplicationTrustCollection", 0, NULL, "Clear", __native_object__, 0, NULL, NULL, NULL);
				}

				void ApplicationTrustCollection::CopyTo(std::vector<mscorlib::System::Security::Policy::ApplicationTrust*> array, mscorlib::System::Int32 index)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System.Security.Policy", "ApplicationTrust")), 1));
						__parameter_types__[1] = Global::GetType(typeid(index).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Security::Policy::ApplicationTrust*>(array, typeid(mscorlib::System::Security::Policy::ApplicationTrust).name());
						__parameters__[1] = &index;
						Global::InvokeMethod("mscorlib", "System.Security.Policy", "ApplicationTrustCollection", 0, NULL, "CopyTo", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Security::Policy::ApplicationTrustCollection ApplicationTrustCollection::Find(mscorlib::System::ApplicationIdentity applicationIdentity, mscorlib::System::Security::Policy::ApplicationVersionMatch::__ENUM__ versionMatch)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(applicationIdentity).name());
						__parameter_types__[1] = Global::GetType(typeid(versionMatch).name());
						__parameters__[0] = (MonoObject*)applicationIdentity;
						mscorlib::System::Int32 __param_versionMatch__ = versionMatch;
						__parameters__[1] = &__param_versionMatch__;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "ApplicationTrustCollection", 0, NULL, "Find", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::Policy::ApplicationTrustCollection(__result__);
				}

				mscorlib::System::Security::Policy::ApplicationTrustEnumerator* ApplicationTrustCollection::GetEnumerator()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "ApplicationTrustCollection", 0, NULL, "GetEnumerator", __native_object__, 0, NULL, NULL, NULL);
						return new mscorlib::System::Security::Policy::ApplicationTrustEnumerator(__result__);
				}

				void ApplicationTrustCollection::Remove(mscorlib::System::Security::Policy::ApplicationTrust trust)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(trust).name());
						__parameters__[0] = (MonoObject*)trust;
						Global::InvokeMethod("mscorlib", "System.Security.Policy", "ApplicationTrustCollection", 0, NULL, "Remove", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void ApplicationTrustCollection::Remove(mscorlib::System::ApplicationIdentity applicationIdentity, mscorlib::System::Security::Policy::ApplicationVersionMatch::__ENUM__ versionMatch)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(applicationIdentity).name());
						__parameter_types__[1] = Global::GetType(typeid(versionMatch).name());
						__parameters__[0] = (MonoObject*)applicationIdentity;
						mscorlib::System::Int32 __param_versionMatch__ = versionMatch;
						__parameters__[1] = &__param_versionMatch__;
						Global::InvokeMethod("mscorlib", "System.Security.Policy", "ApplicationTrustCollection", 0, NULL, "Remove", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void ApplicationTrustCollection::RemoveRange(std::vector<mscorlib::System::Security::Policy::ApplicationTrust*> trusts)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System.Security.Policy", "ApplicationTrust")), 1));
						__parameters__[0] = Global::FromArray<mscorlib::System::Security::Policy::ApplicationTrust*>(trusts, typeid(mscorlib::System::Security::Policy::ApplicationTrust).name());
						Global::InvokeMethod("mscorlib", "System.Security.Policy", "ApplicationTrustCollection", 0, NULL, "RemoveRange", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void ApplicationTrustCollection::RemoveRange(mscorlib::System::Security::Policy::ApplicationTrustCollection trusts)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(trusts).name());
						__parameters__[0] = (MonoObject*)trusts;
						Global::InvokeMethod("mscorlib", "System.Security.Policy", "ApplicationTrustCollection", 0, NULL, "RemoveRange", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				//Get Set Properties Methods
				//	Get:Count
				mscorlib::System::Int32  ApplicationTrustCollection::get_Count() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "ApplicationTrustCollection", 0, NULL, "get_Count", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//	Get:IsSynchronized
				mscorlib::System::Boolean  ApplicationTrustCollection::get_IsSynchronized() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "ApplicationTrustCollection", 0, NULL, "get_IsSynchronized", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:SyncRoot
				mscorlib::System::Object  ApplicationTrustCollection::get_SyncRoot() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "ApplicationTrustCollection", 0, NULL, "get_SyncRoot", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}


				//	Get:Item
				mscorlib::System::Security::Policy::ApplicationTrust  ApplicationTrustCollection::get_Item(mscorlib::System::Int32 index) const
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(index).name());
					__parameters__[0] = &index;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "ApplicationTrustCollection", 0, NULL, "get_Item", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Security::Policy::ApplicationTrust(__result__);
				}


				//	Get:Item
				mscorlib::System::Security::Policy::ApplicationTrust  ApplicationTrustCollection::get_Item(mscorlib::System::String appFullName) const
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(appFullName).name());
					__parameters__[0] = (MonoObject*)appFullName;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "ApplicationTrustCollection", 0, NULL, "get_Item", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Security::Policy::ApplicationTrust(__result__);
				}



			}
		}
	}
}
