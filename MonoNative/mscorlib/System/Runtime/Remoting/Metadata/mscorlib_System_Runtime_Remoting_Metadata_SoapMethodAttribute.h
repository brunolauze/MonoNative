#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_METADATA_SOAPMETHODATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_METADATA_SOAPMETHODATTRIBUTE_H

#include <mscorlib/System/Runtime/Remoting/Metadata/mscorlib_System_Runtime_Remoting_Metadata_SoapAttribute.h>
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

					class SoapMethodAttribute
						: public mscorlib::System::Runtime::Remoting::Metadata::SoapAttribute
						, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
					{
					public:
						SoapMethodAttribute()
						: mscorlib::System::Runtime::Remoting::Metadata::SoapAttribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Remoting.Metadata.SoapMethodAttribute"))
						, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
						{
							__native_object__ = Global::New("mscorlib", "System.Runtime.Remoting.Metadata", "SoapMethodAttribute");
						};
					
						SoapMethodAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::Runtime::Remoting::Metadata::SoapAttribute(nativeTypeInfo)
						, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
						{
						};
					
						SoapMethodAttribute(MonoObject *nativeObject)
						: mscorlib::System::Runtime::Remoting::Metadata::SoapAttribute(nativeObject)
						, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
						{
						};
					
						~SoapMethodAttribute()
						{
						};
					

						SoapMethodAttribute & operator=(SoapMethodAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
						bool operator==(SoapMethodAttribute &value) { return mscorlib::System::Object::Equals(value); };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


						//Public Properties
						__declspec(property(get=get_ResponseXmlElementName, put=set_ResponseXmlElementName)) mscorlib::System::String  ResponseXmlElementName;
						__declspec(property(get=get_ResponseXmlNamespace, put=set_ResponseXmlNamespace)) mscorlib::System::String  ResponseXmlNamespace;
						__declspec(property(get=get_ReturnXmlElementName, put=set_ReturnXmlElementName)) mscorlib::System::String  ReturnXmlElementName;
						__declspec(property(get=get_SoapAction, put=set_SoapAction)) mscorlib::System::String  SoapAction;
						__declspec(property(get=get_UseAttribute, put=set_UseAttribute)) mscorlib::System::Boolean  UseAttribute;
						__declspec(property(get=get_XmlNamespace, put=set_XmlNamespace)) mscorlib::System::String  XmlNamespace;
						__declspec(property(get=get_Embedded, put=set_Embedded)) mscorlib::System::Boolean  Embedded;
						__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

						//Get Set Properties Methods
						//	Get/Set:ResponseXmlElementName
						mscorlib::System::String  get_ResponseXmlElementName() const;
						void set_ResponseXmlElementName(mscorlib::System::String  value);

						//	Get/Set:ResponseXmlNamespace
						mscorlib::System::String  get_ResponseXmlNamespace() const;
						void set_ResponseXmlNamespace(mscorlib::System::String  value);

						//	Get/Set:ReturnXmlElementName
						mscorlib::System::String  get_ReturnXmlElementName() const;
						void set_ReturnXmlElementName(mscorlib::System::String  value);

						//	Get/Set:SoapAction
						mscorlib::System::String  get_SoapAction() const;
						void set_SoapAction(mscorlib::System::String  value);

						//	Get/Set:UseAttribute
						mscorlib::System::Boolean  get_UseAttribute() const;
						void set_UseAttribute(mscorlib::System::Boolean  value);

						//	Get/Set:XmlNamespace
						mscorlib::System::String  get_XmlNamespace() const;
						void set_XmlNamespace(mscorlib::System::String  value);

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
