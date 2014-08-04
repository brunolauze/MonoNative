#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_SERVICES_TRACKINGSERVICES_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_SERVICES_TRACKINGSERVICES_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/Remoting/Services/mscorlib_System_Runtime_Remoting_Services_ITrackingHandler.h>

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
			namespace Remoting
			{
				namespace Services
				{

					class TrackingServices
						: public mscorlib::System::Object
					{
					public:
						TrackingServices()
						: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Remoting.Services.TrackingServices"))
						{
							__native_object__ = Global::New("mscorlib", "System.Runtime.Remoting.Services", "TrackingServices");
						};
					
						TrackingServices(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::Object(nativeTypeInfo)
						{
						};
					
						TrackingServices(MonoObject *nativeObject)
						: mscorlib::System::Object(nativeObject)
						{
						};
					
						~TrackingServices()
						{
						};
					

						TrackingServices & operator=(TrackingServices &value) { __native_object__ = value.GetNativeObject(); return value; };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						static void  RegisterTrackingHandler(mscorlib::System::Runtime::Remoting::Services::ITrackingHandler handler);
						static void  UnregisterTrackingHandler(mscorlib::System::Runtime::Remoting::Services::ITrackingHandler handler);
						virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


						//Public Static Properties
						static Property<mscorlib::System::Runtime::Remoting::Services::ITrackingHandler*> RegisteredHandlers;

						//Get Set Static Properties Methods
						//	Get:RegisteredHandlers
						static std::vector<mscorlib::System::Runtime::Remoting::Services::ITrackingHandler*>  get_RegisteredHandlers();


					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
