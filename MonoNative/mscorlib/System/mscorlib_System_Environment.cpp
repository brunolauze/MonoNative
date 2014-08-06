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

		Property<mscorlib::System::String , mscorlib::System::Environment> mscorlib::System::Environment::CommandLine(&mscorlib::System::Environment::get_CommandLine, &mscorlib::System::Environment::set_CommandLine);
		Property<mscorlib::System::String , mscorlib::System::Environment> mscorlib::System::Environment::CurrentDirectory(&mscorlib::System::Environment::get_CurrentDirectory, &mscorlib::System::Environment::set_CurrentDirectory);
		Property<mscorlib::System::Int32 , mscorlib::System::Environment> mscorlib::System::Environment::CurrentManagedThreadId(&mscorlib::System::Environment::get_CurrentManagedThreadId, &mscorlib::System::Environment::set_CurrentManagedThreadId);
		Property<mscorlib::System::Int32 , mscorlib::System::Environment> mscorlib::System::Environment::ExitCode(&mscorlib::System::Environment::get_ExitCode, &mscorlib::System::Environment::set_ExitCode);
		Property<mscorlib::System::Boolean , mscorlib::System::Environment> mscorlib::System::Environment::HasShutdownStarted(&mscorlib::System::Environment::get_HasShutdownStarted, &mscorlib::System::Environment::set_HasShutdownStarted);
		Property<mscorlib::System::String , mscorlib::System::Environment> mscorlib::System::Environment::MachineName(&mscorlib::System::Environment::get_MachineName, &mscorlib::System::Environment::set_MachineName);
		Property<mscorlib::System::String , mscorlib::System::Environment> mscorlib::System::Environment::NewLine(&mscorlib::System::Environment::get_NewLine, &mscorlib::System::Environment::set_NewLine);
		Property<mscorlib::System::OperatingSystem , mscorlib::System::Environment> mscorlib::System::Environment::OSVersion(&mscorlib::System::Environment::get_OSVersion, &mscorlib::System::Environment::set_OSVersion);
		Property<mscorlib::System::String , mscorlib::System::Environment> mscorlib::System::Environment::StackTrace(&mscorlib::System::Environment::get_StackTrace, &mscorlib::System::Environment::set_StackTrace);
		Property<mscorlib::System::String , mscorlib::System::Environment> mscorlib::System::Environment::SystemDirectory(&mscorlib::System::Environment::get_SystemDirectory, &mscorlib::System::Environment::set_SystemDirectory);
		Property<mscorlib::System::Int32 , mscorlib::System::Environment> mscorlib::System::Environment::TickCount(&mscorlib::System::Environment::get_TickCount, &mscorlib::System::Environment::set_TickCount);
		Property<mscorlib::System::String , mscorlib::System::Environment> mscorlib::System::Environment::UserDomainName(&mscorlib::System::Environment::get_UserDomainName, &mscorlib::System::Environment::set_UserDomainName);
		Property<mscorlib::System::Boolean , mscorlib::System::Environment> mscorlib::System::Environment::UserInteractive(&mscorlib::System::Environment::get_UserInteractive, &mscorlib::System::Environment::set_UserInteractive);
		Property<mscorlib::System::String , mscorlib::System::Environment> mscorlib::System::Environment::UserName(&mscorlib::System::Environment::get_UserName, &mscorlib::System::Environment::set_UserName);
		Property<mscorlib::System::Version , mscorlib::System::Environment> mscorlib::System::Environment::Version(&mscorlib::System::Environment::get_Version, &mscorlib::System::Environment::set_Version);
		Property<mscorlib::System::Int64 , mscorlib::System::Environment> mscorlib::System::Environment::WorkingSet(&mscorlib::System::Environment::get_WorkingSet, &mscorlib::System::Environment::set_WorkingSet);
		Property<mscorlib::System::Boolean , mscorlib::System::Environment> mscorlib::System::Environment::Is64BitOperatingSystem(&mscorlib::System::Environment::get_Is64BitOperatingSystem, &mscorlib::System::Environment::set_Is64BitOperatingSystem);
		Property<mscorlib::System::Int32 , mscorlib::System::Environment> mscorlib::System::Environment::SystemPageSize(&mscorlib::System::Environment::get_SystemPageSize, &mscorlib::System::Environment::set_SystemPageSize);
		Property<mscorlib::System::Boolean , mscorlib::System::Environment> mscorlib::System::Environment::Is64BitProcess(&mscorlib::System::Environment::get_Is64BitProcess, &mscorlib::System::Environment::set_Is64BitProcess);
		Property<mscorlib::System::Int32 , mscorlib::System::Environment> mscorlib::System::Environment::ProcessorCount(&mscorlib::System::Environment::get_ProcessorCount, &mscorlib::System::Environment::set_ProcessorCount);
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

		mscorlib::System::String Environment::ExpandEnvironmentVariables(const char *name)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameters__[0] = mono_string_new(Global::GetDomain(), name);
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

		mscorlib::System::String Environment::GetEnvironmentVariable(const char *variable)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameters__[0] = mono_string_new(Global::GetDomain(), variable);
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
				mscorlib::System::Int32 __param_folder__ = folder;
				__parameters__[0] = &__param_folder__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Environment", 0, NULL, "GetFolderPath", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String Environment::GetFolderPath(mscorlib::System::Environment::SpecialFolder::__ENUM__ folder, mscorlib::System::Environment::SpecialFolderOption::__ENUM__ option)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(folder).name());
				__parameter_types__[1] = Global::GetType(typeid(option).name());
				mscorlib::System::Int32 __param_folder__ = folder;
				__parameters__[0] = &__param_folder__;
				mscorlib::System::Int32 __param_option__ = option;
				__parameters__[1] = &__param_option__;
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
				mscorlib::System::Int32 __param_target__ = target;
				__parameters__[1] = &__param_target__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Environment", 0, NULL, "GetEnvironmentVariable", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String Environment::GetEnvironmentVariable(const char *variable, mscorlib::System::EnvironmentVariableTarget::__ENUM__ target)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(target).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), variable);
				mscorlib::System::Int32 __param_target__ = target;
				__parameters__[1] = &__param_target__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Environment", 0, NULL, "GetEnvironmentVariable", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::Collections::IDictionary Environment::GetEnvironmentVariables(mscorlib::System::EnvironmentVariableTarget::__ENUM__ target)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(target).name());
				mscorlib::System::Int32 __param_target__ = target;
				__parameters__[0] = &__param_target__;
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

		void Environment::SetEnvironmentVariable(const char *variable, const char *value)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
				__parameters__[0] = mono_string_new(Global::GetDomain(), variable);
				__parameters__[1] = mono_string_new(Global::GetDomain(), value);
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
				mscorlib::System::Int32 __param_target__ = target;
				__parameters__[2] = &__param_target__;
				Global::InvokeMethod("mscorlib", "System", "Environment", 0, NULL, "SetEnvironmentVariable", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
		}

		void Environment::SetEnvironmentVariable(const char *variable, const char *value, mscorlib::System::EnvironmentVariableTarget::__ENUM__ target)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[2] = Global::GetType(typeid(target).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), variable);
				__parameters__[1] = mono_string_new(Global::GetDomain(), value);
				mscorlib::System::Int32 __param_target__ = target;
				__parameters__[2] = &__param_target__;
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

		void Environment::FailFast(const char *message)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameters__[0] = mono_string_new(Global::GetDomain(), message);
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

		void Environment::FailFast(const char *message, mscorlib::System::Exception exception)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(exception).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), message);
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

		void Environment::set_CommandLine(mscorlib::System::String  value)
		{
			throw;
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

		void Environment::set_CurrentManagedThreadId(mscorlib::System::Int32  value)
		{
			throw;
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

		void Environment::set_HasShutdownStarted(mscorlib::System::Boolean  value)
		{
			throw;
		}


		//	Get:MachineName
		mscorlib::System::String  Environment::get_MachineName()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Environment", 0, NULL, "get_MachineName", NullMonoObject, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}

		void Environment::set_MachineName(mscorlib::System::String  value)
		{
			throw;
		}


		//	Get:NewLine
		mscorlib::System::String  Environment::get_NewLine()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Environment", 0, NULL, "get_NewLine", NullMonoObject, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}

		void Environment::set_NewLine(mscorlib::System::String  value)
		{
			throw;
		}


		//	Get:OSVersion
		mscorlib::System::OperatingSystem  Environment::get_OSVersion()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Environment", 0, NULL, "get_OSVersion", NullMonoObject, 0, NULL, NULL, NULL);
			return mscorlib::System::OperatingSystem(__result__);
		}

		void Environment::set_OSVersion(mscorlib::System::OperatingSystem  value)
		{
			throw;
		}


		//	Get:StackTrace
		mscorlib::System::String  Environment::get_StackTrace()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Environment", 0, NULL, "get_StackTrace", NullMonoObject, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}

		void Environment::set_StackTrace(mscorlib::System::String  value)
		{
			throw;
		}


		//	Get:SystemDirectory
		mscorlib::System::String  Environment::get_SystemDirectory()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Environment", 0, NULL, "get_SystemDirectory", NullMonoObject, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}

		void Environment::set_SystemDirectory(mscorlib::System::String  value)
		{
			throw;
		}


		//	Get:TickCount
		mscorlib::System::Int32  Environment::get_TickCount()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Environment", 0, NULL, "get_TickCount", NullMonoObject, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		void Environment::set_TickCount(mscorlib::System::Int32  value)
		{
			throw;
		}


		//	Get:UserDomainName
		mscorlib::System::String  Environment::get_UserDomainName()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Environment", 0, NULL, "get_UserDomainName", NullMonoObject, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}

		void Environment::set_UserDomainName(mscorlib::System::String  value)
		{
			throw;
		}


		//	Get:UserInteractive
		mscorlib::System::Boolean  Environment::get_UserInteractive()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Environment", 0, NULL, "get_UserInteractive", NullMonoObject, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		void Environment::set_UserInteractive(mscorlib::System::Boolean  value)
		{
			throw;
		}


		//	Get:UserName
		mscorlib::System::String  Environment::get_UserName()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Environment", 0, NULL, "get_UserName", NullMonoObject, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}

		void Environment::set_UserName(mscorlib::System::String  value)
		{
			throw;
		}


		//	Get:Version
		mscorlib::System::Version  Environment::get_Version()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Environment", 0, NULL, "get_Version", NullMonoObject, 0, NULL, NULL, NULL);
			return mscorlib::System::Version(__result__);
		}

		void Environment::set_Version(mscorlib::System::Version  value)
		{
			throw;
		}


		//	Get:WorkingSet
		mscorlib::System::Int64  Environment::get_WorkingSet()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Environment", 0, NULL, "get_WorkingSet", NullMonoObject, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
		}

		void Environment::set_WorkingSet(mscorlib::System::Int64  value)
		{
			throw;
		}


		//	Get:Is64BitOperatingSystem
		mscorlib::System::Boolean  Environment::get_Is64BitOperatingSystem()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Environment", 0, NULL, "get_Is64BitOperatingSystem", NullMonoObject, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		void Environment::set_Is64BitOperatingSystem(mscorlib::System::Boolean  value)
		{
			throw;
		}


		//	Get:SystemPageSize
		mscorlib::System::Int32  Environment::get_SystemPageSize()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Environment", 0, NULL, "get_SystemPageSize", NullMonoObject, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		void Environment::set_SystemPageSize(mscorlib::System::Int32  value)
		{
			throw;
		}


		//	Get:Is64BitProcess
		mscorlib::System::Boolean  Environment::get_Is64BitProcess()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Environment", 0, NULL, "get_Is64BitProcess", NullMonoObject, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		void Environment::set_Is64BitProcess(mscorlib::System::Boolean  value)
		{
			throw;
		}


		//	Get:ProcessorCount
		mscorlib::System::Int32  Environment::get_ProcessorCount()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Environment", 0, NULL, "get_ProcessorCount", NullMonoObject, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		void Environment::set_ProcessorCount(mscorlib::System::Int32  value)
		{
			throw;
		}




	}
}
