#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_METADATA_SOAPFIELDATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_METADATA_SOAPFIELDATTRIBUTE_H

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

					class SoapFieldAttribute
						: public mscorlib::System::Runtime::Remoting::Metadata::SoapAttribute
						, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
					{
					public:
						SoapFieldAttribute()
						: mscorlib::System::Runtime::Remoting::Metadata::SoapAttribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Remoting.Metadata.SoapFieldAttribute"))
						, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
						{
							__native_object__ = Global::New("mscorlib", "System.Runtime.Remoting.Metadata", "SoapFieldAttribute");
						};
					
						SoapFieldAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::Runtime::Remoting::Metadata::SoapAttribute(nativeTypeInfo)
						, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
						{
						};
					
						SoapFieldAttribute(MonoObject *nativeObject)
						: mscorlib::System::Runtime::Remoting::Metadata::SoapAttribute(nativeObject)
						, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
						{
						};
					
						~SoapFieldAttribute()
						{
						};
					

						SoapFieldAttribute & operator=(SoapFieldAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
						bool operator==(SoapFieldAttribute &value) { return mscorlib::System::Object::Equals(value); };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						mscorlib::System::Boolean  IsInteropXmlElement();
						virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


						//Public Properties
						__declspec(property(get=get_Order, put=set_Order)) mscorlib::System::Int32  Order;
						__declspec(property(get=get_XmlElementName, put=set_XmlElementName)) mscorlib::System::String  XmlElementName;
						__declspec(property(get=get_Embedded, put=set_Embedded)) mscorlib::System::Boolean  Embedded;
						__declspec(property(get=get_UseAttribute, put=set_UseAttribute)) mscorlib::System::Boolean  UseAttribute;
						__declspec(property(get=get_XmlNamespace, put=set_XmlNamespace)) mscorlib::System::String  XmlNamespace;
						__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

						//Get Set Properties Methods
						//	Get/Set:Order
						mscorlib::System::Int32  get_Order() const;
						void set_Order(mscorlib::System::Int32  value);

						//	Get/Set:XmlElementName
						mscorlib::System::String  get_XmlElementName() const;
						void set_XmlElementName(mscorlib::System::String  value);

						//	Get/Set:Embedded
						mscorlib::System::Boolean  get_Embedded() const;
						void set_Embedded(mscorlib::System::Boolean  value);

						//	Get/Set:UseAttribute
						mscorlib::System::Boolean  get_UseAttribute() const;
						void set_UseAttribute(mscorlib::System::Boolean  value);

						//	Get/Set:XmlNamespace
						mscorlib::System::String  get_XmlNamespace() const;
						void set_XmlNamespace(mscorlib::System::String  value);

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
