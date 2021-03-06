#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEWRAPPEDEXCEPTION_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEWRAPPEDEXCEPTION_H

#include <mscorlib/System/mscorlib_System_Exception.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__Exception.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ISerializable.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IDictionary.h>

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

		class String;
		class Type;
		

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
		namespace Runtime
		{
			namespace CompilerServices
			{

				class RuntimeWrappedException
					: public mscorlib::System::Exception
					, public virtual mscorlib::System::Runtime::InteropServices::_Exception
					, public virtual mscorlib::System::Runtime::Serialization::ISerializable
				{
				public:
					RuntimeWrappedException(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Exception(nativeTypeInfo)
					, mscorlib::System::Runtime::InteropServices::_Exception(NULL)
					, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
					{
					};
				
					RuntimeWrappedException(MonoObject *nativeObject)
					: mscorlib::System::Exception(nativeObject)
					, mscorlib::System::Runtime::InteropServices::_Exception(nativeObject)
					, mscorlib::System::Runtime::Serialization::ISerializable(nativeObject)
					{
					};
				
					~RuntimeWrappedException()
					{
					};
				

					RuntimeWrappedException & operator=(RuntimeWrappedException &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(RuntimeWrappedException &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual void  GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context) override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_WrappedException)) mscorlib::System::Object  WrappedException;
					__declspec(property(get=get_InnerException)) mscorlib::System::Exception  InnerException;
					__declspec(property(get=get_HelpLink, put=set_HelpLink)) mscorlib::System::String  HelpLink;
					__declspec(property(get=get_HResult, put=set_HResult)) mscorlib::System::Int32  HResult;
					__declspec(property(get=get_Message)) mscorlib::System::String  Message;
					__declspec(property(get=get_Source, put=set_Source)) mscorlib::System::String  Source;
					__declspec(property(get=get_StackTrace)) mscorlib::System::String  StackTrace;
					__declspec(property(get=get_TargetSite)) mscorlib::System::Reflection::MethodBase  TargetSite;
					__declspec(property(get=get_Data)) mscorlib::System::Collections::IDictionary  Data;

					//Get Set Properties Methods
					//	Get:WrappedException
					mscorlib::System::Object  get_WrappedException() const;

					//	Get:InnerException
					mscorlib::System::Exception  get_InnerException() const;

					//	Get/Set:HelpLink
					mscorlib::System::String  get_HelpLink() const;
					void set_HelpLink(mscorlib::System::String  value);

					//	Get/Set:HResult
					mscorlib::System::Int32  get_HResult() const;
					void set_HResult(mscorlib::System::Int32  value);

					//	Get:Message
					mscorlib::System::String  get_Message() const;

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
}
#endif
