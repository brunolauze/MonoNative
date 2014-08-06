#include <mscorlib/System/IO/IsolatedStorage/mscorlib_System_IO_IsolatedStorage_IsolatedStorageSecurityState.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace IO
		{
			namespace IsolatedStorage
			{

				//Public Methods
				void IsolatedStorageSecurityState::EnsureState()
				{
						Global::InvokeMethod("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorageSecurityState", 0, NULL, "EnsureState", __native_object__, 0, NULL, NULL, NULL);
				}

				//Get Set Properties Methods
				//	Get:Options
				mscorlib::System::IO::IsolatedStorage::IsolatedStorageSecurityOptions::__ENUM__  IsolatedStorageSecurityState::get_Options() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorageSecurityState", 0, NULL, "get_Options", __native_object__, 0, NULL, NULL, NULL);
					return static_cast<mscorlib::System::IO::IsolatedStorage::IsolatedStorageSecurityOptions::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
				}


				//	Get/Set:Quota
				mscorlib::System::Int64  IsolatedStorageSecurityState::get_Quota() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorageSecurityState", 0, NULL, "get_Quota", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
				}

				void IsolatedStorageSecurityState::set_Quota(mscorlib::System::Int64  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					Global::InvokeMethod("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorageSecurityState", 0, NULL, "set_Quota", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get:UsedSize
				mscorlib::System::Int64  IsolatedStorageSecurityState::get_UsedSize() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorageSecurityState", 0, NULL, "get_UsedSize", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
				}



			}
		}
	}
}
