#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_TIMER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_TIMER_H

#include <mscorlib/System/mscorlib_System_MarshalByRefObject.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_TimeSpan.h>
#include <mscorlib/System/mscorlib_System_IDisposable.h>

namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			class WaitHandle;
			

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

				class ObjRef;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{

		class Type;
		class String;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			class Timer
				: public mscorlib::System::MarshalByRefObject
				, public virtual mscorlib::System::IDisposable
			{
			public:
				Timer(mscorlib::Callback<void  (mscorlib::System::Object )> callback, mscorlib::System::Object state, mscorlib::System::Int32 dueTime, mscorlib::System::Int32 period)
				: mscorlib::System::MarshalByRefObject(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.Timer"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.Threading", "TimerCallback");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Object");
					__parameter_types__[2] = Global::GetType("mscorlib", "System", "Int32");
					__parameter_types__[3] = Global::GetType("mscorlib", "System", "Int32");
					__parameters__[0] = &callback;
					__parameters__[1] = (MonoObject*)state;
					__parameters__[2] = &dueTime;
					__parameters__[3] = &period;
					__native_object__ = Global::New("mscorlib", "System.Threading", "Timer", 4, __parameter_types__, __parameters__);
				};
			
				Timer(mscorlib::Callback<void  (mscorlib::System::Object )> callback, mscorlib::System::Object state, mscorlib::System::Int64 dueTime, mscorlib::System::Int64 period)
				: mscorlib::System::MarshalByRefObject(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.Timer"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.Threading", "TimerCallback");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Object");
					__parameter_types__[2] = Global::GetType("mscorlib", "System", "Int64");
					__parameter_types__[3] = Global::GetType("mscorlib", "System", "Int64");
					__parameters__[0] = &callback;
					__parameters__[1] = (MonoObject*)state;
					__parameters__[2] = &dueTime;
					__parameters__[3] = &period;
					__native_object__ = Global::New("mscorlib", "System.Threading", "Timer", 4, __parameter_types__, __parameters__);
				};
			
				Timer(mscorlib::Callback<void  (mscorlib::System::Object )> callback, mscorlib::System::Object state, mscorlib::System::TimeSpan dueTime, mscorlib::System::TimeSpan period)
				: mscorlib::System::MarshalByRefObject(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.Timer"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.Threading", "TimerCallback");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Object");
					__parameter_types__[2] = Global::GetType("mscorlib", "System", "TimeSpan");
					__parameter_types__[3] = Global::GetType("mscorlib", "System", "TimeSpan");
					__parameters__[0] = &callback;
					__parameters__[1] = (MonoObject*)state;
					__parameters__[2] = (MonoObject*)dueTime;
					__parameters__[3] = (MonoObject*)period;
					__native_object__ = Global::New("mscorlib", "System.Threading", "Timer", 4, __parameter_types__, __parameters__);
				};
			
				Timer(mscorlib::Callback<void  (mscorlib::System::Object )> callback, mscorlib::System::Object state, mscorlib::System::UInt32 dueTime, mscorlib::System::UInt32 period)
				: mscorlib::System::MarshalByRefObject(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.Timer"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.Threading", "TimerCallback");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Object");
					__parameter_types__[2] = Global::GetType("mscorlib", "System", "UInt32");
					__parameter_types__[3] = Global::GetType("mscorlib", "System", "UInt32");
					__parameters__[0] = &callback;
					__parameters__[1] = (MonoObject*)state;
					__parameters__[2] = &dueTime;
					__parameters__[3] = &period;
					__native_object__ = Global::New("mscorlib", "System.Threading", "Timer", 4, __parameter_types__, __parameters__);
				};
			
				Timer(mscorlib::Callback<void  (mscorlib::System::Object )> callback)
				: mscorlib::System::MarshalByRefObject(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.Timer"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.Threading", "TimerCallback");
					__parameters__[0] = &callback;
					__native_object__ = Global::New("mscorlib", "System.Threading", "Timer", 1, __parameter_types__, __parameters__);
				};
			
				Timer(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::MarshalByRefObject(nativeTypeInfo)
				, mscorlib::System::IDisposable(NULL)
				{
				};
			
				Timer(MonoObject *nativeObject)
				: mscorlib::System::MarshalByRefObject(nativeObject)
				, mscorlib::System::IDisposable(nativeObject)
				{
				};
			
				~Timer()
				{
				};
			

				Timer & operator=(Timer &value) { __native_object__ = value.GetNativeObject(); return value; };
				bool operator==(Timer &value) { return mscorlib::System::Object::Equals(value); };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				mscorlib::System::Boolean  Change(mscorlib::System::Int32 dueTime, mscorlib::System::Int32 period);
				mscorlib::System::Boolean  Change(mscorlib::System::TimeSpan dueTime, mscorlib::System::TimeSpan period);
				mscorlib::System::Boolean  Change(mscorlib::System::UInt32 dueTime, mscorlib::System::UInt32 period);
				virtual void  Dispose();
				mscorlib::System::Boolean  Change(mscorlib::System::Int64 dueTime, mscorlib::System::Int64 period);
				mscorlib::System::Boolean  Dispose(mscorlib::System::Threading::WaitHandle notifyObject);
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
