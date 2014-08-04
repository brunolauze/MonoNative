#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_SERIALIZATION_STREAMINGCONTEXT_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_SERIALIZATION_STREAMINGCONTEXT_H

#include <mscorlib/System/mscorlib_System_ValueType.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_StreamingContextStates.h>
#include <mscorlib/System/mscorlib_System_Object.h>

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
		namespace Runtime
		{
			namespace Serialization
			{

				class StreamingContext
					: public mscorlib::System::ValueType
				{
				public:
					StreamingContext(mscorlib::System::Runtime::Serialization::StreamingContextStates::__ENUM__ state)
					: mscorlib::System::ValueType(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Serialization.StreamingContext"))
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Runtime.Serialization", "StreamingContextStates");
						__parameters__[0] = reinterpret_cast<void*>(state);
						__native_object__ = Global::New("mscorlib", "System.Runtime.Serialization", "StreamingContext", 1, __parameter_types__, __parameters__);
					};
				
					StreamingContext(mscorlib::System::Runtime::Serialization::StreamingContextStates::__ENUM__ state, mscorlib::System::Object additional)
					: mscorlib::System::ValueType(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Serialization.StreamingContext"))
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Runtime.Serialization", "StreamingContextStates");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "Object");
						__parameters__[0] = reinterpret_cast<void*>(state);
						__parameters__[1] = (MonoObject*)additional;
						__native_object__ = Global::New("mscorlib", "System.Runtime.Serialization", "StreamingContext", 2, __parameter_types__, __parameters__);
					};
				
					StreamingContext(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::ValueType(nativeTypeInfo)
					{
					};
				
					StreamingContext(MonoObject *nativeObject)
					: mscorlib::System::ValueType(nativeObject)
					{
					};
				
					~StreamingContext()
					{
					};
				

					StreamingContext & operator=(StreamingContext &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object obj) override;
					virtual mscorlib::System::Int32  GetHashCode() override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Context)) mscorlib::System::Object  Context;
					__declspec(property(get=get_State)) mscorlib::System::Runtime::Serialization::StreamingContextStates::__ENUM__  State;

					//Get Set Properties Methods
					//	Get:Context
					mscorlib::System::Object  get_Context();

					//	Get:State
					mscorlib::System::Runtime::Serialization::StreamingContextStates::__ENUM__  get_State();

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
