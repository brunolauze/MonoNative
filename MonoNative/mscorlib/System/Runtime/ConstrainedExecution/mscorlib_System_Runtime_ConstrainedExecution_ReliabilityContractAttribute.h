#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_CONSTRAINEDEXECUTION_RELIABILITYCONTRACTATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_CONSTRAINEDEXECUTION_RELIABILITYCONTRACTATTRIBUTE_H

#include <mscorlib/System/mscorlib_System_Attribute.h>
#include <mscorlib/System/Runtime/ConstrainedExecution/mscorlib_System_Runtime_ConstrainedExecution_Consistency.h>
#include <mscorlib/System/Runtime/ConstrainedExecution/mscorlib_System_Runtime_ConstrainedExecution_Cer.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__Attribute.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		class String;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace ConstrainedExecution
			{

				class ReliabilityContractAttribute
					: public mscorlib::System::Attribute
					, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
				{
				public:
					ReliabilityContractAttribute(mscorlib::System::Runtime::ConstrainedExecution::Consistency::__ENUM__ consistencyGuarantee, mscorlib::System::Runtime::ConstrainedExecution::Cer::__ENUM__ cer)
					: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.ConstrainedExecution.ReliabilityContractAttribute"))
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Runtime.ConstrainedExecution", "Consistency");
						__parameter_types__[1] = Global::GetType("mscorlib", "System.Runtime.ConstrainedExecution", "Cer");
						mscorlib::System::Int32 __param_consistencyGuarantee__ = consistencyGuarantee;
						__parameters__[0] = &__param_consistencyGuarantee__;
						mscorlib::System::Int32 __param_cer__ = cer;
						__parameters__[1] = &__param_cer__;
						__native_object__ = Global::New("mscorlib", "System.Runtime.ConstrainedExecution", "ReliabilityContractAttribute", 2, __parameter_types__, __parameters__);
					};
				
					ReliabilityContractAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Attribute(nativeTypeInfo)
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
					};
				
					ReliabilityContractAttribute(MonoObject *nativeObject)
					: mscorlib::System::Attribute(nativeObject)
					, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
					{
					};
				
					~ReliabilityContractAttribute()
					{
					};
				

					ReliabilityContractAttribute & operator=(ReliabilityContractAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Cer)) mscorlib::System::Runtime::ConstrainedExecution::Cer::__ENUM__  Cer;
					__declspec(property(get=get_ConsistencyGuarantee)) mscorlib::System::Runtime::ConstrainedExecution::Consistency::__ENUM__  ConsistencyGuarantee;
					__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

					//Get Set Properties Methods
					//	Get:Cer
					mscorlib::System::Runtime::ConstrainedExecution::Cer::__ENUM__  get_Cer() const;

					//	Get:ConsistencyGuarantee
					mscorlib::System::Runtime::ConstrainedExecution::Consistency::__ENUM__  get_ConsistencyGuarantee() const;

					//	Get:TypeId
					mscorlib::System::Object  get_TypeId() const;

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
