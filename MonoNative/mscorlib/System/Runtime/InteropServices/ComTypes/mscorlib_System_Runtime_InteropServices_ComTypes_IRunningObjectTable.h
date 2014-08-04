#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IRUNNINGOBJECTTABLE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IRUNNINGOBJECTTABLE_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_IMoniker.h>
#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_IEnumMoniker.h>

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

					class FILETIME;
					

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

					class IRunningObjectTable
					{
					public:
						IRunningObjectTable(MonoObject *nativeObject)
						{
							__mscorlib_System_Runtime_InteropServices_ComTypes_IRunningObjectTable = nativeObject;
						};
					
						~IRunningObjectTable()
						{
						};
					

						IRunningObjectTable & operator=(IRunningObjectTable &value) { __mscorlib_System_Runtime_InteropServices_ComTypes_IRunningObjectTable = value.__mscorlib_System_Runtime_InteropServices_ComTypes_IRunningObjectTable; return value; };
						operator MonoObject*() { return __mscorlib_System_Runtime_InteropServices_ComTypes_IRunningObjectTable; };
						MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_InteropServices_ComTypes_IRunningObjectTable = value; return value; };


						virtual mscorlib::System::Int32  Register(mscorlib::System::Int32 grfFlags, mscorlib::System::Object punkObject, mscorlib::System::Runtime::InteropServices::ComTypes::IMoniker pmkObjectName);
						virtual void  Revoke(mscorlib::System::Int32 dwRegister);
						virtual mscorlib::System::Int32  IsRunning(mscorlib::System::Runtime::InteropServices::ComTypes::IMoniker pmkObjectName);
						virtual mscorlib::System::Int32  GetObject(mscorlib::System::Runtime::InteropServices::ComTypes::IMoniker pmkObjectName, mscorlib::System::Object ppunkObject);
						virtual void  NoteChangeTime(mscorlib::System::Int32 dwRegister, mscorlib::System::Runtime::InteropServices::ComTypes::FILETIME pfiletime);
						virtual mscorlib::System::Int32  GetTimeOfLastChange(mscorlib::System::Runtime::InteropServices::ComTypes::IMoniker pmkObjectName, mscorlib::System::Runtime::InteropServices::ComTypes::FILETIME pfiletime);
						virtual void  EnumRunning(mscorlib::System::Runtime::InteropServices::ComTypes::IEnumMoniker ppenumMoniker);


					
					protected:
						MonoObject *__mscorlib_System_Runtime_InteropServices_ComTypes_IRunningObjectTable;
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
