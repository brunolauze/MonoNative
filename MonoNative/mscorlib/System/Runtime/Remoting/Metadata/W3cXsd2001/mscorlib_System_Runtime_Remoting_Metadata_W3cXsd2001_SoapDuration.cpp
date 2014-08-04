#include <mscorlib/System/Runtime/Remoting/Metadata/W3cXsd2001/mscorlib_System_Runtime_Remoting_Metadata_W3cXsd2001_SoapDuration.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_TimeSpan.h>



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
						mscorlib::System::TimeSpan SoapDuration::Parse(mscorlib::System::String value)
						{
								MonoType *__parameter_types__[1];
								void *__parameters__[1];
								__parameter_types__[0] = Global::GetType(typeid(value).name());
								__parameters__[0] = (MonoObject*)value;
								MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata.W3cXsd2001", "SoapDuration", 0, NULL, "Parse", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
								return mscorlib::System::TimeSpan(__result__);
						}

						mscorlib::System::String SoapDuration::ToString(mscorlib::System::TimeSpan timeSpan)
						{
								MonoType *__parameter_types__[1];
								void *__parameters__[1];
								__parameter_types__[0] = Global::GetType(typeid(timeSpan).name());
								__parameters__[0] = (MonoObject*)timeSpan;
								MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata.W3cXsd2001", "SoapDuration", 0, NULL, "ToString", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
								return mscorlib::System::String(__result__);
						}

						//Get Set Static Properties Methods
						//	Get:XsdType
						mscorlib::System::String  SoapDuration::get_XsdType()
						{
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata.W3cXsd2001", "SoapDuration", 0, NULL, "get_XsdType", NullMonoObject, 0, NULL, NULL, NULL);
							return mscorlib::System::String(__result__);
						}




					}
				}
			}
		}
	}
}