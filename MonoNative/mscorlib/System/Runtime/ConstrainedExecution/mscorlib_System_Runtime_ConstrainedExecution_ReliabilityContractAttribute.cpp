#include <mscorlib/System/Runtime/ConstrainedExecution/mscorlib_System_Runtime_ConstrainedExecution_ReliabilityContractAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace ConstrainedExecution
			{

				//Public Methods
				//Get Set Properties Methods
				//	Get:Cer
				mscorlib::System::Runtime::ConstrainedExecution::Cer::__ENUM__  ReliabilityContractAttribute::get_Cer()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.ConstrainedExecution", "ReliabilityContractAttribute", 0, NULL, "get_Cer", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Runtime::ConstrainedExecution::Cer::__ENUM__*)mono_object_unbox(__result__);
				}


				//	Get:ConsistencyGuarantee
				mscorlib::System::Runtime::ConstrainedExecution::Consistency::__ENUM__  ReliabilityContractAttribute::get_ConsistencyGuarantee()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.ConstrainedExecution", "ReliabilityContractAttribute", 0, NULL, "get_ConsistencyGuarantee", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Runtime::ConstrainedExecution::Consistency::__ENUM__*)mono_object_unbox(__result__);
				}


				//	Get:TypeId
				mscorlib::System::Object  ReliabilityContractAttribute::get_TypeId()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}



			}
		}
	}
}
