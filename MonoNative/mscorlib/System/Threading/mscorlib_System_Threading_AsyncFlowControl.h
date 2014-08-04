#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_ASYNCFLOWCONTROL_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_ASYNCFLOWCONTROL_H

#include <mscorlib/System/mscorlib_System_ValueType.h>
#include <mscorlib/System/mscorlib_System_IDisposable.h>
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

			class AsyncFlowControl
				: public mscorlib::System::ValueType
				, public virtual mscorlib::System::IDisposable
			{
			public:
				AsyncFlowControl(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::ValueType(nativeTypeInfo)
				, mscorlib::System::IDisposable(NULL)
				{
				};
			
				AsyncFlowControl(MonoObject *nativeObject)
				: mscorlib::System::ValueType(nativeObject)
				, mscorlib::System::IDisposable(nativeObject)
				{
				};
			
				~AsyncFlowControl()
				{
				};
			

				AsyncFlowControl & operator=(AsyncFlowControl &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				void  Undo();
				virtual void  Dispose();
				virtual mscorlib::System::Int32  GetHashCode() override;
				virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object obj) override;
				mscorlib::System::Boolean  Equals(mscorlib::System::Threading::AsyncFlowControl obj);
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
