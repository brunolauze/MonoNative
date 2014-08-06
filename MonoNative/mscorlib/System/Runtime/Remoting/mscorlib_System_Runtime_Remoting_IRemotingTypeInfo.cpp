#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_IRemotingTypeInfo.h>
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
				mscorlib::System::Boolean IRemotingTypeInfo::CanCastTo(mscorlib::System::Type fromType, mscorlib::System::Object o)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(fromType).name());
						__parameter_types__[1] = Global::GetType(typeid(o).name());
						__parameters__[0] = (MonoObject*)fromType;
						__parameters__[1] = (MonoObject*)o;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "IRemotingTypeInfo", 0, NULL, "CanCastTo", __mscorlib_System_Runtime_Remoting_IRemotingTypeInfo, 2, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				//Get Set Properties Methods
				//	Get/Set:TypeName
				mscorlib::System::String  IRemotingTypeInfo::get_TypeName() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "IRemotingTypeInfo", 0, NULL, "get_TypeName", __mscorlib_System_Runtime_Remoting_IRemotingTypeInfo, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void IRemotingTypeInfo::set_TypeName(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "IRemotingTypeInfo", 0, NULL, "set_TypeName", __mscorlib_System_Runtime_Remoting_IRemotingTypeInfo, 1, __parameter_types__, __parameters__, NULL);
				}



			}
		}
	}
}
