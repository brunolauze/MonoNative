#include <mscorlib/System/IO/IsolatedStorage/mscorlib_System_IO_IsolatedStorage_IsolatedStorage.h>
#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_ObjRef.h>
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
				void IsolatedStorage::Remove()
				{
						Global::InvokeMethod("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorage", 0, NULL, "Remove", __native_object__, 0, NULL, NULL, NULL);
				}

				mscorlib::System::Boolean IsolatedStorage::IncreaseQuotaTo(mscorlib::System::Int64 newQuotaSize)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(newQuotaSize).name());
						__parameters__[0] = &newQuotaSize;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorage", 0, NULL, "IncreaseQuotaTo", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				//Get Set Properties Methods
				//	Get:ApplicationIdentity
				mscorlib::System::Object  IsolatedStorage::get_ApplicationIdentity() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorage", 0, NULL, "get_ApplicationIdentity", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}


				//	Get:AssemblyIdentity
				mscorlib::System::Object  IsolatedStorage::get_AssemblyIdentity() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorage", 0, NULL, "get_AssemblyIdentity", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}


				//	Get:CurrentSize
				mscorlib::System::UInt64  IsolatedStorage::get_CurrentSize() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorage", 0, NULL, "get_CurrentSize", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::UInt64*)mono_object_unbox(__result__);
				}


				//	Get:DomainIdentity
				mscorlib::System::Object  IsolatedStorage::get_DomainIdentity() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorage", 0, NULL, "get_DomainIdentity", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}


				//	Get:MaximumSize
				mscorlib::System::UInt64  IsolatedStorage::get_MaximumSize() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorage", 0, NULL, "get_MaximumSize", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::UInt64*)mono_object_unbox(__result__);
				}


				//	Get:Scope
				mscorlib::System::IO::IsolatedStorage::IsolatedStorageScope::__ENUM__  IsolatedStorage::get_Scope() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorage", 0, NULL, "get_Scope", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::IO::IsolatedStorage::IsolatedStorageScope::__ENUM__*)mono_object_unbox(__result__);
				}


				//	Get:AvailableFreeSpace
				mscorlib::System::Int64  IsolatedStorage::get_AvailableFreeSpace() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorage", 0, NULL, "get_AvailableFreeSpace", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
				}


				//	Get:Quota
				mscorlib::System::Int64  IsolatedStorage::get_Quota() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorage", 0, NULL, "get_Quota", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
				}


				//	Get:UsedSize
				mscorlib::System::Int64  IsolatedStorage::get_UsedSize() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorage", 0, NULL, "get_UsedSize", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
				}



			}
		}
	}
}
