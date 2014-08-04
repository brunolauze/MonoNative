#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_METADATA_SOAPATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_METADATA_SOAPATTRIBUTE_H

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
		namespace Runtime
		{
			namespace Remoting
			{
				namespace Metadata
				{

					class SoapAttribute
						: public mscorlib::System::Attribute
						, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
					{
					public:
						SoapAttribute()
						: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Remoting.Metadata.SoapAttribute"))
						, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
						{
							__native_object__ = Global::New("mscorlib", "System.Runtime.Remoting.Metadata", "SoapAttribute");
						};
					
						SoapAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::Attribute(nativeTypeInfo)
						, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
						{
						};
					
						SoapAttribute(MonoObject *nativeObject)
						: mscorlib::System::Attribute(nativeObject)
						, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
						{
						};
					
						~SoapAttribute()
						{
						};
					

						SoapAttribute & operator=(SoapAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


						//Public Properties
						__declspec(property(get=get_Embedded, put=set_Embedded)) mscorlib::System::Boolean  Embedded;
						__declspec(property(get=get_UseAttribute, put=set_UseAttribute)) mscorlib::System::Boolean  UseAttribute;
						__declspec(property(get=get_XmlNamespace, put=set_XmlNamespace)) mscorlib::System::String  XmlNamespace;
						__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

						//Get Set Properties Methods
						//	Get/Set:Embedded
						mscorlib::System::Boolean  get_Embedded();
						void set_Embedded(mscorlib::System::Boolean  value);

						//	Get/Set:UseAttribute
						mscorlib::System::Boolean  get_UseAttribute();
						void set_UseAttribute(mscorlib::System::Boolean  value);

						//	Get/Set:XmlNamespace
						mscorlib::System::String  get_XmlNamespace();
						void set_XmlNamespace(mscorlib::System::String  value);

						//	Get:TypeId
						mscorlib::System::Object  get_TypeId();

					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
