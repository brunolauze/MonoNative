#include <mscorlib/System/Runtime/InteropServices/WindowsRuntime/mscorlib_System_Runtime_InteropServices_WindowsRuntime_NamespaceResolveEventArgs.h>
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
					mscorlib::System::String  NamespaceResolveEventArgs::get_NamespaceName() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.WindowsRuntime", "NamespaceResolveEventArgs", 0, NULL, "get_NamespaceName", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
					}

					void NamespaceResolveEventArgs::set_NamespaceName(mscorlib::System::String  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.WindowsRuntime", "NamespaceResolveEventArgs", 0, NULL, "set_NamespaceName", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}


					//	Get/Set:RequestingAssembly
					mscorlib::System::Reflection::Assembly  NamespaceResolveEventArgs::get_RequestingAssembly() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.WindowsRuntime", "NamespaceResolveEventArgs", 0, NULL, "get_RequestingAssembly", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Reflection::Assembly(__result__);
					}

					void NamespaceResolveEventArgs::set_RequestingAssembly(mscorlib::System::Reflection::Assembly  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.WindowsRuntime", "NamespaceResolveEventArgs", 0, NULL, "set_RequestingAssembly", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}


					//	Get/Set:ResolvedAssemblies
					mscorlib::System::Collections::ObjectModel::Collection<mscorlib::System::Reflection::Assembly>  NamespaceResolveEventArgs::get_ResolvedAssemblies() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.WindowsRuntime", "NamespaceResolveEventArgs", 0, NULL, "get_ResolvedAssemblies", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Collections::ObjectModel::Collection<mscorlib::System::Reflection::Assembly>(__result__);
					}

					void NamespaceResolveEventArgs::set_ResolvedAssemblies(mscorlib::System::Collections::ObjectModel::Collection<mscorlib::System::Reflection::Assembly>  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.WindowsRuntime", "NamespaceResolveEventArgs", 0, NULL, "set_ResolvedAssemblies", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}



				}
			}
		}
	}
}
