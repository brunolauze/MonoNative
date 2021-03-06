#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_LogicalCallContext.h>
#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_IMethodCallMessage.h>
#include <mscorlib/System/mscorlib_System_Exception.h>
#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_IMethodMessage.h>
#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_IMethodReturnMessage.h>
#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_IMessage.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IDictionary.h>

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

					class ReturnMessage
						: public mscorlib::System::Object
						, public virtual mscorlib::System::Runtime::Remoting::Messaging::IMethodMessage
						, public virtual mscorlib::System::Runtime::Remoting::Messaging::IMethodReturnMessage
						, public virtual mscorlib::System::Runtime::Remoting::Messaging::IMessage
					{
					public:
						ReturnMessage(mscorlib::System::Object ret, std::vector<mscorlib::System::Object*> outArgs, mscorlib::System::Int32 outArgsCount, mscorlib::System::Runtime::Remoting::Messaging::LogicalCallContext callCtx, mscorlib::System::Runtime::Remoting::Messaging::IMethodCallMessage mcm)
						: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Remoting.Messaging.ReturnMessage"))
						, mscorlib::System::Runtime::Remoting::Messaging::IMethodMessage(NULL)
						, mscorlib::System::Runtime::Remoting::Messaging::IMethodReturnMessage(NULL)
						, mscorlib::System::Runtime::Remoting::Messaging::IMessage(NULL)
						{
							MonoType *__parameter_types__[5];
							void *__parameters__[5];
							__parameter_types__[0] = Global::GetType("mscorlib", "System", "Object");
							__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
							__parameter_types__[2] = Global::GetType("mscorlib", "System", "Int32");
							__parameter_types__[3] = Global::GetType("mscorlib", "System.Runtime.Remoting.Messaging", "LogicalCallContext");
							__parameter_types__[4] = Global::GetType("mscorlib", "System.Runtime.Remoting.Messaging", "IMethodCallMessage");
							__parameters__[0] = (MonoObject*)ret;
							__parameters__[1] = Global::FromArray<mscorlib::System::Object*>(outArgs, "mscorlib", "System", "Object");
							__parameters__[2] = &outArgsCount;
							__parameters__[3] = (MonoObject*)callCtx;
							__parameters__[4] = (MonoObject*)mcm;
							__native_object__ = Global::New("mscorlib", "System.Runtime.Remoting.Messaging", "ReturnMessage", 5, __parameter_types__, __parameters__);
						};
					
						ReturnMessage(mscorlib::System::Exception e, mscorlib::System::Runtime::Remoting::Messaging::IMethodCallMessage mcm)
						: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Remoting.Messaging.ReturnMessage"))
						, mscorlib::System::Runtime::Remoting::Messaging::IMethodMessage(NULL)
						, mscorlib::System::Runtime::Remoting::Messaging::IMethodReturnMessage(NULL)
						, mscorlib::System::Runtime::Remoting::Messaging::IMessage(NULL)
						{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType("mscorlib", "System", "Exception");
							__parameter_types__[1] = Global::GetType("mscorlib", "System.Runtime.Remoting.Messaging", "IMethodCallMessage");
							__parameters__[0] = (MonoObject*)e;
							__parameters__[1] = (MonoObject*)mcm;
							__native_object__ = Global::New("mscorlib", "System.Runtime.Remoting.Messaging", "ReturnMessage", 2, __parameter_types__, __parameters__);
						};
					
						ReturnMessage(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::Object(nativeTypeInfo)
						, mscorlib::System::Runtime::Remoting::Messaging::IMethodMessage(NULL)
						, mscorlib::System::Runtime::Remoting::Messaging::IMethodReturnMessage(NULL)
						, mscorlib::System::Runtime::Remoting::Messaging::IMessage(NULL)
						{
						};
					
						ReturnMessage(MonoObject *nativeObject)
						: mscorlib::System::Object(nativeObject)
						, mscorlib::System::Runtime::Remoting::Messaging::IMethodMessage(nativeObject)
						, mscorlib::System::Runtime::Remoting::Messaging::IMethodReturnMessage(nativeObject)
						, mscorlib::System::Runtime::Remoting::Messaging::IMessage(nativeObject)
						{
						};
					
						~ReturnMessage()
						{
						};
					

						ReturnMessage & operator=(ReturnMessage &value) { __native_object__ = value.GetNativeObject(); return value; };
						bool operator==(ReturnMessage &value) { return mscorlib::System::Object::Equals(value); };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						virtual mscorlib::System::Object  GetArg(mscorlib::System::Int32 argNum);
						virtual mscorlib::System::String  GetArgName(mscorlib::System::Int32 index);
						virtual mscorlib::System::Object  GetOutArg(mscorlib::System::Int32 argNum);
						virtual mscorlib::System::String  GetOutArgName(mscorlib::System::Int32 index);
						virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


						//Public Properties
						__declspec(property(get=get_ArgCount)) mscorlib::System::Int32  ArgCount;
						__declspec(property(get=get_Args)) std::vector<mscorlib::System::Object*>  Args;
						__declspec(property(get=get_HasVarArgs)) mscorlib::System::Boolean  HasVarArgs;
						__declspec(property(get=get_LogicalCallContext)) mscorlib::System::Runtime::Remoting::Messaging::LogicalCallContext  LogicalCallContext;
						__declspec(property(get=get_MethodBase)) mscorlib::System::Reflection::MethodBase  MethodBase;
						__declspec(property(get=get_MethodName)) mscorlib::System::String  MethodName;
						__declspec(property(get=get_MethodSignature)) mscorlib::System::Object  MethodSignature;
						__declspec(property(get=get_Properties)) mscorlib::System::Collections::IDictionary  Properties;
						__declspec(property(get=get_TypeName)) mscorlib::System::String  TypeName;
						__declspec(property(get=get_Uri, put=set_Uri)) mscorlib::System::String  Uri;
						__declspec(property(get=get_Exception)) mscorlib::System::Exception  Exception;
						__declspec(property(get=get_OutArgCount)) mscorlib::System::Int32  OutArgCount;
						__declspec(property(get=get_OutArgs)) std::vector<mscorlib::System::Object*>  OutArgs;
						__declspec(property(get=get_ReturnValue)) mscorlib::System::Object  ReturnValue;

						//Get Set Properties Methods
						//	Get:ArgCount
						mscorlib::System::Int32  get_ArgCount() const;

						//	Get:Args
						std::vector<mscorlib::System::Object*>  get_Args() const;

						//	Get:HasVarArgs
						mscorlib::System::Boolean  get_HasVarArgs() const;

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

						//	Get:Exception
						mscorlib::System::Exception  get_Exception() const;

						//	Get:OutArgCount
						mscorlib::System::Int32  get_OutArgCount() const;

						//	Get:OutArgs
						std::vector<mscorlib::System::Object*>  get_OutArgs() const;

						//	Get:ReturnValue
						mscorlib::System::Object  get_ReturnValue() const;

					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
