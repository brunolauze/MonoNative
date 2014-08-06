#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_IO_ISOLATEDSTORAGE_ISOLATEDSTORAGEFILESTREAM_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_IO_ISOLATEDSTORAGE_ISOLATEDSTORAGEFILESTREAM_H

#include <mscorlib/System/IO/mscorlib_System_IO_FileStream.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/IO/mscorlib_System_IO_FileMode.h>
#include <mscorlib/System/IO/mscorlib_System_IO_FileAccess.h>
#include <mscorlib/System/IO/mscorlib_System_IO_FileShare.h>
#include <mscorlib/System/IO/IsolatedStorage/mscorlib_System_IO_IsolatedStorage_IsolatedStorageFile.h>
#include <mscorlib/System/mscorlib_System_IDisposable.h>
#include <mscorlib/System/mscorlib_System_IAsyncResult.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/IO/mscorlib_System_IO_SeekOrigin.h>
#include <mscorlib/System/Threading/Tasks/mscorlib_System_Threading_Tasks_Task_1.h>

namespace mscorlib
{
	namespace Microsoft
	{
		namespace Win32
		{
			namespace SafeHandles
			{

				class SafeFileHandle;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{

		class IntPtr;
		class Byte;
		class Type;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace AccessControl
			{

				class FileSecurity;
				

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
		namespace IO
		{

			class Stream;
			

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
			namespace IsolatedStorage
			{

				class IsolatedStorageFileStream
					: public mscorlib::System::IO::FileStream
					, public virtual mscorlib::System::IDisposable
				{
				public:
					IsolatedStorageFileStream(mscorlib::System::String path, mscorlib::System::IO::FileMode::__ENUM__ mode)
					: mscorlib::System::IO::FileStream(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.IsolatedStorage.IsolatedStorageFileStream"))
					, mscorlib::System::IDisposable(NULL)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType("mscorlib", "System.IO", "FileMode");
						__parameters__[0] = (MonoObject*)path;
						mscorlib::System::Int32 __param_mode__ = mode;
						__parameters__[1] = &__param_mode__;
						__native_object__ = Global::New("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorageFileStream", 2, __parameter_types__, __parameters__);
					};
				
					IsolatedStorageFileStream(mscorlib::System::String path, mscorlib::System::IO::FileMode::__ENUM__ mode, mscorlib::System::IO::FileAccess::__ENUM__ access)
					: mscorlib::System::IO::FileStream(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.IsolatedStorage.IsolatedStorageFileStream"))
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
						__native_object__ = Global::New("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorageFileStream", 3, __parameter_types__, __parameters__);
					};
				
					IsolatedStorageFileStream(mscorlib::System::String path, mscorlib::System::IO::FileMode::__ENUM__ mode, mscorlib::System::IO::FileAccess::__ENUM__ access, mscorlib::System::IO::FileShare::__ENUM__ share)
					: mscorlib::System::IO::FileStream(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.IsolatedStorage.IsolatedStorageFileStream"))
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
						__native_object__ = Global::New("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorageFileStream", 4, __parameter_types__, __parameters__);
					};
				
					IsolatedStorageFileStream(mscorlib::System::String path, mscorlib::System::IO::FileMode::__ENUM__ mode, mscorlib::System::IO::FileAccess::__ENUM__ access, mscorlib::System::IO::FileShare::__ENUM__ share, mscorlib::System::Int32 bufferSize)
					: mscorlib::System::IO::FileStream(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.IsolatedStorage.IsolatedStorageFileStream"))
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
						__native_object__ = Global::New("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorageFileStream", 5, __parameter_types__, __parameters__);
					};
				
					IsolatedStorageFileStream(mscorlib::System::String path, mscorlib::System::IO::FileMode::__ENUM__ mode, mscorlib::System::IO::FileAccess::__ENUM__ access, mscorlib::System::IO::FileShare::__ENUM__ share, mscorlib::System::Int32 bufferSize, mscorlib::System::IO::IsolatedStorage::IsolatedStorageFile isf)
					: mscorlib::System::IO::FileStream(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.IsolatedStorage.IsolatedStorageFileStream"))
					, mscorlib::System::IDisposable(NULL)
					{
						MonoType *__parameter_types__[6];
						void *__parameters__[6];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType("mscorlib", "System.IO", "FileMode");
						__parameter_types__[2] = Global::GetType("mscorlib", "System.IO", "FileAccess");
						__parameter_types__[3] = Global::GetType("mscorlib", "System.IO", "FileShare");
						__parameter_types__[4] = Global::GetType("mscorlib", "System", "Int32");
						__parameter_types__[5] = Global::GetType("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorageFile");
						__parameters__[0] = (MonoObject*)path;
						mscorlib::System::Int32 __param_mode__ = mode;
						__parameters__[1] = &__param_mode__;
						mscorlib::System::Int32 __param_access__ = access;
						__parameters__[2] = &__param_access__;
						mscorlib::System::Int32 __param_share__ = share;
						__parameters__[3] = &__param_share__;
						__parameters__[4] = &bufferSize;
						__parameters__[5] = (MonoObject*)isf;
						__native_object__ = Global::New("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorageFileStream", 6, __parameter_types__, __parameters__);
					};
				
					IsolatedStorageFileStream(mscorlib::System::String path, mscorlib::System::IO::FileMode::__ENUM__ mode, mscorlib::System::IO::FileAccess::__ENUM__ access, mscorlib::System::IO::FileShare::__ENUM__ share, mscorlib::System::IO::IsolatedStorage::IsolatedStorageFile isf)
					: mscorlib::System::IO::FileStream(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.IsolatedStorage.IsolatedStorageFileStream"))
					, mscorlib::System::IDisposable(NULL)
					{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType("mscorlib", "System.IO", "FileMode");
						__parameter_types__[2] = Global::GetType("mscorlib", "System.IO", "FileAccess");
						__parameter_types__[3] = Global::GetType("mscorlib", "System.IO", "FileShare");
						__parameter_types__[4] = Global::GetType("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorageFile");
						__parameters__[0] = (MonoObject*)path;
						mscorlib::System::Int32 __param_mode__ = mode;
						__parameters__[1] = &__param_mode__;
						mscorlib::System::Int32 __param_access__ = access;
						__parameters__[2] = &__param_access__;
						mscorlib::System::Int32 __param_share__ = share;
						__parameters__[3] = &__param_share__;
						__parameters__[4] = (MonoObject*)isf;
						__native_object__ = Global::New("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorageFileStream", 5, __parameter_types__, __parameters__);
					};
				
					IsolatedStorageFileStream(mscorlib::System::String path, mscorlib::System::IO::FileMode::__ENUM__ mode, mscorlib::System::IO::FileAccess::__ENUM__ access, mscorlib::System::IO::IsolatedStorage::IsolatedStorageFile isf)
					: mscorlib::System::IO::FileStream(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.IsolatedStorage.IsolatedStorageFileStream"))
					, mscorlib::System::IDisposable(NULL)
					{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType("mscorlib", "System.IO", "FileMode");
						__parameter_types__[2] = Global::GetType("mscorlib", "System.IO", "FileAccess");
						__parameter_types__[3] = Global::GetType("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorageFile");
						__parameters__[0] = (MonoObject*)path;
						mscorlib::System::Int32 __param_mode__ = mode;
						__parameters__[1] = &__param_mode__;
						mscorlib::System::Int32 __param_access__ = access;
						__parameters__[2] = &__param_access__;
						__parameters__[3] = (MonoObject*)isf;
						__native_object__ = Global::New("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorageFileStream", 4, __parameter_types__, __parameters__);
					};
				
					IsolatedStorageFileStream(mscorlib::System::String path, mscorlib::System::IO::FileMode::__ENUM__ mode, mscorlib::System::IO::IsolatedStorage::IsolatedStorageFile isf)
					: mscorlib::System::IO::FileStream(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.IsolatedStorage.IsolatedStorageFileStream"))
					, mscorlib::System::IDisposable(NULL)
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType("mscorlib", "System.IO", "FileMode");
						__parameter_types__[2] = Global::GetType("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorageFile");
						__parameters__[0] = (MonoObject*)path;
						mscorlib::System::Int32 __param_mode__ = mode;
						__parameters__[1] = &__param_mode__;
						__parameters__[2] = (MonoObject*)isf;
						__native_object__ = Global::New("mscorlib", "System.IO.IsolatedStorage", "IsolatedStorageFileStream", 3, __parameter_types__, __parameters__);
					};
				
					IsolatedStorageFileStream(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::IO::FileStream(nativeTypeInfo)
					, mscorlib::System::IDisposable(NULL)
					{
					};
				
					IsolatedStorageFileStream(MonoObject *nativeObject)
					: mscorlib::System::IO::FileStream(nativeObject)
					, mscorlib::System::IDisposable(nativeObject)
					{
					};
				
					~IsolatedStorageFileStream()
					{
					};
				

					IsolatedStorageFileStream & operator=(IsolatedStorageFileStream &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::IAsyncResult  BeginRead(std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 offset, mscorlib::System::Int32 numBytes, mscorlib::Callback<void  (mscorlib::System::IAsyncResult )> userCallback, mscorlib::System::Object stateObject) override;
					virtual mscorlib::System::IAsyncResult  BeginWrite(std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 offset, mscorlib::System::Int32 numBytes, mscorlib::Callback<void  (mscorlib::System::IAsyncResult )> userCallback, mscorlib::System::Object stateObject) override;
					virtual mscorlib::System::Int32  EndRead(mscorlib::System::IAsyncResult asyncResult) override;
					virtual void  EndWrite(mscorlib::System::IAsyncResult asyncResult) override;
					virtual void  Flush() override;
					virtual void  Flush(mscorlib::System::Boolean flushToDisk) override;
					virtual mscorlib::System::Int32  Read(std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 offset, mscorlib::System::Int32 count) override;
					virtual mscorlib::System::Int32  ReadByte() override;
					virtual mscorlib::System::Int64  Seek(mscorlib::System::Int64 offset, mscorlib::System::IO::SeekOrigin::__ENUM__ origin) override;
					virtual void  SetLength(mscorlib::System::Int64 value) override;
					virtual void  Write(std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 offset, mscorlib::System::Int32 count) override;
					virtual void  WriteByte(mscorlib::System::Byte value) override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_CanRead)) mscorlib::System::Boolean  CanRead;
					__declspec(property(get=get_CanSeek)) mscorlib::System::Boolean  CanSeek;
					__declspec(property(get=get_CanWrite)) mscorlib::System::Boolean  CanWrite;
					__declspec(property(get=get_SafeFileHandle)) mscorlib::Microsoft::Win32::SafeHandles::SafeFileHandle  SafeFileHandle;
					__declspec(property(get=get_Handle)) mscorlib::System::IntPtr  Handle;
					__declspec(property(get=get_IsAsync)) mscorlib::System::Boolean  IsAsync;
					__declspec(property(get=get_Length)) mscorlib::System::Int64  Length;
					__declspec(property(get=get_Position, put=set_Position)) mscorlib::System::Int64  Position;
					__declspec(property(get=get_Name)) mscorlib::System::String  Name;
					__declspec(property(get=get_CanTimeout)) mscorlib::System::Boolean  CanTimeout;
					__declspec(property(get=get_ReadTimeout, put=set_ReadTimeout)) mscorlib::System::Int32  ReadTimeout;
					__declspec(property(get=get_WriteTimeout, put=set_WriteTimeout)) mscorlib::System::Int32  WriteTimeout;

					//Get Set Properties Methods
					//	Get:CanRead
					mscorlib::System::Boolean  get_CanRead() const;

					//	Get:CanSeek
					mscorlib::System::Boolean  get_CanSeek() const;

					//	Get:CanWrite
					mscorlib::System::Boolean  get_CanWrite() const;

					//	Get:SafeFileHandle
					mscorlib::Microsoft::Win32::SafeHandles::SafeFileHandle  get_SafeFileHandle() const;

					//	Get:Handle
					mscorlib::System::IntPtr  get_Handle() const;

					//	Get:IsAsync
					mscorlib::System::Boolean  get_IsAsync() const;

					//	Get:Length
					mscorlib::System::Int64  get_Length() const;

					//	Get/Set:Position
					mscorlib::System::Int64  get_Position() const;
					void set_Position(mscorlib::System::Int64  value);

					//	Get:Name
					mscorlib::System::String  get_Name() const;

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
}
#endif
