#include <mscorlib/System/Runtime/CompilerServices/mscorlib_System_Runtime_CompilerServices_RuntimeHelpers.h>
#include <mscorlib/System/mscorlib_System_MulticastDelegate.h>
#include <mscorlib/System/mscorlib_System_IntPtr.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_SerializationInfo.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_StreamingContext.h>
#include <mscorlib/System/mscorlib_System_Delegate.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MethodInfo.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Array.h>
#include <mscorlib/System/mscorlib_System_RuntimeFieldHandle.h>
#include <mscorlib/System/mscorlib_System_RuntimeTypeHandle.h>
#include <mscorlib/System/mscorlib_System_RuntimeMethodHandle.h>
#include <mscorlib/System/mscorlib_System_ModuleHandle.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace CompilerServices
			{

				Property<mscorlib::System::Int32 , mscorlib::System::Runtime::CompilerServices::RuntimeHelpers> mscorlib::System::Runtime::CompilerServices::RuntimeHelpers::OffsetToStringData(&mscorlib::System::Runtime::CompilerServices::RuntimeHelpers::get_OffsetToStringData, &mscorlib::System::Runtime::CompilerServices::RuntimeHelpers::set_OffsetToStringData);
				//Public Methods
				void RuntimeHelpers::InitializeArray(mscorlib::System::Array array, mscorlib::System::RuntimeFieldHandle fldHandle)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(array).name());
						__parameter_types__[1] = Global::GetType(typeid(fldHandle).name());
						__parameters__[0] = (MonoObject*)array;
						__parameters__[1] = (MonoObject*)fldHandle;
						Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "RuntimeHelpers", 0, NULL, "InitializeArray", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Int32 RuntimeHelpers::GetHashCode(mscorlib::System::Object o)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(o).name());
						__parameters__[0] = (MonoObject*)o;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "RuntimeHelpers", 0, NULL, "GetHashCode", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				mscorlib::System::Boolean RuntimeHelpers::Equals(mscorlib::System::Object o1, mscorlib::System::Object o2)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(o1).name());
						__parameter_types__[1] = Global::GetType(typeid(o2).name());
						__parameters__[0] = (MonoObject*)o1;
						__parameters__[1] = (MonoObject*)o2;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "RuntimeHelpers", 0, NULL, "Equals", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Object RuntimeHelpers::GetObjectValue(mscorlib::System::Object obj)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(obj).name());
						__parameters__[0] = (MonoObject*)obj;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "RuntimeHelpers", 0, NULL, "GetObjectValue", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Object(__result__);
				}

				void RuntimeHelpers::RunClassConstructor(mscorlib::System::RuntimeTypeHandle type)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(type).name());
						__parameters__[0] = (MonoObject*)type;
						Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "RuntimeHelpers", 0, NULL, "RunClassConstructor", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				}

				void RuntimeHelpers::EnsureSufficientExecutionStack()
				{
						Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "RuntimeHelpers", 0, NULL, "EnsureSufficientExecutionStack", NullMonoObject, 0, NULL, NULL, NULL);
				}

				void RuntimeHelpers::ExecuteCodeWithGuaranteedCleanup(mscorlib::Callback<void  (mscorlib::System::Object )> code, mscorlib::Callback<void  (mscorlib::System::Object , mscorlib::System::Boolean )> backoutCode, mscorlib::System::Object userData)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(code).name());
						__parameter_types__[1] = Global::GetType(typeid(backoutCode).name());
						__parameter_types__[2] = Global::GetType(typeid(userData).name());
						__parameters__[0] = &code;
						__parameters__[1] = &backoutCode;
						__parameters__[2] = (MonoObject*)userData;
						Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "RuntimeHelpers", 0, NULL, "ExecuteCodeWithGuaranteedCleanup", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				}

				void RuntimeHelpers::PrepareConstrainedRegions()
				{
						Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "RuntimeHelpers", 0, NULL, "PrepareConstrainedRegions", NullMonoObject, 0, NULL, NULL, NULL);
				}

				void RuntimeHelpers::PrepareConstrainedRegionsNoOP()
				{
						Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "RuntimeHelpers", 0, NULL, "PrepareConstrainedRegionsNoOP", NullMonoObject, 0, NULL, NULL, NULL);
				}

				void RuntimeHelpers::ProbeForSufficientStack()
				{
						Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "RuntimeHelpers", 0, NULL, "ProbeForSufficientStack", NullMonoObject, 0, NULL, NULL, NULL);
				}

				void RuntimeHelpers::PrepareDelegate(mscorlib::System::Delegate d)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(d).name());
						__parameters__[0] = (MonoObject*)d;
						Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "RuntimeHelpers", 0, NULL, "PrepareDelegate", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				}

				void RuntimeHelpers::PrepareMethod(mscorlib::System::RuntimeMethodHandle method)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(method).name());
						__parameters__[0] = (MonoObject*)method;
						Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "RuntimeHelpers", 0, NULL, "PrepareMethod", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				}

				void RuntimeHelpers::PrepareMethod(mscorlib::System::RuntimeMethodHandle method, std::vector<mscorlib::System::RuntimeTypeHandle*> instantiation)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(method).name());
						__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(instantiation).name()))->eklass);
						__parameters__[0] = (MonoObject*)method;
						__parameters__[1] = Global::FromArray<mscorlib::System::RuntimeTypeHandle*>(instantiation, typeid(mscorlib::System::RuntimeTypeHandle).name());
						Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "RuntimeHelpers", 0, NULL, "PrepareMethod", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				}

				void RuntimeHelpers::RunModuleConstructor(mscorlib::System::ModuleHandle module)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(module).name());
						__parameters__[0] = (MonoObject*)module;
						Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "RuntimeHelpers", 0, NULL, "RunModuleConstructor", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				}

				//Get Set Static Properties Methods
				//	Get:OffsetToStringData
				mscorlib::System::Int32  RuntimeHelpers::get_OffsetToStringData()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "RuntimeHelpers", 0, NULL, "get_OffsetToStringData", NullMonoObject, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				void RuntimeHelpers::set_OffsetToStringData(mscorlib::System::Int32  value)
				{
					throw;
				}




			}
		}
	}
}
