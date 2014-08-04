#include <mscorlib/System/Runtime/Remoting/Metadata/W3cXsd2001/mscorlib_System_Runtime_Remoting_Metadata_W3cXsd2001_SoapEntity.h>
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
					namespace W3cXsd2001
					{

						//Public Methods
						mscorlib::System::String SoapEntity::GetXsdType()
						{
								MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata.W3cXsd2001", "SoapEntity", 0, NULL, "GetXsdType", __native_object__, 0, NULL, NULL, NULL);
								return mscorlib::System::String(__result__);
						}

						mscorlib::System::Runtime::Remoting::Metadata::W3cXsd2001::SoapEntity SoapEntity::Parse(mscorlib::System::String value)
						{
								MonoType *__parameter_types__[1];
								void *__parameters__[1];
								__parameter_types__[0] = Global::GetType(typeid(value).name());
								__parameters__[0] = (MonoObject*)value;
								MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata.W3cXsd2001", "SoapEntity", 0, NULL, "Parse", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
								return mscorlib::System::Runtime::Remoting::Metadata::W3cXsd2001::SoapEntity(__result__);
						}

						mscorlib::System::String SoapEntity::ToString()
						{
								MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata.W3cXsd2001", "SoapEntity", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
								return mscorlib::System::String(__result__);
						}

						//Get Set Properties Methods
						//	Get/Set:Value
						mscorlib::System::String  SoapEntity::get_Value()
						{
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata.W3cXsd2001", "SoapEntity", 0, NULL, "get_Value", __native_object__, 0, NULL, NULL, NULL);
							return mscorlib::System::String(__result__);
						}

						void SoapEntity::set_Value(mscorlib::System::String  value)
						{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(value).name());
							__parameters__[0] = (MonoObject*)value;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata.W3cXsd2001", "SoapEntity", 0, NULL, "set_Value", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						}


						//Get Set Static Properties Methods
						//	Get:XsdType
						mscorlib::System::String  SoapEntity::get_XsdType()
						{
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata.W3cXsd2001", "SoapEntity", 0, NULL, "get_XsdType", NullMonoObject, 0, NULL, NULL, NULL);
							return mscorlib::System::String(__result__);
						}




					}
				}
			}
		}
	}
}
