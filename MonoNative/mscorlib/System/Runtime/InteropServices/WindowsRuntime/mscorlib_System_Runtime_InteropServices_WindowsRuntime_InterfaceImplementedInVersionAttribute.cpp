#include <mscorlib/System/Runtime/InteropServices/WindowsRuntime/mscorlib_System_Runtime_InteropServices_WindowsRuntime_InterfaceImplementedInVersionAttribute.h>
#include <mscorlib/System/mscorlib_System_String.h>



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
					//	Get/Set:BuildVersion
					mscorlib::System::Byte  InterfaceImplementedInVersionAttribute::get_BuildVersion()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.WindowsRuntime", "InterfaceImplementedInVersionAttribute", 0, NULL, "get_BuildVersion", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Byte(__result__);
					}

					void InterfaceImplementedInVersionAttribute::set_BuildVersion(mscorlib::System::Byte  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.WindowsRuntime", "InterfaceImplementedInVersionAttribute", 0, NULL, "set_BuildVersion", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}


					//	Get/Set:InterfaceType
					mscorlib::System::Type  InterfaceImplementedInVersionAttribute::get_InterfaceType()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.WindowsRuntime", "InterfaceImplementedInVersionAttribute", 0, NULL, "get_InterfaceType", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Type(__result__);
					}

					void InterfaceImplementedInVersionAttribute::set_InterfaceType(mscorlib::System::Type  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.WindowsRuntime", "InterfaceImplementedInVersionAttribute", 0, NULL, "set_InterfaceType", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}


					//	Get/Set:MajorVersion
					mscorlib::System::Byte  InterfaceImplementedInVersionAttribute::get_MajorVersion()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.WindowsRuntime", "InterfaceImplementedInVersionAttribute", 0, NULL, "get_MajorVersion", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Byte(__result__);
					}

					void InterfaceImplementedInVersionAttribute::set_MajorVersion(mscorlib::System::Byte  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.WindowsRuntime", "InterfaceImplementedInVersionAttribute", 0, NULL, "set_MajorVersion", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}


					//	Get/Set:MinorVersion
					mscorlib::System::Byte  InterfaceImplementedInVersionAttribute::get_MinorVersion()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.WindowsRuntime", "InterfaceImplementedInVersionAttribute", 0, NULL, "get_MinorVersion", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Byte(__result__);
					}

					void InterfaceImplementedInVersionAttribute::set_MinorVersion(mscorlib::System::Byte  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.WindowsRuntime", "InterfaceImplementedInVersionAttribute", 0, NULL, "set_MinorVersion", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}


					//	Get/Set:RevisionVersion
					mscorlib::System::Byte  InterfaceImplementedInVersionAttribute::get_RevisionVersion()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.WindowsRuntime", "InterfaceImplementedInVersionAttribute", 0, NULL, "get_RevisionVersion", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Byte(__result__);
					}

					void InterfaceImplementedInVersionAttribute::set_RevisionVersion(mscorlib::System::Byte  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.WindowsRuntime", "InterfaceImplementedInVersionAttribute", 0, NULL, "set_RevisionVersion", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}


					//	Get:TypeId
					mscorlib::System::Object  InterfaceImplementedInVersionAttribute::get_TypeId()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Object(__result__);
					}



				}
			}
		}
	}
}
