#include <mscorlib/System/Runtime/Remoting/Metadata/W3cXsd2001/mscorlib_System_Runtime_Remoting_Metadata_W3cXsd2001_SoapQName.h>
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
						mscorlib::System::String SoapQName::GetXsdType()
						{
								MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata.W3cXsd2001", "SoapQName", 0, NULL, "GetXsdType", __native_object__, 0, NULL, NULL, NULL);
								return mscorlib::System::String(__result__);
						}

						mscorlib::System::Runtime::Remoting::Metadata::W3cXsd2001::SoapQName SoapQName::Parse(mscorlib::System::String value)
						{
								MonoType *__parameter_types__[1];
								void *__parameters__[1];
								__parameter_types__[0] = Global::GetType(typeid(value).name());
								__parameters__[0] = (MonoObject*)value;
								MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata.W3cXsd2001", "SoapQName", 0, NULL, "Parse", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
								return mscorlib::System::Runtime::Remoting::Metadata::W3cXsd2001::SoapQName(__result__);
						}

						mscorlib::System::String SoapQName::ToString()
						{
								MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata.W3cXsd2001", "SoapQName", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
								return mscorlib::System::String(__result__);
						}

						//Get Set Properties Methods
						//	Get/Set:Key
						mscorlib::System::String  SoapQName::get_Key()
						{
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata.W3cXsd2001", "SoapQName", 0, NULL, "get_Key", __native_object__, 0, NULL, NULL, NULL);
							return mscorlib::System::String(__result__);
						}

						void SoapQName::set_Key(mscorlib::System::String  value)
						{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(value).name());
							__parameters__[0] = (MonoObject*)value;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata.W3cXsd2001", "SoapQName", 0, NULL, "set_Key", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						}


						//	Get/Set:Name
						mscorlib::System::String  SoapQName::get_Name()
						{
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata.W3cXsd2001", "SoapQName", 0, NULL, "get_Name", __native_object__, 0, NULL, NULL, NULL);
							return mscorlib::System::String(__result__);
						}

						void SoapQName::set_Name(mscorlib::System::String  value)
						{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(value).name());
							__parameters__[0] = (MonoObject*)value;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata.W3cXsd2001", "SoapQName", 0, NULL, "set_Name", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						}


						//	Get/Set:Namespace
						mscorlib::System::String  SoapQName::get_Namespace()
						{
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata.W3cXsd2001", "SoapQName", 0, NULL, "get_Namespace", __native_object__, 0, NULL, NULL, NULL);
							return mscorlib::System::String(__result__);
						}

						void SoapQName::set_Namespace(mscorlib::System::String  value)
						{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(value).name());
							__parameters__[0] = (MonoObject*)value;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata.W3cXsd2001", "SoapQName", 0, NULL, "set_Namespace", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						}


						//Get Set Static Properties Methods
						//	Get:XsdType
						mscorlib::System::String  SoapQName::get_XsdType()
						{
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata.W3cXsd2001", "SoapQName", 0, NULL, "get_XsdType", NullMonoObject, 0, NULL, NULL, NULL);
							return mscorlib::System::String(__result__);
						}




					}
				}
			}
		}
	}
}
