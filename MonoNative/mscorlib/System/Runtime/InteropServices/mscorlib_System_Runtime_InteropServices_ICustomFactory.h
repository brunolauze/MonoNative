#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_ICUSTOMFACTORY_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_ICUSTOMFACTORY_H

#include <Global.h>

namespace mscorlib
{
	namespace System
	{

		class MarshalByRefObject;
		class Type;
		

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

				class ICustomFactory
				{
				public:
					ICustomFactory(MonoObject *nativeObject)
					{
						__mscorlib_System_Runtime_InteropServices_ICustomFactory = nativeObject;
					};
				
					~ICustomFactory()
					{
					};
				

					ICustomFactory & operator=(ICustomFactory &value) { __mscorlib_System_Runtime_InteropServices_ICustomFactory = value.__mscorlib_System_Runtime_InteropServices_ICustomFactory; return value; };
					operator MonoObject*() { return __mscorlib_System_Runtime_InteropServices_ICustomFactory; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_InteropServices_ICustomFactory = value; return value; };


					virtual mscorlib::System::MarshalByRefObject  CreateInstance(mscorlib::System::Type serverType);


				
				protected:
					MonoObject *__mscorlib_System_Runtime_InteropServices_ICustomFactory;
				
				private:
				
				};

			}
		}
	}
}
#endif
