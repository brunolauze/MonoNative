#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_KeySizes.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Cryptography
			{

				//Public Methods
				//Get Set Properties Methods
				//	Get:MaxSize
				mscorlib::System::Int32  KeySizes::get_MaxSize()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "KeySizes", 0, NULL, "get_MaxSize", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//	Get:MinSize
				mscorlib::System::Int32  KeySizes::get_MinSize()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "KeySizes", 0, NULL, "get_MinSize", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//	Get:SkipSize
				mscorlib::System::Int32  KeySizes::get_SkipSize()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "KeySizes", 0, NULL, "get_SkipSize", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}



			}
		}
	}
}
