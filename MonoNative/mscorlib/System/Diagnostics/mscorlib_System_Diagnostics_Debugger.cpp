#include <mscorlib/System/Diagnostics/mscorlib_System_Diagnostics_Debugger.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Diagnostics
		{

			Property<mscorlib::System::Boolean , mscorlib::System::Diagnostics::Debugger> mscorlib::System::Diagnostics::Debugger::IsAttached(&mscorlib::System::Diagnostics::Debugger::get_IsAttached, &mscorlib::System::Diagnostics::Debugger::set_IsAttached);
			//Public Methods
			void Debugger::Break()
			{
					Global::InvokeMethod("mscorlib", "System.Diagnostics", "Debugger", 0, NULL, "Break", NullMonoObject, 0, NULL, NULL, NULL);
			}

			mscorlib::System::Boolean Debugger::IsLogging()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics", "Debugger", 0, NULL, "IsLogging", NullMonoObject, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean Debugger::Launch()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics", "Debugger", 0, NULL, "Launch", NullMonoObject, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			void Debugger::Log(mscorlib::System::Int32 level, mscorlib::System::String category, mscorlib::System::String message)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(level).name());
					__parameter_types__[1] = Global::GetType(typeid(category).name());
					__parameter_types__[2] = Global::GetType(typeid(message).name());
					__parameters__[0] = &level;
					__parameters__[1] = mono_string_new(Global::GetDomain(), category);
					__parameters__[2] = mono_string_new(Global::GetDomain(), message);
					Global::InvokeMethod("mscorlib", "System.Diagnostics", "Debugger", 0, NULL, "Log", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
			}

			void Debugger::Log(mscorlib::System::Int32 level, const char *category, const char *message)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(level).name());
					__parameter_types__[1] = Global::GetType(typeid(category).name());
					__parameter_types__[2] = Global::GetType(typeid(message).name());
					__parameters__[0] = &level;
					__parameters__[1] = mono_string_new(Global::GetDomain(), category);
					__parameters__[2] = mono_string_new(Global::GetDomain(), message);
					Global::InvokeMethod("mscorlib", "System.Diagnostics", "Debugger", 0, NULL, "Log", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
			}

			void Debugger::NotifyOfCrossThreadDependency()
			{
					Global::InvokeMethod("mscorlib", "System.Diagnostics", "Debugger", 0, NULL, "NotifyOfCrossThreadDependency", NullMonoObject, 0, NULL, NULL, NULL);
			}

			//Get Set Static Properties Methods
			//	Get:IsAttached
			mscorlib::System::Boolean  Debugger::get_IsAttached()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics", "Debugger", 0, NULL, "get_IsAttached", NullMonoObject, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			void Debugger::set_IsAttached(mscorlib::System::Boolean  value)
			{
				throw;
			}



				//	Get/Set:DefaultCategory
			mscorlib::System::String Debugger::get_DefaultCategory()
			{
				return mscorlib::System::String((MonoObject*)Global::GetFieldStringValue("mscorlib", "System.Diagnostics", "Debugger", 0, NULL, "DefaultCategory"));
			}

			void Debugger::set_DefaultCategory(mscorlib::System::String  value)
			{
				throw;
			}


		}
	}
}
