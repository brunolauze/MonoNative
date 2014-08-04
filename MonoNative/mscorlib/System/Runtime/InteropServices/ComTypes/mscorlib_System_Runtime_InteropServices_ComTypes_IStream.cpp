#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_IStream.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/mscorlib_System_IntPtr.h>
#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_STATSTG.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{
				namespace ComTypes
				{

					//Public Methods
					void IStream::Read(std::vector<mscorlib::System::Byte*> pv, mscorlib::System::Int32 cb, mscorlib::System::IntPtr pcbRead)
					{
							MonoType *__parameter_types__[3];
							void *__parameters__[3];
							__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(pv).name()))->eklass);
							__parameter_types__[1] = Global::GetType(typeid(cb).name());
							__parameter_types__[2] = Global::GetType(typeid(pcbRead).name());
							__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(pv, typeid(mscorlib::System::Byte).name());
							__parameters__[1] = &cb;
							__parameters__[2] = (MonoObject*)pcbRead;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "IStream", 0, NULL, "Read", __mscorlib_System_Runtime_InteropServices_ComTypes_IStream, 3, __parameter_types__, __parameters__, NULL);
					}

					void IStream::Write(std::vector<mscorlib::System::Byte*> pv, mscorlib::System::Int32 cb, mscorlib::System::IntPtr pcbWritten)
					{
							MonoType *__parameter_types__[3];
							void *__parameters__[3];
							__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(pv).name()))->eklass);
							__parameter_types__[1] = Global::GetType(typeid(cb).name());
							__parameter_types__[2] = Global::GetType(typeid(pcbWritten).name());
							__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(pv, typeid(mscorlib::System::Byte).name());
							__parameters__[1] = &cb;
							__parameters__[2] = (MonoObject*)pcbWritten;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "IStream", 0, NULL, "Write", __mscorlib_System_Runtime_InteropServices_ComTypes_IStream, 3, __parameter_types__, __parameters__, NULL);
					}

					void IStream::Seek(mscorlib::System::Int64 dlibMove, mscorlib::System::Int32 dwOrigin, mscorlib::System::IntPtr plibNewPosition)
					{
							MonoType *__parameter_types__[3];
							void *__parameters__[3];
							__parameter_types__[0] = Global::GetType(typeid(dlibMove).name());
							__parameter_types__[1] = Global::GetType(typeid(dwOrigin).name());
							__parameter_types__[2] = Global::GetType(typeid(plibNewPosition).name());
							__parameters__[0] = &dlibMove;
							__parameters__[1] = &dwOrigin;
							__parameters__[2] = (MonoObject*)plibNewPosition;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "IStream", 0, NULL, "Seek", __mscorlib_System_Runtime_InteropServices_ComTypes_IStream, 3, __parameter_types__, __parameters__, NULL);
					}

					void IStream::SetSize(mscorlib::System::Int64 libNewSize)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(libNewSize).name());
							__parameters__[0] = &libNewSize;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "IStream", 0, NULL, "SetSize", __mscorlib_System_Runtime_InteropServices_ComTypes_IStream, 1, __parameter_types__, __parameters__, NULL);
					}

					void IStream::CopyTo(mscorlib::System::Runtime::InteropServices::ComTypes::IStream pstm, mscorlib::System::Int64 cb, mscorlib::System::IntPtr pcbRead, mscorlib::System::IntPtr pcbWritten)
					{
							MonoType *__parameter_types__[4];
							void *__parameters__[4];
							__parameter_types__[0] = Global::GetType(typeid(pstm).name());
							__parameter_types__[1] = Global::GetType(typeid(cb).name());
							__parameter_types__[2] = Global::GetType(typeid(pcbRead).name());
							__parameter_types__[3] = Global::GetType(typeid(pcbWritten).name());
							__parameters__[0] = (MonoObject*)pstm;
							__parameters__[1] = &cb;
							__parameters__[2] = (MonoObject*)pcbRead;
							__parameters__[3] = (MonoObject*)pcbWritten;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "IStream", 0, NULL, "CopyTo", __mscorlib_System_Runtime_InteropServices_ComTypes_IStream, 4, __parameter_types__, __parameters__, NULL);
					}

					void IStream::Commit(mscorlib::System::Int32 grfCommitFlags)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(grfCommitFlags).name());
							__parameters__[0] = &grfCommitFlags;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "IStream", 0, NULL, "Commit", __mscorlib_System_Runtime_InteropServices_ComTypes_IStream, 1, __parameter_types__, __parameters__, NULL);
					}

					void IStream::Revert()
					{
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "IStream", 0, NULL, "Revert", __mscorlib_System_Runtime_InteropServices_ComTypes_IStream, 0, NULL, NULL, NULL);
					}

					void IStream::LockRegion(mscorlib::System::Int64 libOffset, mscorlib::System::Int64 cb, mscorlib::System::Int32 dwLockType)
					{
							MonoType *__parameter_types__[3];
							void *__parameters__[3];
							__parameter_types__[0] = Global::GetType(typeid(libOffset).name());
							__parameter_types__[1] = Global::GetType(typeid(cb).name());
							__parameter_types__[2] = Global::GetType(typeid(dwLockType).name());
							__parameters__[0] = &libOffset;
							__parameters__[1] = &cb;
							__parameters__[2] = &dwLockType;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "IStream", 0, NULL, "LockRegion", __mscorlib_System_Runtime_InteropServices_ComTypes_IStream, 3, __parameter_types__, __parameters__, NULL);
					}

					void IStream::UnlockRegion(mscorlib::System::Int64 libOffset, mscorlib::System::Int64 cb, mscorlib::System::Int32 dwLockType)
					{
							MonoType *__parameter_types__[3];
							void *__parameters__[3];
							__parameter_types__[0] = Global::GetType(typeid(libOffset).name());
							__parameter_types__[1] = Global::GetType(typeid(cb).name());
							__parameter_types__[2] = Global::GetType(typeid(dwLockType).name());
							__parameters__[0] = &libOffset;
							__parameters__[1] = &cb;
							__parameters__[2] = &dwLockType;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "IStream", 0, NULL, "UnlockRegion", __mscorlib_System_Runtime_InteropServices_ComTypes_IStream, 3, __parameter_types__, __parameters__, NULL);
					}

					void IStream::Stat(mscorlib::System::Runtime::InteropServices::ComTypes::STATSTG pstatstg, mscorlib::System::Int32 grfStatFlag)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(pstatstg).name());
							__parameter_types__[1] = Global::GetType(typeid(grfStatFlag).name());
							__parameters__[0] = (MonoObject*)pstatstg;
							__parameters__[1] = &grfStatFlag;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "IStream", 0, NULL, "Stat", __mscorlib_System_Runtime_InteropServices_ComTypes_IStream, 2, __parameter_types__, __parameters__, NULL);
					}

					void IStream::Clone(mscorlib::System::Runtime::InteropServices::ComTypes::IStream ppstm)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(ppstm).name());
							__parameters__[0] = (MonoObject*)ppstm;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "IStream", 0, NULL, "Clone", __mscorlib_System_Runtime_InteropServices_ComTypes_IStream, 1, __parameter_types__, __parameters__, NULL);
					}


				}
			}
		}
	}
}
