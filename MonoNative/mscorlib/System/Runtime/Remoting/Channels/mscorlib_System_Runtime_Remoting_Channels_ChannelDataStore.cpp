#include <mscorlib/System/Runtime/Remoting/Channels/mscorlib_System_Runtime_Remoting_Channels_ChannelDataStore.h>
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
				namespace Channels
				{

					//Public Methods
					//Get Set Properties Methods
					//	Get/Set:ChannelUris
					std::vector<mscorlib::System::String*>  ChannelDataStore::get_ChannelUris()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "ChannelDataStore", 0, NULL, "get_ChannelUris", __native_object__, 0, NULL, NULL, NULL);
						MonoArray *__array_ptr__ = (MonoArray*)__result__;
						uintptr_t __array_length__ = mono_array_length(__array_ptr__);
						std::vector<mscorlib::System::String*>  __array_result__(__array_length__);
						for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
						{
							MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
							__array_result__.push_back(new mscorlib::System::String (__array_item__));
						}
						return __array_result__;
					}

					void ChannelDataStore::set_ChannelUris(std::vector<mscorlib::System::String*>  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(value).name()))->eklass);
						__parameters__[0] = Global::FromArray<mscorlib::System::String*>(value, typeid(mscorlib::System::String).name());
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "ChannelDataStore", 0, NULL, "set_ChannelUris", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}


					//	Get/Set:Item
					mscorlib::System::Object  ChannelDataStore::get_Item(mscorlib::System::Object key)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(key).name());
						__parameters__[0] = (MonoObject*)key;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "ChannelDataStore", 0, NULL, "get_Item", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Object(__result__);
					}

					void ChannelDataStore::set_Item(mscorlib::System::Object key, mscorlib::System::Object  value)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(key).name());
						__parameter_types__[1] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)key;
						__parameters__[1] = (MonoObject*)value;
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "ChannelDataStore", 0, NULL, "set_Item", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					}



				}
			}
		}
	}
}
