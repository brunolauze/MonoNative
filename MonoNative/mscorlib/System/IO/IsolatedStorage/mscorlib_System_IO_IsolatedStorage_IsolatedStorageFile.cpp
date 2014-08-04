#include <mscorlib/System/IO/IsolatedStorage/mscorlib_System_IO_IsolatedStorage_IsolatedStorageFile.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/IO/IsolatedStorage/mscorlib_System_IO_IsolatedStorage_IsolatedStorageFileStream.h>
#include <mscorlib/System/mscorlib_System_DateTimeOffset.h>
#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_ObjRef.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_Evidence.h>



namespace mscorlib
{
	namespace System
	{
		namespace IO
		{
			namespace IsolatedStorage
			{

				//Public Methods
				mscorlib::System::Collections::IEnumerator* IsolatedStorageFile::GetEnumerator(mscorlib::System::IO::IsolatedStorage::IsolatedStorageScope::__ENUM__ scope)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(scope).name());
						__parameters__[0] = reinterpret_cast<void*>(scope);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorageFile", 0, NULL, "GetEnumerator", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return new mscorlib::System::Collections::IEnumerator(__result__);
				}

				mscorlib::System::IO::IsolatedStorage::IsolatedStorageFile IsolatedStorageFile::GetStore(mscorlib::System::IO::IsolatedStorage::IsolatedStorageScope::__ENUM__ scope, mscorlib::System::Security::Policy::Evidence domainEvidence, mscorlib::System::Type domainEvidenceType, mscorlib::System::Security::Policy::Evidence assemblyEvidence, mscorlib::System::Type assemblyEvidenceType)
				{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType(typeid(scope).name());
						__parameter_types__[1] = Global::GetType(typeid(domainEvidence).name());
						__parameter_types__[2] = Global::GetType(typeid(domainEvidenceType).name());
						__parameter_types__[3] = Global::GetType(typeid(assemblyEvidence).name());
						__parameter_types__[4] = Global::GetType(typeid(assemblyEvidenceType).name());
						__parameters__[0] = reinterpret_cast<void*>(scope);
						__parameters__[1] = (MonoObject*)domainEvidence;
						__parameters__[2] = (MonoObject*)domainEvidenceType;
						__parameters__[3] = (MonoObject*)assemblyEvidence;
						__parameters__[4] = (MonoObject*)assemblyEvidenceType;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorageFile", 0, NULL, "GetStore", NullMonoObject, 5, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::IO::IsolatedStorage::IsolatedStorageFile(__result__);
				}

				mscorlib::System::IO::IsolatedStorage::IsolatedStorageFile IsolatedStorageFile::GetStore(mscorlib::System::IO::IsolatedStorage::IsolatedStorageScope::__ENUM__ scope, mscorlib::System::Object domainIdentity, mscorlib::System::Object assemblyIdentity)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(scope).name());
						__parameter_types__[1] = Global::GetType(typeid(domainIdentity).name());
						__parameter_types__[2] = Global::GetType(typeid(assemblyIdentity).name());
						__parameters__[0] = reinterpret_cast<void*>(scope);
						__parameters__[1] = (MonoObject*)domainIdentity;
						__parameters__[2] = (MonoObject*)assemblyIdentity;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorageFile", 0, NULL, "GetStore", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::IO::IsolatedStorage::IsolatedStorageFile(__result__);
				}

				mscorlib::System::IO::IsolatedStorage::IsolatedStorageFile IsolatedStorageFile::GetStore(mscorlib::System::IO::IsolatedStorage::IsolatedStorageScope::__ENUM__ scope, mscorlib::System::Type domainEvidenceType, mscorlib::System::Type assemblyEvidenceType)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(scope).name());
						__parameter_types__[1] = Global::GetType(typeid(domainEvidenceType).name());
						__parameter_types__[2] = Global::GetType(typeid(assemblyEvidenceType).name());
						__parameters__[0] = reinterpret_cast<void*>(scope);
						__parameters__[1] = (MonoObject*)domainEvidenceType;
						__parameters__[2] = (MonoObject*)assemblyEvidenceType;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorageFile", 0, NULL, "GetStore", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::IO::IsolatedStorage::IsolatedStorageFile(__result__);
				}

				mscorlib::System::IO::IsolatedStorage::IsolatedStorageFile IsolatedStorageFile::GetStore(mscorlib::System::IO::IsolatedStorage::IsolatedStorageScope::__ENUM__ scope, mscorlib::System::Object applicationIdentity)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(scope).name());
						__parameter_types__[1] = Global::GetType(typeid(applicationIdentity).name());
						__parameters__[0] = reinterpret_cast<void*>(scope);
						__parameters__[1] = (MonoObject*)applicationIdentity;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorageFile", 0, NULL, "GetStore", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::IO::IsolatedStorage::IsolatedStorageFile(__result__);
				}

				mscorlib::System::IO::IsolatedStorage::IsolatedStorageFile IsolatedStorageFile::GetStore(mscorlib::System::IO::IsolatedStorage::IsolatedStorageScope::__ENUM__ scope, mscorlib::System::Type applicationEvidenceType)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(scope).name());
						__parameter_types__[1] = Global::GetType(typeid(applicationEvidenceType).name());
						__parameters__[0] = reinterpret_cast<void*>(scope);
						__parameters__[1] = (MonoObject*)applicationEvidenceType;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorageFile", 0, NULL, "GetStore", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::IO::IsolatedStorage::IsolatedStorageFile(__result__);
				}

				mscorlib::System::IO::IsolatedStorage::IsolatedStorageFile IsolatedStorageFile::GetMachineStoreForApplication()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorageFile", 0, NULL, "GetMachineStoreForApplication", NullMonoObject, 0, NULL, NULL, NULL);
						return mscorlib::System::IO::IsolatedStorage::IsolatedStorageFile(__result__);
				}

				mscorlib::System::IO::IsolatedStorage::IsolatedStorageFile IsolatedStorageFile::GetMachineStoreForAssembly()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorageFile", 0, NULL, "GetMachineStoreForAssembly", NullMonoObject, 0, NULL, NULL, NULL);
						return mscorlib::System::IO::IsolatedStorage::IsolatedStorageFile(__result__);
				}

				mscorlib::System::IO::IsolatedStorage::IsolatedStorageFile IsolatedStorageFile::GetMachineStoreForDomain()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorageFile", 0, NULL, "GetMachineStoreForDomain", NullMonoObject, 0, NULL, NULL, NULL);
						return mscorlib::System::IO::IsolatedStorage::IsolatedStorageFile(__result__);
				}

				mscorlib::System::IO::IsolatedStorage::IsolatedStorageFile IsolatedStorageFile::GetUserStoreForApplication()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorageFile", 0, NULL, "GetUserStoreForApplication", NullMonoObject, 0, NULL, NULL, NULL);
						return mscorlib::System::IO::IsolatedStorage::IsolatedStorageFile(__result__);
				}

				mscorlib::System::IO::IsolatedStorage::IsolatedStorageFile IsolatedStorageFile::GetUserStoreForAssembly()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorageFile", 0, NULL, "GetUserStoreForAssembly", NullMonoObject, 0, NULL, NULL, NULL);
						return mscorlib::System::IO::IsolatedStorage::IsolatedStorageFile(__result__);
				}

				mscorlib::System::IO::IsolatedStorage::IsolatedStorageFile IsolatedStorageFile::GetUserStoreForDomain()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorageFile", 0, NULL, "GetUserStoreForDomain", NullMonoObject, 0, NULL, NULL, NULL);
						return mscorlib::System::IO::IsolatedStorage::IsolatedStorageFile(__result__);
				}

				mscorlib::System::IO::IsolatedStorage::IsolatedStorageFile IsolatedStorageFile::GetUserStoreForSite()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorageFile", 0, NULL, "GetUserStoreForSite", NullMonoObject, 0, NULL, NULL, NULL);
						return mscorlib::System::IO::IsolatedStorage::IsolatedStorageFile(__result__);
				}

				void IsolatedStorageFile::Remove(mscorlib::System::IO::IsolatedStorage::IsolatedStorageScope::__ENUM__ scope)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(scope).name());
						__parameters__[0] = reinterpret_cast<void*>(scope);
						Global::InvokeMethod("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorageFile", 0, NULL, "Remove", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				}

				void IsolatedStorageFile::Close()
				{
						Global::InvokeMethod("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorageFile", 0, NULL, "Close", __native_object__, 0, NULL, NULL, NULL);
				}

				void IsolatedStorageFile::CreateDirectory(mscorlib::System::String dir)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(dir).name());
						__parameters__[0] = (MonoObject*)dir;
						Global::InvokeMethod("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorageFile", 0, NULL, "CreateDirectory", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void IsolatedStorageFile::CopyFile(mscorlib::System::String sourceFileName, mscorlib::System::String destinationFileName)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(sourceFileName).name());
						__parameter_types__[1] = Global::GetType(typeid(destinationFileName).name());
						__parameters__[0] = (MonoObject*)sourceFileName;
						__parameters__[1] = (MonoObject*)destinationFileName;
						Global::InvokeMethod("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorageFile", 0, NULL, "CopyFile", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void IsolatedStorageFile::CopyFile(mscorlib::System::String sourceFileName, mscorlib::System::String destinationFileName, mscorlib::System::Boolean overwrite)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(sourceFileName).name());
						__parameter_types__[1] = Global::GetType(typeid(destinationFileName).name());
						__parameter_types__[2] = Global::GetType(typeid(overwrite).name());
						__parameters__[0] = (MonoObject*)sourceFileName;
						__parameters__[1] = (MonoObject*)destinationFileName;
						__parameters__[2] = reinterpret_cast<void*>(overwrite);
						Global::InvokeMethod("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorageFile", 0, NULL, "CopyFile", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::IO::IsolatedStorage::IsolatedStorageFileStream IsolatedStorageFile::CreateFile(mscorlib::System::String path)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(path).name());
						__parameters__[0] = (MonoObject*)path;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorageFile", 0, NULL, "CreateFile", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::IO::IsolatedStorage::IsolatedStorageFileStream(__result__);
				}

				void IsolatedStorageFile::DeleteDirectory(mscorlib::System::String dir)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(dir).name());
						__parameters__[0] = (MonoObject*)dir;
						Global::InvokeMethod("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorageFile", 0, NULL, "DeleteDirectory", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void IsolatedStorageFile::DeleteFile(mscorlib::System::String file)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(file).name());
						__parameters__[0] = (MonoObject*)file;
						Global::InvokeMethod("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorageFile", 0, NULL, "DeleteFile", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void IsolatedStorageFile::Dispose()
				{
						Global::InvokeMethod("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorageFile", 0, NULL, "Dispose", __native_object__, 0, NULL, NULL, NULL);
				}

				mscorlib::System::Boolean IsolatedStorageFile::DirectoryExists(mscorlib::System::String path)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(path).name());
						__parameters__[0] = (MonoObject*)path;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorageFile", 0, NULL, "DirectoryExists", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Boolean IsolatedStorageFile::FileExists(mscorlib::System::String path)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(path).name());
						__parameters__[0] = (MonoObject*)path;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorageFile", 0, NULL, "FileExists", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::DateTimeOffset IsolatedStorageFile::GetCreationTime(mscorlib::System::String path)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(path).name());
						__parameters__[0] = (MonoObject*)path;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorageFile", 0, NULL, "GetCreationTime", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::DateTimeOffset(__result__);
				}

				mscorlib::System::DateTimeOffset IsolatedStorageFile::GetLastAccessTime(mscorlib::System::String path)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(path).name());
						__parameters__[0] = (MonoObject*)path;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorageFile", 0, NULL, "GetLastAccessTime", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::DateTimeOffset(__result__);
				}

				mscorlib::System::DateTimeOffset IsolatedStorageFile::GetLastWriteTime(mscorlib::System::String path)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(path).name());
						__parameters__[0] = (MonoObject*)path;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorageFile", 0, NULL, "GetLastWriteTime", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::DateTimeOffset(__result__);
				}

				std::vector<mscorlib::System::String*> IsolatedStorageFile::GetDirectoryNames(mscorlib::System::String searchPattern)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(searchPattern).name());
						__parameters__[0] = (MonoObject*)searchPattern;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorageFile", 0, NULL, "GetDirectoryNames", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						MonoArray *__array_ptr__ = (MonoArray*)__result__;
						uintptr_t __array_length__ = mono_array_length(__array_ptr__);
						std::vector<mscorlib::System::String*>  __array_result__(__array_length__);
						for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
						{
							MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
							__array_result__.push_back(new mscorlib::System::String (__array_item__));
						}
						return __array_result__;
				}

				std::vector<mscorlib::System::String*> IsolatedStorageFile::GetDirectoryNames()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorageFile", 0, NULL, "GetDirectoryNames", __native_object__, 0, NULL, NULL, NULL);
						MonoArray *__array_ptr__ = (MonoArray*)__result__;
						uintptr_t __array_length__ = mono_array_length(__array_ptr__);
						std::vector<mscorlib::System::String*>  __array_result__(__array_length__);
						for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
						{
							MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
							__array_result__.push_back(new mscorlib::System::String (__array_item__));
						}
						return __array_result__;
				}

				std::vector<mscorlib::System::String*> IsolatedStorageFile::GetFileNames(mscorlib::System::String searchPattern)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(searchPattern).name());
						__parameters__[0] = (MonoObject*)searchPattern;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorageFile", 0, NULL, "GetFileNames", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						MonoArray *__array_ptr__ = (MonoArray*)__result__;
						uintptr_t __array_length__ = mono_array_length(__array_ptr__);
						std::vector<mscorlib::System::String*>  __array_result__(__array_length__);
						for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
						{
							MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
							__array_result__.push_back(new mscorlib::System::String (__array_item__));
						}
						return __array_result__;
				}

				std::vector<mscorlib::System::String*> IsolatedStorageFile::GetFileNames()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorageFile", 0, NULL, "GetFileNames", __native_object__, 0, NULL, NULL, NULL);
						MonoArray *__array_ptr__ = (MonoArray*)__result__;
						uintptr_t __array_length__ = mono_array_length(__array_ptr__);
						std::vector<mscorlib::System::String*>  __array_result__(__array_length__);
						for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
						{
							MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
							__array_result__.push_back(new mscorlib::System::String (__array_item__));
						}
						return __array_result__;
				}

				mscorlib::System::Boolean IsolatedStorageFile::IncreaseQuotaTo(mscorlib::System::Int64 newQuotaSize)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(newQuotaSize).name());
						__parameters__[0] = &newQuotaSize;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorageFile", 0, NULL, "IncreaseQuotaTo", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void IsolatedStorageFile::MoveDirectory(mscorlib::System::String sourceDirectoryName, mscorlib::System::String destinationDirectoryName)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(sourceDirectoryName).name());
						__parameter_types__[1] = Global::GetType(typeid(destinationDirectoryName).name());
						__parameters__[0] = (MonoObject*)sourceDirectoryName;
						__parameters__[1] = (MonoObject*)destinationDirectoryName;
						Global::InvokeMethod("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorageFile", 0, NULL, "MoveDirectory", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void IsolatedStorageFile::MoveFile(mscorlib::System::String sourceFileName, mscorlib::System::String destinationFileName)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(sourceFileName).name());
						__parameter_types__[1] = Global::GetType(typeid(destinationFileName).name());
						__parameters__[0] = (MonoObject*)sourceFileName;
						__parameters__[1] = (MonoObject*)destinationFileName;
						Global::InvokeMethod("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorageFile", 0, NULL, "MoveFile", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::IO::IsolatedStorage::IsolatedStorageFileStream IsolatedStorageFile::OpenFile(mscorlib::System::String path, mscorlib::System::IO::FileMode::__ENUM__ mode)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(path).name());
						__parameter_types__[1] = Global::GetType(typeid(mode).name());
						__parameters__[0] = (MonoObject*)path;
						__parameters__[1] = reinterpret_cast<void*>(mode);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorageFile", 0, NULL, "OpenFile", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::IO::IsolatedStorage::IsolatedStorageFileStream(__result__);
				}

				mscorlib::System::IO::IsolatedStorage::IsolatedStorageFileStream IsolatedStorageFile::OpenFile(mscorlib::System::String path, mscorlib::System::IO::FileMode::__ENUM__ mode, mscorlib::System::IO::FileAccess::__ENUM__ access)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(path).name());
						__parameter_types__[1] = Global::GetType(typeid(mode).name());
						__parameter_types__[2] = Global::GetType(typeid(access).name());
						__parameters__[0] = (MonoObject*)path;
						__parameters__[1] = reinterpret_cast<void*>(mode);
						__parameters__[2] = reinterpret_cast<void*>(access);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorageFile", 0, NULL, "OpenFile", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::IO::IsolatedStorage::IsolatedStorageFileStream(__result__);
				}

				mscorlib::System::IO::IsolatedStorage::IsolatedStorageFileStream IsolatedStorageFile::OpenFile(mscorlib::System::String path, mscorlib::System::IO::FileMode::__ENUM__ mode, mscorlib::System::IO::FileAccess::__ENUM__ access, mscorlib::System::IO::FileShare::__ENUM__ share)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType(typeid(path).name());
						__parameter_types__[1] = Global::GetType(typeid(mode).name());
						__parameter_types__[2] = Global::GetType(typeid(access).name());
						__parameter_types__[3] = Global::GetType(typeid(share).name());
						__parameters__[0] = (MonoObject*)path;
						__parameters__[1] = reinterpret_cast<void*>(mode);
						__parameters__[2] = reinterpret_cast<void*>(access);
						__parameters__[3] = reinterpret_cast<void*>(share);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorageFile", 0, NULL, "OpenFile", __native_object__, 4, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::IO::IsolatedStorage::IsolatedStorageFileStream(__result__);
				}

				void IsolatedStorageFile::Remove()
				{
						Global::InvokeMethod("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorageFile", 0, NULL, "Remove", __native_object__, 0, NULL, NULL, NULL);
				}

				//Get Set Properties Methods
				//	Get:CurrentSize
				mscorlib::System::UInt64  IsolatedStorageFile::get_CurrentSize()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorageFile", 0, NULL, "get_CurrentSize", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::UInt64*)mono_object_unbox(__result__);
				}


				//	Get:MaximumSize
				mscorlib::System::UInt64  IsolatedStorageFile::get_MaximumSize()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorageFile", 0, NULL, "get_MaximumSize", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::UInt64*)mono_object_unbox(__result__);
				}


				//	Get:AvailableFreeSpace
				mscorlib::System::Int64  IsolatedStorageFile::get_AvailableFreeSpace()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorageFile", 0, NULL, "get_AvailableFreeSpace", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
				}


				//	Get:Quota
				mscorlib::System::Int64  IsolatedStorageFile::get_Quota()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorageFile", 0, NULL, "get_Quota", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
				}


				//	Get:UsedSize
				mscorlib::System::Int64  IsolatedStorageFile::get_UsedSize()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorageFile", 0, NULL, "get_UsedSize", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
				}


				//	Get:ApplicationIdentity
				mscorlib::System::Object  IsolatedStorageFile::get_ApplicationIdentity()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorage", 0, NULL, "get_ApplicationIdentity", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}


				//	Get:AssemblyIdentity
				mscorlib::System::Object  IsolatedStorageFile::get_AssemblyIdentity()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorage", 0, NULL, "get_AssemblyIdentity", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}


				//	Get:DomainIdentity
				mscorlib::System::Object  IsolatedStorageFile::get_DomainIdentity()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorage", 0, NULL, "get_DomainIdentity", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}


				//	Get:Scope
				mscorlib::System::IO::IsolatedStorage::IsolatedStorageScope::__ENUM__  IsolatedStorageFile::get_Scope()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorage", 0, NULL, "get_Scope", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::IO::IsolatedStorage::IsolatedStorageScope::__ENUM__*)mono_object_unbox(__result__);
				}


				//Get Set Static Properties Methods
				//	Get:IsEnabled
				mscorlib::System::Boolean  IsolatedStorageFile::get_IsEnabled()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorageFile", 0, NULL, "get_IsEnabled", NullMonoObject, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}




			}
		}
	}
}
