#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_IO_ENDOFSTREAMEXCEPTION_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_IO_ENDOFSTREAMEXCEPTION_H

#include <mscorlib/System/IO/mscorlib_System_IO_IOException.h>
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

		class Type;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace IO
		{

			class EndOfStreamException
				: public mscorlib::System::IO::IOException
				, public virtual mscorlib::System::Runtime::Serialization::ISerializable
				, public virtual mscorlib::System::Runtime::InteropServices::_Exception
			{
			public:
				EndOfStreamException()
				: mscorlib::System::IO::IOException(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.EndOfStreamException"))
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				, mscorlib::System::Runtime::InteropServices::_Exception(NULL)
				{
					__native_object__ = Global::New("mscorlib", "System.IO", "EndOfStreamException");
				};
			
				EndOfStreamException(mscorlib::System::String message)
				: mscorlib::System::IO::IOException(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.EndOfStreamException"))
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				, mscorlib::System::Runtime::InteropServices::_Exception(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = (MonoObject*)message;
					__native_object__ = Global::New("mscorlib", "System.IO", "EndOfStreamException", 1, __parameter_types__, __parameters__);
				};
			
				EndOfStreamException(mscorlib::System::String message, mscorlib::System::Exception innerException)
				: mscorlib::System::IO::IOException(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.EndOfStreamException"))
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				, mscorlib::System::Runtime::InteropServices::_Exception(NULL)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Exception");
					__parameters__[0] = (MonoObject*)message;
					__parameters__[1] = (MonoObject*)innerException;
					__native_object__ = Global::New("mscorlib", "System.IO", "EndOfStreamException", 2, __parameter_types__, __parameters__);
				};
			
				EndOfStreamException(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::IO::IOException(nativeTypeInfo)
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				, mscorlib::System::Runtime::InteropServices::_Exception(NULL)
				{
				};
			
				EndOfStreamException(MonoObject *nativeObject)
				: mscorlib::System::IO::IOException(nativeObject)
				, mscorlib::System::Runtime::Serialization::ISerializable(nativeObject)
				, mscorlib::System::Runtime::InteropServices::_Exception(nativeObject)
				{
				};
			
				~EndOfStreamException()
				{
				};
			

				EndOfStreamException & operator=(EndOfStreamException &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_InnerException)) mscorlib::System::Exception  InnerException;
				__declspec(property(get=get_HelpLink, put=set_HelpLink)) mscorlib::System::String  HelpLink;
				__declspec(property(get=get_HResult, put=set_HResult)) mscorlib::System::Int32  HResult;
				__declspec(property(get=get_Message)) mscorlib::System::String  Message;
				__declspec(property(get=get_Source, put=set_Source)) mscorlib::System::String  Source;
				__declspec(property(get=get_StackTrace)) mscorlib::System::String  StackTrace;
				__declspec(property(get=get_TargetSite)) mscorlib::System::Reflection::MethodBase  TargetSite;
				__declspec(property(get=get_Data)) mscorlib::System::Collections::IDictionary  Data;

				//Get Set Properties Methods
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
#endif
