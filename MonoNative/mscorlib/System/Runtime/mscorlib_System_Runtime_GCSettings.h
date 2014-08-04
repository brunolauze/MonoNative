#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_GCSETTINGS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_GCSETTINGS_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/mscorlib_System_Runtime_GCLatencyMode.h>

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
		namespace Runtime
		{

			class GCSettings
				: public mscorlib::System::Object
			{
			public:
				GCSettings(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				{
				};
			
				GCSettings(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				{
				};
			
				~GCSettings()
				{
				};
			

				GCSettings & operator=(GCSettings &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Static Properties
				static Property<mscorlib::System::Boolean> IsServerGC;
				static Property<mscorlib::System::Runtime::GCLatencyMode::__ENUM__> LatencyMode;

				//Get Set Static Properties Methods
				//	Get:IsServerGC
				static mscorlib::System::Boolean  get_IsServerGC();

				//	Get/Set:LatencyMode
				static mscorlib::System::Runtime::GCLatencyMode::__ENUM__  get_LatencyMode();
				static void set_LatencyMode(mscorlib::System::Runtime::GCLatencyMode::__ENUM__  value);


			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
