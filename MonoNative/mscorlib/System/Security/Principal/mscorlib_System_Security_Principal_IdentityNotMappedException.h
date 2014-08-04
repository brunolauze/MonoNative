#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PRINCIPAL_IDENTITYNOTMAPPEDEXCEPTION_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PRINCIPAL_IDENTITYNOTMAPPEDEXCEPTION_H

#include <mscorlib/System/mscorlib_System_SystemException.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Exception.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ISerializable.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__Exception.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IDictionary.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Principal
			{

				class IdentityReferenceCollection;
				

			}
		}
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

				class SerializationInfo;
				class StreamingContext;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class MethodBase;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{

		class Type;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Principal
			{

				class IdentityNotMappedException
					: public mscorlib::System::SystemException
					, public virtual mscorlib::System::Runtime::Serialization::ISerializable
					, public virtual mscorlib::System::Runtime::InteropServices::_Exception
				{
				public:
					IdentityNotMappedException()
					: mscorlib::System::SystemException(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Principal.IdentityNotMappedException"))
					, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
					, mscorlib::System::Runtime::InteropServices::_Exception(NULL)
					{
						__native_object__ = Global::New("mscorlib", "System.Security.Principal", "IdentityNotMappedException");
					};
				
					IdentityNotMappedException(mscorlib::System::String message)
					: mscorlib::System::SystemException(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Principal.IdentityNotMappedException"))
					, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
					, mscorlib::System::Runtime::InteropServices::_Exception(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = (MonoObject*)message;
						__native_object__ = Global::New("mscorlib", "System.Security.Principal", "IdentityNotMappedException", 1, __parameter_types__, __parameters__);
					};
				
					IdentityNotMappedException(mscorlib::System::String message, mscorlib::System::Exception inner)
					: mscorlib::System::SystemException(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Principal.IdentityNotMappedException"))
					, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
					, mscorlib::System::Runtime::InteropServices::_Exception(NULL)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "Exception");
						__parameters__[0] = (MonoObject*)message;
						__parameters__[1] = (MonoObject*)inner;
						__native_object__ = Global::New("mscorlib", "System.Security.Principal", "IdentityNotMappedException", 2, __parameter_types__, __parameters__);
					};
				
					IdentityNotMappedException(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::SystemException(nativeTypeInfo)
					, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
					, mscorlib::System::Runtime::InteropServices::_Exception(NULL)
					{
					};
				
					IdentityNotMappedException(MonoObject *nativeObject)
					: mscorlib::System::SystemException(nativeObject)
					, mscorlib::System::Runtime::Serialization::ISerializable(nativeObject)
					, mscorlib::System::Runtime::InteropServices::_Exception(nativeObject)
					{
					};
				
					~IdentityNotMappedException()
					{
					};
				

					IdentityNotMappedException & operator=(IdentityNotMappedException &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual void  GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo serializationInfo, mscorlib::System::Runtime::Serialization::StreamingContext streamingContext) override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_UnmappedIdentities)) mscorlib::System::Security::Principal::IdentityReferenceCollection  UnmappedIdentities;
					__declspec(property(get=get_InnerException)) mscorlib::System::Exception  InnerException;
					__declspec(property(get=get_HelpLink, put=set_HelpLink)) mscorlib::System::String  HelpLink;
					__declspec(property(get=get_HResult, put=set_HResult)) mscorlib::System::Int32  HResult;
					__declspec(property(get=get_Message)) mscorlib::System::String  Message;
					__declspec(property(get=get_Source, put=set_Source)) mscorlib::System::String  Source;
					__declspec(property(get=get_StackTrace)) mscorlib::System::String  StackTrace;
					__declspec(property(get=get_TargetSite)) mscorlib::System::Reflection::MethodBase  TargetSite;
					__declspec(property(get=get_Data)) mscorlib::System::Collections::IDictionary  Data;

					//Get Set Properties Methods
					//	Get:UnmappedIdentities
					mscorlib::System::Security::Principal::IdentityReferenceCollection  get_UnmappedIdentities();

					//	Get:InnerException
					mscorlib::System::Exception  get_InnerException();

					//	Get/Set:HelpLink
					mscorlib::System::String  get_HelpLink();
					void set_HelpLink(mscorlib::System::String  value);

					//	Get/Set:HResult
					mscorlib::System::Int32  get_HResult();
					void set_HResult(mscorlib::System::Int32  value);

					//	Get:Message
					mscorlib::System::String  get_Message();

					//	Get/Set:Source
					mscorlib::System::String  get_Source();
					void set_Source(mscorlib::System::String  value);

					//	Get:StackTrace
					mscorlib::System::String  get_StackTrace();

					//	Get:TargetSite
					mscorlib::System::Reflection::MethodBase  get_TargetSite();

					//	Get:Data
					mscorlib::System::Collections::IDictionary  get_Data();

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
