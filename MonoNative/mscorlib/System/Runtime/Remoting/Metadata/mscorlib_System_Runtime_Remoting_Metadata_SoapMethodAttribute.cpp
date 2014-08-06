#include <mscorlib/System/Runtime/Remoting/Metadata/mscorlib_System_Runtime_Remoting_Metadata_SoapMethodAttribute.h>
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
					//Get Set Properties Methods
					//	Get/Set:ResponseXmlElementName
					mscorlib::System::String  SoapMethodAttribute::get_ResponseXmlElementName() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata", "SoapMethodAttribute", 0, NULL, "get_ResponseXmlElementName", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
					}

					void SoapMethodAttribute::set_ResponseXmlElementName(mscorlib::System::String  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata", "SoapMethodAttribute", 0, NULL, "set_ResponseXmlElementName", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}


					//	Get/Set:ResponseXmlNamespace
					mscorlib::System::String  SoapMethodAttribute::get_ResponseXmlNamespace() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata", "SoapMethodAttribute", 0, NULL, "get_ResponseXmlNamespace", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
					}

					void SoapMethodAttribute::set_ResponseXmlNamespace(mscorlib::System::String  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata", "SoapMethodAttribute", 0, NULL, "set_ResponseXmlNamespace", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}


					//	Get/Set:ReturnXmlElementName
					mscorlib::System::String  SoapMethodAttribute::get_ReturnXmlElementName() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata", "SoapMethodAttribute", 0, NULL, "get_ReturnXmlElementName", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
					}

					void SoapMethodAttribute::set_ReturnXmlElementName(mscorlib::System::String  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata", "SoapMethodAttribute", 0, NULL, "set_ReturnXmlElementName", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}


					//	Get/Set:SoapAction
					mscorlib::System::String  SoapMethodAttribute::get_SoapAction() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata", "SoapMethodAttribute", 0, NULL, "get_SoapAction", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
					}

					void SoapMethodAttribute::set_SoapAction(mscorlib::System::String  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata", "SoapMethodAttribute", 0, NULL, "set_SoapAction", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}


					//	Get/Set:UseAttribute
					mscorlib::System::Boolean  SoapMethodAttribute::get_UseAttribute() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata", "SoapMethodAttribute", 0, NULL, "get_UseAttribute", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					}

					void SoapMethodAttribute::set_UseAttribute(mscorlib::System::Boolean  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = reinterpret_cast<void*>(value);
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata", "SoapMethodAttribute", 0, NULL, "set_UseAttribute", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}


					//	Get/Set:XmlNamespace
					mscorlib::System::String  SoapMethodAttribute::get_XmlNamespace() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata", "SoapMethodAttribute", 0, NULL, "get_XmlNamespace", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
					}

					void SoapMethodAttribute::set_XmlNamespace(mscorlib::System::String  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata", "SoapMethodAttribute", 0, NULL, "set_XmlNamespace", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}


					//	Get/Set:Embedded
					mscorlib::System::Boolean  SoapMethodAttribute::get_Embedded() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata", "SoapAttribute", 0, NULL, "get_Embedded", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					}

					void SoapMethodAttribute::set_Embedded(mscorlib::System::Boolean  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = reinterpret_cast<void*>(value);
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata", "SoapAttribute", 0, NULL, "set_Embedded", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}


					//	Get:TypeId
					mscorlib::System::Object  SoapMethodAttribute::get_TypeId() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Object(__result__);
					}



				}
			}
		}
	}
}
