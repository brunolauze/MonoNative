#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_IdentityNotMappedException.h>
#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_IdentityReferenceCollection.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_SerializationInfo.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_StreamingContext.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MethodBase.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Principal
			{

				//Public Methods
				void IdentityNotMappedException::GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo serializationInfo, mscorlib::System::Runtime::Serialization::StreamingContext streamingContext)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(serializationInfo).name());
						__parameter_types__[1] = Global::GetType(typeid(streamingContext).name());
						__parameters__[0] = (MonoObject*)serializationInfo;
						__parameters__[1] = (MonoObject*)streamingContext;
						Global::InvokeMethod("mscorlib", "System.Security.Principal", "IdentityNotMappedException", 0, NULL, "GetObjectData", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				//Get Set Properties Methods
				//	Get:UnmappedIdentities
				mscorlib::System::Security::Principal::IdentityReferenceCollection  IdentityNotMappedException::get_UnmappedIdentities()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Principal", "IdentityNotMappedException", 0, NULL, "get_UnmappedIdentities", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::Principal::IdentityReferenceCollection(__result__);
				}


				//	Get:InnerException
				mscorlib::System::Exception  IdentityNotMappedException::get_InnerException()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Exception", 0, NULL, "get_InnerException", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Exception(__result__);
				}


				//	Get/Set:HelpLink
				mscorlib::System::String  IdentityNotMappedException::get_HelpLink()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Exception", 0, NULL, "get_HelpLink", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void IdentityNotMappedException::set_HelpLink(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System", "Exception", 0, NULL, "set_HelpLink", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:HResult
				mscorlib::System::Int32  IdentityNotMappedException::get_HResult()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Exception", 0, NULL, "get_HResult", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				void IdentityNotMappedException::set_HResult(mscorlib::System::Int32  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					Global::InvokeMethod("mscorlib", "System", "Exception", 0, NULL, "set_HResult", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get:Message
				mscorlib::System::String  IdentityNotMappedException::get_Message()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Exception", 0, NULL, "get_Message", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get/Set:Source
				mscorlib::System::String  IdentityNotMappedException::get_Source()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Exception", 0, NULL, "get_Source", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void IdentityNotMappedException::set_Source(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System", "Exception", 0, NULL, "set_Source", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get:StackTrace
				mscorlib::System::String  IdentityNotMappedException::get_StackTrace()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Exception", 0, NULL, "get_StackTrace", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:TargetSite
				mscorlib::System::Reflection::MethodBase  IdentityNotMappedException::get_TargetSite()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Exception", 0, NULL, "get_TargetSite", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Reflection::MethodBase(__result__);
				}


				//	Get:Data
				mscorlib::System::Collections::IDictionary  IdentityNotMappedException::get_Data()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Exception", 0, NULL, "get_Data", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Collections::IDictionary(__result__);
				}



			}
		}
	}
}
