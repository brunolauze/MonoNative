#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_IO_FILENOTFOUNDEXCEPTION_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_IO_FILENOTFOUNDEXCEPTION_H

#include <mscorlib/System/IO/mscorlib_System_IO_IOException.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Exception.h>
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
		namespace IO
		{

			class FileNotFoundException
				: public mscorlib::System::IO::IOException
				, public virtual mscorlib::System::Runtime::InteropServices::_Exception
				, public virtual mscorlib::System::Runtime::Serialization::ISerializable
			{
			public:
				FileNotFoundException()
				: mscorlib::System::IO::IOException(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.FileNotFoundException"))
				, mscorlib::System::Runtime::InteropServices::_Exception(NULL)
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				{
					__native_object__ = Global::New("mscorlib", "System.IO", "FileNotFoundException");
				};
			
				FileNotFoundException(mscorlib::System::String message)
				: mscorlib::System::IO::IOException(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.FileNotFoundException"))
				, mscorlib::System::Runtime::InteropServices::_Exception(NULL)
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = (MonoObject*)message;
					__native_object__ = Global::New("mscorlib", "System.IO", "FileNotFoundException", 1, __parameter_types__, __parameters__);
				};
			
				FileNotFoundException(mscorlib::System::String message, mscorlib::System::Exception innerException)
				: mscorlib::System::IO::IOException(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.FileNotFoundException"))
				, mscorlib::System::Runtime::InteropServices::_Exception(NULL)
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Exception");
					__parameters__[0] = (MonoObject*)message;
					__parameters__[1] = (MonoObject*)innerException;
					__native_object__ = Global::New("mscorlib", "System.IO", "FileNotFoundException", 2, __parameter_types__, __parameters__);
				};
			
				FileNotFoundException(mscorlib::System::String message, mscorlib::System::String fileName)
				: mscorlib::System::IO::IOException(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.FileNotFoundException"))
				, mscorlib::System::Runtime::InteropServices::_Exception(NULL)
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = (MonoObject*)message;
					__parameters__[1] = (MonoObject*)fileName;
					__native_object__ = Global::New("mscorlib", "System.IO", "FileNotFoundException", 2, __parameter_types__, __parameters__);
				};
			
				FileNotFoundException(mscorlib::System::String message, mscorlib::System::String fileName, mscorlib::System::Exception innerException)
				: mscorlib::System::IO::IOException(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.FileNotFoundException"))
				, mscorlib::System::Runtime::InteropServices::_Exception(NULL)
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[2] = Global::GetType("mscorlib", "System", "Exception");
					__parameters__[0] = (MonoObject*)message;
					__parameters__[1] = (MonoObject*)fileName;
					__parameters__[2] = (MonoObject*)innerException;
					__native_object__ = Global::New("mscorlib", "System.IO", "FileNotFoundException", 3, __parameter_types__, __parameters__);
				};
			
				FileNotFoundException(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::IO::IOException(nativeTypeInfo)
				, mscorlib::System::Runtime::InteropServices::_Exception(NULL)
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				{
				};
			
				FileNotFoundException(MonoObject *nativeObject)
				: mscorlib::System::IO::IOException(nativeObject)
				, mscorlib::System::Runtime::InteropServices::_Exception(nativeObject)
				, mscorlib::System::Runtime::Serialization::ISerializable(nativeObject)
				{
				};
			
				~FileNotFoundException()
				{
				};
			

				FileNotFoundException & operator=(FileNotFoundException &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual void  GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context) override;
				virtual mscorlib::System::String  ToString() override;
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_FileName)) mscorlib::System::String  FileName;
				__declspec(property(get=get_FusionLog)) mscorlib::System::String  FusionLog;
				__declspec(property(get=get_Message)) mscorlib::System::String  Message;
				__declspec(property(get=get_InnerException)) mscorlib::System::Exception  InnerException;
				__declspec(property(get=get_HelpLink, put=set_HelpLink)) mscorlib::System::String  HelpLink;
				__declspec(property(get=get_HResult, put=set_HResult)) mscorlib::System::Int32  HResult;
				__declspec(property(get=get_Source, put=set_Source)) mscorlib::System::String  Source;
				__declspec(property(get=get_StackTrace)) mscorlib::System::String  StackTrace;
				__declspec(property(get=get_TargetSite)) mscorlib::System::Reflection::MethodBase  TargetSite;
				__declspec(property(get=get_Data)) mscorlib::System::Collections::IDictionary  Data;

				//Get Set Properties Methods
				//	Get:FileName
				mscorlib::System::String  get_FileName() const;

				//	Get:FusionLog
				mscorlib::System::String  get_FusionLog() const;

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
