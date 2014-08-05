#include <mscorlib/System/Runtime/InteropServices/WindowsRuntime/mscorlib_System_Runtime_InteropServices_WindowsRuntime_DefaultInterfaceAttribute.h>
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
					//	Get/Set:DefaultInterface
					mscorlib::System::Type  DefaultInterfaceAttribute::get_DefaultInterface() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.WindowsRuntime", "DefaultInterfaceAttribute", 0, NULL, "get_DefaultInterface", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Type(__result__);
					}

					void DefaultInterfaceAttribute::set_DefaultInterface(mscorlib::System::Type  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.WindowsRuntime", "DefaultInterfaceAttribute", 0, NULL, "set_DefaultInterface", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}


					//	Get:TypeId
					mscorlib::System::Object  DefaultInterfaceAttribute::get_TypeId() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Object(__result__);
					}



				}
			}
		}
	}
}
