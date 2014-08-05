#include <mscorlib/System/Diagnostics/mscorlib_System_Diagnostics_StackTrace.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Diagnostics
		{

			//Public Methods
			mscorlib::System::Diagnostics::StackFrame StackTrace::GetFrame(mscorlib::System::Int32 index)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(index).name());
					__parameters__[0] = &index;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics", "StackTrace", 0, NULL, "GetFrame", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Diagnostics::StackFrame(__result__);
			}

			std::vector<mscorlib::System::Diagnostics::StackFrame*> StackTrace::GetFrames()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics", "StackTrace", 0, NULL, "GetFrames", __native_object__, 0, NULL, NULL, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::Diagnostics::StackFrame*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back(new mscorlib::System::Diagnostics::StackFrame (__array_item__));
					}
					return __array_result__;
			}

			mscorlib::System::String StackTrace::ToString()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics", "StackTrace", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
			}

			//Get Set Properties Methods
			//	Get:FrameCount
			mscorlib::System::Int32  StackTrace::get_FrameCount() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics", "StackTrace", 0, NULL, "get_FrameCount", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}


				//	Get/Set:METHODS_TO_SKIP
			mscorlib::System::Int32 StackTrace::get_METHODS_TO_SKIP()
			{
				return Global::GetFieldInt32Value("mscorlib", "System.Diagnostics", "StackTrace", 0, NULL, "METHODS_TO_SKIP");
			}

			void StackTrace::set_METHODS_TO_SKIP(mscorlib::System::Int32  value)
			{
			}


		}
	}
}
