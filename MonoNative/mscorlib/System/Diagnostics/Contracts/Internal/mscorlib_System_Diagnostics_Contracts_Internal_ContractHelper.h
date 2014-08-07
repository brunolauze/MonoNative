#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_CONTRACTS_INTERNAL_CONTRACTHELPER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_CONTRACTS_INTERNAL_CONTRACTHELPER_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Diagnostics/Contracts/mscorlib_System_Diagnostics_Contracts_ContractFailureKind.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		class String;
		class Exception;
		

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
				namespace Internal
				{

					class ContractHelper
						: public mscorlib::System::Object
					{
					public:
						ContractHelper(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::Object(nativeTypeInfo)
						{
						};
					
						ContractHelper(MonoObject *nativeObject)
						: mscorlib::System::Object(nativeObject)
						{
						};
					
						~ContractHelper()
						{
						};
					

						ContractHelper & operator=(ContractHelper &value) { __native_object__ = value.GetNativeObject(); return value; };
						bool operator==(ContractHelper &value) { return mscorlib::System::Object::Equals(value); };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						static mscorlib::System::String  RaiseContractFailedEvent(mscorlib::System::Diagnostics::Contracts::ContractFailureKind::__ENUM__ failureKind, mscorlib::System::String userMessage, mscorlib::System::String conditionText, mscorlib::System::Exception innerException);
						static mscorlib::System::String  RaiseContractFailedEvent(mscorlib::System::Diagnostics::Contracts::ContractFailureKind::__ENUM__ failureKind, const char *userMessage, const char *conditionText, mscorlib::System::Exception innerException);
						static void  TriggerFailure(mscorlib::System::Diagnostics::Contracts::ContractFailureKind::__ENUM__ kind, mscorlib::System::String displayMessage, mscorlib::System::String userMessage, mscorlib::System::String conditionText, mscorlib::System::Exception innerException);
						static void  TriggerFailure(mscorlib::System::Diagnostics::Contracts::ContractFailureKind::__ENUM__ kind, const char *displayMessage, const char *userMessage, const char *conditionText, mscorlib::System::Exception innerException);
						virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
