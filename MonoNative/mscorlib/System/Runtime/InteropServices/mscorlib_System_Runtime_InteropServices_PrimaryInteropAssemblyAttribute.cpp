#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_PrimaryInteropAssemblyAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



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
				//	Get:MajorVersion
				mscorlib::System::Int32  PrimaryInteropAssemblyAttribute::get_MajorVersion() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "PrimaryInteropAssemblyAttribute", 0, NULL, "get_MajorVersion", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//	Get:MinorVersion
				mscorlib::System::Int32  PrimaryInteropAssemblyAttribute::get_MinorVersion() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "PrimaryInteropAssemblyAttribute", 0, NULL, "get_MinorVersion", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//	Get:TypeId
				mscorlib::System::Object  PrimaryInteropAssemblyAttribute::get_TypeId() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}



			}
		}
	}
}
