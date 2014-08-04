#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_TimeSpan.h>
#include <mscorlib/System/mscorlib_System_IDisposable.h>

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

			class CancellationTokenSource
				: public mscorlib::System::Object
				, public virtual mscorlib::System::IDisposable
			{
			public:
				CancellationTokenSource()
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.CancellationTokenSource"))
				, mscorlib::System::IDisposable(NULL)
				{
					__native_object__ = Global::New("mscorlib", "System.Threading", "CancellationTokenSource");
				};
			
				CancellationTokenSource(mscorlib::System::Int32 millisecondsDelay)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.CancellationTokenSource"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
					__parameters__[0] = &millisecondsDelay;
					__native_object__ = Global::New("mscorlib", "System.Threading", "CancellationTokenSource", 1, __parameter_types__, __parameters__);
				};
			
				CancellationTokenSource(mscorlib::System::TimeSpan delay)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.CancellationTokenSource"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "TimeSpan");
					__parameters__[0] = (MonoObject*)delay;
					__native_object__ = Global::New("mscorlib", "System.Threading", "CancellationTokenSource", 1, __parameter_types__, __parameters__);
				};
			
				CancellationTokenSource(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				, mscorlib::System::IDisposable(NULL)
				{
				};
			
				CancellationTokenSource(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				, mscorlib::System::IDisposable(nativeObject)
				{
				};
			
				~CancellationTokenSource()
				{
				};
			

				CancellationTokenSource & operator=(CancellationTokenSource &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				void  Cancel();
				void  Cancel(mscorlib::System::Boolean throwOnFirstException);
				void  CancelAfter(mscorlib::System::TimeSpan delay);
				void  CancelAfter(mscorlib::System::Int32 millisecondsDelay);
				static mscorlib::System::Threading::CancellationTokenSource  CreateLinkedTokenSource(mscorlib::System::Threading::CancellationToken token1, mscorlib::System::Threading::CancellationToken token2);
				static mscorlib::System::Threading::CancellationTokenSource  CreateLinkedTokenSource(std::vector<mscorlib::System::Threading::CancellationToken*> tokens);
				virtual void  Dispose();
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_Token)) mscorlib::System::Threading::CancellationToken  Token;
				__declspec(property(get=get_IsCancellationRequested)) mscorlib::System::Boolean  IsCancellationRequested;

				//Get Set Properties Methods
				//	Get:Token
				mscorlib::System::Threading::CancellationToken  get_Token();

				//	Get:IsCancellationRequested
				mscorlib::System::Boolean  get_IsCancellationRequested();

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
