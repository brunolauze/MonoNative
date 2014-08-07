#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_IO_FILESTREAM_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_IO_FILESTREAM_H

#include <mscorlib/System/IO/mscorlib_System_IO_Stream.h>
#include <mscorlib/System/IO/mscorlib_System_IO_FileAccess.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/IO/mscorlib_System_IO_FileMode.h>
#include <mscorlib/System/IO/mscorlib_System_IO_FileShare.h>
#include <mscorlib/System/IO/mscorlib_System_IO_FileOptions.h>
#include <mscorlib/Microsoft/Win32/SafeHandles/mscorlib_Microsoft_Win32_SafeHandles_SafeFileHandle.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_FileSystemRights.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_FileSecurity.h>
#include <mscorlib/System/mscorlib_System_IDisposable.h>
#include <mscorlib/System/mscorlib_System_IAsyncResult.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/IO/mscorlib_System_IO_SeekOrigin.h>
#include <mscorlib/System/Threading/Tasks/mscorlib_System_Threading_Tasks_Task_1.h>

namespace mscorlib
{
	namespace System
	{

		class Byte;
		class Type;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{
			namespace Tasks
			{

				class TaskBase;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			class CancellationToken;
			

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
		namespace IO
		{

			class FileStream
				: public mscorlib::System::IO::Stream
				, public virtual mscorlib::System::IDisposable
			{
			public:
				FileStream(mscorlib::System::IntPtr handle, mscorlib::System::IO::FileAccess::__ENUM__ access)
				: mscorlib::System::IO::Stream(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.FileStream"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "IntPtr");
					__parameter_types__[1] = Global::GetType("mscorlib", "System.IO", "FileAccess");
					__parameters__[0] = handle;
					mscorlib::System::Int32 __param_access__ = access;
					__parameters__[1] = &__param_access__;
					__native_object__ = Global::New("mscorlib", "System.IO", "FileStream", 2, __parameter_types__, __parameters__);
				};
			
				FileStream(mscorlib::System::IntPtr handle, mscorlib::System::IO::FileAccess::__ENUM__ access, mscorlib::System::Boolean ownsHandle)
				: mscorlib::System::IO::Stream(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.FileStream"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "IntPtr");
					__parameter_types__[1] = Global::GetType("mscorlib", "System.IO", "FileAccess");
					__parameter_types__[2] = Global::GetType("mscorlib", "System", "Boolean");
					__parameters__[0] = handle;
					mscorlib::System::Int32 __param_access__ = access;
					__parameters__[1] = &__param_access__;
					__parameters__[2] = reinterpret_cast<void*>(ownsHandle);
					__native_object__ = Global::New("mscorlib", "System.IO", "FileStream", 3, __parameter_types__, __parameters__);
				};
			
				FileStream(mscorlib::System::IntPtr handle, mscorlib::System::IO::FileAccess::__ENUM__ access, mscorlib::System::Boolean ownsHandle, mscorlib::System::Int32 bufferSize)
				: mscorlib::System::IO::Stream(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.FileStream"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "IntPtr");
					__parameter_types__[1] = Global::GetType("mscorlib", "System.IO", "FileAccess");
					__parameter_types__[2] = Global::GetType("mscorlib", "System", "Boolean");
					__parameter_types__[3] = Global::GetType("mscorlib", "System", "Int32");
					__parameters__[0] = handle;
					mscorlib::System::Int32 __param_access__ = access;
					__parameters__[1] = &__param_access__;
					__parameters__[2] = reinterpret_cast<void*>(ownsHandle);
					__parameters__[3] = &bufferSize;
					__native_object__ = Global::New("mscorlib", "System.IO", "FileStream", 4, __parameter_types__, __parameters__);
				};
			
				FileStream(mscorlib::System::IntPtr handle, mscorlib::System::IO::FileAccess::__ENUM__ access, mscorlib::System::Boolean ownsHandle, mscorlib::System::Int32 bufferSize, mscorlib::System::Boolean isAsync)
				: mscorlib::System::IO::Stream(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.FileStream"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[5];
					void *__parameters__[5];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "IntPtr");
					__parameter_types__[1] = Global::GetType("mscorlib", "System.IO", "FileAccess");
					__parameter_types__[2] = Global::GetType("mscorlib", "System", "Boolean");
					__parameter_types__[3] = Global::GetType("mscorlib", "System", "Int32");
					__parameter_types__[4] = Global::GetType("mscorlib", "System", "Boolean");
					__parameters__[0] = handle;
					mscorlib::System::Int32 __param_access__ = access;
					__parameters__[1] = &__param_access__;
					__parameters__[2] = reinterpret_cast<void*>(ownsHandle);
					__parameters__[3] = &bufferSize;
					__parameters__[4] = reinterpret_cast<void*>(isAsync);
					__native_object__ = Global::New("mscorlib", "System.IO", "FileStream", 5, __parameter_types__, __parameters__);
				};
			
				FileStream(mscorlib::System::String path, mscorlib::System::IO::FileMode::__ENUM__ mode)
				: mscorlib::System::IO::Stream(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.FileStream"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType("mscorlib", "System.IO", "FileMode");
					__parameters__[0] = (MonoObject*)path;
					mscorlib::System::Int32 __param_mode__ = mode;
					__parameters__[1] = &__param_mode__;
					__native_object__ = Global::New("mscorlib", "System.IO", "FileStream", 2, __parameter_types__, __parameters__);
				};
			
				FileStream(mscorlib::System::String path, mscorlib::System::IO::FileMode::__ENUM__ mode, mscorlib::System::IO::FileAccess::__ENUM__ access)
				: mscorlib::System::IO::Stream(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.FileStream"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType("mscorlib", "System.IO", "FileMode");
					__parameter_types__[2] = Global::GetType("mscorlib", "System.IO", "FileAccess");
					__parameters__[0] = (MonoObject*)path;
					mscorlib::System::Int32 __param_mode__ = mode;
					__parameters__[1] = &__param_mode__;
					mscorlib::System::Int32 __param_access__ = access;
					__parameters__[2] = &__param_access__;
					__native_object__ = Global::New("mscorlib", "System.IO", "FileStream", 3, __parameter_types__, __parameters__);
				};
			
				FileStream(mscorlib::System::String path, mscorlib::System::IO::FileMode::__ENUM__ mode, mscorlib::System::IO::FileAccess::__ENUM__ access, mscorlib::System::IO::FileShare::__ENUM__ share)
				: mscorlib::System::IO::Stream(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.FileStream"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType("mscorlib", "System.IO", "FileMode");
					__parameter_types__[2] = Global::GetType("mscorlib", "System.IO", "FileAccess");
					__parameter_types__[3] = Global::GetType("mscorlib", "System.IO", "FileShare");
					__parameters__[0] = (MonoObject*)path;
					mscorlib::System::Int32 __param_mode__ = mode;
					__parameters__[1] = &__param_mode__;
					mscorlib::System::Int32 __param_access__ = access;
					__parameters__[2] = &__param_access__;
					mscorlib::System::Int32 __param_share__ = share;
					__parameters__[3] = &__param_share__;
					__native_object__ = Global::New("mscorlib", "System.IO", "FileStream", 4, __parameter_types__, __parameters__);
				};
			
				FileStream(mscorlib::System::String path, mscorlib::System::IO::FileMode::__ENUM__ mode, mscorlib::System::IO::FileAccess::__ENUM__ access, mscorlib::System::IO::FileShare::__ENUM__ share, mscorlib::System::Int32 bufferSize)
				: mscorlib::System::IO::Stream(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.FileStream"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[5];
					void *__parameters__[5];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType("mscorlib", "System.IO", "FileMode");
					__parameter_types__[2] = Global::GetType("mscorlib", "System.IO", "FileAccess");
					__parameter_types__[3] = Global::GetType("mscorlib", "System.IO", "FileShare");
					__parameter_types__[4] = Global::GetType("mscorlib", "System", "Int32");
					__parameters__[0] = (MonoObject*)path;
					mscorlib::System::Int32 __param_mode__ = mode;
					__parameters__[1] = &__param_mode__;
					mscorlib::System::Int32 __param_access__ = access;
					__parameters__[2] = &__param_access__;
					mscorlib::System::Int32 __param_share__ = share;
					__parameters__[3] = &__param_share__;
					__parameters__[4] = &bufferSize;
					__native_object__ = Global::New("mscorlib", "System.IO", "FileStream", 5, __parameter_types__, __parameters__);
				};
			
				FileStream(mscorlib::System::String path, mscorlib::System::IO::FileMode::__ENUM__ mode, mscorlib::System::IO::FileAccess::__ENUM__ access, mscorlib::System::IO::FileShare::__ENUM__ share, mscorlib::System::Int32 bufferSize, mscorlib::System::Boolean useAsync)
				: mscorlib::System::IO::Stream(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.FileStream"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[6];
					void *__parameters__[6];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType("mscorlib", "System.IO", "FileMode");
					__parameter_types__[2] = Global::GetType("mscorlib", "System.IO", "FileAccess");
					__parameter_types__[3] = Global::GetType("mscorlib", "System.IO", "FileShare");
					__parameter_types__[4] = Global::GetType("mscorlib", "System", "Int32");
					__parameter_types__[5] = Global::GetType("mscorlib", "System", "Boolean");
					__parameters__[0] = (MonoObject*)path;
					mscorlib::System::Int32 __param_mode__ = mode;
					__parameters__[1] = &__param_mode__;
					mscorlib::System::Int32 __param_access__ = access;
					__parameters__[2] = &__param_access__;
					mscorlib::System::Int32 __param_share__ = share;
					__parameters__[3] = &__param_share__;
					__parameters__[4] = &bufferSize;
					__parameters__[5] = reinterpret_cast<void*>(useAsync);
					__native_object__ = Global::New("mscorlib", "System.IO", "FileStream", 6, __parameter_types__, __parameters__);
				};
			
				FileStream(mscorlib::System::String path, mscorlib::System::IO::FileMode::__ENUM__ mode, mscorlib::System::IO::FileAccess::__ENUM__ access, mscorlib::System::IO::FileShare::__ENUM__ share, mscorlib::System::Int32 bufferSize, mscorlib::System::IO::FileOptions::__ENUM__ options)
				: mscorlib::System::IO::Stream(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.FileStream"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[6];
					void *__parameters__[6];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType("mscorlib", "System.IO", "FileMode");
					__parameter_types__[2] = Global::GetType("mscorlib", "System.IO", "FileAccess");
					__parameter_types__[3] = Global::GetType("mscorlib", "System.IO", "FileShare");
					__parameter_types__[4] = Global::GetType("mscorlib", "System", "Int32");
					__parameter_types__[5] = Global::GetType("mscorlib", "System.IO", "FileOptions");
					__parameters__[0] = (MonoObject*)path;
					mscorlib::System::Int32 __param_mode__ = mode;
					__parameters__[1] = &__param_mode__;
					mscorlib::System::Int32 __param_access__ = access;
					__parameters__[2] = &__param_access__;
					mscorlib::System::Int32 __param_share__ = share;
					__parameters__[3] = &__param_share__;
					__parameters__[4] = &bufferSize;
					mscorlib::System::Int32 __param_options__ = options;
					__parameters__[5] = &__param_options__;
					__native_object__ = Global::New("mscorlib", "System.IO", "FileStream", 6, __parameter_types__, __parameters__);
				};
			
				FileStream(mscorlib::Microsoft::Win32::SafeHandles::SafeFileHandle handle, mscorlib::System::IO::FileAccess::__ENUM__ access)
				: mscorlib::System::IO::Stream(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.FileStream"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "Microsoft.Win32.SafeHandles", "SafeFileHandle");
					__parameter_types__[1] = Global::GetType("mscorlib", "System.IO", "FileAccess");
					__parameters__[0] = (MonoObject*)handle;
					mscorlib::System::Int32 __param_access__ = access;
					__parameters__[1] = &__param_access__;
					__native_object__ = Global::New("mscorlib", "System.IO", "FileStream", 2, __parameter_types__, __parameters__);
				};
			
				FileStream(mscorlib::Microsoft::Win32::SafeHandles::SafeFileHandle handle, mscorlib::System::IO::FileAccess::__ENUM__ access, mscorlib::System::Int32 bufferSize)
				: mscorlib::System::IO::Stream(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.FileStream"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType("mscorlib", "Microsoft.Win32.SafeHandles", "SafeFileHandle");
					__parameter_types__[1] = Global::GetType("mscorlib", "System.IO", "FileAccess");
					__parameter_types__[2] = Global::GetType("mscorlib", "System", "Int32");
					__parameters__[0] = (MonoObject*)handle;
					mscorlib::System::Int32 __param_access__ = access;
					__parameters__[1] = &__param_access__;
					__parameters__[2] = &bufferSize;
					__native_object__ = Global::New("mscorlib", "System.IO", "FileStream", 3, __parameter_types__, __parameters__);
				};
			
				FileStream(mscorlib::Microsoft::Win32::SafeHandles::SafeFileHandle handle, mscorlib::System::IO::FileAccess::__ENUM__ access, mscorlib::System::Int32 bufferSize, mscorlib::System::Boolean isAsync)
				: mscorlib::System::IO::Stream(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.FileStream"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = Global::GetType("mscorlib", "Microsoft.Win32.SafeHandles", "SafeFileHandle");
					__parameter_types__[1] = Global::GetType("mscorlib", "System.IO", "FileAccess");
					__parameter_types__[2] = Global::GetType("mscorlib", "System", "Int32");
					__parameter_types__[3] = Global::GetType("mscorlib", "System", "Boolean");
					__parameters__[0] = (MonoObject*)handle;
					mscorlib::System::Int32 __param_access__ = access;
					__parameters__[1] = &__param_access__;
					__parameters__[2] = &bufferSize;
					__parameters__[3] = reinterpret_cast<void*>(isAsync);
					__native_object__ = Global::New("mscorlib", "System.IO", "FileStream", 4, __parameter_types__, __parameters__);
				};
			
				FileStream(mscorlib::System::String path, mscorlib::System::IO::FileMode::__ENUM__ mode, mscorlib::System::Security::AccessControl::FileSystemRights::__ENUM__ rights, mscorlib::System::IO::FileShare::__ENUM__ share, mscorlib::System::Int32 bufferSize, mscorlib::System::IO::FileOptions::__ENUM__ options)
				: mscorlib::System::IO::Stream(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.FileStream"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[6];
					void *__parameters__[6];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType("mscorlib", "System.IO", "FileMode");
					__parameter_types__[2] = Global::GetType("mscorlib", "System.Security.AccessControl", "FileSystemRights");
					__parameter_types__[3] = Global::GetType("mscorlib", "System.IO", "FileShare");
					__parameter_types__[4] = Global::GetType("mscorlib", "System", "Int32");
					__parameter_types__[5] = Global::GetType("mscorlib", "System.IO", "FileOptions");
					__parameters__[0] = (MonoObject*)path;
					mscorlib::System::Int32 __param_mode__ = mode;
					__parameters__[1] = &__param_mode__;
					mscorlib::System::Int32 __param_rights__ = rights;
					__parameters__[2] = &__param_rights__;
					mscorlib::System::Int32 __param_share__ = share;
					__parameters__[3] = &__param_share__;
					__parameters__[4] = &bufferSize;
					mscorlib::System::Int32 __param_options__ = options;
					__parameters__[5] = &__param_options__;
					__native_object__ = Global::New("mscorlib", "System.IO", "FileStream", 6, __parameter_types__, __parameters__);
				};
			
				FileStream(mscorlib::System::String path, mscorlib::System::IO::FileMode::__ENUM__ mode, mscorlib::System::Security::AccessControl::FileSystemRights::__ENUM__ rights, mscorlib::System::IO::FileShare::__ENUM__ share, mscorlib::System::Int32 bufferSize, mscorlib::System::IO::FileOptions::__ENUM__ options, mscorlib::System::Security::AccessControl::FileSecurity fileSecurity)
				: mscorlib::System::IO::Stream(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.FileStream"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[7];
					void *__parameters__[7];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType("mscorlib", "System.IO", "FileMode");
					__parameter_types__[2] = Global::GetType("mscorlib", "System.Security.AccessControl", "FileSystemRights");
					__parameter_types__[3] = Global::GetType("mscorlib", "System.IO", "FileShare");
					__parameter_types__[4] = Global::GetType("mscorlib", "System", "Int32");
					__parameter_types__[5] = Global::GetType("mscorlib", "System.IO", "FileOptions");
					__parameter_types__[6] = Global::GetType("mscorlib", "System.Security.AccessControl", "FileSecurity");
					__parameters__[0] = (MonoObject*)path;
					mscorlib::System::Int32 __param_mode__ = mode;
					__parameters__[1] = &__param_mode__;
					mscorlib::System::Int32 __param_rights__ = rights;
					__parameters__[2] = &__param_rights__;
					mscorlib::System::Int32 __param_share__ = share;
					__parameters__[3] = &__param_share__;
					__parameters__[4] = &bufferSize;
					mscorlib::System::Int32 __param_options__ = options;
					__parameters__[5] = &__param_options__;
					__parameters__[6] = (MonoObject*)fileSecurity;
					__native_object__ = Global::New("mscorlib", "System.IO", "FileStream", 7, __parameter_types__, __parameters__);
				};
			
				FileStream(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::IO::Stream(nativeTypeInfo)
				, mscorlib::System::IDisposable(NULL)
				{
				};
			
				FileStream(MonoObject *nativeObject)
				: mscorlib::System::IO::Stream(nativeObject)
				, mscorlib::System::IDisposable(nativeObject)
				{
				};
			
				~FileStream()
				{
				};
			

				FileStream & operator=(FileStream &value) { __native_object__ = value.GetNativeObject(); return value; };
				bool operator==(FileStream &value) { return mscorlib::System::Object::Equals(value); };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual mscorlib::System::Int32  ReadByte() override;
				virtual void  WriteByte(mscorlib::System::Byte value) override;
				virtual mscorlib::System::Int32  Read(std::vector<mscorlib::System::Byte*> array, mscorlib::System::Int32 offset, mscorlib::System::Int32 count) override;
				virtual mscorlib::System::IAsyncResult  BeginRead(std::vector<mscorlib::System::Byte*> array, mscorlib::System::Int32 offset, mscorlib::System::Int32 numBytes, mscorlib::Callback<void  (mscorlib::System::IAsyncResult )> userCallback, mscorlib::System::Object stateObject) override;
				virtual mscorlib::System::Int32  EndRead(mscorlib::System::IAsyncResult asyncResult) override;
				virtual void  Write(std::vector<mscorlib::System::Byte*> array, mscorlib::System::Int32 offset, mscorlib::System::Int32 count) override;
				virtual mscorlib::System::IAsyncResult  BeginWrite(std::vector<mscorlib::System::Byte*> array, mscorlib::System::Int32 offset, mscorlib::System::Int32 numBytes, mscorlib::Callback<void  (mscorlib::System::IAsyncResult )> userCallback, mscorlib::System::Object stateObject) override;
				virtual void  EndWrite(mscorlib::System::IAsyncResult asyncResult) override;
				virtual mscorlib::System::Int64  Seek(mscorlib::System::Int64 offset, mscorlib::System::IO::SeekOrigin::__ENUM__ origin) override;
				virtual void  SetLength(mscorlib::System::Int64 value) override;
				virtual void  Flush() override;
				virtual void  Flush(mscorlib::System::Boolean flushToDisk);
				virtual void  Lock(mscorlib::System::Int64 position, mscorlib::System::Int64 length);
				virtual void  Unlock(mscorlib::System::Int64 position, mscorlib::System::Int64 length);
				mscorlib::System::Security::AccessControl::FileSecurity  GetAccessControl();
				void  SetAccessControl(mscorlib::System::Security::AccessControl::FileSecurity fileSecurity);
				virtual mscorlib::System::Threading::Tasks::TaskBase  FlushAsync(mscorlib::System::Threading::CancellationToken cancellationToken) override;
				virtual mscorlib::System::Threading::Tasks::Task<mscorlib::System::Int32>  ReadAsync(std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 offset, mscorlib::System::Int32 count, mscorlib::System::Threading::CancellationToken cancellationToken) override;
				virtual mscorlib::System::Threading::Tasks::TaskBase  WriteAsync(std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 offset, mscorlib::System::Int32 count, mscorlib::System::Threading::CancellationToken cancellationToken) override;
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_CanRead)) mscorlib::System::Boolean  CanRead;
				__declspec(property(get=get_CanWrite)) mscorlib::System::Boolean  CanWrite;
				__declspec(property(get=get_CanSeek)) mscorlib::System::Boolean  CanSeek;
				__declspec(property(get=get_IsAsync)) mscorlib::System::Boolean  IsAsync;
				__declspec(property(get=get_Name)) mscorlib::System::String  Name;
				__declspec(property(get=get_Length)) mscorlib::System::Int64  Length;
				__declspec(property(get=get_Position, put=set_Position)) mscorlib::System::Int64  Position;
				__declspec(property(get=get_Handle)) mscorlib::System::IntPtr  Handle;
				__declspec(property(get=get_SafeFileHandle)) mscorlib::Microsoft::Win32::SafeHandles::SafeFileHandle  SafeFileHandle;
				__declspec(property(get=get_CanTimeout)) mscorlib::System::Boolean  CanTimeout;
				__declspec(property(get=get_ReadTimeout, put=set_ReadTimeout)) mscorlib::System::Int32  ReadTimeout;
				__declspec(property(get=get_WriteTimeout, put=set_WriteTimeout)) mscorlib::System::Int32  WriteTimeout;

				//Get Set Properties Methods
				//	Get:CanRead
				mscorlib::System::Boolean  get_CanRead() const;

				//	Get:CanWrite
				mscorlib::System::Boolean  get_CanWrite() const;

				//	Get:CanSeek
				mscorlib::System::Boolean  get_CanSeek() const;

				//	Get:IsAsync
				mscorlib::System::Boolean  get_IsAsync() const;

				//	Get:Name
				mscorlib::System::String  get_Name() const;

				//	Get:Length
				mscorlib::System::Int64  get_Length() const;

				//	Get/Set:Position
				mscorlib::System::Int64  get_Position() const;
				void set_Position(mscorlib::System::Int64  value);

				//	Get:Handle
				mscorlib::System::IntPtr  get_Handle() const;

				//	Get:SafeFileHandle
				mscorlib::Microsoft::Win32::SafeHandles::SafeFileHandle  get_SafeFileHandle() const;

				//	Get:CanTimeout
				mscorlib::System::Boolean  get_CanTimeout() const;

				//	Get/Set:ReadTimeout
				mscorlib::System::Int32  get_ReadTimeout() const;
				void set_ReadTimeout(mscorlib::System::Int32  value);

				//	Get/Set:WriteTimeout
				mscorlib::System::Int32  get_WriteTimeout() const;
				void set_WriteTimeout(mscorlib::System::Int32  value);

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
