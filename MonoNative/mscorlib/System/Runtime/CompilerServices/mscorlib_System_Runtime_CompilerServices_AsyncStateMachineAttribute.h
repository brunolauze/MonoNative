#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCSTATEMACHINEATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCSTATEMACHINEATTRIBUTE_H

#include <mscorlib/System/Runtime/CompilerServices/mscorlib_System_Runtime_CompilerServices_StateMachineAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__Attribute.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class String;
		

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

				class AsyncStateMachineAttribute
					: public mscorlib::System::Runtime::CompilerServices::StateMachineAttribute
					, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
				{
				public:
					AsyncStateMachineAttribute(mscorlib::System::Type stateMachineType)
					: mscorlib::System::Runtime::CompilerServices::StateMachineAttribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.CompilerServices.AsyncStateMachineAttribute"))
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Type");
						__parameters__[0] = (MonoObject*)stateMachineType;
						__native_object__ = Global::New("mscorlib", "System.Runtime.CompilerServices", "AsyncStateMachineAttribute", 1, __parameter_types__, __parameters__);
					};
				
					AsyncStateMachineAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Runtime::CompilerServices::StateMachineAttribute(nativeTypeInfo)
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
					};
				
					AsyncStateMachineAttribute(MonoObject *nativeObject)
					: mscorlib::System::Runtime::CompilerServices::StateMachineAttribute(nativeObject)
					, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
					{
					};
				
					~AsyncStateMachineAttribute()
					{
					};
				

					AsyncStateMachineAttribute & operator=(AsyncStateMachineAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_StateMachineType, put=set_StateMachineType)) mscorlib::System::Type  StateMachineType;
					__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

					//Get Set Properties Methods
					//	Get/Set:StateMachineType
					mscorlib::System::Type  get_StateMachineType();
					void set_StateMachineType(mscorlib::System::Type  value);

					//	Get:TypeId
					mscorlib::System::Object  get_TypeId();

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
