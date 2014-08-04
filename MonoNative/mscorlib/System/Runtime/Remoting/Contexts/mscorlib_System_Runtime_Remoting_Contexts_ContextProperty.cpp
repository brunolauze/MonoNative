#include <mscorlib/System/Runtime/Remoting/Contexts/mscorlib_System_Runtime_Remoting_Contexts_ContextProperty.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Remoting
			{
				namespace Contexts
				{

					//Public Methods
					//Get Set Properties Methods
					//	Get:Name
					mscorlib::System::String  ContextProperty::get_Name()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Contexts", "ContextProperty", 0, NULL, "get_Name", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
					}


					//	Get:Property
					mscorlib::System::Object  ContextProperty::get_Property()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Contexts", "ContextProperty", 0, NULL, "get_Property", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Object(__result__);
					}



				}
			}
		}
	}
}
