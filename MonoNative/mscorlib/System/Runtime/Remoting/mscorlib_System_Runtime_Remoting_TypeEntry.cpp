#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_TypeEntry.h>
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

				//Public Methods
				//Get Set Properties Methods
				//	Get/Set:AssemblyName
				mscorlib::System::String  TypeEntry::get_AssemblyName() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "TypeEntry", 0, NULL, "get_AssemblyName", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void TypeEntry::set_AssemblyName(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "TypeEntry", 0, NULL, "set_AssemblyName", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:TypeName
				mscorlib::System::String  TypeEntry::get_TypeName() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "TypeEntry", 0, NULL, "get_TypeName", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void TypeEntry::set_TypeName(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "TypeEntry", 0, NULL, "set_TypeName", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}



			}
		}
	}
}
