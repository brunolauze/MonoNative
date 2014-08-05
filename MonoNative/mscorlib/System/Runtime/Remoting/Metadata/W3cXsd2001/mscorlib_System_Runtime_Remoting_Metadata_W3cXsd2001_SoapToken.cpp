#include <mscorlib/System/Runtime/Remoting/Metadata/W3cXsd2001/mscorlib_System_Runtime_Remoting_Metadata_W3cXsd2001_SoapToken.h>
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

						Property<mscorlib::System::String , mscorlib::System::Runtime::Remoting::Metadata::W3cXsd2001::SoapToken> mscorlib::System::Runtime::Remoting::Metadata::W3cXsd2001::SoapToken::XsdType(&mscorlib::System::Runtime::Remoting::Metadata::W3cXsd2001::SoapToken::get_XsdType, &mscorlib::System::Runtime::Remoting::Metadata::W3cXsd2001::SoapToken::set_XsdType);
						//Public Methods
						mscorlib::System::String SoapToken::GetXsdType()
						{
								MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata.W3cXsd2001", "SoapToken", 0, NULL, "GetXsdType", __native_object__, 0, NULL, NULL, NULL);
								return mscorlib::System::String(__result__);
						}

						mscorlib::System::Runtime::Remoting::Metadata::W3cXsd2001::SoapToken SoapToken::Parse(mscorlib::System::String value)
						{
								MonoType *__parameter_types__[1];
								void *__parameters__[1];
								__parameter_types__[0] = Global::GetType(typeid(value).name());
								__parameters__[0] = (MonoObject*)value;
								MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata.W3cXsd2001", "SoapToken", 0, NULL, "Parse", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
								return mscorlib::System::Runtime::Remoting::Metadata::W3cXsd2001::SoapToken(__result__);
						}

						mscorlib::System::String SoapToken::ToString()
						{
								MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata.W3cXsd2001", "SoapToken", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
								return mscorlib::System::String(__result__);
						}

						//Get Set Properties Methods
						//	Get/Set:Value
						mscorlib::System::String  SoapToken::get_Value() const
						{
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata.W3cXsd2001", "SoapToken", 0, NULL, "get_Value", __native_object__, 0, NULL, NULL, NULL);
							return mscorlib::System::String(__result__);
						}

						void SoapToken::set_Value(mscorlib::System::String  value)
						{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(value).name());
							__parameters__[0] = (MonoObject*)value;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata.W3cXsd2001", "SoapToken", 0, NULL, "set_Value", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						}


						//Get Set Static Properties Methods
						//	Get:XsdType
						mscorlib::System::String  SoapToken::get_XsdType()
						{
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata.W3cXsd2001", "SoapToken", 0, NULL, "get_XsdType", NullMonoObject, 0, NULL, NULL, NULL);
							return mscorlib::System::String(__result__);
						}

						void SoapToken::set_XsdType(mscorlib::System::String  value)
						{
							throw;
						}




					}
				}
			}
		}
	}
}
