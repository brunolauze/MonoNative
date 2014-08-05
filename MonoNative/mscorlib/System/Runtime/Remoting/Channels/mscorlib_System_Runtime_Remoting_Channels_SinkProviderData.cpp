#include <mscorlib/System/Runtime/Remoting/Channels/mscorlib_System_Runtime_Remoting_Channels_SinkProviderData.h>
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
					//	Get:Children
					mscorlib::System::Collections::IList  SinkProviderData::get_Children() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "SinkProviderData", 0, NULL, "get_Children", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Collections::IList(__result__);
					}


					//	Get:Name
					mscorlib::System::String  SinkProviderData::get_Name() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "SinkProviderData", 0, NULL, "get_Name", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
					}


					//	Get:Properties
					mscorlib::System::Collections::IDictionary  SinkProviderData::get_Properties() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "SinkProviderData", 0, NULL, "get_Properties", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Collections::IDictionary(__result__);
					}



				}
			}
		}
	}
}
