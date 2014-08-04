#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_NATIVEOVERLAPPED_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_NATIVEOVERLAPPED_H

#include <mscorlib/System/mscorlib_System_ValueType.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class String;
		class Type;
		class IntPtr;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			class NativeOverlapped
				: public mscorlib::System::ValueType
			{
			public:
				NativeOverlapped(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::ValueType(nativeTypeInfo)
				{
				};
			
				NativeOverlapped(MonoObject *nativeObject)
				: mscorlib::System::ValueType(nativeObject)
				{
				};
			
				~NativeOverlapped()
				{
				};
			

				NativeOverlapped & operator=(NativeOverlapped &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Fields
				__declspec(property(get=get_InternalLow, put=set_InternalLow)) mscorlib::System::IntPtr  InternalLow;
				__declspec(property(get=get_InternalHigh, put=set_InternalHigh)) mscorlib::System::IntPtr  InternalHigh;
				__declspec(property(get=get_OffsetLow, put=set_OffsetLow)) mscorlib::System::Int32  OffsetLow;
				__declspec(property(get=get_OffsetHigh, put=set_OffsetHigh)) mscorlib::System::Int32  OffsetHigh;
				__declspec(property(get=get_EventHandle, put=set_EventHandle)) mscorlib::System::IntPtr  EventHandle;

				//	Get/Set:InternalLow
				mscorlib::System::IntPtr  get_InternalLow();
				void set_InternalLow(mscorlib::System::IntPtr  value);

				//	Get/Set:InternalHigh
				mscorlib::System::IntPtr  get_InternalHigh();
				void set_InternalHigh(mscorlib::System::IntPtr  value);

				//	Get/Set:OffsetLow
				mscorlib::System::Int32  get_OffsetLow();
				void set_OffsetLow(mscorlib::System::Int32  value);

				//	Get/Set:OffsetHigh
				mscorlib::System::Int32  get_OffsetHigh();
				void set_OffsetHigh(mscorlib::System::Int32  value);

				//	Get/Set:EventHandle
				mscorlib::System::IntPtr  get_EventHandle();
				void set_EventHandle(mscorlib::System::IntPtr  value);

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
