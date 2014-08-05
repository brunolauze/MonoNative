#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_MESSAGING_REMOTINGSURROGATESELECTOR_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_MESSAGING_REMOTINGSURROGATESELECTOR_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ISurrogateSelector.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ISerializationSurrogate.h>

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
			namespace Serialization
			{

				class StreamingContext;
				

			}
		}
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
				namespace Messaging
				{

					class RemotingSurrogateSelector
						: public mscorlib::System::Object
						, public virtual mscorlib::System::Runtime::Serialization::ISurrogateSelector
					{
					public:
						RemotingSurrogateSelector()
						: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Remoting.Messaging.RemotingSurrogateSelector"))
						, mscorlib::System::Runtime::Serialization::ISurrogateSelector(NULL)
						{
							__native_object__ = Global::New("mscorlib", "System.Runtime.Remoting.Messaging", "RemotingSurrogateSelector");
						};
					
						RemotingSurrogateSelector(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::Object(nativeTypeInfo)
						, mscorlib::System::Runtime::Serialization::ISurrogateSelector(NULL)
						{
						};
					
						RemotingSurrogateSelector(MonoObject *nativeObject)
						: mscorlib::System::Object(nativeObject)
						, mscorlib::System::Runtime::Serialization::ISurrogateSelector(nativeObject)
						{
						};
					
						~RemotingSurrogateSelector()
						{
						};
					

						RemotingSurrogateSelector & operator=(RemotingSurrogateSelector &value) { __native_object__ = value.GetNativeObject(); return value; };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						virtual void  ChainSelector(mscorlib::System::Runtime::Serialization::ISurrogateSelector selector);
						virtual mscorlib::System::Runtime::Serialization::ISurrogateSelector  GetNextSelector();
						mscorlib::System::Object  GetRootObject();
						virtual mscorlib::System::Runtime::Serialization::ISerializationSurrogate  GetSurrogate(mscorlib::System::Type type, mscorlib::System::Runtime::Serialization::StreamingContext context, mscorlib::System::Runtime::Serialization::ISurrogateSelector ssout);
						void  SetRootObject(mscorlib::System::Object obj);
						virtual void  UseSoapFormat();
						virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


						//Public Properties
						__declspec(property(get=get_Filter, put=set_Filter)) mscorlib::Callback<mscorlib::System::Boolean  (mscorlib::System::String , mscorlib::System::Object )>  Filter;

						//Get Set Properties Methods
						//	Get/Set:Filter
						mscorlib::Callback<mscorlib::System::Boolean  (mscorlib::System::String , mscorlib::System::Object )>  get_Filter() const;
						void set_Filter(mscorlib::Callback<mscorlib::System::Boolean  (mscorlib::System::String , mscorlib::System::Object )>  value);

					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
