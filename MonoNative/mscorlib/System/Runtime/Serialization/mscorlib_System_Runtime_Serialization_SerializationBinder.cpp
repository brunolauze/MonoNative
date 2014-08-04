#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_SerializationBinder.h>
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
				mscorlib::System::Type SerializationBinder::BindToType(mscorlib::System::String assemblyName, mscorlib::System::String typeName)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(assemblyName).name());
						__parameter_types__[1] = Global::GetType(typeid(typeName).name());
						__parameters__[0] = (MonoObject*)assemblyName;
						__parameters__[1] = (MonoObject*)typeName;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "SerializationBinder", 0, NULL, "BindToType", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Type(__result__);
				}

				void SerializationBinder::BindToName(mscorlib::System::Type serializedType, mscorlib::System::String assemblyName, mscorlib::System::String typeName)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(serializedType).name());
						__parameter_types__[1] = Global::GetType(typeid(assemblyName).name());
						__parameter_types__[2] = Global::GetType(typeid(typeName).name());
						__parameters__[0] = (MonoObject*)serializedType;
						__parameters__[1] = (MonoObject*)assemblyName;
						__parameters__[2] = (MonoObject*)typeName;
						Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "SerializationBinder", 0, NULL, "BindToName", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				}


			}
		}
	}
}
