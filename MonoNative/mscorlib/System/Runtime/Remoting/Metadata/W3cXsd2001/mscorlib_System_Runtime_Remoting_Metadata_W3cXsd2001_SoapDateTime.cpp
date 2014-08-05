#include <mscorlib/System/Runtime/Remoting/Metadata/W3cXsd2001/mscorlib_System_Runtime_Remoting_Metadata_W3cXsd2001_SoapDateTime.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_DateTime.h>



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

						Property<mscorlib::System::String , mscorlib::System::Runtime::Remoting::Metadata::W3cXsd2001::SoapDateTime> mscorlib::System::Runtime::Remoting::Metadata::W3cXsd2001::SoapDateTime::XsdType(&mscorlib::System::Runtime::Remoting::Metadata::W3cXsd2001::SoapDateTime::get_XsdType, &mscorlib::System::Runtime::Remoting::Metadata::W3cXsd2001::SoapDateTime::set_XsdType);
						//Public Methods
						mscorlib::System::DateTime SoapDateTime::Parse(mscorlib::System::String value)
						{
								MonoType *__parameter_types__[1];
								void *__parameters__[1];
								__parameter_types__[0] = Global::GetType(typeid(value).name());
								__parameters__[0] = mono_string_new(Global::GetDomain(), value);
								MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata.W3cXsd2001", "SoapDateTime", 0, NULL, "Parse", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
								return mscorlib::System::DateTime(__result__);
						}

						mscorlib::System::DateTime SoapDateTime::Parse(const char *value)
						{
								MonoType *__parameter_types__[1];
								void *__parameters__[1];
								__parameter_types__[0] = Global::GetType(typeid(value).name());
								__parameters__[0] = mono_string_new(Global::GetDomain(), value);
								MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata.W3cXsd2001", "SoapDateTime", 0, NULL, "Parse", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
								return mscorlib::System::DateTime(__result__);
						}

						mscorlib::System::String SoapDateTime::ToString(mscorlib::System::DateTime value)
						{
								MonoType *__parameter_types__[1];
								void *__parameters__[1];
								__parameter_types__[0] = Global::GetType(typeid(value).name());
								__parameters__[0] = (MonoObject*)value;
								MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata.W3cXsd2001", "SoapDateTime", 0, NULL, "ToString", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
								return mscorlib::System::String(__result__);
						}

						//Get Set Static Properties Methods
						//	Get:XsdType
						mscorlib::System::String  SoapDateTime::get_XsdType()
						{
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata.W3cXsd2001", "SoapDateTime", 0, NULL, "get_XsdType", NullMonoObject, 0, NULL, NULL, NULL);
							return mscorlib::System::String(__result__);
						}

						void SoapDateTime::set_XsdType(mscorlib::System::String  value)
						{
							throw;
						}




					}
				}
			}
		}
	}
}
