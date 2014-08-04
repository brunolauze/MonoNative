#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RESOURCES_SATELLITECONTRACTVERSIONATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RESOURCES_SATELLITECONTRACTVERSIONATTRIBUTE_H

#include <mscorlib/System/mscorlib_System_Attribute.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__Attribute.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Resources
		{

			class SatelliteContractVersionAttribute
				: public mscorlib::System::Attribute
				, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
			{
			public:
				SatelliteContractVersionAttribute(mscorlib::System::String version)
				: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Resources.SatelliteContractVersionAttribute"))
				, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = (MonoObject*)version;
					__native_object__ = Global::New("mscorlib", "System.Resources", "SatelliteContractVersionAttribute", 1, __parameter_types__, __parameters__);
				};
			
				SatelliteContractVersionAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Attribute(nativeTypeInfo)
				, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
				{
				};
			
				SatelliteContractVersionAttribute(MonoObject *nativeObject)
				: mscorlib::System::Attribute(nativeObject)
				, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
				{
				};
			
				~SatelliteContractVersionAttribute()
				{
				};
			

				SatelliteContractVersionAttribute & operator=(SatelliteContractVersionAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_Version)) mscorlib::System::String  Version;
				__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

				//Get Set Properties Methods
				//	Get:Version
				mscorlib::System::String  get_Version();

				//	Get:TypeId
				mscorlib::System::Object  get_TypeId();

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
