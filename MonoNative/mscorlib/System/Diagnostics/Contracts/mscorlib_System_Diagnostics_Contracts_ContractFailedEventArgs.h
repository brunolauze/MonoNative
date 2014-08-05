#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_CONTRACTS_CONTRACTFAILEDEVENTARGS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_CONTRACTS_CONTRACTFAILEDEVENTARGS_H

#include <mscorlib/System/mscorlib_System_EventArgs.h>
#include <mscorlib/System/Diagnostics/Contracts/mscorlib_System_Diagnostics_Contracts_ContractFailureKind.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Exception.h>
#include <mscorlib/System/mscorlib_System_Object.h>

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
		namespace Diagnostics
		{
			namespace Contracts
			{

				class ContractFailedEventArgs
					: public mscorlib::System::EventArgs
				{
				public:
					ContractFailedEventArgs(mscorlib::System::Diagnostics::Contracts::ContractFailureKind::__ENUM__ failureKind, mscorlib::System::String message, mscorlib::System::String condition, mscorlib::System::Exception originalException)
					: mscorlib::System::EventArgs(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Diagnostics.Contracts.ContractFailedEventArgs"))
					{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Diagnostics.Contracts", "ContractFailureKind");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[2] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[3] = Global::GetType("mscorlib", "System", "Exception");
						int __param_failureKind__ = failureKind;
						__parameters__[0] = &__param_failureKind__;
						__parameters__[1] = (MonoObject*)message;
						__parameters__[2] = (MonoObject*)condition;
						__parameters__[3] = (MonoObject*)originalException;
						__native_object__ = Global::New("mscorlib", "System.Diagnostics.Contracts", "ContractFailedEventArgs", 4, __parameter_types__, __parameters__);
					};
				
					ContractFailedEventArgs(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::EventArgs(nativeTypeInfo)
					{
					};
				
					ContractFailedEventArgs(MonoObject *nativeObject)
					: mscorlib::System::EventArgs(nativeObject)
					{
					};
				
					~ContractFailedEventArgs()
					{
					};
				

					ContractFailedEventArgs & operator=(ContractFailedEventArgs &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					void  SetHandled();
					void  SetUnwind();
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Condition, put=set_Condition)) mscorlib::System::String  Condition;
					__declspec(property(get=get_FailureKind, put=set_FailureKind)) mscorlib::System::Diagnostics::Contracts::ContractFailureKind::__ENUM__  FailureKind;
					__declspec(property(get=get_Handled, put=set_Handled)) mscorlib::System::Boolean  Handled;
					__declspec(property(get=get_Unwind, put=set_Unwind)) mscorlib::System::Boolean  Unwind;
					__declspec(property(get=get_Message, put=set_Message)) mscorlib::System::String  Message;
					__declspec(property(get=get_OriginalException, put=set_OriginalException)) mscorlib::System::Exception  OriginalException;

					//Get Set Properties Methods
					//	Get/Set:Condition
					mscorlib::System::String  get_Condition() const;
					void set_Condition(mscorlib::System::String  value);

					//	Get/Set:FailureKind
					mscorlib::System::Diagnostics::Contracts::ContractFailureKind::__ENUM__  get_FailureKind() const;
					void set_FailureKind(mscorlib::System::Diagnostics::Contracts::ContractFailureKind::__ENUM__  value);

					//	Get/Set:Handled
					mscorlib::System::Boolean  get_Handled() const;
					void set_Handled(mscorlib::System::Boolean  value);

					//	Get/Set:Unwind
					mscorlib::System::Boolean  get_Unwind() const;
					void set_Unwind(mscorlib::System::Boolean  value);

					//	Get/Set:Message
					mscorlib::System::String  get_Message() const;
					void set_Message(mscorlib::System::String  value);

					//	Get/Set:OriginalException
					mscorlib::System::Exception  get_OriginalException() const;
					void set_OriginalException(mscorlib::System::Exception  value);

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
