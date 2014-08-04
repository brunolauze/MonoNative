#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_UCOMIRunningObjectTable.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_FILETIME.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				//Public Methods
				void UCOMIRunningObjectTable::Register(mscorlib::System::Int32 grfFlags, mscorlib::System::Object punkObject, mscorlib::System::Runtime::InteropServices::UCOMIMoniker pmkObjectName, mscorlib::System::Int32 pdwRegister)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType(typeid(grfFlags).name());
						__parameter_types__[1] = Global::GetType(typeid(punkObject).name());
						__parameter_types__[2] = Global::GetType(typeid(pmkObjectName).name());
						__parameter_types__[3] = Global::GetType(typeid(pdwRegister).name());
						__parameters__[0] = &grfFlags;
						__parameters__[1] = (MonoObject*)punkObject;
						__parameters__[2] = (MonoObject*)pmkObjectName;
						__parameters__[3] = &pdwRegister;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIRunningObjectTable", 0, NULL, "Register", __mscorlib_System_Runtime_InteropServices_UCOMIRunningObjectTable, 4, __parameter_types__, __parameters__, NULL);
				}

				void UCOMIRunningObjectTable::Revoke(mscorlib::System::Int32 dwRegister)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(dwRegister).name());
						__parameters__[0] = &dwRegister;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIRunningObjectTable", 0, NULL, "Revoke", __mscorlib_System_Runtime_InteropServices_UCOMIRunningObjectTable, 1, __parameter_types__, __parameters__, NULL);
				}

				void UCOMIRunningObjectTable::IsRunning(mscorlib::System::Runtime::InteropServices::UCOMIMoniker pmkObjectName)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(pmkObjectName).name());
						__parameters__[0] = (MonoObject*)pmkObjectName;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIRunningObjectTable", 0, NULL, "IsRunning", __mscorlib_System_Runtime_InteropServices_UCOMIRunningObjectTable, 1, __parameter_types__, __parameters__, NULL);
				}

				void UCOMIRunningObjectTable::GetObject(mscorlib::System::Runtime::InteropServices::UCOMIMoniker pmkObjectName, mscorlib::System::Object ppunkObject)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(pmkObjectName).name());
						__parameter_types__[1] = Global::GetType(typeid(ppunkObject).name());
						__parameters__[0] = (MonoObject*)pmkObjectName;
						__parameters__[1] = (MonoObject*)ppunkObject;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIRunningObjectTable", 0, NULL, "GetObject", __mscorlib_System_Runtime_InteropServices_UCOMIRunningObjectTable, 2, __parameter_types__, __parameters__, NULL);
				}

				void UCOMIRunningObjectTable::NoteChangeTime(mscorlib::System::Int32 dwRegister, mscorlib::System::Runtime::InteropServices::FILETIME pfiletime)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(dwRegister).name());
						__parameter_types__[1] = Global::GetType(typeid(pfiletime).name());
						__parameters__[0] = &dwRegister;
						__parameters__[1] = (MonoObject*)pfiletime;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIRunningObjectTable", 0, NULL, "NoteChangeTime", __mscorlib_System_Runtime_InteropServices_UCOMIRunningObjectTable, 2, __parameter_types__, __parameters__, NULL);
				}

				void UCOMIRunningObjectTable::GetTimeOfLastChange(mscorlib::System::Runtime::InteropServices::UCOMIMoniker pmkObjectName, mscorlib::System::Runtime::InteropServices::FILETIME pfiletime)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(pmkObjectName).name());
						__parameter_types__[1] = Global::GetType(typeid(pfiletime).name());
						__parameters__[0] = (MonoObject*)pmkObjectName;
						__parameters__[1] = (MonoObject*)pfiletime;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIRunningObjectTable", 0, NULL, "GetTimeOfLastChange", __mscorlib_System_Runtime_InteropServices_UCOMIRunningObjectTable, 2, __parameter_types__, __parameters__, NULL);
				}

				void UCOMIRunningObjectTable::EnumRunning(mscorlib::System::Runtime::InteropServices::UCOMIEnumMoniker ppenumMoniker)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(ppenumMoniker).name());
						__parameters__[0] = (MonoObject*)ppenumMoniker;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIRunningObjectTable", 0, NULL, "EnumRunning", __mscorlib_System_Runtime_InteropServices_UCOMIRunningObjectTable, 1, __parameter_types__, __parameters__, NULL);
				}


			}
		}
	}
}
