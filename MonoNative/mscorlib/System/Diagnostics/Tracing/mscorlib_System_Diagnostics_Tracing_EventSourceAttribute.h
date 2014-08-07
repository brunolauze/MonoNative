#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCEATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCEATTRIBUTE_H

#include <mscorlib/System/mscorlib_System_Attribute.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__Attribute.h>
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
		namespace Diagnostics
		{
			namespace Tracing
			{

				class EventSourceAttribute
					: public mscorlib::System::Attribute
					, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
				{
				public:
					EventSourceAttribute()
					: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Diagnostics.Tracing.EventSourceAttribute"))
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
						__native_object__ = Global::New("mscorlib", "System.Diagnostics.Tracing", "EventSourceAttribute");
					};
				
					EventSourceAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Attribute(nativeTypeInfo)
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
					};
				
					EventSourceAttribute(MonoObject *nativeObject)
					: mscorlib::System::Attribute(nativeObject)
					, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
					{
					};
				
					~EventSourceAttribute()
					{
					};
				

					EventSourceAttribute & operator=(EventSourceAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(EventSourceAttribute &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Guid, put=set_Guid)) mscorlib::System::String  Guid;
					__declspec(property(get=get_LocalizationResources, put=set_LocalizationResources)) mscorlib::System::String  LocalizationResources;
					__declspec(property(get=get_Name, put=set_Name)) mscorlib::System::String  Name;
					__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

					//Get Set Properties Methods
					//	Get/Set:Guid
					mscorlib::System::String  get_Guid() const;
					void set_Guid(mscorlib::System::String  value);

					//	Get/Set:LocalizationResources
					mscorlib::System::String  get_LocalizationResources() const;
					void set_LocalizationResources(mscorlib::System::String  value);

					//	Get/Set:Name
					mscorlib::System::String  get_Name() const;
					void set_Name(mscorlib::System::String  value);

					//	Get:TypeId
					mscorlib::System::Object  get_TypeId() const;

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
