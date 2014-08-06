#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_SoapServices.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MethodBase.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Assembly.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Remoting
			{

				Property<mscorlib::System::String , mscorlib::System::Runtime::Remoting::SoapServices> mscorlib::System::Runtime::Remoting::SoapServices::XmlNsForClrType(&mscorlib::System::Runtime::Remoting::SoapServices::get_XmlNsForClrType, &mscorlib::System::Runtime::Remoting::SoapServices::set_XmlNsForClrType);
				Property<mscorlib::System::String , mscorlib::System::Runtime::Remoting::SoapServices> mscorlib::System::Runtime::Remoting::SoapServices::XmlNsForClrTypeWithAssembly(&mscorlib::System::Runtime::Remoting::SoapServices::get_XmlNsForClrTypeWithAssembly, &mscorlib::System::Runtime::Remoting::SoapServices::set_XmlNsForClrTypeWithAssembly);
				Property<mscorlib::System::String , mscorlib::System::Runtime::Remoting::SoapServices> mscorlib::System::Runtime::Remoting::SoapServices::XmlNsForClrTypeWithNs(&mscorlib::System::Runtime::Remoting::SoapServices::get_XmlNsForClrTypeWithNs, &mscorlib::System::Runtime::Remoting::SoapServices::set_XmlNsForClrTypeWithNs);
				Property<mscorlib::System::String , mscorlib::System::Runtime::Remoting::SoapServices> mscorlib::System::Runtime::Remoting::SoapServices::XmlNsForClrTypeWithNsAndAssembly(&mscorlib::System::Runtime::Remoting::SoapServices::get_XmlNsForClrTypeWithNsAndAssembly, &mscorlib::System::Runtime::Remoting::SoapServices::set_XmlNsForClrTypeWithNsAndAssembly);
				//Public Methods
				mscorlib::System::String SoapServices::CodeXmlNamespaceForClrTypeNamespace(mscorlib::System::String typeNamespace, mscorlib::System::String assemblyName)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(typeNamespace).name());
						__parameter_types__[1] = Global::GetType(typeid(assemblyName).name());
						__parameters__[0] = (MonoObject*)typeNamespace;
						__parameters__[1] = (MonoObject*)assemblyName;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "SoapServices", 0, NULL, "CodeXmlNamespaceForClrTypeNamespace", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::String(__result__);
				}

				mscorlib::System::String SoapServices::CodeXmlNamespaceForClrTypeNamespace(const char *typeNamespace, const char *assemblyName)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = mono_string_new(Global::GetDomain(), typeNamespace);
						__parameters__[1] = mono_string_new(Global::GetDomain(), assemblyName);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "SoapServices", 0, NULL, "CodeXmlNamespaceForClrTypeNamespace", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::String(__result__);
				}

				mscorlib::System::Boolean SoapServices::DecodeXmlNamespaceForClrTypeNamespace(mscorlib::System::String inNamespace, mscorlib::System::String typeNamespace, mscorlib::System::String assemblyName)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(inNamespace).name());
						__parameter_types__[1] = Global::GetType(typeid(typeNamespace).name());
						__parameter_types__[2] = Global::GetType(typeid(assemblyName).name());
						__parameters__[0] = (MonoObject*)inNamespace;
						__parameters__[1] = (MonoObject*)typeNamespace;
						__parameters__[2] = (MonoObject*)assemblyName;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "SoapServices", 0, NULL, "DecodeXmlNamespaceForClrTypeNamespace", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Boolean SoapServices::DecodeXmlNamespaceForClrTypeNamespace(const char *inNamespace, const char *typeNamespace, const char *assemblyName)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType(typeid(typeNamespace).name());
						__parameter_types__[2] = Global::GetType(typeid(assemblyName).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), inNamespace);
						__parameters__[1] = (MonoObject*)typeNamespace;
						__parameters__[2] = (MonoObject*)assemblyName;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "SoapServices", 0, NULL, "DecodeXmlNamespaceForClrTypeNamespace", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void SoapServices::GetInteropFieldTypeAndNameFromXmlAttribute(mscorlib::System::Type containingType, mscorlib::System::String xmlAttribute, mscorlib::System::String xmlNamespace, mscorlib::System::Type type, mscorlib::System::String name)
				{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType(typeid(containingType).name());
						__parameter_types__[1] = Global::GetType(typeid(xmlAttribute).name());
						__parameter_types__[2] = Global::GetType(typeid(xmlNamespace).name());
						__parameter_types__[3] = Global::GetType(typeid(type).name());
						__parameter_types__[4] = Global::GetType(typeid(name).name());
						__parameters__[0] = (MonoObject*)containingType;
						__parameters__[1] = (MonoObject*)xmlAttribute;
						__parameters__[2] = (MonoObject*)xmlNamespace;
						__parameters__[3] = (MonoObject*)type;
						__parameters__[4] = (MonoObject*)name;
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "SoapServices", 0, NULL, "GetInteropFieldTypeAndNameFromXmlAttribute", NullMonoObject, 5, __parameter_types__, __parameters__, NULL);
				}

				void SoapServices::GetInteropFieldTypeAndNameFromXmlAttribute(mscorlib::System::Type containingType, const char *xmlAttribute, const char *xmlNamespace, mscorlib::System::Type type, const char *name)
				{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType(typeid(containingType).name());
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[2] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[3] = Global::GetType(typeid(type).name());
						__parameter_types__[4] = Global::GetType(typeid(name).name());
						__parameters__[0] = (MonoObject*)containingType;
						__parameters__[1] = mono_string_new(Global::GetDomain(), xmlAttribute);
						__parameters__[2] = mono_string_new(Global::GetDomain(), xmlNamespace);
						__parameters__[3] = (MonoObject*)type;
						__parameters__[4] = (MonoObject*)name;
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "SoapServices", 0, NULL, "GetInteropFieldTypeAndNameFromXmlAttribute", NullMonoObject, 5, __parameter_types__, __parameters__, NULL);
				}

				void SoapServices::GetInteropFieldTypeAndNameFromXmlElement(mscorlib::System::Type containingType, mscorlib::System::String xmlElement, mscorlib::System::String xmlNamespace, mscorlib::System::Type type, mscorlib::System::String name)
				{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType(typeid(containingType).name());
						__parameter_types__[1] = Global::GetType(typeid(xmlElement).name());
						__parameter_types__[2] = Global::GetType(typeid(xmlNamespace).name());
						__parameter_types__[3] = Global::GetType(typeid(type).name());
						__parameter_types__[4] = Global::GetType(typeid(name).name());
						__parameters__[0] = (MonoObject*)containingType;
						__parameters__[1] = (MonoObject*)xmlElement;
						__parameters__[2] = (MonoObject*)xmlNamespace;
						__parameters__[3] = (MonoObject*)type;
						__parameters__[4] = (MonoObject*)name;
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "SoapServices", 0, NULL, "GetInteropFieldTypeAndNameFromXmlElement", NullMonoObject, 5, __parameter_types__, __parameters__, NULL);
				}

				void SoapServices::GetInteropFieldTypeAndNameFromXmlElement(mscorlib::System::Type containingType, const char *xmlElement, const char *xmlNamespace, mscorlib::System::Type type, const char *name)
				{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType(typeid(containingType).name());
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[2] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[3] = Global::GetType(typeid(type).name());
						__parameter_types__[4] = Global::GetType(typeid(name).name());
						__parameters__[0] = (MonoObject*)containingType;
						__parameters__[1] = mono_string_new(Global::GetDomain(), xmlElement);
						__parameters__[2] = mono_string_new(Global::GetDomain(), xmlNamespace);
						__parameters__[3] = (MonoObject*)type;
						__parameters__[4] = (MonoObject*)name;
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "SoapServices", 0, NULL, "GetInteropFieldTypeAndNameFromXmlElement", NullMonoObject, 5, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Type SoapServices::GetInteropTypeFromXmlElement(mscorlib::System::String xmlElement, mscorlib::System::String xmlNamespace)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(xmlElement).name());
						__parameter_types__[1] = Global::GetType(typeid(xmlNamespace).name());
						__parameters__[0] = (MonoObject*)xmlElement;
						__parameters__[1] = (MonoObject*)xmlNamespace;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "SoapServices", 0, NULL, "GetInteropTypeFromXmlElement", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Type(__result__);
				}

				mscorlib::System::Type SoapServices::GetInteropTypeFromXmlElement(const char *xmlElement, const char *xmlNamespace)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = mono_string_new(Global::GetDomain(), xmlElement);
						__parameters__[1] = mono_string_new(Global::GetDomain(), xmlNamespace);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "SoapServices", 0, NULL, "GetInteropTypeFromXmlElement", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Type(__result__);
				}

				mscorlib::System::Type SoapServices::GetInteropTypeFromXmlType(mscorlib::System::String xmlType, mscorlib::System::String xmlTypeNamespace)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(xmlType).name());
						__parameter_types__[1] = Global::GetType(typeid(xmlTypeNamespace).name());
						__parameters__[0] = (MonoObject*)xmlType;
						__parameters__[1] = (MonoObject*)xmlTypeNamespace;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "SoapServices", 0, NULL, "GetInteropTypeFromXmlType", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Type(__result__);
				}

				mscorlib::System::Type SoapServices::GetInteropTypeFromXmlType(const char *xmlType, const char *xmlTypeNamespace)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = mono_string_new(Global::GetDomain(), xmlType);
						__parameters__[1] = mono_string_new(Global::GetDomain(), xmlTypeNamespace);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "SoapServices", 0, NULL, "GetInteropTypeFromXmlType", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Type(__result__);
				}

				mscorlib::System::String SoapServices::GetSoapActionFromMethodBase(mscorlib::System::Reflection::MethodBase mb)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(mb).name());
						__parameters__[0] = (MonoObject*)mb;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "SoapServices", 0, NULL, "GetSoapActionFromMethodBase", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::String(__result__);
				}

				mscorlib::System::Boolean SoapServices::GetTypeAndMethodNameFromSoapAction(mscorlib::System::String soapAction, mscorlib::System::String typeName, mscorlib::System::String methodName)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(soapAction).name());
						__parameter_types__[1] = Global::GetType(typeid(typeName).name());
						__parameter_types__[2] = Global::GetType(typeid(methodName).name());
						__parameters__[0] = (MonoObject*)soapAction;
						__parameters__[1] = (MonoObject*)typeName;
						__parameters__[2] = (MonoObject*)methodName;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "SoapServices", 0, NULL, "GetTypeAndMethodNameFromSoapAction", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Boolean SoapServices::GetTypeAndMethodNameFromSoapAction(const char *soapAction, const char *typeName, const char *methodName)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType(typeid(typeName).name());
						__parameter_types__[2] = Global::GetType(typeid(methodName).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), soapAction);
						__parameters__[1] = (MonoObject*)typeName;
						__parameters__[2] = (MonoObject*)methodName;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "SoapServices", 0, NULL, "GetTypeAndMethodNameFromSoapAction", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Boolean SoapServices::GetXmlElementForInteropType(mscorlib::System::Type type, mscorlib::System::String xmlElement, mscorlib::System::String xmlNamespace)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(type).name());
						__parameter_types__[1] = Global::GetType(typeid(xmlElement).name());
						__parameter_types__[2] = Global::GetType(typeid(xmlNamespace).name());
						__parameters__[0] = (MonoObject*)type;
						__parameters__[1] = (MonoObject*)xmlElement;
						__parameters__[2] = (MonoObject*)xmlNamespace;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "SoapServices", 0, NULL, "GetXmlElementForInteropType", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::String SoapServices::GetXmlNamespaceForMethodCall(mscorlib::System::Reflection::MethodBase mb)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(mb).name());
						__parameters__[0] = (MonoObject*)mb;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "SoapServices", 0, NULL, "GetXmlNamespaceForMethodCall", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::String(__result__);
				}

				mscorlib::System::String SoapServices::GetXmlNamespaceForMethodResponse(mscorlib::System::Reflection::MethodBase mb)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(mb).name());
						__parameters__[0] = (MonoObject*)mb;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "SoapServices", 0, NULL, "GetXmlNamespaceForMethodResponse", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::String(__result__);
				}

				mscorlib::System::Boolean SoapServices::GetXmlTypeForInteropType(mscorlib::System::Type type, mscorlib::System::String xmlType, mscorlib::System::String xmlTypeNamespace)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(type).name());
						__parameter_types__[1] = Global::GetType(typeid(xmlType).name());
						__parameter_types__[2] = Global::GetType(typeid(xmlTypeNamespace).name());
						__parameters__[0] = (MonoObject*)type;
						__parameters__[1] = (MonoObject*)xmlType;
						__parameters__[2] = (MonoObject*)xmlTypeNamespace;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "SoapServices", 0, NULL, "GetXmlTypeForInteropType", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Boolean SoapServices::IsClrTypeNamespace(mscorlib::System::String namespaceString)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(namespaceString).name());
						__parameters__[0] = (MonoObject*)namespaceString;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "SoapServices", 0, NULL, "IsClrTypeNamespace", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Boolean SoapServices::IsClrTypeNamespace(const char *namespaceString)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = mono_string_new(Global::GetDomain(), namespaceString);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "SoapServices", 0, NULL, "IsClrTypeNamespace", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Boolean SoapServices::IsSoapActionValidForMethodBase(mscorlib::System::String soapAction, mscorlib::System::Reflection::MethodBase mb)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(soapAction).name());
						__parameter_types__[1] = Global::GetType(typeid(mb).name());
						__parameters__[0] = (MonoObject*)soapAction;
						__parameters__[1] = (MonoObject*)mb;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "SoapServices", 0, NULL, "IsSoapActionValidForMethodBase", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Boolean SoapServices::IsSoapActionValidForMethodBase(const char *soapAction, mscorlib::System::Reflection::MethodBase mb)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType(typeid(mb).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), soapAction);
						__parameters__[1] = (MonoObject*)mb;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "SoapServices", 0, NULL, "IsSoapActionValidForMethodBase", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void SoapServices::PreLoad(mscorlib::System::Reflection::Assembly assembly)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(assembly).name());
						__parameters__[0] = (MonoObject*)assembly;
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "SoapServices", 0, NULL, "PreLoad", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				}

				void SoapServices::PreLoad(mscorlib::System::Type type)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(type).name());
						__parameters__[0] = (MonoObject*)type;
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "SoapServices", 0, NULL, "PreLoad", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				}

				void SoapServices::RegisterInteropXmlElement(mscorlib::System::String xmlElement, mscorlib::System::String xmlNamespace, mscorlib::System::Type type)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(xmlElement).name());
						__parameter_types__[1] = Global::GetType(typeid(xmlNamespace).name());
						__parameter_types__[2] = Global::GetType(typeid(type).name());
						__parameters__[0] = (MonoObject*)xmlElement;
						__parameters__[1] = (MonoObject*)xmlNamespace;
						__parameters__[2] = (MonoObject*)type;
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "SoapServices", 0, NULL, "RegisterInteropXmlElement", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				}

				void SoapServices::RegisterInteropXmlElement(const char *xmlElement, const char *xmlNamespace, mscorlib::System::Type type)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[2] = Global::GetType(typeid(type).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), xmlElement);
						__parameters__[1] = mono_string_new(Global::GetDomain(), xmlNamespace);
						__parameters__[2] = (MonoObject*)type;
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "SoapServices", 0, NULL, "RegisterInteropXmlElement", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				}

				void SoapServices::RegisterInteropXmlType(mscorlib::System::String xmlType, mscorlib::System::String xmlTypeNamespace, mscorlib::System::Type type)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(xmlType).name());
						__parameter_types__[1] = Global::GetType(typeid(xmlTypeNamespace).name());
						__parameter_types__[2] = Global::GetType(typeid(type).name());
						__parameters__[0] = (MonoObject*)xmlType;
						__parameters__[1] = (MonoObject*)xmlTypeNamespace;
						__parameters__[2] = (MonoObject*)type;
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "SoapServices", 0, NULL, "RegisterInteropXmlType", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				}

				void SoapServices::RegisterInteropXmlType(const char *xmlType, const char *xmlTypeNamespace, mscorlib::System::Type type)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[2] = Global::GetType(typeid(type).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), xmlType);
						__parameters__[1] = mono_string_new(Global::GetDomain(), xmlTypeNamespace);
						__parameters__[2] = (MonoObject*)type;
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "SoapServices", 0, NULL, "RegisterInteropXmlType", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				}

				void SoapServices::RegisterSoapActionForMethodBase(mscorlib::System::Reflection::MethodBase mb)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(mb).name());
						__parameters__[0] = (MonoObject*)mb;
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "SoapServices", 0, NULL, "RegisterSoapActionForMethodBase", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				}

				void SoapServices::RegisterSoapActionForMethodBase(mscorlib::System::Reflection::MethodBase mb, mscorlib::System::String soapAction)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(mb).name());
						__parameter_types__[1] = Global::GetType(typeid(soapAction).name());
						__parameters__[0] = (MonoObject*)mb;
						__parameters__[1] = (MonoObject*)soapAction;
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "SoapServices", 0, NULL, "RegisterSoapActionForMethodBase", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				}

				void SoapServices::RegisterSoapActionForMethodBase(mscorlib::System::Reflection::MethodBase mb, const char *soapAction)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(mb).name());
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = (MonoObject*)mb;
						__parameters__[1] = mono_string_new(Global::GetDomain(), soapAction);
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "SoapServices", 0, NULL, "RegisterSoapActionForMethodBase", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				}

				//Get Set Static Properties Methods
				//	Get:XmlNsForClrType
				mscorlib::System::String  SoapServices::get_XmlNsForClrType()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "SoapServices", 0, NULL, "get_XmlNsForClrType", NullMonoObject, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void SoapServices::set_XmlNsForClrType(mscorlib::System::String  value)
				{
					throw;
				}


				//	Get:XmlNsForClrTypeWithAssembly
				mscorlib::System::String  SoapServices::get_XmlNsForClrTypeWithAssembly()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "SoapServices", 0, NULL, "get_XmlNsForClrTypeWithAssembly", NullMonoObject, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void SoapServices::set_XmlNsForClrTypeWithAssembly(mscorlib::System::String  value)
				{
					throw;
				}


				//	Get:XmlNsForClrTypeWithNs
				mscorlib::System::String  SoapServices::get_XmlNsForClrTypeWithNs()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "SoapServices", 0, NULL, "get_XmlNsForClrTypeWithNs", NullMonoObject, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void SoapServices::set_XmlNsForClrTypeWithNs(mscorlib::System::String  value)
				{
					throw;
				}


				//	Get:XmlNsForClrTypeWithNsAndAssembly
				mscorlib::System::String  SoapServices::get_XmlNsForClrTypeWithNsAndAssembly()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "SoapServices", 0, NULL, "get_XmlNsForClrTypeWithNsAndAssembly", NullMonoObject, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void SoapServices::set_XmlNsForClrTypeWithNsAndAssembly(mscorlib::System::String  value)
				{
					throw;
				}




			}
		}
	}
}
