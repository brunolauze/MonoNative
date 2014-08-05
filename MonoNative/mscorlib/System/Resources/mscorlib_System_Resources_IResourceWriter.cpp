#include <mscorlib/System/Resources/mscorlib_System_Resources_IResourceWriter.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Byte.h>



namespace mscorlib
{
	namespace System
	{
		namespace Resources
		{

			//Public Methods
			void IResourceWriter::AddResource(mscorlib::System::String name, std::vector<mscorlib::System::Byte*> value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(value).name()))->eklass);
					__parameters__[0] = mono_string_new(Global::GetDomain(), name);
					__parameters__[1] = Global::FromArray<mscorlib::System::Byte*>(value, typeid(mscorlib::System::Byte).name());
					Global::InvokeMethod("mscorlib", "System.Resources", "IResourceWriter", 0, NULL, "AddResource", __mscorlib_System_Resources_IResourceWriter, 2, __parameter_types__, __parameters__, NULL);
			}

			void IResourceWriter::AddResource(const char *name, std::vector<mscorlib::System::Byte*> value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(value).name()))->eklass);
					__parameters__[0] = mono_string_new(Global::GetDomain(), name);
					__parameters__[1] = Global::FromArray<mscorlib::System::Byte*>(value, typeid(mscorlib::System::Byte).name());
					Global::InvokeMethod("mscorlib", "System.Resources", "IResourceWriter", 0, NULL, "AddResource", __mscorlib_System_Resources_IResourceWriter, 2, __parameter_types__, __parameters__, NULL);
			}

			void IResourceWriter::AddResource(mscorlib::System::String name, mscorlib::System::Object value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), name);
					__parameters__[1] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Resources", "IResourceWriter", 0, NULL, "AddResource", __mscorlib_System_Resources_IResourceWriter, 2, __parameter_types__, __parameters__, NULL);
			}

			void IResourceWriter::AddResource(const char *name, mscorlib::System::Object value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), name);
					__parameters__[1] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Resources", "IResourceWriter", 0, NULL, "AddResource", __mscorlib_System_Resources_IResourceWriter, 2, __parameter_types__, __parameters__, NULL);
			}

			void IResourceWriter::AddResource(mscorlib::System::String name, mscorlib::System::String value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), name);
					__parameters__[1] = mono_string_new(Global::GetDomain(), value);
					Global::InvokeMethod("mscorlib", "System.Resources", "IResourceWriter", 0, NULL, "AddResource", __mscorlib_System_Resources_IResourceWriter, 2, __parameter_types__, __parameters__, NULL);
			}

			void IResourceWriter::AddResource(const char *name, const char *value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), name);
					__parameters__[1] = mono_string_new(Global::GetDomain(), value);
					Global::InvokeMethod("mscorlib", "System.Resources", "IResourceWriter", 0, NULL, "AddResource", __mscorlib_System_Resources_IResourceWriter, 2, __parameter_types__, __parameters__, NULL);
			}

			void IResourceWriter::Close()
			{
					Global::InvokeMethod("mscorlib", "System.Resources", "IResourceWriter", 0, NULL, "Close", __mscorlib_System_Resources_IResourceWriter, 0, NULL, NULL, NULL);
			}

			void IResourceWriter::Generate()
			{
					Global::InvokeMethod("mscorlib", "System.Resources", "IResourceWriter", 0, NULL, "Generate", __mscorlib_System_Resources_IResourceWriter, 0, NULL, NULL, NULL);
			}


		}
	}
}
