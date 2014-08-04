#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMINTERFACETYPE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMINTERFACETYPE_H
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				class ComInterfaceType
				{
				public:
					enum __ENUM__
					{
						InterfaceIsDual = 0,
						InterfaceIsIUnknown = 1,
						InterfaceIsIDispatch = 2,
						InterfaceIsIInspectable = 3,
					};
				};

			}
		}
	}
}
#endif
