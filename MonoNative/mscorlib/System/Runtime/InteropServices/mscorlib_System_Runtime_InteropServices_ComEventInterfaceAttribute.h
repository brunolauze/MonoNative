#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMEVENTINTERFACEATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMEVENTINTERFACEATTRIBUTE_H

#include <mscorlib/System/mscorlib_System_Attribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__Attribute.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class String;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				class ComEventInterfaceAttribute
					: public mscorlib::System::Attribute
					, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
				{
				public:
					ComEventInterfaceAttribute(mscorlib::System::Type SourceInterface, mscorlib::System::Type EventProvider)
					: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.InteropServices.ComEventInterfaceAttribute"))
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Type");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "Type");
						__parameters__[0] = (MonoObject*)SourceInterface;
						__parameters__[1] = (MonoObject*)EventProvider;
						__native_object__ = Global::New("mscorlib", "System.Runtime.InteropServices", "ComEventInterfaceAttribute", 2, __parameter_types__, __parameters__);
					};
				
					ComEventInterfaceAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Attribute(nativeTypeInfo)
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
					};
				
					ComEventInterfaceAttribute(MonoObject *nativeObject)
					: mscorlib::System::Attribute(nativeObject)
					, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
					{
					};
				
					~ComEventInterfaceAttribute()
					{
					};
				

					ComEventInterfaceAttribute & operator=(ComEventInterfaceAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_EventProvider)) mscorlib::System::Type  EventProvider;
					__declspec(property(get=get_SourceInterface)) mscorlib::System::Type  SourceInterface;
					__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

					//Get Set Properties Methods
					//	Get:EventProvider
					mscorlib::System::Type  get_EventProvider();

					//	Get:SourceInterface
					mscorlib::System::Type  get_SourceInterface();

					//	Get:TypeId
					mscorlib::System::Object  get_TypeId();

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
