#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_METADATA_SOAPTYPEATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_METADATA_SOAPTYPEATTRIBUTE_H

#include <mscorlib/System/Runtime/Remoting/Metadata/mscorlib_System_Runtime_Remoting_Metadata_SoapAttribute.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__Attribute.h>
#include <mscorlib/System/Runtime/Remoting/Metadata/mscorlib_System_Runtime_Remoting_Metadata_SoapOption.h>
#include <mscorlib/System/Runtime/Remoting/Metadata/mscorlib_System_Runtime_Remoting_Metadata_XmlFieldOrderOption.h>
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

					class SoapTypeAttribute
						: public mscorlib::System::Runtime::Remoting::Metadata::SoapAttribute
						, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
					{
					public:
						SoapTypeAttribute()
						: mscorlib::System::Runtime::Remoting::Metadata::SoapAttribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Remoting.Metadata.SoapTypeAttribute"))
						, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
						{
							__native_object__ = Global::New("mscorlib", "System.Runtime.Remoting.Metadata", "SoapTypeAttribute");
						};
					
						SoapTypeAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::Runtime::Remoting::Metadata::SoapAttribute(nativeTypeInfo)
						, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
						{
						};
					
						SoapTypeAttribute(MonoObject *nativeObject)
						: mscorlib::System::Runtime::Remoting::Metadata::SoapAttribute(nativeObject)
						, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
						{
						};
					
						~SoapTypeAttribute()
						{
						};
					

						SoapTypeAttribute & operator=(SoapTypeAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


						//Public Properties
						__declspec(property(get=get_SoapOptions, put=set_SoapOptions)) mscorlib::System::Runtime::Remoting::Metadata::SoapOption::__ENUM__  SoapOptions;
						__declspec(property(get=get_UseAttribute, put=set_UseAttribute)) mscorlib::System::Boolean  UseAttribute;
						__declspec(property(get=get_XmlElementName, put=set_XmlElementName)) mscorlib::System::String  XmlElementName;
						__declspec(property(get=get_XmlFieldOrder, put=set_XmlFieldOrder)) mscorlib::System::Runtime::Remoting::Metadata::XmlFieldOrderOption::__ENUM__  XmlFieldOrder;
						__declspec(property(get=get_XmlNamespace, put=set_XmlNamespace)) mscorlib::System::String  XmlNamespace;
						__declspec(property(get=get_XmlTypeName, put=set_XmlTypeName)) mscorlib::System::String  XmlTypeName;
						__declspec(property(get=get_XmlTypeNamespace, put=set_XmlTypeNamespace)) mscorlib::System::String  XmlTypeNamespace;
						__declspec(property(get=get_Embedded, put=set_Embedded)) mscorlib::System::Boolean  Embedded;
						__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

						//Get Set Properties Methods
						//	Get/Set:SoapOptions
						mscorlib::System::Runtime::Remoting::Metadata::SoapOption::__ENUM__  get_SoapOptions() const;
						void set_SoapOptions(mscorlib::System::Runtime::Remoting::Metadata::SoapOption::__ENUM__  value);

						//	Get/Set:UseAttribute
						mscorlib::System::Boolean  get_UseAttribute() const;
						void set_UseAttribute(mscorlib::System::Boolean  value);

						//	Get/Set:XmlElementName
						mscorlib::System::String  get_XmlElementName() const;
						void set_XmlElementName(mscorlib::System::String  value);

						//	Get/Set:XmlFieldOrder
						mscorlib::System::Runtime::Remoting::Metadata::XmlFieldOrderOption::__ENUM__  get_XmlFieldOrder() const;
						void set_XmlFieldOrder(mscorlib::System::Runtime::Remoting::Metadata::XmlFieldOrderOption::__ENUM__  value);

						//	Get/Set:XmlNamespace
						mscorlib::System::String  get_XmlNamespace() const;
						void set_XmlNamespace(mscorlib::System::String  value);

						//	Get/Set:XmlTypeName
						mscorlib::System::String  get_XmlTypeName() const;
						void set_XmlTypeName(mscorlib::System::String  value);

						//	Get/Set:XmlTypeNamespace
						mscorlib::System::String  get_XmlTypeNamespace() const;
						void set_XmlTypeNamespace(mscorlib::System::String  value);

						//	Get/Set:Embedded
						mscorlib::System::Boolean  get_Embedded() const;
						void set_Embedded(mscorlib::System::Boolean  value);

						//	Get:TypeId
						mscorlib::System::Object  get_TypeId() const;

					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
