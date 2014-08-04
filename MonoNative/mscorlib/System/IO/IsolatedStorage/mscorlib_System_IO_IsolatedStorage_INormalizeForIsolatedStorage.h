#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_IO_ISOLATEDSTORAGE_INORMALIZEFORISOLATEDSTORAGE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_IO_ISOLATEDSTORAGE_INORMALIZEFORISOLATEDSTORAGE_H

#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{
		namespace IO
		{
			namespace IsolatedStorage
			{

				class INormalizeForIsolatedStorage
				{
				public:
					INormalizeForIsolatedStorage(MonoObject *nativeObject)
					{
						__mscorlib_System_IO_IsolatedStorage_INormalizeForIsolatedStorage = nativeObject;
					};
				
					~INormalizeForIsolatedStorage()
					{
					};
				

					INormalizeForIsolatedStorage & operator=(INormalizeForIsolatedStorage &value) { __mscorlib_System_IO_IsolatedStorage_INormalizeForIsolatedStorage = value.__mscorlib_System_IO_IsolatedStorage_INormalizeForIsolatedStorage; return value; };
					operator MonoObject*() { return __mscorlib_System_IO_IsolatedStorage_INormalizeForIsolatedStorage; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_IO_IsolatedStorage_INormalizeForIsolatedStorage = value; return value; };


					virtual mscorlib::System::Object  Normalize();


				
				protected:
					MonoObject *__mscorlib_System_IO_IsolatedStorage_INormalizeForIsolatedStorage;
				
				private:
				
				};

			}
		}
	}
}
#endif
