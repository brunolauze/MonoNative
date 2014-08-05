#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_ISOAPMESSAGE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_ISOAPMESSAGE_H

#include <mscorlib/System/mscorlib_System_Object.h>

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

					class ISoapMessage
					{
					public:
						ISoapMessage(MonoObject *nativeObject)
						{
							__mscorlib_System_Runtime_Serialization_Formatters_ISoapMessage = nativeObject;
						};
					
						~ISoapMessage()
						{
						};
					

						ISoapMessage & operator=(ISoapMessage &value) { __mscorlib_System_Runtime_Serialization_Formatters_ISoapMessage = value.__mscorlib_System_Runtime_Serialization_Formatters_ISoapMessage; return value; };
						operator MonoObject*() { return __mscorlib_System_Runtime_Serialization_Formatters_ISoapMessage; };
						MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_Serialization_Formatters_ISoapMessage = value; return value; };




						//Public Properties
						__declspec(property(get=get_Headers, put=set_Headers)) std::vector<mscorlib::System::Runtime::Remoting::Messaging::Header*>  Headers;
						__declspec(property(get=get_MethodName, put=set_MethodName)) mscorlib::System::String  MethodName;
						__declspec(property(get=get_ParamNames, put=set_ParamNames)) std::vector<mscorlib::System::String*>  ParamNames;
						__declspec(property(get=get_ParamTypes, put=set_ParamTypes)) std::vector<mscorlib::System::Type*>  ParamTypes;
						__declspec(property(get=get_ParamValues, put=set_ParamValues)) std::vector<mscorlib::System::Object*>  ParamValues;
						__declspec(property(get=get_XmlNameSpace, put=set_XmlNameSpace)) mscorlib::System::String  XmlNameSpace;

						//Get Set Properties Methods
						//	Get/Set:Headers
						std::vector<mscorlib::System::Runtime::Remoting::Messaging::Header*>  get_Headers() const;
						void set_Headers(std::vector<mscorlib::System::Runtime::Remoting::Messaging::Header*>  value);

						//	Get/Set:MethodName
						mscorlib::System::String  get_MethodName() const;
						void set_MethodName(mscorlib::System::String  value);

						//	Get/Set:ParamNames
						std::vector<mscorlib::System::String*>  get_ParamNames() const;
						void set_ParamNames(std::vector<mscorlib::System::String*>  value);

						//	Get/Set:ParamTypes
						std::vector<mscorlib::System::Type*>  get_ParamTypes() const;
						void set_ParamTypes(std::vector<mscorlib::System::Type*>  value);

						//	Get/Set:ParamValues
						std::vector<mscorlib::System::Object*>  get_ParamValues() const;
						void set_ParamValues(std::vector<mscorlib::System::Object*>  value);

						//	Get/Set:XmlNameSpace
						mscorlib::System::String  get_XmlNameSpace() const;
						void set_XmlNameSpace(mscorlib::System::String  value);

					
					protected:
						MonoObject *__mscorlib_System_Runtime_Serialization_Formatters_ISoapMessage;
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
