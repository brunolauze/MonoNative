#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_ICONNECTIONPOINTCONTAINER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_ICONNECTIONPOINTCONTAINER_H

#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_IEnumConnectionPoints.h>

namespace mscorlib
{
	namespace System
	{

		class Guid;
		

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

					class IConnectionPoint;
					

				}
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
				namespace ComTypes
				{

					class IConnectionPointContainer
					{
					public:
						IConnectionPointContainer(MonoObject *nativeObject)
						{
							__mscorlib_System_Runtime_InteropServices_ComTypes_IConnectionPointContainer = nativeObject;
						};
					
						~IConnectionPointContainer()
						{
						};
					

						IConnectionPointContainer & operator=(IConnectionPointContainer &value) { __mscorlib_System_Runtime_InteropServices_ComTypes_IConnectionPointContainer = value.__mscorlib_System_Runtime_InteropServices_ComTypes_IConnectionPointContainer; return value; };
						operator MonoObject*() { return __mscorlib_System_Runtime_InteropServices_ComTypes_IConnectionPointContainer; };
						MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_InteropServices_ComTypes_IConnectionPointContainer = value; return value; };


						virtual void  EnumConnectionPoints(mscorlib::System::Runtime::InteropServices::ComTypes::IEnumConnectionPoints ppEnum);
						virtual void  FindConnectionPoint(mscorlib::System::Guid riid, mscorlib::System::Runtime::InteropServices::ComTypes::IConnectionPoint ppCP);


					
					protected:
						MonoObject *__mscorlib_System_Runtime_InteropServices_ComTypes_IConnectionPointContainer;
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
