#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_TypeIdentifierAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				//Public Methods
				//Get Set Properties Methods
				//	Get:Scope
				mscorlib::System::String  TypeIdentifierAttribute::get_Scope()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "TypeIdentifierAttribute", 0, NULL, "get_Scope", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:Identifier
				mscorlib::System::String  TypeIdentifierAttribute::get_Identifier()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "TypeIdentifierAttribute", 0, NULL, "get_Identifier", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:TypeId
				mscorlib::System::Object  TypeIdentifierAttribute::get_TypeId()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}



			}
		}
	}
}
