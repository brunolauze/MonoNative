#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_UCOMICONNECTIONPOINT_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_UCOMICONNECTIONPOINT_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_UCOMIEnumConnections.h>

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

				class UCOMIConnectionPointContainer;
				

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

				class UCOMIConnectionPoint
				{
				public:
					UCOMIConnectionPoint(MonoObject *nativeObject)
					{
						__mscorlib_System_Runtime_InteropServices_UCOMIConnectionPoint = nativeObject;
					};
				
					~UCOMIConnectionPoint()
					{
					};
				

					UCOMIConnectionPoint & operator=(UCOMIConnectionPoint &value) { __mscorlib_System_Runtime_InteropServices_UCOMIConnectionPoint = value.__mscorlib_System_Runtime_InteropServices_UCOMIConnectionPoint; return value; };
					operator MonoObject*() { return __mscorlib_System_Runtime_InteropServices_UCOMIConnectionPoint; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_InteropServices_UCOMIConnectionPoint = value; return value; };


					virtual void  GetConnectionInterface(mscorlib::System::Guid pIID);
					virtual void  GetConnectionPointContainer(mscorlib::System::Runtime::InteropServices::UCOMIConnectionPointContainer ppCPC);
					virtual void  Advise(mscorlib::System::Object pUnkSink, mscorlib::System::Int32 pdwCookie);
					virtual void  Unadvise(mscorlib::System::Int32 dwCookie);
					virtual void  EnumConnections(mscorlib::System::Runtime::InteropServices::UCOMIEnumConnections ppEnum);


				
				protected:
					MonoObject *__mscorlib_System_Runtime_InteropServices_UCOMIConnectionPoint;
				
				private:
				
				};

			}
		}
	}
}
#endif
