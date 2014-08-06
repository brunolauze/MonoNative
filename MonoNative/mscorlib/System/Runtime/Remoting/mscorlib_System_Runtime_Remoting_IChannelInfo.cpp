#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_IChannelInfo.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Remoting
			{

				//Get Set Properties Methods
				//	Get/Set:ChannelData
				std::vector<mscorlib::System::Object*>  IChannelInfo::get_ChannelData() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "IChannelInfo", 0, NULL, "get_ChannelData", __mscorlib_System_Runtime_Remoting_IChannelInfo, 0, NULL, NULL, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::Object*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back(new mscorlib::System::Object (__array_item__));
					}
					return __array_result__;
				}

				void IChannelInfo::set_ChannelData(std::vector<mscorlib::System::Object*>  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
					__parameters__[0] = Global::FromArray<mscorlib::System::Object*>(value, typeid(mscorlib::System::Object).name());
					Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "IChannelInfo", 0, NULL, "set_ChannelData", __mscorlib_System_Runtime_Remoting_IChannelInfo, 1, __parameter_types__, __parameters__, NULL);
				}



			}
		}
	}
}
