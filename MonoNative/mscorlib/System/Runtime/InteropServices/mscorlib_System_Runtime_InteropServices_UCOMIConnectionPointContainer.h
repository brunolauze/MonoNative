#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_UCOMICONNECTIONPOINTCONTAINER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_UCOMICONNECTIONPOINTCONTAINER_H

#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_UCOMIEnumConnectionPoints.h>

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

				class UCOMIConnectionPoint;
				

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

				class UCOMIConnectionPointContainer
				{
				public:
					UCOMIConnectionPointContainer(MonoObject *nativeObject)
					{
						__mscorlib_System_Runtime_InteropServices_UCOMIConnectionPointContainer = nativeObject;
					};
				
					~UCOMIConnectionPointContainer()
					{
					};
				

					UCOMIConnectionPointContainer & operator=(UCOMIConnectionPointContainer &value) { __mscorlib_System_Runtime_InteropServices_UCOMIConnectionPointContainer = value.__mscorlib_System_Runtime_InteropServices_UCOMIConnectionPointContainer; return value; };
					operator MonoObject*() { return __mscorlib_System_Runtime_InteropServices_UCOMIConnectionPointContainer; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_InteropServices_UCOMIConnectionPointContainer = value; return value; };


					virtual void  EnumConnectionPoints(mscorlib::System::Runtime::InteropServices::UCOMIEnumConnectionPoints ppEnum);
					virtual void  FindConnectionPoint(mscorlib::System::Guid riid, mscorlib::System::Runtime::InteropServices::UCOMIConnectionPoint ppCP);


				
				protected:
					MonoObject *__mscorlib_System_Runtime_InteropServices_UCOMIConnectionPointContainer;
				
				private:
				
				};

			}
		}
	}
}
#endif
