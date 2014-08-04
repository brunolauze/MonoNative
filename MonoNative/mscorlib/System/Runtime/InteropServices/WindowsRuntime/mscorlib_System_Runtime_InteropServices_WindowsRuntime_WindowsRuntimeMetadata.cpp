#include <mscorlib/System/Runtime/InteropServices/WindowsRuntime/mscorlib_System_Runtime_InteropServices_WindowsRuntime_WindowsRuntimeMetadata.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Runtime/InteropServices/WindowsRuntime/mscorlib_System_Runtime_InteropServices_WindowsRuntime_DesignerNamespaceResolveEventArgs.h>
#include <mscorlib/System/Runtime/InteropServices/WindowsRuntime/mscorlib_System_Runtime_InteropServices_WindowsRuntime_NamespaceResolveEventArgs.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{
				namespace WindowsRuntime
				{

					//Public Methods
					mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String> WindowsRuntimeMetadata::ResolveNamespace(mscorlib::System::String namespaceName, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String> packageGraphFilePaths)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(namespaceName).name());
							__parameter_types__[1] = Global::GetType(typeid(packageGraphFilePaths).name());
							__parameters__[0] = (MonoObject*)namespaceName;
							__parameters__[1] = (MonoObject*)packageGraphFilePaths;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.WindowsRuntime", "WindowsRuntimeMetadata", 0, NULL, "ResolveNamespace", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String>(__result__);
					}

					mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String> WindowsRuntimeMetadata::ResolveNamespace(mscorlib::System::String namespaceName, mscorlib::System::String windowsSdkFilePath, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String> packageGraphFilePaths)
					{
							MonoType *__parameter_types__[3];
							void *__parameters__[3];
							__parameter_types__[0] = Global::GetType(typeid(namespaceName).name());
							__parameter_types__[1] = Global::GetType(typeid(windowsSdkFilePath).name());
							__parameter_types__[2] = Global::GetType(typeid(packageGraphFilePaths).name());
							__parameters__[0] = (MonoObject*)namespaceName;
							__parameters__[1] = (MonoObject*)windowsSdkFilePath;
							__parameters__[2] = (MonoObject*)packageGraphFilePaths;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.WindowsRuntime", "WindowsRuntimeMetadata", 0, NULL, "ResolveNamespace", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String>(__result__);
					}


				}
			}
		}
	}
}
