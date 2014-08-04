#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ObjectIDGenerator.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Serialization
			{

				//Public Methods
				mscorlib::System::Int64 ObjectIDGenerator::GetId(mscorlib::System::Object obj, mscorlib::System::Boolean firstTime)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(obj).name());
						__parameter_types__[1] = Global::GetType(typeid(firstTime).name());
						__parameters__[0] = (MonoObject*)obj;
						__parameters__[1] = &firstTime;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "ObjectIDGenerator", 0, NULL, "GetId", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
				}

				mscorlib::System::Int64 ObjectIDGenerator::HasId(mscorlib::System::Object obj, mscorlib::System::Boolean firstTime)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(obj).name());
						__parameter_types__[1] = Global::GetType(typeid(firstTime).name());
						__parameters__[0] = (MonoObject*)obj;
						__parameters__[1] = &firstTime;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "ObjectIDGenerator", 0, NULL, "HasId", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
				}


			}
		}
	}
}
