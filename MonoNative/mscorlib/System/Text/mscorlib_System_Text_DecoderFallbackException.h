#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_TEXT_DECODERFALLBACKEXCEPTION_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_TEXT_DECODERFALLBACKEXCEPTION_H

#include <mscorlib/System/mscorlib_System_ArgumentException.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Exception.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__Exception.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ISerializable.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IDictionary.h>
#include <mscorlib/System/mscorlib_System_Object.h>

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
		namespace Text
		{

			class DecoderFallbackException
				: public mscorlib::System::ArgumentException
				, public virtual mscorlib::System::Runtime::InteropServices::_Exception
				, public virtual mscorlib::System::Runtime::Serialization::ISerializable
			{
			public:
				DecoderFallbackException()
				: mscorlib::System::ArgumentException(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Text.DecoderFallbackException"))
				, mscorlib::System::Runtime::InteropServices::_Exception(NULL)
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				{
					__native_object__ = Global::New("mscorlib", "System.Text", "DecoderFallbackException");
				};
			
				DecoderFallbackException(mscorlib::System::String message)
				: mscorlib::System::ArgumentException(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Text.DecoderFallbackException"))
				, mscorlib::System::Runtime::InteropServices::_Exception(NULL)
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = (MonoObject*)message;
					__native_object__ = Global::New("mscorlib", "System.Text", "DecoderFallbackException", 1, __parameter_types__, __parameters__);
				};
			
				DecoderFallbackException(mscorlib::System::String message, mscorlib::System::Exception innerException)
				: mscorlib::System::ArgumentException(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Text.DecoderFallbackException"))
				, mscorlib::System::Runtime::InteropServices::_Exception(NULL)
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Exception");
					__parameters__[0] = (MonoObject*)message;
					__parameters__[1] = (MonoObject*)innerException;
					__native_object__ = Global::New("mscorlib", "System.Text", "DecoderFallbackException", 2, __parameter_types__, __parameters__);
				};
			
				DecoderFallbackException(mscorlib::System::String message, std::vector<mscorlib::System::Byte*> bytesUnknown, mscorlib::System::Int32 index)
				: mscorlib::System::ArgumentException(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Text.DecoderFallbackException"))
				, mscorlib::System::Runtime::InteropServices::_Exception(NULL)
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
					__parameter_types__[2] = Global::GetType("mscorlib", "System", "Int32");
					__parameters__[0] = (MonoObject*)message;
					__parameters__[1] = Global::FromArray<mscorlib::System::Byte*>(bytesUnknown, "mscorlib", "System", "Byte");
					__parameters__[2] = &index;
					__native_object__ = Global::New("mscorlib", "System.Text", "DecoderFallbackException", 3, __parameter_types__, __parameters__);
				};
			
				DecoderFallbackException(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::ArgumentException(nativeTypeInfo)
				, mscorlib::System::Runtime::InteropServices::_Exception(NULL)
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				{
				};
			
				DecoderFallbackException(MonoObject *nativeObject)
				: mscorlib::System::ArgumentException(nativeObject)
				, mscorlib::System::Runtime::InteropServices::_Exception(nativeObject)
				, mscorlib::System::Runtime::Serialization::ISerializable(nativeObject)
				{
				};
			
				~DecoderFallbackException()
				{
				};
			

				DecoderFallbackException & operator=(DecoderFallbackException &value) { __native_object__ = value.GetNativeObject(); return value; };
				bool operator==(DecoderFallbackException &value) { return mscorlib::System::Object::Equals(value); };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_BytesUnknown)) std::vector<mscorlib::System::Byte*>  BytesUnknown;
				__declspec(property(get=get_Index)) mscorlib::System::Int32  Index;
				__declspec(property(get=get_ParamName)) mscorlib::System::String  ParamName;
				__declspec(property(get=get_Message)) mscorlib::System::String  Message;
				__declspec(property(get=get_InnerException)) mscorlib::System::Exception  InnerException;
				__declspec(property(get=get_HelpLink, put=set_HelpLink)) mscorlib::System::String  HelpLink;
				__declspec(property(get=get_HResult, put=set_HResult)) mscorlib::System::Int32  HResult;
				__declspec(property(get=get_Source, put=set_Source)) mscorlib::System::String  Source;
				__declspec(property(get=get_StackTrace)) mscorlib::System::String  StackTrace;
				__declspec(property(get=get_TargetSite)) mscorlib::System::Reflection::MethodBase  TargetSite;
				__declspec(property(get=get_Data)) mscorlib::System::Collections::IDictionary  Data;

				//Get Set Properties Methods
				//	Get:BytesUnknown
				std::vector<mscorlib::System::Byte*>  get_BytesUnknown() const;

				//	Get:Index
				mscorlib::System::Int32  get_Index() const;

				//	Get:ParamName
				mscorlib::System::String  get_ParamName() const;

				//	Get:Message
				mscorlib::System::String  get_Message() const;

				//	Get:InnerException
				mscorlib::System::Exception  get_InnerException() const;

				//	Get/Set:HelpLink
				mscorlib::System::String  get_HelpLink() const;
				void set_HelpLink(mscorlib::System::String  value);

				//	Get/Set:HResult
				mscorlib::System::Int32  get_HResult() const;
				void set_HResult(mscorlib::System::Int32  value);

				//	Get/Set:Source
				mscorlib::System::String  get_Source() const;
				void set_Source(mscorlib::System::String  value);

				//	Get:StackTrace
				mscorlib::System::String  get_StackTrace() const;

				//	Get:TargetSite
				mscorlib::System::Reflection::MethodBase  get_TargetSite() const;

				//	Get:Data
				mscorlib::System::Collections::IDictionary  get_Data() const;

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
