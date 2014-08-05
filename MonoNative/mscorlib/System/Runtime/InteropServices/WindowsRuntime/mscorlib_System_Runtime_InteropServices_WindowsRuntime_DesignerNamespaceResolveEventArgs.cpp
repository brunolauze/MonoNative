#include <mscorlib/System/Runtime/InteropServices/WindowsRuntime/mscorlib_System_Runtime_InteropServices_WindowsRuntime_DesignerNamespaceResolveEventArgs.h>
#include <mscorlib/System/mscorlib_System_Type.h>



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
					//Get Set Properties Methods
					//	Get/Set:NamespaceName
					mscorlib::System::String  DesignerNamespaceResolveEventArgs::get_NamespaceName() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.WindowsRuntime", "DesignerNamespaceResolveEventArgs", 0, NULL, "get_NamespaceName", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
					}

					void DesignerNamespaceResolveEventArgs::set_NamespaceName(mscorlib::System::String  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), value);
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.WindowsRuntime", "DesignerNamespaceResolveEventArgs", 0, NULL, "set_NamespaceName", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}


					//	Get/Set:ResolvedAssemblyFiles
					mscorlib::System::Collections::ObjectModel::Collection<mscorlib::System::String>  DesignerNamespaceResolveEventArgs::get_ResolvedAssemblyFiles() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.WindowsRuntime", "DesignerNamespaceResolveEventArgs", 0, NULL, "get_ResolvedAssemblyFiles", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Collections::ObjectModel::Collection<mscorlib::System::String>(__result__);
					}

					void DesignerNamespaceResolveEventArgs::set_ResolvedAssemblyFiles(mscorlib::System::Collections::ObjectModel::Collection<mscorlib::System::String>  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.WindowsRuntime", "DesignerNamespaceResolveEventArgs", 0, NULL, "set_ResolvedAssemblyFiles", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}



				}
			}
		}
	}
}
