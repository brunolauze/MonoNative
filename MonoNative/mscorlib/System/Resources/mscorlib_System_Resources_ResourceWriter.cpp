#include <mscorlib/System/Resources/mscorlib_System_Resources_ResourceWriter.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_Byte.h>



namespace mscorlib
{
	namespace System
	{
		namespace Resources
		{

			//Public Methods
			void ResourceWriter::AddResource(mscorlib::System::String name, std::vector<mscorlib::System::Byte*> value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(value).name()))->eklass);
					__parameters__[0] = mono_string_new(Global::GetDomain(), name);
					__parameters__[1] = Global::FromArray<mscorlib::System::Byte*>(value, typeid(mscorlib::System::Byte).name());
					Global::InvokeMethod("mscorlib", "System.Resources", "ResourceWriter", 0, NULL, "AddResource", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			void ResourceWriter::AddResource(const char *name, std::vector<mscorlib::System::Byte*> value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(value).name()))->eklass);
					__parameters__[0] = mono_string_new(Global::GetDomain(), name);
					__parameters__[1] = Global::FromArray<mscorlib::System::Byte*>(value, typeid(mscorlib::System::Byte).name());
					Global::InvokeMethod("mscorlib", "System.Resources", "ResourceWriter", 0, NULL, "AddResource", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			void ResourceWriter::AddResource(mscorlib::System::String name, mscorlib::System::Object value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), name);
					__parameters__[1] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Resources", "ResourceWriter", 0, NULL, "AddResource", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			void ResourceWriter::AddResource(const char *name, mscorlib::System::Object value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), name);
					__parameters__[1] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Resources", "ResourceWriter", 0, NULL, "AddResource", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			void ResourceWriter::AddResource(mscorlib::System::String name, mscorlib::System::String value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), name);
					__parameters__[1] = mono_string_new(Global::GetDomain(), value);
					Global::InvokeMethod("mscorlib", "System.Resources", "ResourceWriter", 0, NULL, "AddResource", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			void ResourceWriter::AddResource(const char *name, const char *value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), name);
					__parameters__[1] = mono_string_new(Global::GetDomain(), value);
					Global::InvokeMethod("mscorlib", "System.Resources", "ResourceWriter", 0, NULL, "AddResource", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			void ResourceWriter::AddResource(mscorlib::System::String name, mscorlib::System::IO::Stream value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), name);
					__parameters__[1] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Resources", "ResourceWriter", 0, NULL, "AddResource", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			void ResourceWriter::AddResource(const char *name, mscorlib::System::IO::Stream value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), name);
					__parameters__[1] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Resources", "ResourceWriter", 0, NULL, "AddResource", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			void ResourceWriter::AddResource(mscorlib::System::String name, mscorlib::System::IO::Stream value, mscorlib::System::Boolean closeAfterWrite)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameter_types__[2] = Global::GetType(typeid(closeAfterWrite).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), name);
					__parameters__[1] = (MonoObject*)value;
					__parameters__[2] = reinterpret_cast<void*>(closeAfterWrite);
					Global::InvokeMethod("mscorlib", "System.Resources", "ResourceWriter", 0, NULL, "AddResource", __native_object__, 3, __parameter_types__, __parameters__, NULL);
			}

			void ResourceWriter::AddResource(const char *name, mscorlib::System::IO::Stream value, mscorlib::System::Boolean closeAfterWrite)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameter_types__[2] = Global::GetType(typeid(closeAfterWrite).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), name);
					__parameters__[1] = (MonoObject*)value;
					__parameters__[2] = reinterpret_cast<void*>(closeAfterWrite);
					Global::InvokeMethod("mscorlib", "System.Resources", "ResourceWriter", 0, NULL, "AddResource", __native_object__, 3, __parameter_types__, __parameters__, NULL);
			}

			void ResourceWriter::Close()
			{
					Global::InvokeMethod("mscorlib", "System.Resources", "ResourceWriter", 0, NULL, "Close", __native_object__, 0, NULL, NULL, NULL);
			}

			void ResourceWriter::Dispose()
			{
					Global::InvokeMethod("mscorlib", "System.Resources", "ResourceWriter", 0, NULL, "Dispose", __native_object__, 0, NULL, NULL, NULL);
			}

			void ResourceWriter::AddResourceData(mscorlib::System::String name, mscorlib::System::String typeName, std::vector<mscorlib::System::Byte*> serializedData)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameter_types__[1] = Global::GetType(typeid(typeName).name());
					__parameter_types__[2] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(serializedData).name()))->eklass);
					__parameters__[0] = mono_string_new(Global::GetDomain(), name);
					__parameters__[1] = mono_string_new(Global::GetDomain(), typeName);
					__parameters__[2] = Global::FromArray<mscorlib::System::Byte*>(serializedData, typeid(mscorlib::System::Byte).name());
					Global::InvokeMethod("mscorlib", "System.Resources", "ResourceWriter", 0, NULL, "AddResourceData", __native_object__, 3, __parameter_types__, __parameters__, NULL);
			}

			void ResourceWriter::AddResourceData(const char *name, const char *typeName, std::vector<mscorlib::System::Byte*> serializedData)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameter_types__[1] = Global::GetType(typeid(typeName).name());
					__parameter_types__[2] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(serializedData).name()))->eklass);
					__parameters__[0] = mono_string_new(Global::GetDomain(), name);
					__parameters__[1] = mono_string_new(Global::GetDomain(), typeName);
					__parameters__[2] = Global::FromArray<mscorlib::System::Byte*>(serializedData, typeid(mscorlib::System::Byte).name());
					Global::InvokeMethod("mscorlib", "System.Resources", "ResourceWriter", 0, NULL, "AddResourceData", __native_object__, 3, __parameter_types__, __parameters__, NULL);
			}

			void ResourceWriter::Generate()
			{
					Global::InvokeMethod("mscorlib", "System.Resources", "ResourceWriter", 0, NULL, "Generate", __native_object__, 0, NULL, NULL, NULL);
			}

			//Get Set Properties Methods
			//	Get/Set:TypeNameConverter
			mscorlib::Callback<mscorlib::System::String  (mscorlib::System::Type )>  ResourceWriter::get_TypeNameConverter() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Resources", "ResourceWriter", 0, NULL, "get_TypeNameConverter", __native_object__, 0, NULL, NULL, NULL);
				void* __delegate_result__ = mono_object_unbox(__result__);
				return mscorlib::Callback<mscorlib::System::String  (mscorlib::System::Type )> ();
			}

			void ResourceWriter::set_TypeNameConverter(mscorlib::Callback<mscorlib::System::String  (mscorlib::System::Type )>  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				Global::InvokeMethod("mscorlib", "System.Resources", "ResourceWriter", 0, NULL, "set_TypeNameConverter", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}



		}
	}
}
