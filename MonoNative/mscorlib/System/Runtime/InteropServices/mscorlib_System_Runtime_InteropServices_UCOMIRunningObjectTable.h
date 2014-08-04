#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_UCOMIRUNNINGOBJECTTABLE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_UCOMIRUNNINGOBJECTTABLE_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_UCOMIMoniker.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_UCOMIEnumMoniker.h>

namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				class FILETIME;
				

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

				class UCOMIRunningObjectTable
				{
				public:
					UCOMIRunningObjectTable(MonoObject *nativeObject)
					{
						__mscorlib_System_Runtime_InteropServices_UCOMIRunningObjectTable = nativeObject;
					};
				
					~UCOMIRunningObjectTable()
					{
					};
				

					UCOMIRunningObjectTable & operator=(UCOMIRunningObjectTable &value) { __mscorlib_System_Runtime_InteropServices_UCOMIRunningObjectTable = value.__mscorlib_System_Runtime_InteropServices_UCOMIRunningObjectTable; return value; };
					operator MonoObject*() { return __mscorlib_System_Runtime_InteropServices_UCOMIRunningObjectTable; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_InteropServices_UCOMIRunningObjectTable = value; return value; };


					virtual void  Register(mscorlib::System::Int32 grfFlags, mscorlib::System::Object punkObject, mscorlib::System::Runtime::InteropServices::UCOMIMoniker pmkObjectName, mscorlib::System::Int32 pdwRegister);
					virtual void  Revoke(mscorlib::System::Int32 dwRegister);
					virtual void  IsRunning(mscorlib::System::Runtime::InteropServices::UCOMIMoniker pmkObjectName);
					virtual void  GetObject(mscorlib::System::Runtime::InteropServices::UCOMIMoniker pmkObjectName, mscorlib::System::Object ppunkObject);
					virtual void  NoteChangeTime(mscorlib::System::Int32 dwRegister, mscorlib::System::Runtime::InteropServices::FILETIME pfiletime);
					virtual void  GetTimeOfLastChange(mscorlib::System::Runtime::InteropServices::UCOMIMoniker pmkObjectName, mscorlib::System::Runtime::InteropServices::FILETIME pfiletime);
					virtual void  EnumRunning(mscorlib::System::Runtime::InteropServices::UCOMIEnumMoniker ppenumMoniker);


				
				protected:
					MonoObject *__mscorlib_System_Runtime_InteropServices_UCOMIRunningObjectTable;
				
				private:
				
				};

			}
		}
	}
}
#endif
