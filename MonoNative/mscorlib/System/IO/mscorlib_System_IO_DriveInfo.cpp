#include <mscorlib/System/IO/mscorlib_System_IO_DriveInfo.h>
#include <mscorlib/System/IO/mscorlib_System_IO_DirectoryInfo.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace IO
		{

			//Public Methods
			std::vector<mscorlib::System::IO::DriveInfo*> DriveInfo::GetDrives()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "DriveInfo", 0, NULL, "GetDrives", NullMonoObject, 0, NULL, NULL, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::IO::DriveInfo*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back(new mscorlib::System::IO::DriveInfo (__array_item__));
					}
					return __array_result__;
			}

			mscorlib::System::String DriveInfo::ToString()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "DriveInfo", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
			}

			//Get Set Properties Methods
			//	Get:AvailableFreeSpace
			mscorlib::System::Int64  DriveInfo::get_AvailableFreeSpace() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "DriveInfo", 0, NULL, "get_AvailableFreeSpace", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
			}


			//	Get:TotalFreeSpace
			mscorlib::System::Int64  DriveInfo::get_TotalFreeSpace() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "DriveInfo", 0, NULL, "get_TotalFreeSpace", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
			}


			//	Get:TotalSize
			mscorlib::System::Int64  DriveInfo::get_TotalSize() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "DriveInfo", 0, NULL, "get_TotalSize", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
			}


			//	Get/Set:VolumeLabel
			mscorlib::System::String  DriveInfo::get_VolumeLabel() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "DriveInfo", 0, NULL, "get_VolumeLabel", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}

			void DriveInfo::set_VolumeLabel(mscorlib::System::String  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				Global::InvokeMethod("mscorlib", "System.IO", "DriveInfo", 0, NULL, "set_VolumeLabel", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get:DriveFormat
			mscorlib::System::String  DriveInfo::get_DriveFormat() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "DriveInfo", 0, NULL, "get_DriveFormat", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:DriveType
			mscorlib::System::IO::DriveType::__ENUM__  DriveInfo::get_DriveType() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "DriveInfo", 0, NULL, "get_DriveType", __native_object__, 0, NULL, NULL, NULL);
				return static_cast<mscorlib::System::IO::DriveType::__ENUM__>(*(mscorlib::System::IO::DriveType::__ENUM__*)mono_object_unbox(__result__));
			}


			//	Get:Name
			mscorlib::System::String  DriveInfo::get_Name() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "DriveInfo", 0, NULL, "get_Name", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:RootDirectory
			mscorlib::System::IO::DirectoryInfo  DriveInfo::get_RootDirectory() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "DriveInfo", 0, NULL, "get_RootDirectory", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::IO::DirectoryInfo(__result__);
			}


			//	Get:IsReady
			mscorlib::System::Boolean  DriveInfo::get_IsReady() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "DriveInfo", 0, NULL, "get_IsReady", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}



		}
	}
}
