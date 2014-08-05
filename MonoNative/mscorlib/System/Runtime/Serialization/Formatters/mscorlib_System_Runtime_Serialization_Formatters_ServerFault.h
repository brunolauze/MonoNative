#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_SERVERFAULT_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_SERVERFAULT_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_String.h>

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
		namespace Runtime
		{
			namespace Serialization
			{
				namespace Formatters
				{

					class ServerFault
						: public mscorlib::System::Object
					{
					public:
						ServerFault(mscorlib::System::String exceptionType, mscorlib::System::String message, mscorlib::System::String stackTrace)
						: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Serialization.Formatters.ServerFault"))
						{
							MonoType *__parameter_types__[3];
							void *__parameters__[3];
							__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
							__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
							__parameter_types__[2] = Global::GetType("mscorlib", "System", "String");
							__parameters__[0] = (MonoObject*)exceptionType;
							__parameters__[1] = (MonoObject*)message;
							__parameters__[2] = (MonoObject*)stackTrace;
							__native_object__ = Global::New("mscorlib", "System.Runtime.Serialization.Formatters", "ServerFault", 3, __parameter_types__, __parameters__);
						};
					
						ServerFault(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::Object(nativeTypeInfo)
						{
						};
					
						ServerFault(MonoObject *nativeObject)
						: mscorlib::System::Object(nativeObject)
						{
						};
					
						~ServerFault()
						{
						};
					

						ServerFault & operator=(ServerFault &value) { __native_object__ = value.GetNativeObject(); return value; };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


						//Public Properties
						__declspec(property(get=get_ExceptionType, put=set_ExceptionType)) mscorlib::System::String  ExceptionType;
						__declspec(property(get=get_ExceptionMessage, put=set_ExceptionMessage)) mscorlib::System::String  ExceptionMessage;
						__declspec(property(get=get_StackTrace, put=set_StackTrace)) mscorlib::System::String  StackTrace;

						//Get Set Properties Methods
						//	Get/Set:ExceptionType
						mscorlib::System::String  get_ExceptionType() const;
						void set_ExceptionType(mscorlib::System::String  value);

						//	Get/Set:ExceptionMessage
						mscorlib::System::String  get_ExceptionMessage() const;
						void set_ExceptionMessage(mscorlib::System::String  value);

						//	Get/Set:StackTrace
						mscorlib::System::String  get_StackTrace() const;
						void set_StackTrace(mscorlib::System::String  value);

					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
