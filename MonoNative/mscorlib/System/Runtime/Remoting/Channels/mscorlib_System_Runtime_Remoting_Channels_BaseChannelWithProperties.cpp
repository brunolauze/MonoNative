#include <mscorlib/System/Runtime/Remoting/Channels/mscorlib_System_Runtime_Remoting_Channels_BaseChannelWithProperties.h>
#include <mscorlib/System/mscorlib_System_Array.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



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
					//	Get:Properties
					mscorlib::System::Collections::IDictionary  BaseChannelWithProperties::get_Properties() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "BaseChannelWithProperties", 0, NULL, "get_Properties", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Collections::IDictionary(__result__);
					}


					//	Get:Count
					mscorlib::System::Int32  BaseChannelWithProperties::get_Count() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "BaseChannelObjectWithProperties", 0, NULL, "get_Count", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					}


					//	Get:IsFixedSize
					mscorlib::System::Boolean  BaseChannelWithProperties::get_IsFixedSize() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "BaseChannelObjectWithProperties", 0, NULL, "get_IsFixedSize", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					}


					//	Get:IsReadOnly
					mscorlib::System::Boolean  BaseChannelWithProperties::get_IsReadOnly() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "BaseChannelObjectWithProperties", 0, NULL, "get_IsReadOnly", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					}


					//	Get:IsSynchronized
					mscorlib::System::Boolean  BaseChannelWithProperties::get_IsSynchronized() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "BaseChannelObjectWithProperties", 0, NULL, "get_IsSynchronized", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					}


					//	Get/Set:Item
					mscorlib::System::Object  BaseChannelWithProperties::get_Item(mscorlib::System::Object key) const
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(key).name());
						__parameters__[0] = (MonoObject*)key;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "BaseChannelObjectWithProperties", 0, NULL, "get_Item", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Object(__result__);
					}

					void BaseChannelWithProperties::set_Item(mscorlib::System::Object key, mscorlib::System::Object  value)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(key).name());
						__parameter_types__[1] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)key;
						__parameters__[1] = (MonoObject*)value;
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "BaseChannelObjectWithProperties", 0, NULL, "set_Item", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					}


					//	Get:Keys
					mscorlib::System::Collections::ICollection  BaseChannelWithProperties::get_Keys() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "BaseChannelObjectWithProperties", 0, NULL, "get_Keys", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Collections::ICollection(__result__);
					}


					//	Get:SyncRoot
					mscorlib::System::Object  BaseChannelWithProperties::get_SyncRoot() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "BaseChannelObjectWithProperties", 0, NULL, "get_SyncRoot", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Object(__result__);
					}


					//	Get:Values
					mscorlib::System::Collections::ICollection  BaseChannelWithProperties::get_Values() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "BaseChannelObjectWithProperties", 0, NULL, "get_Values", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Collections::ICollection(__result__);
					}



				}
			}
		}
	}
}
