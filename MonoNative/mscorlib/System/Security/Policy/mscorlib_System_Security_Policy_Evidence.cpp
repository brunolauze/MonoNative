#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_Evidence.h>
#include <mscorlib/System/mscorlib_System_Array.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Policy
			{

				//Public Methods
				void Evidence::AddAssembly(mscorlib::System::Object id)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(id).name());
						__parameters__[0] = (MonoObject*)id;
						Global::InvokeMethod("mscorlib", "System.Security.Policy", "Evidence", 0, NULL, "AddAssembly", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void Evidence::AddHost(mscorlib::System::Object id)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(id).name());
						__parameters__[0] = (MonoObject*)id;
						Global::InvokeMethod("mscorlib", "System.Security.Policy", "Evidence", 0, NULL, "AddHost", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void Evidence::Clear()
				{
						Global::InvokeMethod("mscorlib", "System.Security.Policy", "Evidence", 0, NULL, "Clear", __native_object__, 0, NULL, NULL, NULL);
				}

				void Evidence::CopyTo(mscorlib::System::Array array, mscorlib::System::Int32 index)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(array).name());
						__parameter_types__[1] = Global::GetType(typeid(index).name());
						__parameters__[0] = (MonoObject*)array;
						__parameters__[1] = &index;
						Global::InvokeMethod("mscorlib", "System.Security.Policy", "Evidence", 0, NULL, "CopyTo", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Collections::IEnumerator* Evidence::GetEnumerator()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "Evidence", 0, NULL, "GetEnumerator", __native_object__, 0, NULL, NULL, NULL);
						return new mscorlib::System::Collections::IEnumerator(__result__);
				}

				mscorlib::System::Collections::IEnumerator Evidence::GetAssemblyEnumerator()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "Evidence", 0, NULL, "GetAssemblyEnumerator", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Collections::IEnumerator(__result__);
				}

				mscorlib::System::Collections::IEnumerator Evidence::GetHostEnumerator()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "Evidence", 0, NULL, "GetHostEnumerator", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Collections::IEnumerator(__result__);
				}

				void Evidence::Merge(mscorlib::System::Security::Policy::Evidence evidence)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(evidence).name());
						__parameters__[0] = (MonoObject*)evidence;
						Global::InvokeMethod("mscorlib", "System.Security.Policy", "Evidence", 0, NULL, "Merge", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void Evidence::RemoveType(mscorlib::System::Type t)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(t).name());
						__parameters__[0] = (MonoObject*)t;
						Global::InvokeMethod("mscorlib", "System.Security.Policy", "Evidence", 0, NULL, "RemoveType", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				//Get Set Properties Methods
				//	Get:Count
				mscorlib::System::Int32  Evidence::get_Count() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "Evidence", 0, NULL, "get_Count", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//	Get:IsReadOnly
				mscorlib::System::Boolean  Evidence::get_IsReadOnly() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "Evidence", 0, NULL, "get_IsReadOnly", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsSynchronized
				mscorlib::System::Boolean  Evidence::get_IsSynchronized() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "Evidence", 0, NULL, "get_IsSynchronized", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get/Set:Locked
				mscorlib::System::Boolean  Evidence::get_Locked() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "Evidence", 0, NULL, "get_Locked", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void Evidence::set_Locked(mscorlib::System::Boolean  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Policy", "Evidence", 0, NULL, "set_Locked", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get:SyncRoot
				mscorlib::System::Object  Evidence::get_SyncRoot() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "Evidence", 0, NULL, "get_SyncRoot", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}



			}
		}
	}
}
