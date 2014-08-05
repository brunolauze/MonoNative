#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_H

#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		class String;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class MethodBase;
			class Assembly;
			

		}
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

				class SoapServices
					: public mscorlib::System::Object
				{
				public:
					SoapServices(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					SoapServices(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~SoapServices()
					{
					};
				

					SoapServices & operator=(SoapServices &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					static mscorlib::System::String  CodeXmlNamespaceForClrTypeNamespace(mscorlib::System::String typeNamespace, mscorlib::System::String assemblyName);
					static mscorlib::System::Boolean  DecodeXmlNamespaceForClrTypeNamespace(mscorlib::System::String inNamespace, mscorlib::System::String typeNamespace, mscorlib::System::String assemblyName);
					static void  GetInteropFieldTypeAndNameFromXmlAttribute(mscorlib::System::Type containingType, mscorlib::System::String xmlAttribute, mscorlib::System::String xmlNamespace, mscorlib::System::Type type, mscorlib::System::String name);
					static void  GetInteropFieldTypeAndNameFromXmlElement(mscorlib::System::Type containingType, mscorlib::System::String xmlElement, mscorlib::System::String xmlNamespace, mscorlib::System::Type type, mscorlib::System::String name);
					static mscorlib::System::Type  GetInteropTypeFromXmlElement(mscorlib::System::String xmlElement, mscorlib::System::String xmlNamespace);
					static mscorlib::System::Type  GetInteropTypeFromXmlType(mscorlib::System::String xmlType, mscorlib::System::String xmlTypeNamespace);
					static mscorlib::System::String  GetSoapActionFromMethodBase(mscorlib::System::Reflection::MethodBase mb);
					static mscorlib::System::Boolean  GetTypeAndMethodNameFromSoapAction(mscorlib::System::String soapAction, mscorlib::System::String typeName, mscorlib::System::String methodName);
					static mscorlib::System::Boolean  GetXmlElementForInteropType(mscorlib::System::Type type, mscorlib::System::String xmlElement, mscorlib::System::String xmlNamespace);
					static mscorlib::System::String  GetXmlNamespaceForMethodCall(mscorlib::System::Reflection::MethodBase mb);
					static mscorlib::System::String  GetXmlNamespaceForMethodResponse(mscorlib::System::Reflection::MethodBase mb);
					static mscorlib::System::Boolean  GetXmlTypeForInteropType(mscorlib::System::Type type, mscorlib::System::String xmlType, mscorlib::System::String xmlTypeNamespace);
					static mscorlib::System::Boolean  IsClrTypeNamespace(mscorlib::System::String namespaceString);
					static mscorlib::System::Boolean  IsSoapActionValidForMethodBase(mscorlib::System::String soapAction, mscorlib::System::Reflection::MethodBase mb);
					static void  PreLoad(mscorlib::System::Reflection::Assembly assembly);
					static void  PreLoad(mscorlib::System::Type type);
					static void  RegisterInteropXmlElement(mscorlib::System::String xmlElement, mscorlib::System::String xmlNamespace, mscorlib::System::Type type);
					static void  RegisterInteropXmlType(mscorlib::System::String xmlType, mscorlib::System::String xmlTypeNamespace, mscorlib::System::Type type);
					static void  RegisterSoapActionForMethodBase(mscorlib::System::Reflection::MethodBase mb);
					static void  RegisterSoapActionForMethodBase(mscorlib::System::Reflection::MethodBase mb, mscorlib::System::String soapAction);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Static Properties
					static Property<mscorlib::System::String , mscorlib::System::Runtime::Remoting::SoapServices> XmlNsForClrType;
					static Property<mscorlib::System::String , mscorlib::System::Runtime::Remoting::SoapServices> XmlNsForClrTypeWithAssembly;
					static Property<mscorlib::System::String , mscorlib::System::Runtime::Remoting::SoapServices> XmlNsForClrTypeWithNs;
					static Property<mscorlib::System::String , mscorlib::System::Runtime::Remoting::SoapServices> XmlNsForClrTypeWithNsAndAssembly;

					//Get Set Static Properties Methods
					//	Get:XmlNsForClrType
					static mscorlib::System::String  get_XmlNsForClrType();
					static void set_XmlNsForClrType(mscorlib::System::String  value);

					//	Get:XmlNsForClrTypeWithAssembly
					static mscorlib::System::String  get_XmlNsForClrTypeWithAssembly();
					static void set_XmlNsForClrTypeWithAssembly(mscorlib::System::String  value);

					//	Get:XmlNsForClrTypeWithNs
					static mscorlib::System::String  get_XmlNsForClrTypeWithNs();
					static void set_XmlNsForClrTypeWithNs(mscorlib::System::String  value);

					//	Get:XmlNsForClrTypeWithNsAndAssembly
					static mscorlib::System::String  get_XmlNsForClrTypeWithNsAndAssembly();
					static void set_XmlNsForClrTypeWithNsAndAssembly(mscorlib::System::String  value);


				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
