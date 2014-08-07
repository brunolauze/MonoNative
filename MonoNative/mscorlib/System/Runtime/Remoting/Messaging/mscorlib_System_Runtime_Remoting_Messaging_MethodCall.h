#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_Header.h>
#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_IMessage.h>
#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_IMethodCallMessage.h>
#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_IMethodMessage.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ISerializable.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IDictionary.h>

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
				namespace Messaging
				{

					class LogicalCallContext;
					

				}
			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class MethodBase;
			

		}
	}
}
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
				namespace Messaging
				{

					class MethodCall
						: public mscorlib::System::Object
						, public virtual mscorlib::System::Runtime::Remoting::Messaging::IMethodCallMessage
						, public virtual mscorlib::System::Runtime::Remoting::Messaging::IMethodMessage
						, public virtual mscorlib::System::Runtime::Serialization::ISerializable
						, public virtual mscorlib::System::Runtime::Remoting::Messaging::IMessage
					{
					public:
						MethodCall(std::vector<mscorlib::System::Runtime::Remoting::Messaging::Header*> h1)
						: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Remoting.Messaging.MethodCall"))
						, mscorlib::System::Runtime::Remoting::Messaging::IMethodCallMessage(NULL)
						, mscorlib::System::Runtime::Remoting::Messaging::IMethodMessage(NULL)
						, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
						, mscorlib::System::Runtime::Remoting::Messaging::IMessage(NULL)
						{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System.Runtime.Remoting.Messaging", "Header")), 1));
							__parameters__[0] = Global::FromArray<mscorlib::System::Runtime::Remoting::Messaging::Header*>(h1, "mscorlib", "System.Runtime.Remoting.Messaging", "Header");
							__native_object__ = Global::New("mscorlib", "System.Runtime.Remoting.Messaging", "MethodCall", 1, __parameter_types__, __parameters__);
						};
					
						MethodCall(mscorlib::System::Runtime::Remoting::Messaging::IMessage msg)
						: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Remoting.Messaging.MethodCall"))
						, mscorlib::System::Runtime::Remoting::Messaging::IMethodCallMessage(NULL)
						, mscorlib::System::Runtime::Remoting::Messaging::IMethodMessage(NULL)
						, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
						, mscorlib::System::Runtime::Remoting::Messaging::IMessage(NULL)
						{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType("mscorlib", "System.Runtime.Remoting.Messaging", "IMessage");
							__parameters__[0] = (MonoObject*)msg;
							__native_object__ = Global::New("mscorlib", "System.Runtime.Remoting.Messaging", "MethodCall", 1, __parameter_types__, __parameters__);
						};
					
						MethodCall(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::Object(nativeTypeInfo)
						, mscorlib::System::Runtime::Remoting::Messaging::IMethodCallMessage(NULL)
						, mscorlib::System::Runtime::Remoting::Messaging::IMethodMessage(NULL)
						, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
						, mscorlib::System::Runtime::Remoting::Messaging::IMessage(NULL)
						{
						};
					
						MethodCall(MonoObject *nativeObject)
						: mscorlib::System::Object(nativeObject)
						, mscorlib::System::Runtime::Remoting::Messaging::IMethodCallMessage(nativeObject)
						, mscorlib::System::Runtime::Remoting::Messaging::IMethodMessage(nativeObject)
						, mscorlib::System::Runtime::Serialization::ISerializable(nativeObject)
						, mscorlib::System::Runtime::Remoting::Messaging::IMessage(nativeObject)
						{
						};
					
						~MethodCall()
						{
						};
					

						MethodCall & operator=(MethodCall &value) { __native_object__ = value.GetNativeObject(); return value; };
						bool operator==(MethodCall &value) { return mscorlib::System::Object::Equals(value); };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						virtual void  GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context);
						virtual mscorlib::System::Object  GetArg(mscorlib::System::Int32 argNum);
						virtual mscorlib::System::String  GetArgName(mscorlib::System::Int32 index);
						virtual mscorlib::System::Object  GetInArg(mscorlib::System::Int32 argNum);
						virtual mscorlib::System::String  GetInArgName(mscorlib::System::Int32 index);
						virtual mscorlib::System::Object  HeaderHandler(std::vector<mscorlib::System::Runtime::Remoting::Messaging::Header*> h);
						virtual void  Init();
						void  ResolveMethod();
						virtual void  RootSetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext ctx);
						virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


						//Public Properties
						__declspec(property(get=get_ArgCount)) mscorlib::System::Int32  ArgCount;
						__declspec(property(get=get_Args)) std::vector<mscorlib::System::Object*>  Args;
						__declspec(property(get=get_HasVarArgs)) mscorlib::System::Boolean  HasVarArgs;
						__declspec(property(get=get_InArgCount)) mscorlib::System::Int32  InArgCount;
						__declspec(property(get=get_InArgs)) std::vector<mscorlib::System::Object*>  InArgs;
						__declspec(property(get=get_LogicalCallContext)) mscorlib::System::Runtime::Remoting::Messaging::LogicalCallContext  LogicalCallContext;
						__declspec(property(get=get_MethodBase)) mscorlib::System::Reflection::MethodBase  MethodBase;
						__declspec(property(get=get_MethodName)) mscorlib::System::String  MethodName;
						__declspec(property(get=get_MethodSignature)) mscorlib::System::Object  MethodSignature;
						__declspec(property(get=get_Properties)) mscorlib::System::Collections::IDictionary  Properties;
						__declspec(property(get=get_TypeName)) mscorlib::System::String  TypeName;
						__declspec(property(get=get_Uri, put=set_Uri)) mscorlib::System::String  Uri;

						//Get Set Properties Methods
						//	Get:ArgCount
						mscorlib::System::Int32  get_ArgCount() const;

						//	Get:Args
						std::vector<mscorlib::System::Object*>  get_Args() const;

						//	Get:HasVarArgs
						mscorlib::System::Boolean  get_HasVarArgs() const;

						//	Get:InArgCount
						mscorlib::System::Int32  get_InArgCount() const;

						//	Get:InArgs
						std::vector<mscorlib::System::Object*>  get_InArgs() const;

						//	Get:LogicalCallContext
						mscorlib::System::Runtime::Remoting::Messaging::LogicalCallContext  get_LogicalCallContext() const;

						//	Get:MethodBase
						mscorlib::System::Reflection::MethodBase  get_MethodBase() const;

						//	Get:MethodName
						mscorlib::System::String  get_MethodName() const;

						//	Get:MethodSignature
						mscorlib::System::Object  get_MethodSignature() const;

						//	Get:Properties
						mscorlib::System::Collections::IDictionary  get_Properties() const;

						//	Get:TypeName
						mscorlib::System::String  get_TypeName() const;

						//	Get/Set:Uri
						mscorlib::System::String  get_Uri() const;
						void set_Uri(mscorlib::System::String  value);

					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
