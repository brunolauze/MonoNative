#include <mscorlib/System/Runtime/CompilerServices/mscorlib_System_Runtime_CompilerServices_InternalsVisibleToAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace CompilerServices
			{

				//Public Methods
				//Get Set Properties Methods
				//	Get:AssemblyName
				mscorlib::System::String  InternalsVisibleToAttribute::get_AssemblyName()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "InternalsVisibleToAttribute", 0, NULL, "get_AssemblyName", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get/Set:AllInternalsVisible
				mscorlib::System::Boolean  InternalsVisibleToAttribute::get_AllInternalsVisible()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "InternalsVisibleToAttribute", 0, NULL, "get_AllInternalsVisible", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void InternalsVisibleToAttribute::set_AllInternalsVisible(mscorlib::System::Boolean  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "InternalsVisibleToAttribute", 0, NULL, "set_AllInternalsVisible", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get:TypeId
				mscorlib::System::Object  InternalsVisibleToAttribute::get_TypeId()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}



			}
		}
	}
}
