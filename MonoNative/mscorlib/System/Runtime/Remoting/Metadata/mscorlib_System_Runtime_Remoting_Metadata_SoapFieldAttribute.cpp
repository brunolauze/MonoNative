#include <mscorlib/System/Runtime/Remoting/Metadata/mscorlib_System_Runtime_Remoting_Metadata_SoapFieldAttribute.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>



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

					//Public Methods
					mscorlib::System::Boolean SoapFieldAttribute::IsInteropXmlElement()
					{
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata", "SoapFieldAttribute", 0, NULL, "IsInteropXmlElement", __native_object__, 0, NULL, NULL, NULL);
							return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					}

					//Get Set Properties Methods
					//	Get/Set:Order
					mscorlib::System::Int32  SoapFieldAttribute::get_Order()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata", "SoapFieldAttribute", 0, NULL, "get_Order", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					}

					void SoapFieldAttribute::set_Order(mscorlib::System::Int32  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = &value;
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata", "SoapFieldAttribute", 0, NULL, "set_Order", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}


					//	Get/Set:XmlElementName
					mscorlib::System::String  SoapFieldAttribute::get_XmlElementName()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata", "SoapFieldAttribute", 0, NULL, "get_XmlElementName", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
					}

					void SoapFieldAttribute::set_XmlElementName(mscorlib::System::String  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata", "SoapFieldAttribute", 0, NULL, "set_XmlElementName", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}


					//	Get/Set:Embedded
					mscorlib::System::Boolean  SoapFieldAttribute::get_Embedded()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata", "SoapAttribute", 0, NULL, "get_Embedded", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					}

					void SoapFieldAttribute::set_Embedded(mscorlib::System::Boolean  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = reinterpret_cast<void*>(value);
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata", "SoapAttribute", 0, NULL, "set_Embedded", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}


					//	Get/Set:UseAttribute
					mscorlib::System::Boolean  SoapFieldAttribute::get_UseAttribute()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata", "SoapAttribute", 0, NULL, "get_UseAttribute", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					}

					void SoapFieldAttribute::set_UseAttribute(mscorlib::System::Boolean  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = reinterpret_cast<void*>(value);
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata", "SoapAttribute", 0, NULL, "set_UseAttribute", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}


					//	Get/Set:XmlNamespace
					mscorlib::System::String  SoapFieldAttribute::get_XmlNamespace()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata", "SoapAttribute", 0, NULL, "get_XmlNamespace", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
					}

					void SoapFieldAttribute::set_XmlNamespace(mscorlib::System::String  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata", "SoapAttribute", 0, NULL, "set_XmlNamespace", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}


					//	Get:TypeId
					mscorlib::System::Object  SoapFieldAttribute::get_TypeId()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Object(__result__);
					}



				}
			}
		}
	}
}
