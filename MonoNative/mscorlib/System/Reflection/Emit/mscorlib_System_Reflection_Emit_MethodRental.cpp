#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_MethodRental.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_IntPtr.h>



namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{
			namespace Emit
			{

				//Public Methods
				void MethodRental::SwapMethodBody(mscorlib::System::Type cls, mscorlib::System::Int32 methodtoken, mscorlib::System::IntPtr rgIL, mscorlib::System::Int32 methodSize, mscorlib::System::Int32 flags)
				{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType(typeid(cls).name());
						__parameter_types__[1] = Global::GetType(typeid(methodtoken).name());
						__parameter_types__[2] = Global::GetType(typeid(rgIL).name());
						__parameter_types__[3] = Global::GetType(typeid(methodSize).name());
						__parameter_types__[4] = Global::GetType(typeid(flags).name());
						__parameters__[0] = (MonoObject*)cls;
						__parameters__[1] = &methodtoken;
						__parameters__[2] = (MonoObject*)rgIL;
						__parameters__[3] = &methodSize;
						__parameters__[4] = &flags;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "MethodRental", 0, NULL, "SwapMethodBody", NullMonoObject, 5, __parameter_types__, __parameters__, NULL);
				}

					//	Get/Set:JitImmediate
				mscorlib::System::Int32 MethodRental::get_JitImmediate()
				{
					return Global::GetFieldInt32Value("mscorlib", "System.Reflection.Emit", "MethodRental", 0, NULL, "JitImmediate");
				}

				void MethodRental::set_JitImmediate(mscorlib::System::Int32  value)
				{
				}

					//	Get/Set:JitOnDemand
				mscorlib::System::Int32 MethodRental::get_JitOnDemand()
				{
					return Global::GetFieldInt32Value("mscorlib", "System.Reflection.Emit", "MethodRental", 0, NULL, "JitOnDemand");
				}

				void MethodRental::set_JitOnDemand(mscorlib::System::Int32  value)
				{
				}


			}
		}
	}
}
