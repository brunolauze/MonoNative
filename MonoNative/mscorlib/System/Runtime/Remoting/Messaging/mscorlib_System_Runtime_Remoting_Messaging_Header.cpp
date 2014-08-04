#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_Header.h>
#include <mscorlib/System/mscorlib_System_Type.h>



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

					//Public Methods
					//	Get/Set:HeaderNamespace
					mscorlib::System::String Header::get_HeaderNamespace()
					{
						return mscorlib::System::String((MonoObject*)Global::GetFieldStringValue(__native_object__, "HeaderNamespace"));
					}

					void Header::set_HeaderNamespace(mscorlib::System::String  value)
					{
					}

					//	Get/Set:MustUnderstand
					mscorlib::System::Boolean Header::get_MustUnderstand()
					{
						return Global::GetFieldBooleanValue(__native_object__, "MustUnderstand");
					}

					void Header::set_MustUnderstand(mscorlib::System::Boolean  value)
					{
					}

					//	Get/Set:Name
					mscorlib::System::String Header::get_Name()
					{
						return mscorlib::System::String((MonoObject*)Global::GetFieldStringValue(__native_object__, "Name"));
					}

					void Header::set_Name(mscorlib::System::String  value)
					{
					}

					//	Get/Set:Value
					mscorlib::System::Object Header::get_Value()
					{
						return Global::GetFieldValue(__native_object__, "Value");
					}

					void Header::set_Value(mscorlib::System::Object  value)
					{
					}


				}
			}
		}
	}
}
