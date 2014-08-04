#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RESOURCES_IRESOURCEWRITER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RESOURCES_IRESOURCEWRITER_H

#include <mscorlib/System/mscorlib_System_IDisposable.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class String;
		class Byte;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Resources
		{

			class IResourceWriter
				: public virtual mscorlib::System::IDisposable
			{
			public:
				IResourceWriter(MonoObject *nativeObject)
				: mscorlib::System::IDisposable(nativeObject)
				{
				};
			
				~IResourceWriter()
				{
				};
			

				__declspec(property(get=get___mscorlib_System_Resources_IResourceWriter, put=set___mscorlib_System_Resources_IResourceWriter)) MonoObject *__mscorlib_System_Resources_IResourceWriter;
				MonoObject* get___mscorlib_System_Resources_IResourceWriter()
				{
					return IResourceWriter::__mscorlib_System_IDisposable;
				}
				void set___mscorlib_System_Resources_IResourceWriter(MonoObject *value)
				{
					IResourceWriter::__mscorlib_System_IDisposable = value;
				}
				IResourceWriter & operator=(IResourceWriter &value) { __mscorlib_System_Resources_IResourceWriter = value.__mscorlib_System_Resources_IResourceWriter; return value; };
				operator MonoObject*() { return __mscorlib_System_Resources_IResourceWriter; };
				MonoObject* operator=(MonoObject* value) { __mscorlib_System_Resources_IResourceWriter = value; return value; };


				virtual void  AddResource(mscorlib::System::String name, std::vector<mscorlib::System::Byte*> value);
				virtual void  AddResource(mscorlib::System::String name, mscorlib::System::Object value);
				virtual void  AddResource(mscorlib::System::String name, mscorlib::System::String value);
				virtual void  Close();
				virtual void  Generate();


			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
