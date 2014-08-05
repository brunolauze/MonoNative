#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_UCOMIBindCtx.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_BIND_OPTS.h>
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
				void UCOMIBindCtx::RegisterObjectBound(mscorlib::System::Object punk)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(punk).name());
						__parameters__[0] = (MonoObject*)punk;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIBindCtx", 0, NULL, "RegisterObjectBound", __mscorlib_System_Runtime_InteropServices_UCOMIBindCtx, 1, __parameter_types__, __parameters__, NULL);
				}

				void UCOMIBindCtx::RevokeObjectBound(mscorlib::System::Object punk)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(punk).name());
						__parameters__[0] = (MonoObject*)punk;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIBindCtx", 0, NULL, "RevokeObjectBound", __mscorlib_System_Runtime_InteropServices_UCOMIBindCtx, 1, __parameter_types__, __parameters__, NULL);
				}

				void UCOMIBindCtx::ReleaseBoundObjects()
				{
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIBindCtx", 0, NULL, "ReleaseBoundObjects", __mscorlib_System_Runtime_InteropServices_UCOMIBindCtx, 0, NULL, NULL, NULL);
				}

				void UCOMIBindCtx::SetBindOptions(mscorlib::System::Runtime::InteropServices::BIND_OPTS pbindopts)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(pbindopts).name());
						__parameters__[0] = (MonoObject*)pbindopts;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIBindCtx", 0, NULL, "SetBindOptions", __mscorlib_System_Runtime_InteropServices_UCOMIBindCtx, 1, __parameter_types__, __parameters__, NULL);
				}

				void UCOMIBindCtx::GetBindOptions(mscorlib::System::Runtime::InteropServices::BIND_OPTS pbindopts)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(pbindopts).name());
						__parameters__[0] = (MonoObject*)pbindopts;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIBindCtx", 0, NULL, "GetBindOptions", __mscorlib_System_Runtime_InteropServices_UCOMIBindCtx, 1, __parameter_types__, __parameters__, NULL);
				}

				void UCOMIBindCtx::GetRunningObjectTable(mscorlib::System::Runtime::InteropServices::UCOMIRunningObjectTable pprot)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(pprot).name());
						__parameters__[0] = (MonoObject*)pprot;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIBindCtx", 0, NULL, "GetRunningObjectTable", __mscorlib_System_Runtime_InteropServices_UCOMIBindCtx, 1, __parameter_types__, __parameters__, NULL);
				}

				void UCOMIBindCtx::RegisterObjectParam(mscorlib::System::String pszKey, mscorlib::System::Object punk)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(pszKey).name());
						__parameter_types__[1] = Global::GetType(typeid(punk).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), pszKey);
						__parameters__[1] = (MonoObject*)punk;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIBindCtx", 0, NULL, "RegisterObjectParam", __mscorlib_System_Runtime_InteropServices_UCOMIBindCtx, 2, __parameter_types__, __parameters__, NULL);
				}

				void UCOMIBindCtx::RegisterObjectParam(const char *pszKey, mscorlib::System::Object punk)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(pszKey).name());
						__parameter_types__[1] = Global::GetType(typeid(punk).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), pszKey);
						__parameters__[1] = (MonoObject*)punk;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIBindCtx", 0, NULL, "RegisterObjectParam", __mscorlib_System_Runtime_InteropServices_UCOMIBindCtx, 2, __parameter_types__, __parameters__, NULL);
				}

				void UCOMIBindCtx::GetObjectParam(mscorlib::System::String pszKey, mscorlib::System::Object ppunk)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(pszKey).name());
						__parameter_types__[1] = Global::GetType(typeid(ppunk).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), pszKey);
						__parameters__[1] = (MonoObject*)ppunk;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIBindCtx", 0, NULL, "GetObjectParam", __mscorlib_System_Runtime_InteropServices_UCOMIBindCtx, 2, __parameter_types__, __parameters__, NULL);
				}

				void UCOMIBindCtx::GetObjectParam(const char *pszKey, mscorlib::System::Object ppunk)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(pszKey).name());
						__parameter_types__[1] = Global::GetType(typeid(ppunk).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), pszKey);
						__parameters__[1] = (MonoObject*)ppunk;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIBindCtx", 0, NULL, "GetObjectParam", __mscorlib_System_Runtime_InteropServices_UCOMIBindCtx, 2, __parameter_types__, __parameters__, NULL);
				}

				void UCOMIBindCtx::EnumObjectParam(mscorlib::System::Runtime::InteropServices::UCOMIEnumString ppenum)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(ppenum).name());
						__parameters__[0] = (MonoObject*)ppenum;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIBindCtx", 0, NULL, "EnumObjectParam", __mscorlib_System_Runtime_InteropServices_UCOMIBindCtx, 1, __parameter_types__, __parameters__, NULL);
				}

				void UCOMIBindCtx::RevokeObjectParam(mscorlib::System::String pszKey)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(pszKey).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), pszKey);
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIBindCtx", 0, NULL, "RevokeObjectParam", __mscorlib_System_Runtime_InteropServices_UCOMIBindCtx, 1, __parameter_types__, __parameters__, NULL);
				}

				void UCOMIBindCtx::RevokeObjectParam(const char *pszKey)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(pszKey).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), pszKey);
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIBindCtx", 0, NULL, "RevokeObjectParam", __mscorlib_System_Runtime_InteropServices_UCOMIBindCtx, 1, __parameter_types__, __parameters__, NULL);
				}


			}
		}
	}
}
