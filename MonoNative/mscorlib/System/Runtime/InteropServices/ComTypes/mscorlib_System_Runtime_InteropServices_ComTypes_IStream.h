#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_ISTREAM_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_ISTREAM_H

#include <Global.h>

namespace mscorlib
{
	namespace System
	{

		class Byte;
		class IntPtr;
		

	}
}
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

					class STATSTG;
					

				}
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
			namespace InteropServices
			{
				namespace ComTypes
				{

					class IStream
					{
					public:
						IStream(MonoObject *nativeObject)
						{
							__mscorlib_System_Runtime_InteropServices_ComTypes_IStream = nativeObject;
						};
					
						~IStream()
						{
						};
					

						IStream & operator=(IStream &value) { __mscorlib_System_Runtime_InteropServices_ComTypes_IStream = value.__mscorlib_System_Runtime_InteropServices_ComTypes_IStream; return value; };
						operator MonoObject*() { return __mscorlib_System_Runtime_InteropServices_ComTypes_IStream; };
						MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_InteropServices_ComTypes_IStream = value; return value; };


						virtual void  Read(std::vector<mscorlib::System::Byte*> pv, mscorlib::System::Int32 cb, mscorlib::System::IntPtr pcbRead);
						virtual void  Write(std::vector<mscorlib::System::Byte*> pv, mscorlib::System::Int32 cb, mscorlib::System::IntPtr pcbWritten);
						virtual void  Seek(mscorlib::System::Int64 dlibMove, mscorlib::System::Int32 dwOrigin, mscorlib::System::IntPtr plibNewPosition);
						virtual void  SetSize(mscorlib::System::Int64 libNewSize);
						virtual void  CopyTo(mscorlib::System::Runtime::InteropServices::ComTypes::IStream pstm, mscorlib::System::Int64 cb, mscorlib::System::IntPtr pcbRead, mscorlib::System::IntPtr pcbWritten);
						virtual void  Commit(mscorlib::System::Int32 grfCommitFlags);
						virtual void  Revert();
						virtual void  LockRegion(mscorlib::System::Int64 libOffset, mscorlib::System::Int64 cb, mscorlib::System::Int32 dwLockType);
						virtual void  UnlockRegion(mscorlib::System::Int64 libOffset, mscorlib::System::Int64 cb, mscorlib::System::Int32 dwLockType);
						virtual void  Stat(mscorlib::System::Runtime::InteropServices::ComTypes::STATSTG pstatstg, mscorlib::System::Int32 grfStatFlag);
						virtual void  Clone(mscorlib::System::Runtime::InteropServices::ComTypes::IStream ppstm);


					
					protected:
						MonoObject *__mscorlib_System_Runtime_InteropServices_ComTypes_IStream;
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
