#include <mscorlib/System/mscorlib_System_ArgIterator.h>
#include <mscorlib/System/mscorlib_System_TypedReference.h>
#include <mscorlib/System/mscorlib_System_RuntimeTypeHandle.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{

		//Public Methods
		void ArgIterator::End()
		{
				Global::InvokeMethod("mscorlib", "System", "ArgIterator", 0, NULL, "End", __native_object__, 0, NULL, NULL, NULL);
		}

		mscorlib::System::Boolean ArgIterator::Equals(mscorlib::System::Object o)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(o).name());
				__parameters__[0] = (MonoObject*)o;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "ArgIterator", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 ArgIterator::GetHashCode()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "ArgIterator", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::TypedReference ArgIterator::GetNextArg()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "ArgIterator", 0, NULL, "GetNextArg", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::TypedReference(__result__);
		}

		mscorlib::System::TypedReference ArgIterator::GetNextArg(mscorlib::System::RuntimeTypeHandle rth)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(rth).name());
				__parameters__[0] = (MonoObject*)rth;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "ArgIterator", 0, NULL, "GetNextArg", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::TypedReference(__result__);
		}

		mscorlib::System::RuntimeTypeHandle ArgIterator::GetNextArgType()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "ArgIterator", 0, NULL, "GetNextArgType", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::RuntimeTypeHandle(__result__);
		}

		mscorlib::System::Int32 ArgIterator::GetRemainingCount()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "ArgIterator", 0, NULL, "GetRemainingCount", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}


	}
}
