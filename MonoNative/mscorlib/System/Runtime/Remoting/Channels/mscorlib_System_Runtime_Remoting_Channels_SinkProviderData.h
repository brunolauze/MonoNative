#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CHANNELS_SINKPROVIDERDATA_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CHANNELS_SINKPROVIDERDATA_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IList.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IDictionary.h>

namespace mscorlib
{
	namespace System
	{

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

					class SinkProviderData
						: public mscorlib::System::Object
					{
					public:
						SinkProviderData(mscorlib::System::String name)
						: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Remoting.Channels.SinkProviderData"))
						{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
							__parameters__[0] = (MonoObject*)name;
							__native_object__ = Global::New("mscorlib", "System.Runtime.Remoting.Channels", "SinkProviderData", 1, __parameter_types__, __parameters__);
						};
					
						SinkProviderData(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::Object(nativeTypeInfo)
						{
						};
					
						SinkProviderData(MonoObject *nativeObject)
						: mscorlib::System::Object(nativeObject)
						{
						};
					
						~SinkProviderData()
						{
						};
					

						SinkProviderData & operator=(SinkProviderData &value) { __native_object__ = value.GetNativeObject(); return value; };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


						//Public Properties
						__declspec(property(get=get_Children)) mscorlib::System::Collections::IList  Children;
						__declspec(property(get=get_Name)) mscorlib::System::String  Name;
						__declspec(property(get=get_Properties)) mscorlib::System::Collections::IDictionary  Properties;

						//Get Set Properties Methods
						//	Get:Children
						mscorlib::System::Collections::IList  get_Children();

						//	Get:Name
						mscorlib::System::String  get_Name();

						//	Get:Properties
						mscorlib::System::Collections::IDictionary  get_Properties();

					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
