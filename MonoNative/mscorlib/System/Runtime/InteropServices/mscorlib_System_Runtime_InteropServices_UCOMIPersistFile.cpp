#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_UCOMIPersistFile.h>
#include <mscorlib/System/mscorlib_System_Guid.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				//Public Methods
				void UCOMIPersistFile::GetClassID(mscorlib::System::Guid pClassID)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(pClassID).name());
						__parameters__[0] = (MonoObject*)pClassID;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIPersistFile", 0, NULL, "GetClassID", __mscorlib_System_Runtime_InteropServices_UCOMIPersistFile, 1, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Int32 UCOMIPersistFile::IsDirty()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIPersistFile", 0, NULL, "IsDirty", __mscorlib_System_Runtime_InteropServices_UCOMIPersistFile, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				void UCOMIPersistFile::Load(mscorlib::System::String pszFileName, mscorlib::System::Int32 dwMode)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(pszFileName).name());
						__parameter_types__[1] = Global::GetType(typeid(dwMode).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), pszFileName);
						__parameters__[1] = &dwMode;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIPersistFile", 0, NULL, "Load", __mscorlib_System_Runtime_InteropServices_UCOMIPersistFile, 2, __parameter_types__, __parameters__, NULL);
				}

				void UCOMIPersistFile::Load(const char *pszFileName, mscorlib::System::Int32 dwMode)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(pszFileName).name());
						__parameter_types__[1] = Global::GetType(typeid(dwMode).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), pszFileName);
						__parameters__[1] = &dwMode;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIPersistFile", 0, NULL, "Load", __mscorlib_System_Runtime_InteropServices_UCOMIPersistFile, 2, __parameter_types__, __parameters__, NULL);
				}

				void UCOMIPersistFile::Save(mscorlib::System::String pszFileName, mscorlib::System::Boolean fRemember)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(pszFileName).name());
						__parameter_types__[1] = Global::GetType(typeid(fRemember).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), pszFileName);
						__parameters__[1] = reinterpret_cast<void*>(fRemember);
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIPersistFile", 0, NULL, "Save", __mscorlib_System_Runtime_InteropServices_UCOMIPersistFile, 2, __parameter_types__, __parameters__, NULL);
				}

				void UCOMIPersistFile::Save(const char *pszFileName, mscorlib::System::Boolean fRemember)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(pszFileName).name());
						__parameter_types__[1] = Global::GetType(typeid(fRemember).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), pszFileName);
						__parameters__[1] = reinterpret_cast<void*>(fRemember);
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIPersistFile", 0, NULL, "Save", __mscorlib_System_Runtime_InteropServices_UCOMIPersistFile, 2, __parameter_types__, __parameters__, NULL);
				}

				void UCOMIPersistFile::SaveCompleted(mscorlib::System::String pszFileName)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(pszFileName).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), pszFileName);
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIPersistFile", 0, NULL, "SaveCompleted", __mscorlib_System_Runtime_InteropServices_UCOMIPersistFile, 1, __parameter_types__, __parameters__, NULL);
				}

				void UCOMIPersistFile::SaveCompleted(const char *pszFileName)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(pszFileName).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), pszFileName);
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIPersistFile", 0, NULL, "SaveCompleted", __mscorlib_System_Runtime_InteropServices_UCOMIPersistFile, 1, __parameter_types__, __parameters__, NULL);
				}

				void UCOMIPersistFile::GetCurFile(mscorlib::System::String ppszFileName)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(ppszFileName).name());
						__parameters__[0] = (MonoObject*)ppszFileName;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIPersistFile", 0, NULL, "GetCurFile", __mscorlib_System_Runtime_InteropServices_UCOMIPersistFile, 1, __parameter_types__, __parameters__, NULL);
				}


			}
		}
	}
}
