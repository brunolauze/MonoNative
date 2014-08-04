#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_BINDINGFLAGS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_BINDINGFLAGS_H
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class BindingFlags
			{
			public:
				enum __ENUM__
				{
					Default = 0,
					IgnoreCase = 1,
					DeclaredOnly = 2,
					Instance = 4,
					Static = 8,
					Public = 16,
					NonPublic = 32,
					FlattenHierarchy = 64,
					InvokeMethod = 256,
					CreateInstance = 512,
					GetField = 1024,
					SetField = 2048,
					GetProperty = 4096,
					SetProperty = 8192,
					PutDispProperty = 16384,
					PutRefDispProperty = 32768,
					ExactBinding = 65536,
					SuppressChangeType = 131072,
					OptionalParamBinding = 262144,
					IgnoreReturn = 16777216,
				};
			};

		}
	}
}
#endif
