#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RESOURCES_RESOURCEMANAGER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RESOURCES_RESOURCEMANAGER_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Assembly.h>

namespace mscorlib
{
	namespace System
	{
		namespace Globalization
		{

			class CultureInfo;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Resources
		{

			class ResourceSet;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace IO
		{

			class UnmanagedMemoryStream;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Resources
		{

			class ResourceManager
				: public mscorlib::System::Object
			{
			public:
				ResourceManager(mscorlib::System::Type resourceSource)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Resources.ResourceManager"))
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Type");
					__parameters__[0] = (MonoObject*)resourceSource;
					__native_object__ = Global::New("mscorlib", "System.Resources", "ResourceManager", 1, __parameter_types__, __parameters__);
				};
			
				ResourceManager(mscorlib::System::String baseName, mscorlib::System::Reflection::Assembly assembly)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Resources.ResourceManager"))
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType("mscorlib", "System.Reflection", "Assembly");
					__parameters__[0] = (MonoObject*)baseName;
					__parameters__[1] = (MonoObject*)assembly;
					__native_object__ = Global::New("mscorlib", "System.Resources", "ResourceManager", 2, __parameter_types__, __parameters__);
				};
			
				ResourceManager(mscorlib::System::String baseName, mscorlib::System::Reflection::Assembly assembly, mscorlib::System::Type usingResourceSet)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Resources.ResourceManager"))
				{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType("mscorlib", "System.Reflection", "Assembly");
					__parameter_types__[2] = Global::GetType("mscorlib", "System", "Type");
					__parameters__[0] = (MonoObject*)baseName;
					__parameters__[1] = (MonoObject*)assembly;
					__parameters__[2] = (MonoObject*)usingResourceSet;
					__native_object__ = Global::New("mscorlib", "System.Resources", "ResourceManager", 3, __parameter_types__, __parameters__);
				};
			
				ResourceManager(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				{
				};
			
				ResourceManager(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				{
				};
			
				~ResourceManager()
				{
				};
			

				ResourceManager & operator=(ResourceManager &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				static mscorlib::System::Resources::ResourceManager  CreateFileBasedResourceManager(mscorlib::System::String baseName, mscorlib::System::String resourceDir, mscorlib::System::Type usingResourceSet);
				static mscorlib::System::Resources::ResourceManager  CreateFileBasedResourceManager(const char *baseName, const char *resourceDir, mscorlib::System::Type usingResourceSet);
				virtual mscorlib::System::Object  GetObject(mscorlib::System::String name);
				virtual mscorlib::System::Object  GetObject(const char *name);
				virtual mscorlib::System::Object  GetObject(mscorlib::System::String name, mscorlib::System::Globalization::CultureInfo culture);
				virtual mscorlib::System::Object  GetObject(const char *name, mscorlib::System::Globalization::CultureInfo culture);
				virtual mscorlib::System::Resources::ResourceSet  GetResourceSet(mscorlib::System::Globalization::CultureInfo culture, mscorlib::System::Boolean createIfNotExists, mscorlib::System::Boolean tryParents);
				virtual mscorlib::System::String  GetString(mscorlib::System::String name);
				virtual mscorlib::System::String  GetString(const char *name);
				virtual mscorlib::System::String  GetString(mscorlib::System::String name, mscorlib::System::Globalization::CultureInfo culture);
				virtual mscorlib::System::String  GetString(const char *name, mscorlib::System::Globalization::CultureInfo culture);
				mscorlib::System::IO::UnmanagedMemoryStream  GetStream(mscorlib::System::String name);
				mscorlib::System::IO::UnmanagedMemoryStream  GetStream(const char *name);
				mscorlib::System::IO::UnmanagedMemoryStream  GetStream(mscorlib::System::String name, mscorlib::System::Globalization::CultureInfo culture);
				mscorlib::System::IO::UnmanagedMemoryStream  GetStream(const char *name, mscorlib::System::Globalization::CultureInfo culture);
				virtual void  ReleaseAllResources();
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_BaseName)) mscorlib::System::String  BaseName;
				__declspec(property(get=get_IgnoreCase, put=set_IgnoreCase)) mscorlib::System::Boolean  IgnoreCase;
				__declspec(property(get=get_ResourceSetType)) mscorlib::System::Type  ResourceSetType;

				//Public Static Fields
				static Property<mscorlib::System::Int32 , mscorlib::System::Resources::ResourceManager> HeaderVersionNumber;
				static Property<mscorlib::System::Int32 , mscorlib::System::Resources::ResourceManager> MagicNumber;

				//Get Set Properties Methods
				//	Get:BaseName
				mscorlib::System::String  get_BaseName() const;

				//	Get/Set:IgnoreCase
				mscorlib::System::Boolean  get_IgnoreCase() const;
				void set_IgnoreCase(mscorlib::System::Boolean  value);

				//	Get:ResourceSetType
				mscorlib::System::Type  get_ResourceSetType() const;

				//	Get/Set:HeaderVersionNumber
				static mscorlib::System::Int32  get_HeaderVersionNumber();
				static void set_HeaderVersionNumber(mscorlib::System::Int32  value);

				//	Get/Set:MagicNumber
				static mscorlib::System::Int32  get_MagicNumber();
				static void set_MagicNumber(mscorlib::System::Int32  value);

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
