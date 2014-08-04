#include <mscorlib/System/Runtime/Remoting/Channels/mscorlib_System_Runtime_Remoting_Channels_BaseChannelObjectWithProperties.h>
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
					void BaseChannelObjectWithProperties::Add(mscorlib::System::Object key, mscorlib::System::Object value)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(key).name());
							__parameter_types__[1] = Global::GetType(typeid(value).name());
							__parameters__[0] = (MonoObject*)key;
							__parameters__[1] = (MonoObject*)value;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "BaseChannelObjectWithProperties", 0, NULL, "Add", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					}

					void BaseChannelObjectWithProperties::Clear()
					{
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "BaseChannelObjectWithProperties", 0, NULL, "Clear", __native_object__, 0, NULL, NULL, NULL);
					}

					mscorlib::System::Boolean BaseChannelObjectWithProperties::Contains(mscorlib::System::Object key)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(key).name());
							__parameters__[0] = (MonoObject*)key;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "BaseChannelObjectWithProperties", 0, NULL, "Contains", __native_object__, 1, __parameter_types__, __parameters__, NULL);
							return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					}

					void BaseChannelObjectWithProperties::CopyTo(mscorlib::System::Array array, mscorlib::System::Int32 index)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(array).name());
							__parameter_types__[1] = Global::GetType(typeid(index).name());
							__parameters__[0] = (MonoObject*)array;
							__parameters__[1] = &index;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "BaseChannelObjectWithProperties", 0, NULL, "CopyTo", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					}

					mscorlib::System::Collections::IDictionaryEnumerator* BaseChannelObjectWithProperties::GetEnumerator()
					{
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "BaseChannelObjectWithProperties", 0, NULL, "GetEnumerator", __native_object__, 0, NULL, NULL, NULL);
							return new mscorlib::System::Collections::IDictionaryEnumerator(__result__);
					}

					void BaseChannelObjectWithProperties::Remove(mscorlib::System::Object key)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(key).name());
							__parameters__[0] = (MonoObject*)key;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "BaseChannelObjectWithProperties", 0, NULL, "Remove", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}

					//Get Set Properties Methods
					//	Get:Count
					mscorlib::System::Int32  BaseChannelObjectWithProperties::get_Count()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "BaseChannelObjectWithProperties", 0, NULL, "get_Count", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					}


					//	Get:IsFixedSize
					mscorlib::System::Boolean  BaseChannelObjectWithProperties::get_IsFixedSize()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "BaseChannelObjectWithProperties", 0, NULL, "get_IsFixedSize", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					}


					//	Get:IsReadOnly
					mscorlib::System::Boolean  BaseChannelObjectWithProperties::get_IsReadOnly()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "BaseChannelObjectWithProperties", 0, NULL, "get_IsReadOnly", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					}


					//	Get:IsSynchronized
					mscorlib::System::Boolean  BaseChannelObjectWithProperties::get_IsSynchronized()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "BaseChannelObjectWithProperties", 0, NULL, "get_IsSynchronized", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					}


					//	Get/Set:Item
					mscorlib::System::Object  BaseChannelObjectWithProperties::get_Item(mscorlib::System::Object key)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(key).name());
						__parameters__[0] = (MonoObject*)key;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "BaseChannelObjectWithProperties", 0, NULL, "get_Item", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Object(__result__);
					}

					void BaseChannelObjectWithProperties::set_Item(mscorlib::System::Object key, mscorlib::System::Object  value)
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
					mscorlib::System::Collections::ICollection  BaseChannelObjectWithProperties::get_Keys()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "BaseChannelObjectWithProperties", 0, NULL, "get_Keys", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Collections::ICollection(__result__);
					}


					//	Get:Properties
					mscorlib::System::Collections::IDictionary  BaseChannelObjectWithProperties::get_Properties()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "BaseChannelObjectWithProperties", 0, NULL, "get_Properties", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Collections::IDictionary(__result__);
					}


					//	Get:SyncRoot
					mscorlib::System::Object  BaseChannelObjectWithProperties::get_SyncRoot()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "BaseChannelObjectWithProperties", 0, NULL, "get_SyncRoot", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Object(__result__);
					}


					//	Get:Values
					mscorlib::System::Collections::ICollection  BaseChannelObjectWithProperties::get_Values()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "BaseChannelObjectWithProperties", 0, NULL, "get_Values", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Collections::ICollection(__result__);
					}



				}
			}
		}
	}
}
