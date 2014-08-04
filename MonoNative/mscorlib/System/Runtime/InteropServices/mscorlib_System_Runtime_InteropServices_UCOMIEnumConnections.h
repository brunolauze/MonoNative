#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_UCOMIENUMCONNECTIONS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_UCOMIENUMCONNECTIONS_H

#include <Global.h>

namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				class CONNECTDATA;
				

			}
		}
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

				class UCOMIEnumConnections
				{
				public:
					UCOMIEnumConnections(MonoObject *nativeObject)
					{
						__mscorlib_System_Runtime_InteropServices_UCOMIEnumConnections = nativeObject;
					};
				
					~UCOMIEnumConnections()
					{
					};
				

					UCOMIEnumConnections & operator=(UCOMIEnumConnections &value) { __mscorlib_System_Runtime_InteropServices_UCOMIEnumConnections = value.__mscorlib_System_Runtime_InteropServices_UCOMIEnumConnections; return value; };
					operator MonoObject*() { return __mscorlib_System_Runtime_InteropServices_UCOMIEnumConnections; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_InteropServices_UCOMIEnumConnections = value; return value; };


					virtual mscorlib::System::Int32  Next(mscorlib::System::Int32 celt, std::vector<mscorlib::System::Runtime::InteropServices::CONNECTDATA*> rgelt, mscorlib::System::Int32 pceltFetched);
					virtual mscorlib::System::Int32  Skip(mscorlib::System::Int32 celt);
					virtual void  Reset();
					virtual void  Clone(mscorlib::System::Runtime::InteropServices::UCOMIEnumConnections ppenum);


				
				protected:
					MonoObject *__mscorlib_System_Runtime_InteropServices_UCOMIEnumConnections;
				
				private:
				
				};

			}
		}
	}
}
#endif
