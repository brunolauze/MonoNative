#include <mscorlib/System/Runtime/Remoting/Metadata/mscorlib_System_Runtime_Remoting_Metadata_SoapTypeAttribute.h>
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
					//	Get/Set:SoapOptions
					mscorlib::System::Runtime::Remoting::Metadata::SoapOption::__ENUM__  SoapTypeAttribute::get_SoapOptions() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata", "SoapTypeAttribute", 0, NULL, "get_SoapOptions", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Runtime::Remoting::Metadata::SoapOption::__ENUM__*)mono_object_unbox(__result__);
					}

					void SoapTypeAttribute::set_SoapOptions(mscorlib::System::Runtime::Remoting::Metadata::SoapOption::__ENUM__  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = reinterpret_cast<void*>(value);
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata", "SoapTypeAttribute", 0, NULL, "set_SoapOptions", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}


					//	Get/Set:UseAttribute
					mscorlib::System::Boolean  SoapTypeAttribute::get_UseAttribute() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata", "SoapTypeAttribute", 0, NULL, "get_UseAttribute", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					}

					void SoapTypeAttribute::set_UseAttribute(mscorlib::System::Boolean  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = reinterpret_cast<void*>(value);
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata", "SoapTypeAttribute", 0, NULL, "set_UseAttribute", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}


					//	Get/Set:XmlElementName
					mscorlib::System::String  SoapTypeAttribute::get_XmlElementName() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata", "SoapTypeAttribute", 0, NULL, "get_XmlElementName", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
					}

					void SoapTypeAttribute::set_XmlElementName(mscorlib::System::String  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata", "SoapTypeAttribute", 0, NULL, "set_XmlElementName", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}


					//	Get/Set:XmlFieldOrder
					mscorlib::System::Runtime::Remoting::Metadata::XmlFieldOrderOption::__ENUM__  SoapTypeAttribute::get_XmlFieldOrder() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata", "SoapTypeAttribute", 0, NULL, "get_XmlFieldOrder", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Runtime::Remoting::Metadata::XmlFieldOrderOption::__ENUM__*)mono_object_unbox(__result__);
					}

					void SoapTypeAttribute::set_XmlFieldOrder(mscorlib::System::Runtime::Remoting::Metadata::XmlFieldOrderOption::__ENUM__  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = reinterpret_cast<void*>(value);
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata", "SoapTypeAttribute", 0, NULL, "set_XmlFieldOrder", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}


					//	Get/Set:XmlNamespace
					mscorlib::System::String  SoapTypeAttribute::get_XmlNamespace() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata", "SoapTypeAttribute", 0, NULL, "get_XmlNamespace", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
					}

					void SoapTypeAttribute::set_XmlNamespace(mscorlib::System::String  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata", "SoapTypeAttribute", 0, NULL, "set_XmlNamespace", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}


					//	Get/Set:XmlTypeName
					mscorlib::System::String  SoapTypeAttribute::get_XmlTypeName() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata", "SoapTypeAttribute", 0, NULL, "get_XmlTypeName", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
					}

					void SoapTypeAttribute::set_XmlTypeName(mscorlib::System::String  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata", "SoapTypeAttribute", 0, NULL, "set_XmlTypeName", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}


					//	Get/Set:XmlTypeNamespace
					mscorlib::System::String  SoapTypeAttribute::get_XmlTypeNamespace() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata", "SoapTypeAttribute", 0, NULL, "get_XmlTypeNamespace", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
					}

					void SoapTypeAttribute::set_XmlTypeNamespace(mscorlib::System::String  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata", "SoapTypeAttribute", 0, NULL, "set_XmlTypeNamespace", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}


					//	Get/Set:Embedded
					mscorlib::System::Boolean  SoapTypeAttribute::get_Embedded() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata", "SoapAttribute", 0, NULL, "get_Embedded", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					}

					void SoapTypeAttribute::set_Embedded(mscorlib::System::Boolean  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = reinterpret_cast<void*>(value);
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata", "SoapAttribute", 0, NULL, "set_Embedded", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}


					//	Get:TypeId
					mscorlib::System::Object  SoapTypeAttribute::get_TypeId() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Object(__result__);
					}



				}
			}
		}
	}
}
