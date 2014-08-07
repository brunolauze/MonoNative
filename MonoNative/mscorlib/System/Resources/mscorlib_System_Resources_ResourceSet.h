#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RESOURCES_RESOURCESET_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RESOURCES_RESOURCESET_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Resources/mscorlib_System_Resources_IResourceReader.h>
#include <mscorlib/System/IO/mscorlib_System_IO_Stream.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_IDisposable.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IEnumerable.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IDictionaryEnumerator.h>

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
		namespace Resources
		{

			class ResourceSet
				: public mscorlib::System::Object
				, public virtual mscorlib::System::IDisposable
				, public virtual mscorlib::System::Collections::IEnumerable
			{
			public:
				ResourceSet(mscorlib::System::Resources::IResourceReader reader)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Resources.ResourceSet"))
				, mscorlib::System::IDisposable(NULL)
				, mscorlib::System::Collections::IEnumerable(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.Resources", "IResourceReader");
					__parameters__[0] = (MonoObject*)reader;
					__native_object__ = Global::New("mscorlib", "System.Resources", "ResourceSet", 1, __parameter_types__, __parameters__);
				};
			
				ResourceSet(mscorlib::System::IO::Stream stream)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Resources.ResourceSet"))
				, mscorlib::System::IDisposable(NULL)
				, mscorlib::System::Collections::IEnumerable(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.IO", "Stream");
					__parameters__[0] = (MonoObject*)stream;
					__native_object__ = Global::New("mscorlib", "System.Resources", "ResourceSet", 1, __parameter_types__, __parameters__);
				};
			
				ResourceSet(mscorlib::System::String fileName)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Resources.ResourceSet"))
				, mscorlib::System::IDisposable(NULL)
				, mscorlib::System::Collections::IEnumerable(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = (MonoObject*)fileName;
					__native_object__ = Global::New("mscorlib", "System.Resources", "ResourceSet", 1, __parameter_types__, __parameters__);
				};
			
				ResourceSet(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				, mscorlib::System::IDisposable(NULL)
				, mscorlib::System::Collections::IEnumerable(NULL)
				{
				};
			
				ResourceSet(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				, mscorlib::System::IDisposable(nativeObject)
				, mscorlib::System::Collections::IEnumerable(nativeObject)
				{
				};
			
				~ResourceSet()
				{
				};
			

				ResourceSet & operator=(ResourceSet &value) { __native_object__ = value.GetNativeObject(); return value; };
				bool operator==(ResourceSet &value) { return mscorlib::System::Object::Equals(value); };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual void  Close();
				virtual void  Dispose();
				virtual mscorlib::System::Type  GetDefaultReader();
				virtual mscorlib::System::Type  GetDefaultWriter();
				virtual mscorlib::System::Collections::IDictionaryEnumerator * GetEnumerator();
				virtual mscorlib::System::Object  GetObject(mscorlib::System::String name);
				virtual mscorlib::System::Object  GetObject(const char *name);
				virtual mscorlib::System::Object  GetObject(mscorlib::System::String name, mscorlib::System::Boolean ignoreCase);
				virtual mscorlib::System::Object  GetObject(const char *name, mscorlib::System::Boolean ignoreCase);
				virtual mscorlib::System::String  GetString(mscorlib::System::String name);
				virtual mscorlib::System::String  GetString(const char *name);
				virtual mscorlib::System::String  GetString(mscorlib::System::String name, mscorlib::System::Boolean ignoreCase);
				virtual mscorlib::System::String  GetString(const char *name, mscorlib::System::Boolean ignoreCase);
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
