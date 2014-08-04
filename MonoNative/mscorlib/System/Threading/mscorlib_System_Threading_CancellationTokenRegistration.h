#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_CANCELLATIONTOKENREGISTRATION_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_CANCELLATIONTOKENREGISTRATION_H

#include <mscorlib/System/mscorlib_System_ValueType.h>
#include <mscorlib/System/mscorlib_System_IDisposable.h>
#include <mscorlib/System/mscorlib_System_IEquatable_1.h>
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
		namespace Threading
		{

			class CancellationTokenRegistration
				: public mscorlib::System::ValueType
				, public virtual mscorlib::System::IDisposable
				, public virtual mscorlib::System::IEquatable<mscorlib::System::Threading::CancellationTokenRegistration>
			{
			public:
				CancellationTokenRegistration(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::ValueType(nativeTypeInfo)
				, mscorlib::System::IDisposable(NULL)
				, mscorlib::System::IEquatable<mscorlib::System::Threading::CancellationTokenRegistration>(NULL)
				{
				};
			
				CancellationTokenRegistration(MonoObject *nativeObject)
				: mscorlib::System::ValueType(nativeObject)
				, mscorlib::System::IDisposable(nativeObject)
				, mscorlib::System::IEquatable<mscorlib::System::Threading::CancellationTokenRegistration>(nativeObject)
				{
				};
			
				~CancellationTokenRegistration()
				{
				};
			

				CancellationTokenRegistration & operator=(CancellationTokenRegistration &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual void  Dispose();
				virtual mscorlib::System::Boolean  Equals(mscorlib::System::Threading::CancellationTokenRegistration other);
				virtual mscorlib::System::Int32  GetHashCode() override;
				virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object obj) override;
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
