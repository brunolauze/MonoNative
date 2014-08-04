#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IENUMCONNECTIONS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IENUMCONNECTIONS_H

#include <Global.h>

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

					class CONNECTDATA;
					

				}
			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{

		class IntPtr;
		

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

					class IEnumConnections
					{
					public:
						IEnumConnections(MonoObject *nativeObject)
						{
							__mscorlib_System_Runtime_InteropServices_ComTypes_IEnumConnections = nativeObject;
						};
					
						~IEnumConnections()
						{
						};
					

						IEnumConnections & operator=(IEnumConnections &value) { __mscorlib_System_Runtime_InteropServices_ComTypes_IEnumConnections = value.__mscorlib_System_Runtime_InteropServices_ComTypes_IEnumConnections; return value; };
						operator MonoObject*() { return __mscorlib_System_Runtime_InteropServices_ComTypes_IEnumConnections; };
						MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_InteropServices_ComTypes_IEnumConnections = value; return value; };


						virtual mscorlib::System::Int32  Next(mscorlib::System::Int32 celt, std::vector<mscorlib::System::Runtime::InteropServices::ComTypes::CONNECTDATA*> rgelt, mscorlib::System::IntPtr pceltFetched);
						virtual mscorlib::System::Int32  Skip(mscorlib::System::Int32 celt);
						virtual void  Reset();
						virtual void  Clone(mscorlib::System::Runtime::InteropServices::ComTypes::IEnumConnections ppenum);


					
					protected:
						MonoObject *__mscorlib_System_Runtime_InteropServices_ComTypes_IEnumConnections;
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
