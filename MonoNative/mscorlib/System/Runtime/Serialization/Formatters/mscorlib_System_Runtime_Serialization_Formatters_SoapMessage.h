#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_SOAPMESSAGE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_SOAPMESSAGE_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/Serialization/Formatters/mscorlib_System_Runtime_Serialization_Formatters_ISoapMessage.h>

namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Remoting
			{
				namespace Messaging
				{

					class Header;
					

				}
			}
		}
	}
}
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
			namespace Serialization
			{
				namespace Formatters
				{

					class SoapMessage
						: public mscorlib::System::Object
						, public virtual mscorlib::System::Runtime::Serialization::Formatters::ISoapMessage
					{
					public:
						SoapMessage()
						: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Serialization.Formatters.SoapMessage"))
						, mscorlib::System::Runtime::Serialization::Formatters::ISoapMessage(NULL)
						{
							__native_object__ = Global::New("mscorlib", "System.Runtime.Serialization.Formatters", "SoapMessage");
						};
					
						SoapMessage(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::Object(nativeTypeInfo)
						, mscorlib::System::Runtime::Serialization::Formatters::ISoapMessage(NULL)
						{
						};
					
						SoapMessage(MonoObject *nativeObject)
						: mscorlib::System::Object(nativeObject)
						, mscorlib::System::Runtime::Serialization::Formatters::ISoapMessage(nativeObject)
						{
						};
					
						~SoapMessage()
						{
						};
					

						SoapMessage & operator=(SoapMessage &value) { __native_object__ = value.GetNativeObject(); return value; };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


						//Public Properties
						__declspec(property(get=get_Headers, put=set_Headers)) std::vector<mscorlib::System::Runtime::Remoting::Messaging::Header*>  Headers;
						__declspec(property(get=get_MethodName, put=set_MethodName)) mscorlib::System::String  MethodName;
						__declspec(property(get=get_ParamNames, put=set_ParamNames)) std::vector<mscorlib::System::String*>  ParamNames;
						__declspec(property(get=get_ParamTypes, put=set_ParamTypes)) std::vector<mscorlib::System::Type*>  ParamTypes;
						__declspec(property(get=get_ParamValues, put=set_ParamValues)) std::vector<mscorlib::System::Object*>  ParamValues;
						__declspec(property(get=get_XmlNameSpace, put=set_XmlNameSpace)) mscorlib::System::String  XmlNameSpace;

						//Get Set Properties Methods
						//	Get/Set:Headers
						std::vector<mscorlib::System::Runtime::Remoting::Messaging::Header*>  get_Headers();
						void set_Headers(std::vector<mscorlib::System::Runtime::Remoting::Messaging::Header*>  value);

						//	Get/Set:MethodName
						mscorlib::System::String  get_MethodName();
						void set_MethodName(mscorlib::System::String  value);

						//	Get/Set:ParamNames
						std::vector<mscorlib::System::String*>  get_ParamNames();
						void set_ParamNames(std::vector<mscorlib::System::String*>  value);

						//	Get/Set:ParamTypes
						std::vector<mscorlib::System::Type*>  get_ParamTypes();
						void set_ParamTypes(std::vector<mscorlib::System::Type*>  value);

						//	Get/Set:ParamValues
						std::vector<mscorlib::System::Object*>  get_ParamValues();
						void set_ParamValues(std::vector<mscorlib::System::Object*>  value);

						//	Get/Set:XmlNameSpace
						mscorlib::System::String  get_XmlNameSpace();
						void set_XmlNameSpace(mscorlib::System::String  value);

					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
