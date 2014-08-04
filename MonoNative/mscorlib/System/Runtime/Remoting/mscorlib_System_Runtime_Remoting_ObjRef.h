#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_OBJREF_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_OBJREF_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_MarshalByRefObject.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ISerializable.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_IObjectReference.h>
#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_IChannelInfo.h>
#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_IEnvoyInfo.h>
#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_IRemotingTypeInfo.h>

namespace mscorlib
{
	namespace System
	{

		class String;
		

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

				class SerializationInfo;
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

				class ObjRef
					: public mscorlib::System::Object
					, public virtual mscorlib::System::Runtime::Serialization::ISerializable
					, public virtual mscorlib::System::Runtime::Serialization::IObjectReference
				{
				public:
					ObjRef()
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Remoting.ObjRef"))
					, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
					, mscorlib::System::Runtime::Serialization::IObjectReference(NULL)
					{
						__native_object__ = Global::New("mscorlib", "System.Runtime.Remoting", "ObjRef");
					};
				
					ObjRef(mscorlib::System::MarshalByRefObject o, mscorlib::System::Type requestedType)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Remoting.ObjRef"))
					, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
					, mscorlib::System::Runtime::Serialization::IObjectReference(NULL)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "MarshalByRefObject");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "Type");
						__parameters__[0] = (MonoObject*)o;
						__parameters__[1] = (MonoObject*)requestedType;
						__native_object__ = Global::New("mscorlib", "System.Runtime.Remoting", "ObjRef", 2, __parameter_types__, __parameters__);
					};
				
					ObjRef(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
					, mscorlib::System::Runtime::Serialization::IObjectReference(NULL)
					{
					};
				
					ObjRef(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					, mscorlib::System::Runtime::Serialization::ISerializable(nativeObject)
					, mscorlib::System::Runtime::Serialization::IObjectReference(nativeObject)
					{
					};
				
					~ObjRef()
					{
					};
				

					ObjRef & operator=(ObjRef &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual void  GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context);
					virtual mscorlib::System::Object  GetRealObject(mscorlib::System::Runtime::Serialization::StreamingContext context);
					mscorlib::System::Boolean  IsFromThisAppDomain();
					mscorlib::System::Boolean  IsFromThisProcess();
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_ChannelInfo, put=set_ChannelInfo)) mscorlib::System::Runtime::Remoting::IChannelInfo  ChannelInfo;
					__declspec(property(get=get_EnvoyInfo, put=set_EnvoyInfo)) mscorlib::System::Runtime::Remoting::IEnvoyInfo  EnvoyInfo;
					__declspec(property(get=get_TypeInfo, put=set_TypeInfo)) mscorlib::System::Runtime::Remoting::IRemotingTypeInfo  TypeInfo;
					__declspec(property(get=get_URI, put=set_URI)) mscorlib::System::String  URI;

					//Get Set Properties Methods
					//	Get/Set:ChannelInfo
					mscorlib::System::Runtime::Remoting::IChannelInfo  get_ChannelInfo();
					void set_ChannelInfo(mscorlib::System::Runtime::Remoting::IChannelInfo  value);

					//	Get/Set:EnvoyInfo
					mscorlib::System::Runtime::Remoting::IEnvoyInfo  get_EnvoyInfo();
					void set_EnvoyInfo(mscorlib::System::Runtime::Remoting::IEnvoyInfo  value);

					//	Get/Set:TypeInfo
					mscorlib::System::Runtime::Remoting::IRemotingTypeInfo  get_TypeInfo();
					void set_TypeInfo(mscorlib::System::Runtime::Remoting::IRemotingTypeInfo  value);

					//	Get/Set:URI
					mscorlib::System::String  get_URI();
					void set_URI(mscorlib::System::String  value);

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
