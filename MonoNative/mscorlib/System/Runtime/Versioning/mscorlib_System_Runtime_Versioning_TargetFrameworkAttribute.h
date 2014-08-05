#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_VERSIONING_TARGETFRAMEWORKATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_VERSIONING_TARGETFRAMEWORKATTRIBUTE_H

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
		namespace Runtime
		{
			namespace Versioning
			{

				class TargetFrameworkAttribute
					: public mscorlib::System::Attribute
					, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
				{
				public:
					TargetFrameworkAttribute(mscorlib::System::String frameworkName)
					: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Versioning.TargetFrameworkAttribute"))
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = (MonoObject*)frameworkName;
						__native_object__ = Global::New("mscorlib", "System.Runtime.Versioning", "TargetFrameworkAttribute", 1, __parameter_types__, __parameters__);
					};
				
					TargetFrameworkAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Attribute(nativeTypeInfo)
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
					};
				
					TargetFrameworkAttribute(MonoObject *nativeObject)
					: mscorlib::System::Attribute(nativeObject)
					, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
					{
					};
				
					~TargetFrameworkAttribute()
					{
					};
				

					TargetFrameworkAttribute & operator=(TargetFrameworkAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_FrameworkName, put=set_FrameworkName)) mscorlib::System::String  FrameworkName;
					__declspec(property(get=get_FrameworkDisplayName, put=set_FrameworkDisplayName)) mscorlib::System::String  FrameworkDisplayName;
					__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

					//Get Set Properties Methods
					//	Get/Set:FrameworkName
					mscorlib::System::String  get_FrameworkName() const;
					void set_FrameworkName(mscorlib::System::String  value);

					//	Get/Set:FrameworkDisplayName
					mscorlib::System::String  get_FrameworkDisplayName() const;
					void set_FrameworkDisplayName(mscorlib::System::String  value);

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
