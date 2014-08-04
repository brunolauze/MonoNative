#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_TASKS_TASKCANCELEDEXCEPTION_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_TASKS_TASKCANCELEDEXCEPTION_H

#include <mscorlib/System/mscorlib_System_OperationCanceledException.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Exception.h>
#include <mscorlib/System/Threading/Tasks/mscorlib_System_Threading_Tasks_Task.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ISerializable.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__Exception.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IDictionary.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			class CancellationToken;
			

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

		class Type;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{
			namespace Tasks
			{

				class TaskCanceledException
					: public mscorlib::System::OperationCanceledException
					, public virtual mscorlib::System::Runtime::Serialization::ISerializable
					, public virtual mscorlib::System::Runtime::InteropServices::_Exception
				{
				public:
					TaskCanceledException()
					: mscorlib::System::OperationCanceledException(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.Tasks.TaskCanceledException"))
					, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
					, mscorlib::System::Runtime::InteropServices::_Exception(NULL)
					{
						__native_object__ = Global::New("mscorlib", "System.Threading.Tasks", "TaskCanceledException");
					};
				
					TaskCanceledException(mscorlib::System::String message)
					: mscorlib::System::OperationCanceledException(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.Tasks.TaskCanceledException"))
					, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
					, mscorlib::System::Runtime::InteropServices::_Exception(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = (MonoObject*)message;
						__native_object__ = Global::New("mscorlib", "System.Threading.Tasks", "TaskCanceledException", 1, __parameter_types__, __parameters__);
					};
				
					TaskCanceledException(mscorlib::System::String message, mscorlib::System::Exception innerException)
					: mscorlib::System::OperationCanceledException(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.Tasks.TaskCanceledException"))
					, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
					, mscorlib::System::Runtime::InteropServices::_Exception(NULL)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "Exception");
						__parameters__[0] = (MonoObject*)message;
						__parameters__[1] = (MonoObject*)innerException;
						__native_object__ = Global::New("mscorlib", "System.Threading.Tasks", "TaskCanceledException", 2, __parameter_types__, __parameters__);
					};
				
					TaskCanceledException(mscorlib::System::Threading::Tasks::TaskBase task)
					: mscorlib::System::OperationCanceledException(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.Tasks.TaskCanceledException"))
					, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
					, mscorlib::System::Runtime::InteropServices::_Exception(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Threading.Tasks", "Task");
						__parameters__[0] = (MonoObject*)task;
						__native_object__ = Global::New("mscorlib", "System.Threading.Tasks", "TaskCanceledException", 1, __parameter_types__, __parameters__);
					};
				
					TaskCanceledException(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::OperationCanceledException(nativeTypeInfo)
					, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
					, mscorlib::System::Runtime::InteropServices::_Exception(NULL)
					{
					};
				
					TaskCanceledException(MonoObject *nativeObject)
					: mscorlib::System::OperationCanceledException(nativeObject)
					, mscorlib::System::Runtime::Serialization::ISerializable(nativeObject)
					, mscorlib::System::Runtime::InteropServices::_Exception(nativeObject)
					{
					};
				
					~TaskCanceledException()
					{
					};
				

					TaskCanceledException & operator=(TaskCanceledException &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Task)) mscorlib::System::Threading::Tasks::TaskBase  Task;
					__declspec(property(get=get_CancellationToken)) mscorlib::System::Threading::CancellationToken  CancellationToken;
					__declspec(property(get=get_InnerException)) mscorlib::System::Exception  InnerException;
					__declspec(property(get=get_HelpLink, put=set_HelpLink)) mscorlib::System::String  HelpLink;
					__declspec(property(get=get_HResult, put=set_HResult)) mscorlib::System::Int32  HResult;
					__declspec(property(get=get_Message)) mscorlib::System::String  Message;
					__declspec(property(get=get_Source, put=set_Source)) mscorlib::System::String  Source;
					__declspec(property(get=get_StackTrace)) mscorlib::System::String  StackTrace;
					__declspec(property(get=get_TargetSite)) mscorlib::System::Reflection::MethodBase  TargetSite;
					__declspec(property(get=get_Data)) mscorlib::System::Collections::IDictionary  Data;

					//Get Set Properties Methods
					//	Get:Task
					mscorlib::System::Threading::Tasks::TaskBase  get_Task();

					//	Get:CancellationToken
					mscorlib::System::Threading::CancellationToken  get_CancellationToken();

					//	Get:InnerException
					mscorlib::System::Exception  get_InnerException();

					//	Get/Set:HelpLink
					mscorlib::System::String  get_HelpLink();
					void set_HelpLink(mscorlib::System::String  value);

					//	Get/Set:HResult
					mscorlib::System::Int32  get_HResult();
					void set_HResult(mscorlib::System::Int32  value);

					//	Get:Message
					mscorlib::System::String  get_Message();

					//	Get/Set:Source
					mscorlib::System::String  get_Source();
					void set_Source(mscorlib::System::String  value);

					//	Get:StackTrace
					mscorlib::System::String  get_StackTrace();

					//	Get:TargetSite
					mscorlib::System::Reflection::MethodBase  get_TargetSite();

					//	Get:Data
					mscorlib::System::Collections::IDictionary  get_Data();

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
