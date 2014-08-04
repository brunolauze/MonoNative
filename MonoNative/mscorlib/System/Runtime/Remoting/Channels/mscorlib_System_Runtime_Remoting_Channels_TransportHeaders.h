#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CHANNELS_TRANSPORTHEADERS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CHANNELS_TRANSPORTHEADERS_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/Remoting/Channels/mscorlib_System_Runtime_Remoting_Channels_ITransportHeaders.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IEnumerator.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		class String;
		

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

					class TransportHeaders
						: public mscorlib::System::Object
						, public virtual mscorlib::System::Runtime::Remoting::Channels::ITransportHeaders
					{
					public:
						TransportHeaders()
						: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Remoting.Channels.TransportHeaders"))
						, mscorlib::System::Runtime::Remoting::Channels::ITransportHeaders(NULL)
						{
							__native_object__ = Global::New("mscorlib", "System.Runtime.Remoting.Channels", "TransportHeaders");
						};
					
						TransportHeaders(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::Object(nativeTypeInfo)
						, mscorlib::System::Runtime::Remoting::Channels::ITransportHeaders(NULL)
						{
						};
					
						TransportHeaders(MonoObject *nativeObject)
						: mscorlib::System::Object(nativeObject)
						, mscorlib::System::Runtime::Remoting::Channels::ITransportHeaders(nativeObject)
						{
						};
					
						~TransportHeaders()
						{
						};
					

						TransportHeaders & operator=(TransportHeaders &value) { __native_object__ = value.GetNativeObject(); return value; };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						virtual mscorlib::System::Collections::IEnumerator * GetEnumerator();
						virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


						//Public Properties
						__declspec(property(get=get_Item, put=set_Item)) mscorlib::System::Object  Item[];

						//Get Set Properties Methods
						//	Get/Set:Item
						mscorlib::System::Object  get_Item(mscorlib::System::Object key);
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
