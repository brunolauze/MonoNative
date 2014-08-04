#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_METADATA_W3CXSD2001_ISOAPXSD_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_METADATA_W3CXSD2001_ISOAPXSD_H

#include <Global.h>

namespace mscorlib
{
	namespace System
	{

		class String;
		

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
				namespace Metadata
				{
					namespace W3cXsd2001
					{

						class ISoapXsd
						{
						public:
							ISoapXsd(MonoObject *nativeObject)
							{
								__mscorlib_System_Runtime_Remoting_Metadata_W3cXsd2001_ISoapXsd = nativeObject;
							};
						
							~ISoapXsd()
							{
							};
						

							ISoapXsd & operator=(ISoapXsd &value) { __mscorlib_System_Runtime_Remoting_Metadata_W3cXsd2001_ISoapXsd = value.__mscorlib_System_Runtime_Remoting_Metadata_W3cXsd2001_ISoapXsd; return value; };
							operator MonoObject*() { return __mscorlib_System_Runtime_Remoting_Metadata_W3cXsd2001_ISoapXsd; };
							MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_Remoting_Metadata_W3cXsd2001_ISoapXsd = value; return value; };


							virtual mscorlib::System::String  GetXsdType();


						
						protected:
							MonoObject *__mscorlib_System_Runtime_Remoting_Metadata_W3cXsd2001_ISoapXsd;
						
						private:
						
						};

					}
				}
			}
		}
	}
}
#endif
