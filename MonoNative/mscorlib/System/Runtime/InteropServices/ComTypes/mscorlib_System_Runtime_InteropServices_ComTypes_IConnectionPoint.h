#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_ICONNECTIONPOINT_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_ICONNECTIONPOINT_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_IEnumConnections.h>

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

					class IConnectionPointContainer;
					

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

					class IConnectionPoint
					{
					public:
						IConnectionPoint(MonoObject *nativeObject)
						{
							__mscorlib_System_Runtime_InteropServices_ComTypes_IConnectionPoint = nativeObject;
						};
					
						~IConnectionPoint()
						{
						};
					

						IConnectionPoint & operator=(IConnectionPoint &value) { __mscorlib_System_Runtime_InteropServices_ComTypes_IConnectionPoint = value.__mscorlib_System_Runtime_InteropServices_ComTypes_IConnectionPoint; return value; };
						operator MonoObject*() { return __mscorlib_System_Runtime_InteropServices_ComTypes_IConnectionPoint; };
						MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_InteropServices_ComTypes_IConnectionPoint = value; return value; };


						virtual void  GetConnectionInterface(mscorlib::System::Guid pIID);
						virtual void  GetConnectionPointContainer(mscorlib::System::Runtime::InteropServices::ComTypes::IConnectionPointContainer ppCPC);
						virtual void  Advise(mscorlib::System::Object pUnkSink, mscorlib::System::Int32 pdwCookie);
						virtual void  Unadvise(mscorlib::System::Int32 dwCookie);
						virtual void  EnumConnections(mscorlib::System::Runtime::InteropServices::ComTypes::IEnumConnections ppEnum);


					
					protected:
						MonoObject *__mscorlib_System_Runtime_InteropServices_ComTypes_IConnectionPoint;
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
