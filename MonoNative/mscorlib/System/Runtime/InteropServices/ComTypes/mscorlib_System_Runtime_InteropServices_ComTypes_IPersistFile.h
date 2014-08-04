#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IPERSISTFILE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IPERSISTFILE_H

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
				namespace ComTypes
				{

					class IPersistFile
					{
					public:
						IPersistFile(MonoObject *nativeObject)
						{
							__mscorlib_System_Runtime_InteropServices_ComTypes_IPersistFile = nativeObject;
						};
					
						~IPersistFile()
						{
						};
					

						IPersistFile & operator=(IPersistFile &value) { __mscorlib_System_Runtime_InteropServices_ComTypes_IPersistFile = value.__mscorlib_System_Runtime_InteropServices_ComTypes_IPersistFile; return value; };
						operator MonoObject*() { return __mscorlib_System_Runtime_InteropServices_ComTypes_IPersistFile; };
						MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_InteropServices_ComTypes_IPersistFile = value; return value; };


						virtual void  GetClassID(mscorlib::System::Guid pClassID);
						virtual mscorlib::System::Int32  IsDirty();
						virtual void  Load(mscorlib::System::String pszFileName, mscorlib::System::Int32 dwMode);
						virtual void  Save(mscorlib::System::String pszFileName, mscorlib::System::Boolean fRemember);
						virtual void  SaveCompleted(mscorlib::System::String pszFileName);
						virtual void  GetCurFile(mscorlib::System::String ppszFileName);


					
					protected:
						MonoObject *__mscorlib_System_Runtime_InteropServices_ComTypes_IPersistFile;
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
