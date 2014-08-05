#include <mscorlib/System/Runtime/Remoting/Metadata/W3cXsd2001/mscorlib_System_Runtime_Remoting_Metadata_W3cXsd2001_SoapIdrefs.h>
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

						Property<mscorlib::System::String , mscorlib::System::Runtime::Remoting::Metadata::W3cXsd2001::SoapIdrefs> mscorlib::System::Runtime::Remoting::Metadata::W3cXsd2001::SoapIdrefs::XsdType(&mscorlib::System::Runtime::Remoting::Metadata::W3cXsd2001::SoapIdrefs::get_XsdType, &mscorlib::System::Runtime::Remoting::Metadata::W3cXsd2001::SoapIdrefs::set_XsdType);
						//Public Methods
						mscorlib::System::String SoapIdrefs::GetXsdType()
						{
								MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata.W3cXsd2001", "SoapIdrefs", 0, NULL, "GetXsdType", __native_object__, 0, NULL, NULL, NULL);
								return mscorlib::System::String(__result__);
						}

						mscorlib::System::Runtime::Remoting::Metadata::W3cXsd2001::SoapIdrefs SoapIdrefs::Parse(mscorlib::System::String value)
						{
								MonoType *__parameter_types__[1];
								void *__parameters__[1];
								__parameter_types__[0] = Global::GetType(typeid(value).name());
								__parameters__[0] = (MonoObject*)value;
								MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata.W3cXsd2001", "SoapIdrefs", 0, NULL, "Parse", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
								return mscorlib::System::Runtime::Remoting::Metadata::W3cXsd2001::SoapIdrefs(__result__);
						}

						mscorlib::System::String SoapIdrefs::ToString()
						{
								MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata.W3cXsd2001", "SoapIdrefs", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
								return mscorlib::System::String(__result__);
						}

						//Get Set Properties Methods
						//	Get/Set:Value
						mscorlib::System::String  SoapIdrefs::get_Value() const
						{
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata.W3cXsd2001", "SoapIdrefs", 0, NULL, "get_Value", __native_object__, 0, NULL, NULL, NULL);
							return mscorlib::System::String(__result__);
						}

						void SoapIdrefs::set_Value(mscorlib::System::String  value)
						{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(value).name());
							__parameters__[0] = (MonoObject*)value;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata.W3cXsd2001", "SoapIdrefs", 0, NULL, "set_Value", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						}


						//Get Set Static Properties Methods
						//	Get:XsdType
						mscorlib::System::String  SoapIdrefs::get_XsdType()
						{
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata.W3cXsd2001", "SoapIdrefs", 0, NULL, "get_XsdType", NullMonoObject, 0, NULL, NULL, NULL);
							return mscorlib::System::String(__result__);
						}

						void SoapIdrefs::set_XsdType(mscorlib::System::String  value)
						{
							throw;
						}




					}
				}
			}
		}
	}
}
