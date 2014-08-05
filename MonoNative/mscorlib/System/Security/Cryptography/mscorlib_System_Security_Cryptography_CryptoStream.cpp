#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_CryptoStream.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/Threading/Tasks/mscorlib_System_Threading_Tasks_Task.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_CancellationToken.h>
#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_ObjRef.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Cryptography
			{

				//Public Methods
				void CryptoStream::Clear()
				{
						Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "CryptoStream", 0, NULL, "Clear", __native_object__, 0, NULL, NULL, NULL);
				}

				mscorlib::System::Int32 CryptoStream::Read(std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 offset, mscorlib::System::Int32 count)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(buffer).name()))->eklass);
						__parameter_types__[1] = Global::GetType(typeid(offset).name());
						__parameter_types__[2] = Global::GetType(typeid(count).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(buffer, typeid(mscorlib::System::Byte).name());
						__parameters__[1] = &offset;
						__parameters__[2] = &count;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "CryptoStream", 0, NULL, "Read", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				void CryptoStream::Write(std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 offset, mscorlib::System::Int32 count)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(buffer).name()))->eklass);
						__parameter_types__[1] = Global::GetType(typeid(offset).name());
						__parameter_types__[2] = Global::GetType(typeid(count).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(buffer, typeid(mscorlib::System::Byte).name());
						__parameters__[1] = &offset;
						__parameters__[2] = &count;
						Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "CryptoStream", 0, NULL, "Write", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				}

				void CryptoStream::Flush()
				{
						Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "CryptoStream", 0, NULL, "Flush", __native_object__, 0, NULL, NULL, NULL);
				}

				void CryptoStream::FlushFinalBlock()
				{
						Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "CryptoStream", 0, NULL, "FlushFinalBlock", __native_object__, 0, NULL, NULL, NULL);
				}

				mscorlib::System::Int64 CryptoStream::Seek(mscorlib::System::Int64 offset, mscorlib::System::IO::SeekOrigin::__ENUM__ origin)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(offset).name());
						__parameter_types__[1] = Global::GetType(typeid(origin).name());
						__parameters__[0] = &offset;
						int __param_origin__ = origin;
						__parameters__[1] = &__param_origin__;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "CryptoStream", 0, NULL, "Seek", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
				}

				void CryptoStream::SetLength(mscorlib::System::Int64 value)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = &value;
						Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "CryptoStream", 0, NULL, "SetLength", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Threading::Tasks::TaskBase CryptoStream::FlushAsync(mscorlib::System::Threading::CancellationToken cancellationToken)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(cancellationToken).name());
						__parameters__[0] = (MonoObject*)cancellationToken;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "CryptoStream", 0, NULL, "FlushAsync", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::TaskBase(__result__);
				}

				mscorlib::System::Threading::Tasks::Task<mscorlib::System::Int32> CryptoStream::ReadAsync(std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 offset, mscorlib::System::Int32 count, mscorlib::System::Threading::CancellationToken cancellationToken)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(buffer).name()))->eklass);
						__parameter_types__[1] = Global::GetType(typeid(offset).name());
						__parameter_types__[2] = Global::GetType(typeid(count).name());
						__parameter_types__[3] = Global::GetType(typeid(cancellationToken).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(buffer, typeid(mscorlib::System::Byte).name());
						__parameters__[1] = &offset;
						__parameters__[2] = &count;
						__parameters__[3] = (MonoObject*)cancellationToken;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "CryptoStream", 0, NULL, "ReadAsync", __native_object__, 4, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::Task<mscorlib::System::Int32>(__result__);
				}

				mscorlib::System::Threading::Tasks::TaskBase CryptoStream::WriteAsync(std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 offset, mscorlib::System::Int32 count, mscorlib::System::Threading::CancellationToken cancellationToken)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(buffer).name()))->eklass);
						__parameter_types__[1] = Global::GetType(typeid(offset).name());
						__parameter_types__[2] = Global::GetType(typeid(count).name());
						__parameter_types__[3] = Global::GetType(typeid(cancellationToken).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(buffer, typeid(mscorlib::System::Byte).name());
						__parameters__[1] = &offset;
						__parameters__[2] = &count;
						__parameters__[3] = (MonoObject*)cancellationToken;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "CryptoStream", 0, NULL, "WriteAsync", __native_object__, 4, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::TaskBase(__result__);
				}

				//Get Set Properties Methods
				//	Get:CanRead
				mscorlib::System::Boolean  CryptoStream::get_CanRead() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "CryptoStream", 0, NULL, "get_CanRead", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:CanSeek
				mscorlib::System::Boolean  CryptoStream::get_CanSeek() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "CryptoStream", 0, NULL, "get_CanSeek", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:CanWrite
				mscorlib::System::Boolean  CryptoStream::get_CanWrite() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "CryptoStream", 0, NULL, "get_CanWrite", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:Length
				mscorlib::System::Int64  CryptoStream::get_Length() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "CryptoStream", 0, NULL, "get_Length", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
				}


				//	Get/Set:Position
				mscorlib::System::Int64  CryptoStream::get_Position() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "CryptoStream", 0, NULL, "get_Position", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
				}

				void CryptoStream::set_Position(mscorlib::System::Int64  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "CryptoStream", 0, NULL, "set_Position", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get:HasFlushedFinalBlock
				mscorlib::System::Boolean  CryptoStream::get_HasFlushedFinalBlock() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "CryptoStream", 0, NULL, "get_HasFlushedFinalBlock", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:CanTimeout
				mscorlib::System::Boolean  CryptoStream::get_CanTimeout() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Stream", 0, NULL, "get_CanTimeout", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get/Set:ReadTimeout
				mscorlib::System::Int32  CryptoStream::get_ReadTimeout() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Stream", 0, NULL, "get_ReadTimeout", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				void CryptoStream::set_ReadTimeout(mscorlib::System::Int32  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					Global::InvokeMethod("mscorlib", "System.IO", "Stream", 0, NULL, "set_ReadTimeout", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:WriteTimeout
				mscorlib::System::Int32  CryptoStream::get_WriteTimeout() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Stream", 0, NULL, "get_WriteTimeout", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				void CryptoStream::set_WriteTimeout(mscorlib::System::Int32  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					Global::InvokeMethod("mscorlib", "System.IO", "Stream", 0, NULL, "set_WriteTimeout", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}



			}
		}
	}
}
