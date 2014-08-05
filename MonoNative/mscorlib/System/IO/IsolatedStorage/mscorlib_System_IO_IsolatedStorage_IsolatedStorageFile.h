#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_IO_ISOLATEDSTORAGE_ISOLATEDSTORAGEFILE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_IO_ISOLATEDSTORAGE_ISOLATEDSTORAGEFILE_H

#include <mscorlib/System/IO/IsolatedStorage/mscorlib_System_IO_IsolatedStorage_IsolatedStorage.h>
#include <mscorlib/System/mscorlib_System_IDisposable.h>
#include <mscorlib/System/IO/mscorlib_System_IO_FileMode.h>
#include <mscorlib/System/IO/mscorlib_System_IO_FileAccess.h>
#include <mscorlib/System/IO/mscorlib_System_IO_FileShare.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/IO/IsolatedStorage/mscorlib_System_IO_IsolatedStorage_IsolatedStorageScope.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IEnumerator.h>

namespace mscorlib
{
	namespace System
	{

		class String;
		class DateTimeOffset;
		class Type;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace IO
		{
			namespace IsolatedStorage
			{

				class IsolatedStorageFileStream;
				

			}
		}
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
		namespace Security
		{
			namespace Policy
			{

				class Evidence;
				

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
			namespace IsolatedStorage
			{

				class IsolatedStorageFile
					: public mscorlib::System::IO::IsolatedStorage::IsolatedStorage
					, public virtual mscorlib::System::IDisposable
				{
				public:
					IsolatedStorageFile(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::IO::IsolatedStorage::IsolatedStorage(nativeTypeInfo)
					, mscorlib::System::IDisposable(NULL)
					{
					};
				
					IsolatedStorageFile(MonoObject *nativeObject)
					: mscorlib::System::IO::IsolatedStorage::IsolatedStorage(nativeObject)
					, mscorlib::System::IDisposable(nativeObject)
					{
					};
				
					~IsolatedStorageFile()
					{
					};
				

					IsolatedStorageFile & operator=(IsolatedStorageFile &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					static mscorlib::System::Collections::IEnumerator * GetEnumerator(mscorlib::System::IO::IsolatedStorage::IsolatedStorageScope::__ENUM__ scope);
					static mscorlib::System::IO::IsolatedStorage::IsolatedStorageFile  GetStore(mscorlib::System::IO::IsolatedStorage::IsolatedStorageScope::__ENUM__ scope, mscorlib::System::Security::Policy::Evidence domainEvidence, mscorlib::System::Type domainEvidenceType, mscorlib::System::Security::Policy::Evidence assemblyEvidence, mscorlib::System::Type assemblyEvidenceType);
					static mscorlib::System::IO::IsolatedStorage::IsolatedStorageFile  GetStore(mscorlib::System::IO::IsolatedStorage::IsolatedStorageScope::__ENUM__ scope, mscorlib::System::Object domainIdentity, mscorlib::System::Object assemblyIdentity);
					static mscorlib::System::IO::IsolatedStorage::IsolatedStorageFile  GetStore(mscorlib::System::IO::IsolatedStorage::IsolatedStorageScope::__ENUM__ scope, mscorlib::System::Type domainEvidenceType, mscorlib::System::Type assemblyEvidenceType);
					static mscorlib::System::IO::IsolatedStorage::IsolatedStorageFile  GetStore(mscorlib::System::IO::IsolatedStorage::IsolatedStorageScope::__ENUM__ scope, mscorlib::System::Object applicationIdentity);
					static mscorlib::System::IO::IsolatedStorage::IsolatedStorageFile  GetStore(mscorlib::System::IO::IsolatedStorage::IsolatedStorageScope::__ENUM__ scope, mscorlib::System::Type applicationEvidenceType);
					static mscorlib::System::IO::IsolatedStorage::IsolatedStorageFile  GetMachineStoreForApplication();
					static mscorlib::System::IO::IsolatedStorage::IsolatedStorageFile  GetMachineStoreForAssembly();
					static mscorlib::System::IO::IsolatedStorage::IsolatedStorageFile  GetMachineStoreForDomain();
					static mscorlib::System::IO::IsolatedStorage::IsolatedStorageFile  GetUserStoreForApplication();
					static mscorlib::System::IO::IsolatedStorage::IsolatedStorageFile  GetUserStoreForAssembly();
					static mscorlib::System::IO::IsolatedStorage::IsolatedStorageFile  GetUserStoreForDomain();
					static mscorlib::System::IO::IsolatedStorage::IsolatedStorageFile  GetUserStoreForSite();
					static void  Remove(mscorlib::System::IO::IsolatedStorage::IsolatedStorageScope::__ENUM__ scope);
					void  Close();
					void  CreateDirectory(mscorlib::System::String dir);
					void  CopyFile(mscorlib::System::String sourceFileName, mscorlib::System::String destinationFileName);
					void  CopyFile(mscorlib::System::String sourceFileName, mscorlib::System::String destinationFileName, mscorlib::System::Boolean overwrite);
					mscorlib::System::IO::IsolatedStorage::IsolatedStorageFileStream  CreateFile(mscorlib::System::String path);
					void  DeleteDirectory(mscorlib::System::String dir);
					void  DeleteFile(mscorlib::System::String file);
					virtual void  Dispose();
					mscorlib::System::Boolean  DirectoryExists(mscorlib::System::String path);
					mscorlib::System::Boolean  FileExists(mscorlib::System::String path);
					mscorlib::System::DateTimeOffset  GetCreationTime(mscorlib::System::String path);
					mscorlib::System::DateTimeOffset  GetLastAccessTime(mscorlib::System::String path);
					mscorlib::System::DateTimeOffset  GetLastWriteTime(mscorlib::System::String path);
					std::vector<mscorlib::System::String*>  GetDirectoryNames(mscorlib::System::String searchPattern);
					std::vector<mscorlib::System::String*>  GetDirectoryNames();
					std::vector<mscorlib::System::String*>  GetFileNames(mscorlib::System::String searchPattern);
					std::vector<mscorlib::System::String*>  GetFileNames();
					virtual mscorlib::System::Boolean  IncreaseQuotaTo(mscorlib::System::Int64 newQuotaSize) override;
					void  MoveDirectory(mscorlib::System::String sourceDirectoryName, mscorlib::System::String destinationDirectoryName);
					void  MoveFile(mscorlib::System::String sourceFileName, mscorlib::System::String destinationFileName);
					mscorlib::System::IO::IsolatedStorage::IsolatedStorageFileStream  OpenFile(mscorlib::System::String path, mscorlib::System::IO::FileMode::__ENUM__ mode);
					mscorlib::System::IO::IsolatedStorage::IsolatedStorageFileStream  OpenFile(mscorlib::System::String path, mscorlib::System::IO::FileMode::__ENUM__ mode, mscorlib::System::IO::FileAccess::__ENUM__ access);
					mscorlib::System::IO::IsolatedStorage::IsolatedStorageFileStream  OpenFile(mscorlib::System::String path, mscorlib::System::IO::FileMode::__ENUM__ mode, mscorlib::System::IO::FileAccess::__ENUM__ access, mscorlib::System::IO::FileShare::__ENUM__ share);
					virtual void  Remove() override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_CurrentSize)) mscorlib::System::UInt64  CurrentSize;
					__declspec(property(get=get_MaximumSize)) mscorlib::System::UInt64  MaximumSize;
					__declspec(property(get=get_AvailableFreeSpace)) mscorlib::System::Int64  AvailableFreeSpace;
					__declspec(property(get=get_Quota)) mscorlib::System::Int64  Quota;
					__declspec(property(get=get_UsedSize)) mscorlib::System::Int64  UsedSize;
					__declspec(property(get=get_ApplicationIdentity)) mscorlib::System::Object  ApplicationIdentity;
					__declspec(property(get=get_AssemblyIdentity)) mscorlib::System::Object  AssemblyIdentity;
					__declspec(property(get=get_DomainIdentity)) mscorlib::System::Object  DomainIdentity;
					__declspec(property(get=get_Scope)) mscorlib::System::IO::IsolatedStorage::IsolatedStorageScope::__ENUM__  Scope;

					//Public Static Properties
					static Property<mscorlib::System::Boolean , mscorlib::System::IO::IsolatedStorage::IsolatedStorageFile> IsEnabled;

					//Get Set Properties Methods
					//	Get:CurrentSize
					mscorlib::System::UInt64  get_CurrentSize() const;

					//	Get:MaximumSize
					mscorlib::System::UInt64  get_MaximumSize() const;

					//	Get:AvailableFreeSpace
					mscorlib::System::Int64  get_AvailableFreeSpace() const;

					//	Get:Quota
					mscorlib::System::Int64  get_Quota() const;

					//	Get:UsedSize
					mscorlib::System::Int64  get_UsedSize() const;

					//	Get:ApplicationIdentity
					mscorlib::System::Object  get_ApplicationIdentity() const;

					//	Get:AssemblyIdentity
					mscorlib::System::Object  get_AssemblyIdentity() const;

					//	Get:DomainIdentity
					mscorlib::System::Object  get_DomainIdentity() const;

					//	Get:Scope
					mscorlib::System::IO::IsolatedStorage::IsolatedStorageScope::__ENUM__  get_Scope() const;

					//Get Set Static Properties Methods
					//	Get:IsEnabled
					static mscorlib::System::Boolean  get_IsEnabled();
					static void set_IsEnabled(mscorlib::System::Boolean  value);


				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
