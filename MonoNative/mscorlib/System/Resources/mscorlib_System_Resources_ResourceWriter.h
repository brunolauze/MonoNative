#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RESOURCES_RESOURCEWRITER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RESOURCES_RESOURCEWRITER_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/IO/mscorlib_System_IO_Stream.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_IDisposable.h>
#include <mscorlib/System/Resources/mscorlib_System_Resources_IResourceWriter.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		class Byte;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Resources
		{

			class ResourceWriter
				: public mscorlib::System::Object
				, public virtual mscorlib::System::IDisposable
				, public virtual mscorlib::System::Resources::IResourceWriter
			{
			public:
				ResourceWriter(mscorlib::System::IO::Stream stream)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Resources.ResourceWriter"))
				, mscorlib::System::IDisposable(NULL)
				, mscorlib::System::Resources::IResourceWriter(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.IO", "Stream");
					__parameters__[0] = (MonoObject*)stream;
					__native_object__ = Global::New("mscorlib", "System.Resources", "ResourceWriter", 1, __parameter_types__, __parameters__);
				};
			
				ResourceWriter(mscorlib::System::String fileName)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Resources.ResourceWriter"))
				, mscorlib::System::IDisposable(NULL)
				, mscorlib::System::Resources::IResourceWriter(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = (MonoObject*)fileName;
					__native_object__ = Global::New("mscorlib", "System.Resources", "ResourceWriter", 1, __parameter_types__, __parameters__);
				};
			
				ResourceWriter(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				, mscorlib::System::IDisposable(NULL)
				, mscorlib::System::Resources::IResourceWriter(NULL)
				{
				};
			
				ResourceWriter(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				, mscorlib::System::IDisposable(nativeObject)
				, mscorlib::System::Resources::IResourceWriter(nativeObject)
				{
				};
			
				~ResourceWriter()
				{
				};
			

				ResourceWriter & operator=(ResourceWriter &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual void  AddResource(mscorlib::System::String name, std::vector<mscorlib::System::Byte*> value);
				virtual void  AddResource(mscorlib::System::String name, mscorlib::System::Object value);
				virtual void  AddResource(mscorlib::System::String name, mscorlib::System::String value);
				void  AddResource(mscorlib::System::String name, mscorlib::System::IO::Stream value);
				void  AddResource(mscorlib::System::String name, mscorlib::System::IO::Stream value, mscorlib::System::Boolean closeAfterWrite);
				virtual void  Close();
				virtual void  Dispose();
				void  AddResourceData(mscorlib::System::String name, mscorlib::System::String typeName, std::vector<mscorlib::System::Byte*> serializedData);
				virtual void  Generate();
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_TypeNameConverter, put=set_TypeNameConverter)) mscorlib::Callback<mscorlib::System::String  (mscorlib::System::Type )>  TypeNameConverter;

				//Get Set Properties Methods
				//	Get/Set:TypeNameConverter
				mscorlib::Callback<mscorlib::System::String  (mscorlib::System::Type )>  get_TypeNameConverter();
				void set_TypeNameConverter(mscorlib::Callback<mscorlib::System::String  (mscorlib::System::Type )>  value);

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
