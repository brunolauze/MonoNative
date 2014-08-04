#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_IRunningObjectTable.h>
#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_FILETIME.h>



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
					mscorlib::System::Int32 IRunningObjectTable::Register(mscorlib::System::Int32 grfFlags, mscorlib::System::Object punkObject, mscorlib::System::Runtime::InteropServices::ComTypes::IMoniker pmkObjectName)
					{
							MonoType *__parameter_types__[3];
							void *__parameters__[3];
							__parameter_types__[0] = Global::GetType(typeid(grfFlags).name());
							__parameter_types__[1] = Global::GetType(typeid(punkObject).name());
							__parameter_types__[2] = Global::GetType(typeid(pmkObjectName).name());
							__parameters__[0] = &grfFlags;
							__parameters__[1] = (MonoObject*)punkObject;
							__parameters__[2] = (MonoObject*)pmkObjectName;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "IRunningObjectTable", 0, NULL, "Register", __mscorlib_System_Runtime_InteropServices_ComTypes_IRunningObjectTable, 3, __parameter_types__, __parameters__, NULL);
							return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					}

					void IRunningObjectTable::Revoke(mscorlib::System::Int32 dwRegister)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(dwRegister).name());
							__parameters__[0] = &dwRegister;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "IRunningObjectTable", 0, NULL, "Revoke", __mscorlib_System_Runtime_InteropServices_ComTypes_IRunningObjectTable, 1, __parameter_types__, __parameters__, NULL);
					}

					mscorlib::System::Int32 IRunningObjectTable::IsRunning(mscorlib::System::Runtime::InteropServices::ComTypes::IMoniker pmkObjectName)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(pmkObjectName).name());
							__parameters__[0] = (MonoObject*)pmkObjectName;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "IRunningObjectTable", 0, NULL, "IsRunning", __mscorlib_System_Runtime_InteropServices_ComTypes_IRunningObjectTable, 1, __parameter_types__, __parameters__, NULL);
							return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					}

					mscorlib::System::Int32 IRunningObjectTable::GetObject(mscorlib::System::Runtime::InteropServices::ComTypes::IMoniker pmkObjectName, mscorlib::System::Object ppunkObject)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(pmkObjectName).name());
							__parameter_types__[1] = Global::GetType(typeid(ppunkObject).name());
							__parameters__[0] = (MonoObject*)pmkObjectName;
							__parameters__[1] = (MonoObject*)ppunkObject;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "IRunningObjectTable", 0, NULL, "GetObject", __mscorlib_System_Runtime_InteropServices_ComTypes_IRunningObjectTable, 2, __parameter_types__, __parameters__, NULL);
							return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					}

					void IRunningObjectTable::NoteChangeTime(mscorlib::System::Int32 dwRegister, mscorlib::System::Runtime::InteropServices::ComTypes::FILETIME pfiletime)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(dwRegister).name());
							__parameter_types__[1] = Global::GetType(typeid(pfiletime).name());
							__parameters__[0] = &dwRegister;
							__parameters__[1] = (MonoObject*)pfiletime;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "IRunningObjectTable", 0, NULL, "NoteChangeTime", __mscorlib_System_Runtime_InteropServices_ComTypes_IRunningObjectTable, 2, __parameter_types__, __parameters__, NULL);
					}

					mscorlib::System::Int32 IRunningObjectTable::GetTimeOfLastChange(mscorlib::System::Runtime::InteropServices::ComTypes::IMoniker pmkObjectName, mscorlib::System::Runtime::InteropServices::ComTypes::FILETIME pfiletime)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(pmkObjectName).name());
							__parameter_types__[1] = Global::GetType(typeid(pfiletime).name());
							__parameters__[0] = (MonoObject*)pmkObjectName;
							__parameters__[1] = (MonoObject*)pfiletime;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "IRunningObjectTable", 0, NULL, "GetTimeOfLastChange", __mscorlib_System_Runtime_InteropServices_ComTypes_IRunningObjectTable, 2, __parameter_types__, __parameters__, NULL);
							return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					}

					void IRunningObjectTable::EnumRunning(mscorlib::System::Runtime::InteropServices::ComTypes::IEnumMoniker ppenumMoniker)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(ppenumMoniker).name());
							__parameters__[0] = (MonoObject*)ppenumMoniker;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "IRunningObjectTable", 0, NULL, "EnumRunning", __mscorlib_System_Runtime_InteropServices_ComTypes_IRunningObjectTable, 1, __parameter_types__, __parameters__, NULL);
					}


				}
			}
		}
	}
}
