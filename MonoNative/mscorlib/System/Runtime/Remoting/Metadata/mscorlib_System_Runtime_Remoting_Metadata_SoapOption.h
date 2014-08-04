#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_METADATA_SOAPOPTION_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_METADATA_SOAPOPTION_H
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Remoting
			{
				namespace Metadata
				{

					class SoapOption
					{
					public:
						enum __ENUM__
						{
							None = 0,
							AlwaysIncludeTypes = 1,
							XsdString = 2,
							EmbedAll = 4,
							Option1 = 8,
							Option2 = 16,
						};
					};

				}
			}
		}
	}
}
#endif
