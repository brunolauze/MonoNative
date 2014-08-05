#include <mscorlib/System/Runtime/Remoting/Contexts/mscorlib_System_Runtime_Remoting_Contexts_IDynamicProperty.h>
#include <mscorlib/System/mscorlib_System_String.h>



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

					//Get Set Properties Methods
					//	Get:Name
					mscorlib::System::String  IDynamicProperty::get_Name() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Contexts", "IDynamicProperty", 0, NULL, "get_Name", __mscorlib_System_Runtime_Remoting_Contexts_IDynamicProperty, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
					}



				}
			}
		}
	}
}
