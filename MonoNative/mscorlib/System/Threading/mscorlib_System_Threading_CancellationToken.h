#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_CANCELLATIONTOKEN_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_CANCELLATIONTOKEN_H

#include <mscorlib/System/mscorlib_System_ValueType.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			class CancellationTokenRegistration;
			class WaitHandle;
			

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
		namespace Threading
		{

			class CancellationToken
				: public mscorlib::System::ValueType
			{
			public:
				CancellationToken(mscorlib::System::Boolean canceled)
				: mscorlib::System::ValueType(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.CancellationToken"))
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Boolean");
					__parameters__[0] = reinterpret_cast<void*>(canceled);
					__native_object__ = Global::New("mscorlib", "System.Threading", "CancellationToken", 1, __parameter_types__, __parameters__);
				};
			
				CancellationToken(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::ValueType(nativeTypeInfo)
				{
				};
			
				CancellationToken(MonoObject *nativeObject)
				: mscorlib::System::ValueType(nativeObject)
				{
				};
			
				~CancellationToken()
				{
				};
			

				CancellationToken & operator=(CancellationToken &value) { __native_object__ = value.GetNativeObject(); return value; };
				bool operator==(CancellationToken &value) { return mscorlib::System::Object::Equals(value); };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				mscorlib::System::Threading::CancellationTokenRegistration  Register(mscorlib::Callback<void  ()> callback);
				mscorlib::System::Threading::CancellationTokenRegistration  Register(mscorlib::Callback<void  ()> callback, mscorlib::System::Boolean useSynchronizationContext);
				mscorlib::System::Threading::CancellationTokenRegistration  Register(mscorlib::Callback<void  (mscorlib::System::Object )> callback, mscorlib::System::Object state);
				mscorlib::System::Threading::CancellationTokenRegistration  Register(mscorlib::Callback<void  (mscorlib::System::Object )> callback, mscorlib::System::Object state, mscorlib::System::Boolean useSynchronizationContext);
				void  ThrowIfCancellationRequested();
				mscorlib::System::Boolean  Equals(mscorlib::System::Threading::CancellationToken other);
				virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object other) override;
				virtual mscorlib::System::Int32  GetHashCode() override;
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_CanBeCanceled)) mscorlib::System::Boolean  CanBeCanceled;
				__declspec(property(get=get_IsCancellationRequested)) mscorlib::System::Boolean  IsCancellationRequested;
				__declspec(property(get=get_WaitHandle)) mscorlib::System::Threading::WaitHandle  WaitHandle;

				//Public Static Properties
				static Property<mscorlib::System::Threading::CancellationToken , mscorlib::System::Threading::CancellationToken> None;

				//Get Set Properties Methods
				//	Get:CanBeCanceled
				mscorlib::System::Boolean  get_CanBeCanceled() const;

				//	Get:IsCancellationRequested
				mscorlib::System::Boolean  get_IsCancellationRequested() const;

				//	Get:WaitHandle
				mscorlib::System::Threading::WaitHandle  get_WaitHandle() const;

				//Get Set Static Properties Methods
				//	Get:None
				static mscorlib::System::Threading::CancellationToken  get_None();
				static void set_None(mscorlib::System::Threading::CancellationToken  value);


			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
