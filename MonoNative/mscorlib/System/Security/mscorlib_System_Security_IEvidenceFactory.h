#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_IEVIDENCEFACTORY_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_IEVIDENCEFACTORY_H

#include <Global.h>

namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Policy
			{

				class Evidence;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{

			class IEvidenceFactory
			{
			public:
				IEvidenceFactory(MonoObject *nativeObject)
				{
					__mscorlib_System_Security_IEvidenceFactory = nativeObject;
				};
			
				~IEvidenceFactory()
				{
				};
			

				IEvidenceFactory & operator=(IEvidenceFactory &value) { __mscorlib_System_Security_IEvidenceFactory = value.__mscorlib_System_Security_IEvidenceFactory; return value; };
				operator MonoObject*() { return __mscorlib_System_Security_IEvidenceFactory; };
				MonoObject* operator=(MonoObject* value) { __mscorlib_System_Security_IEvidenceFactory = value; return value; };




				//Public Properties
				__declspec(property(get=get_Evidence)) mscorlib::System::Security::Policy::Evidence  Evidence;

				//Get Set Properties Methods
				//	Get:Evidence
				mscorlib::System::Security::Policy::Evidence  get_Evidence() const;

			
			protected:
				MonoObject *__mscorlib_System_Security_IEvidenceFactory;
			
			private:
			
			};

		}
	}
}
#endif
