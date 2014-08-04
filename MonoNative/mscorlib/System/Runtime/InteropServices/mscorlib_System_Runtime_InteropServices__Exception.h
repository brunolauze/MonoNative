#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES__EXCEPTION_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES__EXCEPTION_H

#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class String;
		class Exception;
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
		namespace Runtime
		{
			namespace InteropServices
			{

				class _Exception
				{
				public:
					_Exception(MonoObject *nativeObject)
					{
						__mscorlib_System_Runtime_InteropServices__Exception = nativeObject;
					};
				
					~_Exception()
					{
					};
				

					_Exception & operator=(_Exception &value) { __mscorlib_System_Runtime_InteropServices__Exception = value.__mscorlib_System_Runtime_InteropServices__Exception; return value; };
					operator MonoObject*() { return __mscorlib_System_Runtime_InteropServices__Exception; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_InteropServices__Exception = value; return value; };


					virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object obj);
					virtual mscorlib::System::Exception  GetBaseException();
					virtual mscorlib::System::Int32  GetHashCode();
					virtual void  GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context);
					virtual mscorlib::System::Type  GetType();
					virtual mscorlib::System::String  ToString();


					//Public Properties
					__declspec(property(get=get_HelpLink, put=set_HelpLink)) mscorlib::System::String  HelpLink;
					__declspec(property(get=get_InnerException)) mscorlib::System::Exception  InnerException;
					__declspec(property(get=get_Message)) mscorlib::System::String  Message;
					__declspec(property(get=get_Source, put=set_Source)) mscorlib::System::String  Source;
					__declspec(property(get=get_StackTrace)) mscorlib::System::String  StackTrace;
					__declspec(property(get=get_TargetSite)) mscorlib::System::Reflection::MethodBase  TargetSite;

					//Get Set Properties Methods
					//	Get/Set:HelpLink
					mscorlib::System::String  get_HelpLink();
					void set_HelpLink(mscorlib::System::String  value);

					//	Get:InnerException
					mscorlib::System::Exception  get_InnerException();

					//	Get:Message
					mscorlib::System::String  get_Message();

					//	Get/Set:Source
					mscorlib::System::String  get_Source();
					void set_Source(mscorlib::System::String  value);

					//	Get:StackTrace
					mscorlib::System::String  get_StackTrace();

					//	Get:TargetSite
					mscorlib::System::Reflection::MethodBase  get_TargetSite();

				
				protected:
					MonoObject *__mscorlib_System_Runtime_InteropServices__Exception;
				
				private:
				
				};

			}
		}
	}
}
#endif
