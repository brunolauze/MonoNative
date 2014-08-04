#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_IObjectReference.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_StreamingContext.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Serialization
			{

				//Public Methods
				mscorlib::System::Object IObjectReference::GetRealObject(mscorlib::System::Runtime::Serialization::StreamingContext context)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(context).name());
						__parameters__[0] = (MonoObject*)context;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "IObjectReference", 0, NULL, "GetRealObject", __mscorlib_System_Runtime_Serialization_IObjectReference, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Object(__result__);
				}


			}
		}
	}
}
