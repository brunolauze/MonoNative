#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_TIMEOUT_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_TIMEOUT_H

#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		class String;
		class TimeSpan;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			class Timeout
				: public mscorlib::System::Object
			{
			public:
				Timeout(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				{
				};
			
				Timeout(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				{
				};
			
				~Timeout()
				{
				};
			

				Timeout & operator=(Timeout &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Static Fields
				static Property<mscorlib::System::Int32 , mscorlib::System::Threading::Timeout> Infinite;
				static Property<mscorlib::System::TimeSpan , mscorlib::System::Threading::Timeout> InfiniteTimeSpan;

				//	Get/Set:Infinite
				static mscorlib::System::Int32  get_Infinite();
				static void set_Infinite(mscorlib::System::Int32  value);

				//	Get/Set:InfiniteTimeSpan
				static mscorlib::System::TimeSpan  get_InfiniteTimeSpan();
				static void set_InfiniteTimeSpan(mscorlib::System::TimeSpan  value);

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
