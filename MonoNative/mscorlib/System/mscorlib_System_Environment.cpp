#include <mscorlib/System/mscorlib_System_Environment.h>
#include <mscorlib/System/mscorlib_System_Enum.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_OperatingSystem.h>
#include <mscorlib/System/mscorlib_System_Version.h>
#include <mscorlib/System/mscorlib_System_Exception.h>



namespace mscorlib
{
	namespace System
	{

		//Public Methods
		void Environment::Exit(mscorlib::System::Int32 exitCode)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(exitCode).name());
				__parameters__[0] = &exitCode;
				Global::InvokeMethod("mscorlib", "System", "Environment", 0, NULL, "Exit", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
		}

		mscorlib::System::String Environment::ExpandEnvironmentVariables(mscorlib::System::String name)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(name).name());
				__parameters__[0] = (MonoObject*)name;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Environment", 0, NULL, "ExpandEnvironmentVariables", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		std::vector<mscorlib::System::String*> Environment::GetCommandLineArgs()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Environment", 0, NULL, "GetCommandLineArgs", NullMonoObject, 0, NULL, NULL, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::String*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::String (__array_item__));
				}
				return __array_result__;
		}

		mscorlib::System::String Environment::GetEnvironmentVariable(mscorlib::System::String variable)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(variable).name());
				__parameters__[0] = (MonoObject*)variable;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Environment", 0, NULL, "GetEnvironmentVariable", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::Collections::IDictionary Environment::GetEnvironmentVariables()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Environment", 0, NULL, "GetEnvironmentVariables", NullMonoObject, 0, NULL, NULL, NULL);
				return mscorlib::System::Collections::IDictionary(__result__);
		}

		mscorlib::System::String Environment::GetFolderPath(mscorlib::System::Environment::SpecialFolder::__ENUM__ folder)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(folder).name());
				__parameters__[0] = reinterpret_cast<void*>(folder);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Environment", 0, NULL, "GetFolderPath", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String Environment::GetFolderPath(mscorlib::System::Environment::SpecialFolder::__ENUM__ folder, mscorlib::System::Environment::SpecialFolderOption::__ENUM__ option)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(folder).name());
				__parameter_types__[1] = Global::GetType(typeid(option).name());
				__parameters__[0] = reinterpret_cast<void*>(folder);
				__parameters__[1] = reinterpret_cast<void*>(option);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Environment", 0, NULL, "GetFolderPath", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		std::vector<mscorlib::System::String*> Environment::GetLogicalDrives()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Environment", 0, NULL, "GetLogicalDrives", NullMonoObject, 0, NULL, NULL, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::String*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::String (__array_item__));
				}
				return __array_result__;
		}

		mscorlib::System::String Environment::GetEnvironmentVariable(mscorlib::System::String variable, mscorlib::System::EnvironmentVariableTarget::__ENUM__ target)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(variable).name());
				__parameter_types__[1] = Global::GetType(typeid(target).name());
				__parameters__[0] = (MonoObject*)variable;
				__parameters__[1] = reinterpret_cast<void*>(target);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Environment", 0, NULL, "GetEnvironmentVariable", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::Collections::IDictionary Environment::GetEnvironmentVariables(mscorlib::System::EnvironmentVariableTarget::__ENUM__ target)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(target).name());
				__parameters__[0] = reinterpret_cast<void*>(target);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Environment", 0, NULL, "GetEnvironmentVariables", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Collections::IDictionary(__result__);
		}

		void Environment::SetEnvironmentVariable(mscorlib::System::String variable, mscorlib::System::String value)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(variable).name());
				__parameter_types__[1] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)variable;
				__parameters__[1] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System", "Environment", 0, NULL, "SetEnvironmentVariable", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
		}

		void Environment::SetEnvironmentVariable(mscorlib::System::String variable, mscorlib::System::String value, mscorlib::System::EnvironmentVariableTarget::__ENUM__ target)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(variable).name());
				__parameter_types__[1] = Global::GetType(typeid(value).name());
				__parameter_types__[2] = Global::GetType(typeid(target).name());
				__parameters__[0] = (MonoObject*)variable;
				__parameters__[1] = (MonoObject*)value;
				__parameters__[2] = reinterpret_cast<void*>(target);
				Global::InvokeMethod("mscorlib", "System", "Environment", 0, NULL, "SetEnvironmentVariable", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
		}

		void Environment::FailFast(mscorlib::System::String message)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(message).name());
				__parameters__[0] = (MonoObject*)message;
				Global::InvokeMethod("mscorlib", "System", "Environment", 0, NULL, "FailFast", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
		}

		void Environment::FailFast(mscorlib::System::String message, mscorlib::System::Exception exception)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(message).name());
				__parameter_types__[1] = Global::GetType(typeid(exception).name());
				__parameters__[0] = (MonoObject*)message;
				__parameters__[1] = (MonoObject*)exception;
				Global::InvokeMethod("mscorlib", "System", "Environment", 0, NULL, "FailFast", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
		}

		//Get Set Static Properties Methods
		//	Get:CommandLine
		mscorlib::System::String  Environment::get_CommandLine()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Environment", 0, NULL, "get_CommandLine", NullMonoObject, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}


		//	Get/Set:CurrentDirectory
		mscorlib::System::String  Environment::get_CurrentDirectory()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Environment", 0, NULL, "get_CurrentDirectory", NullMonoObject, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}

		void Environment::set_CurrentDirectory(mscorlib::System::String  value)
		{
			MonoType *__parameter_types__[1];
			void *__parameters__[1];
			__parameter_types__[0] = Global::GetType(typeid(value).name());
			__parameters__[0] = (MonoObject*)value;
			Global::InvokeMethod("mscorlib", "System", "Environment", 0, NULL, "set_CurrentDirectory", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
		}


		//	Get:CurrentManagedThreadId
		mscorlib::System::Int32  Environment::get_CurrentManagedThreadId()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Environment", 0, NULL, "get_CurrentManagedThreadId", NullMonoObject, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}


		//	Get/Set:ExitCode
		mscorlib::System::Int32  Environment::get_ExitCode()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Environment", 0, NULL, "get_ExitCode", NullMonoObject, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		void Environment::set_ExitCode(mscorlib::System::Int32  value)
		{
			MonoType *__parameter_types__[1];
			void *__parameters__[1];
			__parameter_types__[0] = Global::GetType(typeid(value).name());
			__parameters__[0] = &value;
			Global::InvokeMethod("mscorlib", "System", "Environment", 0, NULL, "set_ExitCode", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
		}


		//	Get:HasShutdownStarted
		mscorlib::System::Boolean  Environment::get_HasShutdownStarted()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Environment", 0, NULL, "get_HasShutdownStarted", NullMonoObject, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}


		//	Get:MachineName
		mscorlib::System::String  Environment::get_MachineName()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Environment", 0, NULL, "get_MachineName", NullMonoObject, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}


		//	Get:NewLine
		mscorlib::System::String  Environment::get_NewLine()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Environment", 0, NULL, "get_NewLine", NullMonoObject, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}


		//	Get:OSVersion
		mscorlib::System::OperatingSystem  Environment::get_OSVersion()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Environment", 0, NULL, "get_OSVersion", NullMonoObject, 0, NULL, NULL, NULL);
			return mscorlib::System::OperatingSystem(__result__);
		}


		//	Get:StackTrace
		mscorlib::System::String  Environment::get_StackTrace()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Environment", 0, NULL, "get_StackTrace", NullMonoObject, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}


		//	Get:SystemDirectory
		mscorlib::System::String  Environment::get_SystemDirectory()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Environment", 0, NULL, "get_SystemDirectory", NullMonoObject, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}


		//	Get:TickCount
		mscorlib::System::Int32  Environment::get_TickCount()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Environment", 0, NULL, "get_TickCount", NullMonoObject, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}


		//	Get:UserDomainName
		mscorlib::System::String  Environment::get_UserDomainName()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Environment", 0, NULL, "get_UserDomainName", NullMonoObject, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}


		//	Get:UserInteractive
		mscorlib::System::Boolean  Environment::get_UserInteractive()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Environment", 0, NULL, "get_UserInteractive", NullMonoObject, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}


		//	Get:UserName
		mscorlib::System::String  Environment::get_UserName()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Environment", 0, NULL, "get_UserName", NullMonoObject, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}


		//	Get:Version
		mscorlib::System::Version  Environment::get_Version()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Environment", 0, NULL, "get_Version", NullMonoObject, 0, NULL, NULL, NULL);
			return mscorlib::System::Version(__result__);
		}


		//	Get:WorkingSet
		mscorlib::System::Int64  Environment::get_WorkingSet()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Environment", 0, NULL, "get_WorkingSet", NullMonoObject, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
		}


		//	Get:Is64BitOperatingSystem
		mscorlib::System::Boolean  Environment::get_Is64BitOperatingSystem()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Environment", 0, NULL, "get_Is64BitOperatingSystem", NullMonoObject, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}


		//	Get:SystemPageSize
		mscorlib::System::Int32  Environment::get_SystemPageSize()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Environment", 0, NULL, "get_SystemPageSize", NullMonoObject, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}


		//	Get:Is64BitProcess
		mscorlib::System::Boolean  Environment::get_Is64BitProcess()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Environment", 0, NULL, "get_Is64BitProcess", NullMonoObject, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}


		//	Get:ProcessorCount
		mscorlib::System::Int32  Environment::get_ProcessorCount()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Environment", 0, NULL, "get_ProcessorCount", NullMonoObject, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}




	}
}
