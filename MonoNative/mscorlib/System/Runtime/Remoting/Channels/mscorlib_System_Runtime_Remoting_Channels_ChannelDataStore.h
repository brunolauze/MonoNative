#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELDATASTORE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELDATASTORE_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/Remoting/Channels/mscorlib_System_Runtime_Remoting_Channels_IChannelDataStore.h>

namespace mscorlib
{
	namespace System
	{

		class String;
		class Type;
		

	}
}
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

					class ChannelDataStore
						: public mscorlib::System::Object
						, public virtual mscorlib::System::Runtime::Remoting::Channels::IChannelDataStore
					{
					public:
						ChannelDataStore(std::vector<mscorlib::System::String*> channelURIs)
						: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Remoting.Channels.ChannelDataStore"))
						, mscorlib::System::Runtime::Remoting::Channels::IChannelDataStore(NULL)
						{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType("mscorlib", "System", "String"))->eklass);
							__parameters__[0] = Global::FromArray<mscorlib::System::String*>(channelURIs, "mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089", "System", "String");
							__native_object__ = Global::New("mscorlib", "System.Runtime.Remoting.Channels", "ChannelDataStore", 1, __parameter_types__, __parameters__);
						};
					
						ChannelDataStore(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::Object(nativeTypeInfo)
						, mscorlib::System::Runtime::Remoting::Channels::IChannelDataStore(NULL)
						{
						};
					
						ChannelDataStore(MonoObject *nativeObject)
						: mscorlib::System::Object(nativeObject)
						, mscorlib::System::Runtime::Remoting::Channels::IChannelDataStore(nativeObject)
						{
						};
					
						~ChannelDataStore()
						{
						};
					

						ChannelDataStore & operator=(ChannelDataStore &value) { __native_object__ = value.GetNativeObject(); return value; };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


						//Public Properties
						__declspec(property(get=get_ChannelUris, put=set_ChannelUris)) std::vector<mscorlib::System::String*>  ChannelUris;
						__declspec(property(get=get_Item, put=set_Item)) mscorlib::System::Object  Item[];

						//Get Set Properties Methods
						//	Get/Set:ChannelUris
						std::vector<mscorlib::System::String*>  get_ChannelUris() const;
						void set_ChannelUris(std::vector<mscorlib::System::String*>  value);

						//	Get/Set:Item
						mscorlib::System::Object  get_Item(mscorlib::System::Object key) const;
						void set_Item(mscorlib::System::Object key, mscorlib::System::Object  value);

					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
