#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RESOURCES_RESOURCEREADER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RESOURCES_RESOURCEREADER_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/IO/mscorlib_System_IO_Stream.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_IDisposable.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IEnumerable.h>
#include <mscorlib/System/Resources/mscorlib_System_Resources_IResourceReader.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IDictionaryEnumerator.h>

namespace mscorlib
{
	namespace System
	{

		class Byte;
		class Type;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Resources
		{

			class ResourceReader
				: public mscorlib::System::Object
				, public virtual mscorlib::System::IDisposable
				, public virtual mscorlib::System::Collections::IEnumerable
				, public virtual mscorlib::System::Resources::IResourceReader
			{
			public:
				ResourceReader(mscorlib::System::IO::Stream stream)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Resources.ResourceReader"))
				, mscorlib::System::IDisposable(NULL)
				, mscorlib::System::Collections::IEnumerable(NULL)
				, mscorlib::System::Resources::IResourceReader(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.IO", "Stream");
					__parameters__[0] = (MonoObject*)stream;
					__native_object__ = Global::New("mscorlib", "System.Resources", "ResourceReader", 1, __parameter_types__, __parameters__);
				};
			
				ResourceReader(mscorlib::System::String fileName)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Resources.ResourceReader"))
				, mscorlib::System::IDisposable(NULL)
				, mscorlib::System::Collections::IEnumerable(NULL)
				, mscorlib::System::Resources::IResourceReader(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = (MonoObject*)fileName;
					__native_object__ = Global::New("mscorlib", "System.Resources", "ResourceReader", 1, __parameter_types__, __parameters__);
				};
			
				ResourceReader(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				, mscorlib::System::IDisposable(NULL)
				, mscorlib::System::Collections::IEnumerable(NULL)
				, mscorlib::System::Resources::IResourceReader(NULL)
				{
				};
			
				ResourceReader(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				, mscorlib::System::IDisposable(nativeObject)
				, mscorlib::System::Collections::IEnumerable(nativeObject)
				, mscorlib::System::Resources::IResourceReader(nativeObject)
				{
				};
			
				~ResourceReader()
				{
				};
			

				ResourceReader & operator=(ResourceReader &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual void  Close();
				virtual void  Dispose();
				virtual mscorlib::System::Collections::IDictionaryEnumerator * GetEnumerator();
				void  GetResourceData(mscorlib::System::String resourceName, mscorlib::System::String resourceType, mscorlib::System::Byte* resourceData);
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
