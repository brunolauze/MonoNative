#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_TYPELIBIMPORTERFLAGS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_TYPELIBIMPORTERFLAGS_H
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				class TypeLibImporterFlags
				{
				public:
					enum __ENUM__
					{
						None = 0,
						PrimaryInteropAssembly = 1,
						UnsafeInterfaces = 2,
						SafeArrayAsSystemArray = 4,
						TransformDispRetVals = 8,
						PreventClassMembers = 16,
						SerializableValueClasses = 32,
						ImportAsX86 = 256,
						ImportAsX64 = 512,
						ImportAsItanium = 1024,
						ImportAsAgnostic = 2048,
						ReflectionOnlyLoading = 4096,
						NoDefineVersionResource = 8192,
					};
				};

			}
		}
	}
}
#endif
