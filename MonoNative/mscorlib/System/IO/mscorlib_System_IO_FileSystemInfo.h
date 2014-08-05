#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_IO_FILESYSTEMINFO_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_IO_FILESYSTEMINFO_H

#include <mscorlib/System/mscorlib_System_MarshalByRefObject.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ISerializable.h>
#include <mscorlib/System/IO/mscorlib_System_IO_FileAttributes.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Serialization
			{

				class SerializationInfo;
				class StreamingContext;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{

		class String;
		class DateTime;
		class Type;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Remoting
			{

				class ObjRef;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace IO
		{

			class FileSystemInfo
				: public mscorlib::System::MarshalByRefObject
				, public virtual mscorlib::System::Runtime::Serialization::ISerializable
			{
			public:
				FileSystemInfo(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::MarshalByRefObject(nativeTypeInfo)
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				{
				};
			
				FileSystemInfo(MonoObject *nativeObject)
				: mscorlib::System::MarshalByRefObject(nativeObject)
				, mscorlib::System::Runtime::Serialization::ISerializable(nativeObject)
				{
				};
			
				~FileSystemInfo()
				{
				};
			

				FileSystemInfo & operator=(FileSystemInfo &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual void  GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context);
				virtual void  Delete();
				void  Refresh();
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_Exists)) mscorlib::System::Boolean  Exists;
				__declspec(property(get=get_Name)) mscorlib::System::String  Name;
				__declspec(property(get=get_FullName)) mscorlib::System::String  FullName;
				__declspec(property(get=get_Extension)) mscorlib::System::String  Extension;
				__declspec(property(get=get_Attributes, put=set_Attributes)) mscorlib::System::IO::FileAttributes::__ENUM__  Attributes;
				__declspec(property(get=get_CreationTime, put=set_CreationTime)) mscorlib::System::DateTime  CreationTime;
				__declspec(property(get=get_CreationTimeUtc, put=set_CreationTimeUtc)) mscorlib::System::DateTime  CreationTimeUtc;
				__declspec(property(get=get_LastAccessTime, put=set_LastAccessTime)) mscorlib::System::DateTime  LastAccessTime;
				__declspec(property(get=get_LastAccessTimeUtc, put=set_LastAccessTimeUtc)) mscorlib::System::DateTime  LastAccessTimeUtc;
				__declspec(property(get=get_LastWriteTime, put=set_LastWriteTime)) mscorlib::System::DateTime  LastWriteTime;
				__declspec(property(get=get_LastWriteTimeUtc, put=set_LastWriteTimeUtc)) mscorlib::System::DateTime  LastWriteTimeUtc;

				//Get Set Properties Methods
				//	Get:Exists
				mscorlib::System::Boolean  get_Exists() const;

				//	Get:Name
				mscorlib::System::String  get_Name() const;

				//	Get:FullName
				mscorlib::System::String  get_FullName() const;

				//	Get:Extension
				mscorlib::System::String  get_Extension() const;

				//	Get/Set:Attributes
				mscorlib::System::IO::FileAttributes::__ENUM__  get_Attributes() const;
				void set_Attributes(mscorlib::System::IO::FileAttributes::__ENUM__  value);

				//	Get/Set:CreationTime
				mscorlib::System::DateTime  get_CreationTime() const;
				void set_CreationTime(mscorlib::System::DateTime  value);

				//	Get/Set:CreationTimeUtc
				mscorlib::System::DateTime  get_CreationTimeUtc() const;
				void set_CreationTimeUtc(mscorlib::System::DateTime  value);

				//	Get/Set:LastAccessTime
				mscorlib::System::DateTime  get_LastAccessTime() const;
				void set_LastAccessTime(mscorlib::System::DateTime  value);

				//	Get/Set:LastAccessTimeUtc
				mscorlib::System::DateTime  get_LastAccessTimeUtc() const;
				void set_LastAccessTimeUtc(mscorlib::System::DateTime  value);

				//	Get/Set:LastWriteTime
				mscorlib::System::DateTime  get_LastWriteTime() const;
				void set_LastWriteTime(mscorlib::System::DateTime  value);

				//	Get/Set:LastWriteTimeUtc
				mscorlib::System::DateTime  get_LastWriteTimeUtc() const;
				void set_LastWriteTimeUtc(mscorlib::System::DateTime  value);

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
