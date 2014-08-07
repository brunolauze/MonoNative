#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_IO_DRIVEINFO_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_IO_DRIVEINFO_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ISerializable.h>
#include <mscorlib/System/IO/mscorlib_System_IO_DriveType.h>

namespace mscorlib
{
	namespace System
	{
		namespace IO
		{

			class DirectoryInfo;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{

		class Type;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace IO
		{

			class DriveInfo
				: public mscorlib::System::Object
				, public virtual mscorlib::System::Runtime::Serialization::ISerializable
			{
			public:
				DriveInfo(mscorlib::System::String driveName)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.DriveInfo"))
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = (MonoObject*)driveName;
					__native_object__ = Global::New("mscorlib", "System.IO", "DriveInfo", 1, __parameter_types__, __parameters__);
				};
			
				DriveInfo(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				{
				};
			
				DriveInfo(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				, mscorlib::System::Runtime::Serialization::ISerializable(nativeObject)
				{
				};
			
				~DriveInfo()
				{
				};
			

				DriveInfo & operator=(DriveInfo &value) { __native_object__ = value.GetNativeObject(); return value; };
				bool operator==(DriveInfo &value) { return mscorlib::System::Object::Equals(value); };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				static std::vector<mscorlib::System::IO::DriveInfo*>  GetDrives();
				virtual mscorlib::System::String  ToString() override;
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_AvailableFreeSpace)) mscorlib::System::Int64  AvailableFreeSpace;
				__declspec(property(get=get_TotalFreeSpace)) mscorlib::System::Int64  TotalFreeSpace;
				__declspec(property(get=get_TotalSize)) mscorlib::System::Int64  TotalSize;
				__declspec(property(get=get_VolumeLabel, put=set_VolumeLabel)) mscorlib::System::String  VolumeLabel;
				__declspec(property(get=get_DriveFormat)) mscorlib::System::String  DriveFormat;
				__declspec(property(get=get_DriveType)) mscorlib::System::IO::DriveType::__ENUM__  DriveType;
				__declspec(property(get=get_Name)) mscorlib::System::String  Name;
				__declspec(property(get=get_RootDirectory)) mscorlib::System::IO::DirectoryInfo  RootDirectory;
				__declspec(property(get=get_IsReady)) mscorlib::System::Boolean  IsReady;

				//Get Set Properties Methods
				//	Get:AvailableFreeSpace
				mscorlib::System::Int64  get_AvailableFreeSpace() const;

				//	Get:TotalFreeSpace
				mscorlib::System::Int64  get_TotalFreeSpace() const;

				//	Get:TotalSize
				mscorlib::System::Int64  get_TotalSize() const;

				//	Get/Set:VolumeLabel
				mscorlib::System::String  get_VolumeLabel() const;
				void set_VolumeLabel(mscorlib::System::String  value);

				//	Get:DriveFormat
				mscorlib::System::String  get_DriveFormat() const;

				//	Get:DriveType
				mscorlib::System::IO::DriveType::__ENUM__  get_DriveType() const;

				//	Get:Name
				mscorlib::System::String  get_Name() const;

				//	Get:RootDirectory
				mscorlib::System::IO::DirectoryInfo  get_RootDirectory() const;

				//	Get:IsReady
				mscorlib::System::Boolean  get_IsReady() const;

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
