#include <mscorlib/System/Resources/mscorlib_System_Resources_ResourceManager.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_CultureInfo.h>
#include <mscorlib/System/Resources/mscorlib_System_Resources_ResourceSet.h>
#include <mscorlib/System/IO/mscorlib_System_IO_UnmanagedMemoryStream.h>



namespace mscorlib
{
	namespace System
	{
		namespace Resources
		{

			//Public Methods
			mscorlib::System::Resources::ResourceManager ResourceManager::CreateFileBasedResourceManager(mscorlib::System::String baseName, mscorlib::System::String resourceDir, mscorlib::System::Type usingResourceSet)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(baseName).name());
					__parameter_types__[1] = Global::GetType(typeid(resourceDir).name());
					__parameter_types__[2] = Global::GetType(typeid(usingResourceSet).name());
					__parameters__[0] = (MonoObject*)baseName;
					__parameters__[1] = (MonoObject*)resourceDir;
					__parameters__[2] = (MonoObject*)usingResourceSet;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Resources", "ResourceManager", 0, NULL, "CreateFileBasedResourceManager", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Resources::ResourceManager(__result__);
			}

			mscorlib::System::Resources::ResourceManager ResourceManager::CreateFileBasedResourceManager(const char *baseName, const char *resourceDir, mscorlib::System::Type usingResourceSet)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[2] = Global::GetType(typeid(usingResourceSet).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), baseName);
					__parameters__[1] = mono_string_new(Global::GetDomain(), resourceDir);
					__parameters__[2] = (MonoObject*)usingResourceSet;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Resources", "ResourceManager", 0, NULL, "CreateFileBasedResourceManager", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Resources::ResourceManager(__result__);
			}

			mscorlib::System::Object ResourceManager::GetObject(mscorlib::System::String name)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameters__[0] = (MonoObject*)name;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Resources", "ResourceManager", 0, NULL, "GetObject", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Object(__result__);
			}

			mscorlib::System::Object ResourceManager::GetObject(const char *name)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), name);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Resources", "ResourceManager", 0, NULL, "GetObject", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Object(__result__);
			}

			mscorlib::System::Object ResourceManager::GetObject(mscorlib::System::String name, mscorlib::System::Globalization::CultureInfo culture)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameter_types__[1] = Global::GetType(typeid(culture).name());
					__parameters__[0] = (MonoObject*)name;
					__parameters__[1] = (MonoObject*)culture;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Resources", "ResourceManager", 0, NULL, "GetObject", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Object(__result__);
			}

			mscorlib::System::Object ResourceManager::GetObject(const char *name, mscorlib::System::Globalization::CultureInfo culture)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType(typeid(culture).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), name);
					__parameters__[1] = (MonoObject*)culture;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Resources", "ResourceManager", 0, NULL, "GetObject", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Object(__result__);
			}

			mscorlib::System::Resources::ResourceSet ResourceManager::GetResourceSet(mscorlib::System::Globalization::CultureInfo culture, mscorlib::System::Boolean createIfNotExists, mscorlib::System::Boolean tryParents)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(culture).name());
					__parameter_types__[1] = Global::GetType(typeid(createIfNotExists).name());
					__parameter_types__[2] = Global::GetType(typeid(tryParents).name());
					__parameters__[0] = (MonoObject*)culture;
					__parameters__[1] = reinterpret_cast<void*>(createIfNotExists);
					__parameters__[2] = reinterpret_cast<void*>(tryParents);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Resources", "ResourceManager", 0, NULL, "GetResourceSet", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Resources::ResourceSet(__result__);
			}

			mscorlib::System::String ResourceManager::GetString(mscorlib::System::String name)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameters__[0] = (MonoObject*)name;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Resources", "ResourceManager", 0, NULL, "GetString", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::String ResourceManager::GetString(const char *name)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), name);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Resources", "ResourceManager", 0, NULL, "GetString", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::String ResourceManager::GetString(mscorlib::System::String name, mscorlib::System::Globalization::CultureInfo culture)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameter_types__[1] = Global::GetType(typeid(culture).name());
					__parameters__[0] = (MonoObject*)name;
					__parameters__[1] = (MonoObject*)culture;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Resources", "ResourceManager", 0, NULL, "GetString", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::String ResourceManager::GetString(const char *name, mscorlib::System::Globalization::CultureInfo culture)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType(typeid(culture).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), name);
					__parameters__[1] = (MonoObject*)culture;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Resources", "ResourceManager", 0, NULL, "GetString", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::IO::UnmanagedMemoryStream ResourceManager::GetStream(mscorlib::System::String name)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameters__[0] = (MonoObject*)name;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Resources", "ResourceManager", 0, NULL, "GetStream", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::IO::UnmanagedMemoryStream(__result__);
			}

			mscorlib::System::IO::UnmanagedMemoryStream ResourceManager::GetStream(const char *name)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), name);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Resources", "ResourceManager", 0, NULL, "GetStream", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::IO::UnmanagedMemoryStream(__result__);
			}

			mscorlib::System::IO::UnmanagedMemoryStream ResourceManager::GetStream(mscorlib::System::String name, mscorlib::System::Globalization::CultureInfo culture)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameter_types__[1] = Global::GetType(typeid(culture).name());
					__parameters__[0] = (MonoObject*)name;
					__parameters__[1] = (MonoObject*)culture;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Resources", "ResourceManager", 0, NULL, "GetStream", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::IO::UnmanagedMemoryStream(__result__);
			}

			mscorlib::System::IO::UnmanagedMemoryStream ResourceManager::GetStream(const char *name, mscorlib::System::Globalization::CultureInfo culture)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType(typeid(culture).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), name);
					__parameters__[1] = (MonoObject*)culture;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Resources", "ResourceManager", 0, NULL, "GetStream", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::IO::UnmanagedMemoryStream(__result__);
			}

			void ResourceManager::ReleaseAllResources()
			{
					Global::InvokeMethod("mscorlib", "System.Resources", "ResourceManager", 0, NULL, "ReleaseAllResources", __native_object__, 0, NULL, NULL, NULL);
			}

			//Get Set Properties Methods
			//	Get:BaseName
			mscorlib::System::String  ResourceManager::get_BaseName() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Resources", "ResourceManager", 0, NULL, "get_BaseName", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get/Set:IgnoreCase
			mscorlib::System::Boolean  ResourceManager::get_IgnoreCase() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Resources", "ResourceManager", 0, NULL, "get_IgnoreCase", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			void ResourceManager::set_IgnoreCase(mscorlib::System::Boolean  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = reinterpret_cast<void*>(value);
				Global::InvokeMethod("mscorlib", "System.Resources", "ResourceManager", 0, NULL, "set_IgnoreCase", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get:ResourceSetType
			mscorlib::System::Type  ResourceManager::get_ResourceSetType() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Resources", "ResourceManager", 0, NULL, "get_ResourceSetType", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Type(__result__);
			}


				//	Get/Set:HeaderVersionNumber
			mscorlib::System::Int32 ResourceManager::get_HeaderVersionNumber()
			{
				return Global::GetFieldInt32Value("mscorlib", "System.Resources", "ResourceManager", 0, NULL, "HeaderVersionNumber");
			}

			void ResourceManager::set_HeaderVersionNumber(mscorlib::System::Int32  value)
			{
				throw;
			}

				//	Get/Set:MagicNumber
			mscorlib::System::Int32 ResourceManager::get_MagicNumber()
			{
				return Global::GetFieldInt32Value("mscorlib", "System.Resources", "ResourceManager", 0, NULL, "MagicNumber");
			}

			void ResourceManager::set_MagicNumber(mscorlib::System::Int32  value)
			{
				throw;
			}


		}
	}
}
