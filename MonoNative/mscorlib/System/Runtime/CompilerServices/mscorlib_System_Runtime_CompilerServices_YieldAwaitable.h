#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_COMPILERSERVICES_YIELDAWAITABLE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_COMPILERSERVICES_YIELDAWAITABLE_H

#include <mscorlib/System/mscorlib_System_ValueType.h>
#include <mscorlib/System/Runtime/CompilerServices/mscorlib_System_Runtime_CompilerServices_INotifyCompletion.h>
#include <mscorlib/System/Runtime/CompilerServices/mscorlib_System_Runtime_CompilerServices_ICriticalNotifyCompletion.h>
#include <mscorlib/System/mscorlib_System_Object.h>

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
			namespace CompilerServices
			{

				class YieldAwaitable
					: public mscorlib::System::ValueType
				{
				public:
					class YieldAwaiter
						: public mscorlib::System::ValueType
						, public virtual mscorlib::System::Runtime::CompilerServices::INotifyCompletion
						, public virtual mscorlib::System::Runtime::CompilerServices::ICriticalNotifyCompletion
					{
					public:
						YieldAwaiter(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::ValueType(nativeTypeInfo)
						, mscorlib::System::Runtime::CompilerServices::INotifyCompletion(NULL)
						, mscorlib::System::Runtime::CompilerServices::ICriticalNotifyCompletion(NULL)
						{
						};
					
						YieldAwaiter(MonoObject *nativeObject)
						: mscorlib::System::ValueType(nativeObject)
						, mscorlib::System::Runtime::CompilerServices::INotifyCompletion(nativeObject)
						, mscorlib::System::Runtime::CompilerServices::ICriticalNotifyCompletion(nativeObject)
						{
						};
					
						~YieldAwaiter()
						{
						};
					

						YieldAwaiter & operator=(YieldAwaiter &value) { __native_object__ = value.GetNativeObject(); return value; };
						bool operator==(YieldAwaiter &value) { return mscorlib::System::Object::Equals(value); };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						virtual void  OnCompleted(mscorlib::Callback<void  ()> continuation);
						virtual void  UnsafeOnCompleted(mscorlib::Callback<void  ()> continuation);
						void  GetResult();
						virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


						//Public Properties
						__declspec(property(get=get_IsCompleted)) mscorlib::System::Boolean  IsCompleted;

						//Get Set Properties Methods
						//	Get:IsCompleted
						mscorlib::System::Boolean  get_IsCompleted() const;

					
					protected:
					
					private:
					
					};
					
					YieldAwaitable(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::ValueType(nativeTypeInfo)
					{
					};
				
					YieldAwaitable(MonoObject *nativeObject)
					: mscorlib::System::ValueType(nativeObject)
					{
					};
				
					~YieldAwaitable()
					{
					};
				

					YieldAwaitable & operator=(YieldAwaitable &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(YieldAwaitable &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					mscorlib::System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter  GetAwaiter();
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
