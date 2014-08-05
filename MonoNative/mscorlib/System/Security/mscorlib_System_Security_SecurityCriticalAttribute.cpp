#include <mscorlib/System/Security/mscorlib_System_Security_SecurityCriticalAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{

			//Public Methods
			//Get Set Properties Methods
			//	Get:Scope
			mscorlib::System::Security::SecurityCriticalScope::__ENUM__  SecurityCriticalAttribute::get_Scope() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "SecurityCriticalAttribute", 0, NULL, "get_Scope", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Security::SecurityCriticalScope::__ENUM__*)mono_object_unbox(__result__);
			}


			//	Get:TypeId
			mscorlib::System::Object  SecurityCriticalAttribute::get_TypeId() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Object(__result__);
			}



		}
	}
}
