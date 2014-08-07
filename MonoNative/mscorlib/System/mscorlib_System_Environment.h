#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_ENVIRONMENT_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_ENVIRONMENT_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_IConvertible.h>
#include <mscorlib/System/mscorlib_System_IComparable.h>
#include <mscorlib/System/mscorlib_System_IFormattable.h>
#include <mscorlib/System/mscorlib_System_TypeCode.h>
#include <mscorlib/System/mscorlib_System_IFormatProvider.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IDictionary.h>
#include <mscorlib/System/mscorlib_System_EnvironmentVariableTarget.h>

namespace mscorlib
{
	namespace System
	{

		class Enum;
		class String;
		class Type;
		class OperatingSystem;
		class Version;
		class Exception;
		

	}
}
namespace mscorlib
{
	namespace System
	{

		class Environment
			: public mscorlib::System::Object
		{
		public:
			class SpecialFolderOption
			{
			public:
				enum __ENUM__
				{
					None = 0,
					DoNotVerify = 16384,
					Create = 32768,
				};
			};
			
			class SpecialFolder
			{
			public:
				enum __ENUM__
				{
					Desktop = 0,
					Programs = 2,
					MyDocuments = 5,
					Personal = 5,
					Favorites = 6,
					Startup = 7,
					Recent = 8,
					SendTo = 9,
					StartMenu = 11,
					MyMusic = 13,
					MyVideos = 14,
					DesktopDirectory = 16,
					MyComputer = 17,
					NetworkShortcuts = 19,
					Fonts = 20,
					Templates = 21,
					CommonStartMenu = 22,
					CommonPrograms = 23,
					CommonStartup = 24,
					CommonDesktopDirectory = 25,
					ApplicationData = 26,
					PrinterShortcuts = 27,
					LocalApplicationData = 28,
					InternetCache = 32,
					Cookies = 33,
					History = 34,
					CommonApplicationData = 35,
					Windows = 36,
					System = 37,
					ProgramFiles = 38,
					MyPictures = 39,
					UserProfile = 40,
					SystemX86 = 41,
					ProgramFilesX86 = 42,
					CommonProgramFiles = 43,
					CommonProgramFilesX86 = 44,
					CommonTemplates = 45,
					CommonDocuments = 46,
					CommonAdminTools = 47,
					AdminTools = 48,
					CommonMusic = 53,
					CommonPictures = 54,
					CommonVideos = 55,
					Resources = 56,
					LocalizedResources = 57,
					CommonOemLinks = 58,
					CDBurning = 59,
				};
			};
			
			Environment(mscorlib::NativeTypeInfo *nativeTypeInfo)
			: mscorlib::System::Object(nativeTypeInfo)
			{
			};
		
			Environment(MonoObject *nativeObject)
			: mscorlib::System::Object(nativeObject)
			{
			};
		
			~Environment()
			{
			};
		

			Environment & operator=(Environment &value) { __native_object__ = value.GetNativeObject(); return value; };
			bool operator==(Environment &value) { return mscorlib::System::Object::Equals(value); };
			operator MonoObject*() { return __native_object__; };
			MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


			static void  Exit(mscorlib::System::Int32 exitCode);
			static mscorlib::System::String  ExpandEnvironmentVariables(mscorlib::System::String name);
			static mscorlib::System::String  ExpandEnvironmentVariables(const char *name);
			static std::vector<mscorlib::System::String*>  GetCommandLineArgs();
			static mscorlib::System::String  GetEnvironmentVariable(mscorlib::System::String variable);
			static mscorlib::System::String  GetEnvironmentVariable(const char *variable);
			static mscorlib::System::Collections::IDictionary  GetEnvironmentVariables();
			static mscorlib::System::String  GetFolderPath(mscorlib::System::Environment::SpecialFolder::__ENUM__ folder);
			static mscorlib::System::String  GetFolderPath(mscorlib::System::Environment::SpecialFolder::__ENUM__ folder, mscorlib::System::Environment::SpecialFolderOption::__ENUM__ option);
			static std::vector<mscorlib::System::String*>  GetLogicalDrives();
			static mscorlib::System::String  GetEnvironmentVariable(mscorlib::System::String variable, mscorlib::System::EnvironmentVariableTarget::__ENUM__ target);
			static mscorlib::System::String  GetEnvironmentVariable(const char *variable, mscorlib::System::EnvironmentVariableTarget::__ENUM__ target);
			static mscorlib::System::Collections::IDictionary  GetEnvironmentVariables(mscorlib::System::EnvironmentVariableTarget::__ENUM__ target);
			static void  SetEnvironmentVariable(mscorlib::System::String variable, mscorlib::System::String value);
			static void  SetEnvironmentVariable(const char *variable, const char *value);
			static void  SetEnvironmentVariable(mscorlib::System::String variable, mscorlib::System::String value, mscorlib::System::EnvironmentVariableTarget::__ENUM__ target);
			static void  SetEnvironmentVariable(const char *variable, const char *value, mscorlib::System::EnvironmentVariableTarget::__ENUM__ target);
			static void  FailFast(mscorlib::System::String message);
			static void  FailFast(const char *message);
			static void  FailFast(mscorlib::System::String message, mscorlib::System::Exception exception);
			static void  FailFast(const char *message, mscorlib::System::Exception exception);
			virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			//Public Static Properties
			static Property<mscorlib::System::String , mscorlib::System::Environment> CommandLine;
			static Property<mscorlib::System::String , mscorlib::System::Environment> CurrentDirectory;
			static Property<mscorlib::System::Int32 , mscorlib::System::Environment> CurrentManagedThreadId;
			static Property<mscorlib::System::Int32 , mscorlib::System::Environment> ExitCode;
			static Property<mscorlib::System::Boolean , mscorlib::System::Environment> HasShutdownStarted;
			static Property<mscorlib::System::String , mscorlib::System::Environment> MachineName;
			static Property<mscorlib::System::String , mscorlib::System::Environment> NewLine;
			static Property<mscorlib::System::OperatingSystem , mscorlib::System::Environment> OSVersion;
			static Property<mscorlib::System::String , mscorlib::System::Environment> StackTrace;
			static Property<mscorlib::System::String , mscorlib::System::Environment> SystemDirectory;
			static Property<mscorlib::System::Int32 , mscorlib::System::Environment> TickCount;
			static Property<mscorlib::System::String , mscorlib::System::Environment> UserDomainName;
			static Property<mscorlib::System::Boolean , mscorlib::System::Environment> UserInteractive;
			static Property<mscorlib::System::String , mscorlib::System::Environment> UserName;
			static Property<mscorlib::System::Version , mscorlib::System::Environment> Version;
			static Property<mscorlib::System::Int64 , mscorlib::System::Environment> WorkingSet;
			static Property<mscorlib::System::Boolean , mscorlib::System::Environment> Is64BitOperatingSystem;
			static Property<mscorlib::System::Int32 , mscorlib::System::Environment> SystemPageSize;
			static Property<mscorlib::System::Boolean , mscorlib::System::Environment> Is64BitProcess;
			static Property<mscorlib::System::Int32 , mscorlib::System::Environment> ProcessorCount;

			//Get Set Static Properties Methods
			//	Get:CommandLine
			static mscorlib::System::String  get_CommandLine();
			static void set_CommandLine(mscorlib::System::String  value);

			//	Get/Set:CurrentDirectory
			static mscorlib::System::String  get_CurrentDirectory();
			static void set_CurrentDirectory(mscorlib::System::String  value);

			//	Get:CurrentManagedThreadId
			static mscorlib::System::Int32  get_CurrentManagedThreadId();
			static void set_CurrentManagedThreadId(mscorlib::System::Int32  value);

			//	Get/Set:ExitCode
			static mscorlib::System::Int32  get_ExitCode();
			static void set_ExitCode(mscorlib::System::Int32  value);

			//	Get:HasShutdownStarted
			static mscorlib::System::Boolean  get_HasShutdownStarted();
			static void set_HasShutdownStarted(mscorlib::System::Boolean  value);

			//	Get:MachineName
			static mscorlib::System::String  get_MachineName();
			static void set_MachineName(mscorlib::System::String  value);

			//	Get:NewLine
			static mscorlib::System::String  get_NewLine();
			static void set_NewLine(mscorlib::System::String  value);

			//	Get:OSVersion
			static mscorlib::System::OperatingSystem  get_OSVersion();
			static void set_OSVersion(mscorlib::System::OperatingSystem  value);

			//	Get:StackTrace
			static mscorlib::System::String  get_StackTrace();
			static void set_StackTrace(mscorlib::System::String  value);

			//	Get:SystemDirectory
			static mscorlib::System::String  get_SystemDirectory();
			static void set_SystemDirectory(mscorlib::System::String  value);

			//	Get:TickCount
			static mscorlib::System::Int32  get_TickCount();
			static void set_TickCount(mscorlib::System::Int32  value);

			//	Get:UserDomainName
			static mscorlib::System::String  get_UserDomainName();
			static void set_UserDomainName(mscorlib::System::String  value);

			//	Get:UserInteractive
			static mscorlib::System::Boolean  get_UserInteractive();
			static void set_UserInteractive(mscorlib::System::Boolean  value);

			//	Get:UserName
			static mscorlib::System::String  get_UserName();
			static void set_UserName(mscorlib::System::String  value);

			//	Get:Version
			static mscorlib::System::Version  get_Version();
			static void set_Version(mscorlib::System::Version  value);

			//	Get:WorkingSet
			static mscorlib::System::Int64  get_WorkingSet();
			static void set_WorkingSet(mscorlib::System::Int64  value);

			//	Get:Is64BitOperatingSystem
			static mscorlib::System::Boolean  get_Is64BitOperatingSystem();
			static void set_Is64BitOperatingSystem(mscorlib::System::Boolean  value);

			//	Get:SystemPageSize
			static mscorlib::System::Int32  get_SystemPageSize();
			static void set_SystemPageSize(mscorlib::System::Int32  value);

			//	Get:Is64BitProcess
			static mscorlib::System::Boolean  get_Is64BitProcess();
			static void set_Is64BitProcess(mscorlib::System::Boolean  value);

			//	Get:ProcessorCount
			static mscorlib::System::Int32  get_ProcessorCount();
			static void set_ProcessorCount(mscorlib::System::Int32  value);


		
		protected:
		
		private:
		
		};

	}
}
#endif
