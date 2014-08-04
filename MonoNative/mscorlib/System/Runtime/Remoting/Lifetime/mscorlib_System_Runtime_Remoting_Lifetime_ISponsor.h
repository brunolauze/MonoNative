#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_LIFETIME_ISPONSOR_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_LIFETIME_ISPONSOR_H

#include <Global.h>

namespace mscorlib
{
	namespace System
	{

		class TimeSpan;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Remoting
			{
				namespace Lifetime
				{

					class ILease;
					

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
			namespace Remoting
			{
				namespace Lifetime
				{

					class ISponsor
					{
					public:
						ISponsor(MonoObject *nativeObject)
						{
							__mscorlib_System_Runtime_Remoting_Lifetime_ISponsor = nativeObject;
						};
					
						~ISponsor()
						{
						};
					

						ISponsor & operator=(ISponsor &value) { __mscorlib_System_Runtime_Remoting_Lifetime_ISponsor = value.__mscorlib_System_Runtime_Remoting_Lifetime_ISponsor; return value; };
						operator MonoObject*() { return __mscorlib_System_Runtime_Remoting_Lifetime_ISponsor; };
						MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_Remoting_Lifetime_ISponsor = value; return value; };


						virtual mscorlib::System::TimeSpan  Renewal(mscorlib::System::Runtime::Remoting::Lifetime::ILease lease);


					
					protected:
						MonoObject *__mscorlib_System_Runtime_Remoting_Lifetime_ISponsor;
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
