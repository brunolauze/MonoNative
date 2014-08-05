#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_UCOMIPERSISTFILE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_UCOMIPERSISTFILE_H

#include <Global.h>

namespace mscorlib
{
	namespace System
	{

		class Guid;
		class String;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				class UCOMIPersistFile
				{
				public:
					UCOMIPersistFile(MonoObject *nativeObject)
					{
						__mscorlib_System_Runtime_InteropServices_UCOMIPersistFile = nativeObject;
					};
				
					~UCOMIPersistFile()
					{
					};
				

					UCOMIPersistFile & operator=(UCOMIPersistFile &value) { __mscorlib_System_Runtime_InteropServices_UCOMIPersistFile = value.__mscorlib_System_Runtime_InteropServices_UCOMIPersistFile; return value; };
					operator MonoObject*() { return __mscorlib_System_Runtime_InteropServices_UCOMIPersistFile; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_InteropServices_UCOMIPersistFile = value; return value; };


					virtual void  GetClassID(mscorlib::System::Guid pClassID);
					virtual mscorlib::System::Int32  IsDirty();
					virtual void  Load(mscorlib::System::String pszFileName, mscorlib::System::Int32 dwMode);
					virtual void  Load(const char *pszFileName, mscorlib::System::Int32 dwMode);
					virtual void  Save(mscorlib::System::String pszFileName, mscorlib::System::Boolean fRemember);
					virtual void  Save(const char *pszFileName, mscorlib::System::Boolean fRemember);
					virtual void  SaveCompleted(mscorlib::System::String pszFileName);
					virtual void  SaveCompleted(const char *pszFileName);
					virtual void  GetCurFile(mscorlib::System::String ppszFileName);


				
				protected:
					MonoObject *__mscorlib_System_Runtime_InteropServices_UCOMIPersistFile;
				
				private:
				
				};

			}
		}
	}
}
#endif
