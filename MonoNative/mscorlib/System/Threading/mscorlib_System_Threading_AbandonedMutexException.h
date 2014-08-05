#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_ABANDONEDMUTEXEXCEPTION_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_ABANDONEDMUTEXEXCEPTION_H

#include <mscorlib/System/mscorlib_System_SystemException.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_WaitHandle.h>
#include <mscorlib/System/mscorlib_System_Exception.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__Exception.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ISerializable.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IDictionary.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			class Mutex;
			

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

			class AbandonedMutexException
				: public mscorlib::System::SystemException
				, public virtual mscorlib::System::Runtime::InteropServices::_Exception
				, public virtual mscorlib::System::Runtime::Serialization::ISerializable
			{
			public:
				AbandonedMutexException()
				: mscorlib::System::SystemException(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.AbandonedMutexException"))
				, mscorlib::System::Runtime::InteropServices::_Exception(NULL)
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				{
					__native_object__ = Global::New("mscorlib", "System.Threading", "AbandonedMutexException");
				};
			
				AbandonedMutexException(mscorlib::System::String message)
				: mscorlib::System::SystemException(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.AbandonedMutexException"))
				, mscorlib::System::Runtime::InteropServices::_Exception(NULL)
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = (MonoObject*)message;
					__native_object__ = Global::New("mscorlib", "System.Threading", "AbandonedMutexException", 1, __parameter_types__, __parameters__);
				};
			
				AbandonedMutexException(mscorlib::System::Int32 location, mscorlib::System::Threading::WaitHandle handle)
				: mscorlib::System::SystemException(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.AbandonedMutexException"))
				, mscorlib::System::Runtime::InteropServices::_Exception(NULL)
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
					__parameter_types__[1] = Global::GetType("mscorlib", "System.Threading", "WaitHandle");
					__parameters__[0] = &location;
					__parameters__[1] = (MonoObject*)handle;
					__native_object__ = Global::New("mscorlib", "System.Threading", "AbandonedMutexException", 2, __parameter_types__, __parameters__);
				};
			
				AbandonedMutexException(mscorlib::System::String message, mscorlib::System::Exception inner)
				: mscorlib::System::SystemException(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.AbandonedMutexException"))
				, mscorlib::System::Runtime::InteropServices::_Exception(NULL)
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Exception");
					__parameters__[0] = (MonoObject*)message;
					__parameters__[1] = (MonoObject*)inner;
					__native_object__ = Global::New("mscorlib", "System.Threading", "AbandonedMutexException", 2, __parameter_types__, __parameters__);
				};
			
				AbandonedMutexException(mscorlib::System::String message, mscorlib::System::Int32 location, mscorlib::System::Threading::WaitHandle handle)
				: mscorlib::System::SystemException(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.AbandonedMutexException"))
				, mscorlib::System::Runtime::InteropServices::_Exception(NULL)
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int32");
					__parameter_types__[2] = Global::GetType("mscorlib", "System.Threading", "WaitHandle");
					__parameters__[0] = (MonoObject*)message;
					__parameters__[1] = &location;
					__parameters__[2] = (MonoObject*)handle;
					__native_object__ = Global::New("mscorlib", "System.Threading", "AbandonedMutexException", 3, __parameter_types__, __parameters__);
				};
			
				AbandonedMutexException(mscorlib::System::String message, mscorlib::System::Exception inner, mscorlib::System::Int32 location, mscorlib::System::Threading::WaitHandle handle)
				: mscorlib::System::SystemException(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.AbandonedMutexException"))
				, mscorlib::System::Runtime::InteropServices::_Exception(NULL)
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Exception");
					__parameter_types__[2] = Global::GetType("mscorlib", "System", "Int32");
					__parameter_types__[3] = Global::GetType("mscorlib", "System.Threading", "WaitHandle");
					__parameters__[0] = (MonoObject*)message;
					__parameters__[1] = (MonoObject*)inner;
					__parameters__[2] = &location;
					__parameters__[3] = (MonoObject*)handle;
					__native_object__ = Global::New("mscorlib", "System.Threading", "AbandonedMutexException", 4, __parameter_types__, __parameters__);
				};
			
				AbandonedMutexException(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::SystemException(nativeTypeInfo)
				, mscorlib::System::Runtime::InteropServices::_Exception(NULL)
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				{
				};
			
				AbandonedMutexException(MonoObject *nativeObject)
				: mscorlib::System::SystemException(nativeObject)
				, mscorlib::System::Runtime::InteropServices::_Exception(nativeObject)
				, mscorlib::System::Runtime::Serialization::ISerializable(nativeObject)
				{
				};
			
				~AbandonedMutexException()
				{
				};
			

				AbandonedMutexException & operator=(AbandonedMutexException &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_Mutex)) mscorlib::System::Threading::Mutex  Mutex;
				__declspec(property(get=get_MutexIndex)) mscorlib::System::Int32  MutexIndex;
				__declspec(property(get=get_InnerException)) mscorlib::System::Exception  InnerException;
				__declspec(property(get=get_HelpLink, put=set_HelpLink)) mscorlib::System::String  HelpLink;
				__declspec(property(get=get_HResult, put=set_HResult)) mscorlib::System::Int32  HResult;
				__declspec(property(get=get_Message)) mscorlib::System::String  Message;
				__declspec(property(get=get_Source, put=set_Source)) mscorlib::System::String  Source;
				__declspec(property(get=get_StackTrace)) mscorlib::System::String  StackTrace;
				__declspec(property(get=get_TargetSite)) mscorlib::System::Reflection::MethodBase  TargetSite;
				__declspec(property(get=get_Data)) mscorlib::System::Collections::IDictionary  Data;

				//Get Set Properties Methods
				//	Get:Mutex
				mscorlib::System::Threading::Mutex  get_Mutex() const;

				//	Get:MutexIndex
				mscorlib::System::Int32  get_MutexIndex() const;

				//	Get:InnerException
				mscorlib::System::Exception  get_InnerException() const;

				//	Get/Set:HelpLink
				mscorlib::System::String  get_HelpLink() const;
				void set_HelpLink(mscorlib::System::String  value);

				//	Get/Set:HResult
				mscorlib::System::Int32  get_HResult() const;
				void set_HResult(mscorlib::System::Int32  value);

				//	Get:Message
				mscorlib::System::String  get_Message() const;

				//	Get/Set:Source
				mscorlib::System::String  get_Source() const;
				void set_Source(mscorlib::System::String  value);

				//	Get:StackTrace
				mscorlib::System::String  get_StackTrace() const;

				//	Get:TargetSite
				mscorlib::System::Reflection::MethodBase  get_TargetSite() const;

				//	Get:Data
				mscorlib::System::Collections::IDictionary  get_Data() const;

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
