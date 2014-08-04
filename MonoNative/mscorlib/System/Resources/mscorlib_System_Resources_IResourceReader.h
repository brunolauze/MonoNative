#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RESOURCES_IRESOURCEREADER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RESOURCES_IRESOURCEREADER_H

#include <mscorlib/System/mscorlib_System_IDisposable.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IEnumerable.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IDictionaryEnumerator.h>

namespace mscorlib
{
	namespace System
	{
		namespace Resources
		{

			class IResourceReader
				: public virtual mscorlib::System::IDisposable
				, public virtual mscorlib::System::Collections::IEnumerable
			{
			public:
				IResourceReader(MonoObject *nativeObject)
				: mscorlib::System::IDisposable(nativeObject)
				, mscorlib::System::Collections::IEnumerable(nativeObject)
				{
				};
			
				~IResourceReader()
				{
				};
			

				__declspec(property(get=get___mscorlib_System_Resources_IResourceReader, put=set___mscorlib_System_Resources_IResourceReader)) MonoObject *__mscorlib_System_Resources_IResourceReader;
				MonoObject* get___mscorlib_System_Resources_IResourceReader()
				{
					return IResourceReader::__mscorlib_System_Collections_IEnumerable;
				}
				void set___mscorlib_System_Resources_IResourceReader(MonoObject *value)
				{
					IResourceReader::__mscorlib_System_Collections_IEnumerable = value;
				}
				IResourceReader & operator=(IResourceReader &value) { __mscorlib_System_Resources_IResourceReader = value.__mscorlib_System_Resources_IResourceReader; return value; };
				operator MonoObject*() { return __mscorlib_System_Resources_IResourceReader; };
				MonoObject* operator=(MonoObject* value) { __mscorlib_System_Resources_IResourceReader = value; return value; };


				virtual void  Close();
				virtual mscorlib::System::Collections::IDictionaryEnumerator * GetEnumerator();


			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
