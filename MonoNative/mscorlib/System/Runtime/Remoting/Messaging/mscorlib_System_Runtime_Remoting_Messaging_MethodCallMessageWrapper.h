#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALLMESSAGEWRAPPER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALLMESSAGEWRAPPER_H

#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_InternalMessageWrapper.h>
#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_IMethodCallMessage.h>
#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_IMethodMessage.h>
#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_IMessage.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IDictionary.h>

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

					class MethodCallMessageWrapper
						: public mscorlib::System::Runtime::Remoting::Messaging::InternalMessageWrapper
						, public virtual mscorlib::System::Runtime::Remoting::Messaging::IMethodMessage
						, public virtual mscorlib::System::Runtime::Remoting::Messaging::IMessage
						, public virtual mscorlib::System::Runtime::Remoting::Messaging::IMethodCallMessage
					{
					public:
						MethodCallMessageWrapper(mscorlib::System::Runtime::Remoting::Messaging::IMethodCallMessage msg)
						: mscorlib::System::Runtime::Remoting::Messaging::InternalMessageWrapper(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Remoting.Messaging.MethodCallMessageWrapper"))
						, mscorlib::System::Runtime::Remoting::Messaging::IMethodMessage(NULL)
						, mscorlib::System::Runtime::Remoting::Messaging::IMessage(NULL)
						, mscorlib::System::Runtime::Remoting::Messaging::IMethodCallMessage(NULL)
						{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType("mscorlib", "System.Runtime.Remoting.Messaging", "IMethodCallMessage");
							__parameters__[0] = (MonoObject*)msg;
							__native_object__ = Global::New("mscorlib", "System.Runtime.Remoting.Messaging", "MethodCallMessageWrapper", 1, __parameter_types__, __parameters__);
						};
					
						MethodCallMessageWrapper(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::Runtime::Remoting::Messaging::InternalMessageWrapper(nativeTypeInfo)
						, mscorlib::System::Runtime::Remoting::Messaging::IMethodMessage(NULL)
						, mscorlib::System::Runtime::Remoting::Messaging::IMessage(NULL)
						, mscorlib::System::Runtime::Remoting::Messaging::IMethodCallMessage(NULL)
						{
						};
					
						MethodCallMessageWrapper(MonoObject *nativeObject)
						: mscorlib::System::Runtime::Remoting::Messaging::InternalMessageWrapper(nativeObject)
						, mscorlib::System::Runtime::Remoting::Messaging::IMethodMessage(nativeObject)
						, mscorlib::System::Runtime::Remoting::Messaging::IMessage(nativeObject)
						, mscorlib::System::Runtime::Remoting::Messaging::IMethodCallMessage(nativeObject)
						{
						};
					
						~MethodCallMessageWrapper()
						{
						};
					

						MethodCallMessageWrapper & operator=(MethodCallMessageWrapper &value) { __native_object__ = value.GetNativeObject(); return value; };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						virtual mscorlib::System::Object  GetArg(mscorlib::System::Int32 argNum);
						virtual mscorlib::System::String  GetArgName(mscorlib::System::Int32 index);
						virtual mscorlib::System::Object  GetInArg(mscorlib::System::Int32 argNum);
						virtual mscorlib::System::String  GetInArgName(mscorlib::System::Int32 index);
						virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


						//Public Properties
						__declspec(property(get=get_ArgCount)) mscorlib::System::Int32  ArgCount;
						__declspec(property(get=get_Args, put=set_Args)) std::vector<mscorlib::System::Object*>  Args;
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
						mscorlib::System::Int32  get_ArgCount();

						//	Get/Set:Args
						std::vector<mscorlib::System::Object*>  get_Args();
						void set_Args(std::vector<mscorlib::System::Object*>  value);

						//	Get:HasVarArgs
						mscorlib::System::Boolean  get_HasVarArgs();

						//	Get:InArgCount
						mscorlib::System::Int32  get_InArgCount();

						//	Get:InArgs
						std::vector<mscorlib::System::Object*>  get_InArgs();

						//	Get:LogicalCallContext
						mscorlib::System::Runtime::Remoting::Messaging::LogicalCallContext  get_LogicalCallContext();

						//	Get:MethodBase
						mscorlib::System::Reflection::MethodBase  get_MethodBase();

						//	Get:MethodName
						mscorlib::System::String  get_MethodName();

						//	Get:MethodSignature
						mscorlib::System::Object  get_MethodSignature();

						//	Get:Properties
						mscorlib::System::Collections::IDictionary  get_Properties();

						//	Get:TypeName
						mscorlib::System::String  get_TypeName();

						//	Get/Set:Uri
						mscorlib::System::String  get_Uri();
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
