#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_ICHANNELINFO_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_ICHANNELINFO_H

#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Remoting
			{

				class IChannelInfo
				{
				public:
					IChannelInfo(MonoObject *nativeObject)
					{
						__mscorlib_System_Runtime_Remoting_IChannelInfo = nativeObject;
					};
				
					~IChannelInfo()
					{
					};
				

					IChannelInfo & operator=(IChannelInfo &value) { __mscorlib_System_Runtime_Remoting_IChannelInfo = value.__mscorlib_System_Runtime_Remoting_IChannelInfo; return value; };
					operator MonoObject*() { return __mscorlib_System_Runtime_Remoting_IChannelInfo; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_Remoting_IChannelInfo = value; return value; };




					//Public Properties
					__declspec(property(get=get_ChannelData, put=set_ChannelData)) std::vector<mscorlib::System::Object*>  ChannelData;

					//Get Set Properties Methods
					//	Get/Set:ChannelData
					std::vector<mscorlib::System::Object*>  get_ChannelData() const;
					void set_ChannelData(std::vector<mscorlib::System::Object*>  value);

				
				protected:
					MonoObject *__mscorlib_System_Runtime_Remoting_IChannelInfo;
				
				private:
				
				};

			}
		}
	}
}
#endif
