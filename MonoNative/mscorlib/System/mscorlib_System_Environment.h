#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_ENVIRONMENT_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_ENVIRONMENT_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_IConvertible.h>
#include <mscorlib/System/mscorlib_System_IFormattable.h>
#include <mscorlib/System/mscorlib_System_IComparable.h>
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
			operator MonoObject*() { return __native_object__; };
			MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


			static void  Exit(mscorlib::System::Int32 exitCode);
			static mscorlib::System::String  ExpandEnvironmentVariables(mscorlib::System::String name);
			static std::vector<mscorlib::System::String*>  GetCommandLineArgs();
			static mscorlib::System::String  GetEnvironmentVariable(mscorlib::System::String variable);
			static mscorlib::System::Collections::IDictionary  GetEnvironmentVariables();
			static mscorlib::System::String  GetFolderPath(mscorlib::System::Environment::SpecialFolder::__ENUM__ folder);
			static mscorlib::System::String  GetFolderPath(mscorlib::System::Environment::SpecialFolder::__ENUM__ folder, mscorlib::System::Environment::SpecialFolderOption::__ENUM__ option);
			static std::vector<mscorlib::System::String*>  GetLogicalDrives();
			static mscorlib::System::String  GetEnvironmentVariable(mscorlib::System::String variable, mscorlib::System::EnvironmentVariableTarget::__ENUM__ target);
			static mscorlib::System::Collections::IDictionary  GetEnvironmentVariables(mscorlib::System::EnvironmentVariableTarget::__ENUM__ target);
			static void  SetEnvironmentVariable(mscorlib::System::String variable, mscorlib::System::String value);
			static void  SetEnvironmentVariable(mscorlib::System::String variable, mscorlib::System::String value, mscorlib::System::EnvironmentVariableTarget::__ENUM__ target);
			static void  FailFast(mscorlib::System::String message);
			static void  FailFast(mscorlib::System::String message, mscorlib::System::Exception exception);
			virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			//Public Static Properties
			static Property<mscorlib::System::String> CommandLine;
			static Property<mscorlib::System::String> CurrentDirectory;
			static Property<mscorlib::System::Int32> CurrentManagedThreadId;
			static Property<mscorlib::System::Int32> ExitCode;
			static Property<mscorlib::System::Boolean> HasShutdownStarted;
			static Property<mscorlib::System::String> MachineName;
			static Property<mscorlib::System::String> NewLine;
			static Property<mscorlib::System::OperatingSystem> OSVersion;
			static Property<mscorlib::System::String> StackTrace;
			static Property<mscorlib::System::String> SystemDirectory;
			static Property<mscorlib::System::Int32> TickCount;
			static Property<mscorlib::System::String> UserDomainName;
			static Property<mscorlib::System::Boolean> UserInteractive;
			static Property<mscorlib::System::String> UserName;
			static Property<mscorlib::System::Version> Version;
			static Property<mscorlib::System::Int64> WorkingSet;
			static Property<mscorlib::System::Boolean> Is64BitOperatingSystem;
			static Property<mscorlib::System::Int32> SystemPageSize;
			static Property<mscorlib::System::Boolean> Is64BitProcess;
			static Property<mscorlib::System::Int32> ProcessorCount;

			//Get Set Static Properties Methods
			//	Get:CommandLine
			static mscorlib::System::String  get_CommandLine();

			//	Get/Set:CurrentDirectory
			static mscorlib::System::String  get_CurrentDirectory();
			static void set_CurrentDirectory(mscorlib::System::String  value);

			//	Get:CurrentManagedThreadId
			static mscorlib::System::Int32  get_CurrentManagedThreadId();

			//	Get/Set:ExitCode
			static mscorlib::System::Int32  get_ExitCode();
			static void set_ExitCode(mscorlib::System::Int32  value);

			//	Get:HasShutdownStarted
			static mscorlib::System::Boolean  get_HasShutdownStarted();

			//	Get:MachineName
			static mscorlib::System::String  get_MachineName();

			//	Get:NewLine
			static mscorlib::System::String  get_NewLine();

			//	Get:OSVersion
			static mscorlib::System::OperatingSystem  get_OSVersion();

			//	Get:StackTrace
			static mscorlib::System::String  get_StackTrace();

			//	Get:SystemDirectory
			static mscorlib::System::String  get_SystemDirectory();

			//	Get:TickCount
			static mscorlib::System::Int32  get_TickCount();

			//	Get:UserDomainName
			static mscorlib::System::String  get_UserDomainName();

			//	Get:UserInteractive
			static mscorlib::System::Boolean  get_UserInteractive();

			//	Get:UserName
			static mscorlib::System::String  get_UserName();

			//	Get:Version
			static mscorlib::System::Version  get_Version();

			//	Get:WorkingSet
			static mscorlib::System::Int64  get_WorkingSet();

			//	Get:Is64BitOperatingSystem
			static mscorlib::System::Boolean  get_Is64BitOperatingSystem();

			//	Get:SystemPageSize
			static mscorlib::System::Int32  get_SystemPageSize();

			//	Get:Is64BitProcess
			static mscorlib::System::Boolean  get_Is64BitProcess();

			//	Get:ProcessorCount
			static mscorlib::System::Int32  get_ProcessorCount();


		
		protected:
		
		private:
		
		};

	}
}
#endif
