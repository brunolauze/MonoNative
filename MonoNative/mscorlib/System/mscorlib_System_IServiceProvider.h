#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_ISERVICEPROVIDER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_ISERVICEPROVIDER_H

#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		

	}
}
namespace mscorlib
{
	namespace System
	{

		class IServiceProvider
		{
		public:
			IServiceProvider(MonoObject *nativeObject)
			{
				__mscorlib_System_IServiceProvider = nativeObject;
			};
		
			~IServiceProvider()
			{
			};
		

			IServiceProvider & operator=(IServiceProvider &value) { __mscorlib_System_IServiceProvider = value.__mscorlib_System_IServiceProvider; return value; };
			operator MonoObject*() { return __mscorlib_System_IServiceProvider; };
			MonoObject* operator=(MonoObject* value) { __mscorlib_System_IServiceProvider = value; return value; };


			virtual mscorlib::System::Object  GetService(mscorlib::System::Type serviceType);


		
		protected:
			MonoObject *__mscorlib_System_IServiceProvider;
		
		private:
		
		};

	}
}
#endif
