#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_SYNCHRONIZATIONCONTEXT_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_SYNCHRONIZATIONCONTEXT_H

#include <mscorlib/System/mscorlib_System_Object.h>

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

			class SynchronizationContext
				: public mscorlib::System::Object
			{
			public:
				SynchronizationContext()
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.SynchronizationContext"))
				{
					__native_object__ = Global::New("mscorlib", "System.Threading", "SynchronizationContext");
				};
			
				SynchronizationContext(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				{
				};
			
				SynchronizationContext(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				{
				};
			
				~SynchronizationContext()
				{
				};
			

				SynchronizationContext & operator=(SynchronizationContext &value) { __native_object__ = value.GetNativeObject(); return value; };
				bool operator==(SynchronizationContext &value) { return mscorlib::System::Object::Equals(value); };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual mscorlib::System::Threading::SynchronizationContext  CreateCopy();
				mscorlib::System::Boolean  IsWaitNotificationRequired();
				virtual void  OperationCompleted();
				virtual void  OperationStarted();
				virtual void  Post(mscorlib::Callback<void  (mscorlib::System::Object )> d, mscorlib::System::Object state);
				virtual void  Send(mscorlib::Callback<void  (mscorlib::System::Object )> d, mscorlib::System::Object state);
				static void  SetSynchronizationContext(mscorlib::System::Threading::SynchronizationContext syncContext);
				virtual mscorlib::System::Int32  Wait(std::vector<mscorlib::System::IntPtr*> waitHandles, mscorlib::System::Boolean waitAll, mscorlib::System::Int32 millisecondsTimeout);
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Static Properties
				static Property<mscorlib::System::Threading::SynchronizationContext , mscorlib::System::Threading::SynchronizationContext> Current;

				//Get Set Static Properties Methods
				//	Get:Current
				static mscorlib::System::Threading::SynchronizationContext  get_Current();
				static void set_Current(mscorlib::System::Threading::SynchronizationContext  value);


			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
