#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_H

#include <mscorlib/System/IO/mscorlib_System_IO_Stream.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_ICryptoTransform.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_CryptoStreamMode.h>
#include <mscorlib/System/mscorlib_System_IDisposable.h>
#include <mscorlib/System/IO/mscorlib_System_IO_SeekOrigin.h>
#include <mscorlib/System/Threading/Tasks/mscorlib_System_Threading_Tasks_Task_1.h>
#include <mscorlib/System/mscorlib_System_IAsyncResult.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class Byte;
		class Type;
		class String;
		

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
		namespace Security
		{
			namespace Cryptography
			{

				class CryptoStream
					: public mscorlib::System::IO::Stream
					, public virtual mscorlib::System::IDisposable
				{
				public:
					CryptoStream(mscorlib::System::IO::Stream stream, mscorlib::System::Security::Cryptography::ICryptoTransform transform, mscorlib::System::Security::Cryptography::CryptoStreamMode::__ENUM__ mode)
					: mscorlib::System::IO::Stream(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.CryptoStream"))
					, mscorlib::System::IDisposable(NULL)
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.IO", "Stream");
						__parameter_types__[1] = Global::GetType("mscorlib", "System.Security.Cryptography", "ICryptoTransform");
						__parameter_types__[2] = Global::GetType("mscorlib", "System.Security.Cryptography", "CryptoStreamMode");
						__parameters__[0] = (MonoObject*)stream;
						__parameters__[1] = (MonoObject*)transform;
						__parameters__[2] = reinterpret_cast<void*>(mode);
						__native_object__ = Global::New("mscorlib", "System.Security.Cryptography", "CryptoStream", 3, __parameter_types__, __parameters__);
					};
				
					CryptoStream(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::IO::Stream(nativeTypeInfo)
					, mscorlib::System::IDisposable(NULL)
					{
					};
				
					CryptoStream(MonoObject *nativeObject)
					: mscorlib::System::IO::Stream(nativeObject)
					, mscorlib::System::IDisposable(nativeObject)
					{
					};
				
					~CryptoStream()
					{
					};
				

					CryptoStream & operator=(CryptoStream &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					void  Clear();
					virtual mscorlib::System::Int32  Read(std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 offset, mscorlib::System::Int32 count) override;
					virtual void  Write(std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 offset, mscorlib::System::Int32 count) override;
					virtual void  Flush() override;
					void  FlushFinalBlock();
					virtual mscorlib::System::Int64  Seek(mscorlib::System::Int64 offset, mscorlib::System::IO::SeekOrigin::__ENUM__ origin) override;
					virtual void  SetLength(mscorlib::System::Int64 value) override;
					virtual mscorlib::System::Threading::Tasks::TaskBase  FlushAsync(mscorlib::System::Threading::CancellationToken cancellationToken) override;
					virtual mscorlib::System::Threading::Tasks::Task<mscorlib::System::Int32>  ReadAsync(std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 offset, mscorlib::System::Int32 count, mscorlib::System::Threading::CancellationToken cancellationToken) override;
					virtual mscorlib::System::Threading::Tasks::TaskBase  WriteAsync(std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 offset, mscorlib::System::Int32 count, mscorlib::System::Threading::CancellationToken cancellationToken) override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_CanRead)) mscorlib::System::Boolean  CanRead;
					__declspec(property(get=get_CanSeek)) mscorlib::System::Boolean  CanSeek;
					__declspec(property(get=get_CanWrite)) mscorlib::System::Boolean  CanWrite;
					__declspec(property(get=get_Length)) mscorlib::System::Int64  Length;
					__declspec(property(get=get_Position, put=set_Position)) mscorlib::System::Int64  Position;
					__declspec(property(get=get_HasFlushedFinalBlock)) mscorlib::System::Boolean  HasFlushedFinalBlock;
					__declspec(property(get=get_CanTimeout)) mscorlib::System::Boolean  CanTimeout;
					__declspec(property(get=get_ReadTimeout, put=set_ReadTimeout)) mscorlib::System::Int32  ReadTimeout;
					__declspec(property(get=get_WriteTimeout, put=set_WriteTimeout)) mscorlib::System::Int32  WriteTimeout;

					//Get Set Properties Methods
					//	Get:CanRead
					mscorlib::System::Boolean  get_CanRead();

					//	Get:CanSeek
					mscorlib::System::Boolean  get_CanSeek();

					//	Get:CanWrite
					mscorlib::System::Boolean  get_CanWrite();

					//	Get:Length
					mscorlib::System::Int64  get_Length();

					//	Get/Set:Position
					mscorlib::System::Int64  get_Position();
					void set_Position(mscorlib::System::Int64  value);

					//	Get:HasFlushedFinalBlock
					mscorlib::System::Boolean  get_HasFlushedFinalBlock();

					//	Get:CanTimeout
					mscorlib::System::Boolean  get_CanTimeout();

					//	Get/Set:ReadTimeout
					mscorlib::System::Int32  get_ReadTimeout();
					void set_ReadTimeout(mscorlib::System::Int32  value);

					//	Get/Set:WriteTimeout
					mscorlib::System::Int32  get_WriteTimeout();
					void set_WriteTimeout(mscorlib::System::Int32  value);

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
