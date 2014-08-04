#include <mscorlib/System/Resources/mscorlib_System_Resources_ResourceSet.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Resources
		{

			//Public Methods
			void ResourceSet::Close()
			{
					Global::InvokeMethod("mscorlib", "System.Resources", "ResourceSet", 0, NULL, "Close", __native_object__, 0, NULL, NULL, NULL);
			}

			void ResourceSet::Dispose()
			{
					Global::InvokeMethod("mscorlib", "System.Resources", "ResourceSet", 0, NULL, "Dispose", __native_object__, 0, NULL, NULL, NULL);
			}

			mscorlib::System::Type ResourceSet::GetDefaultReader()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Resources", "ResourceSet", 0, NULL, "GetDefaultReader", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
			}

			mscorlib::System::Type ResourceSet::GetDefaultWriter()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Resources", "ResourceSet", 0, NULL, "GetDefaultWriter", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
			}

			mscorlib::System::Collections::IDictionaryEnumerator* ResourceSet::GetEnumerator()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Resources", "ResourceSet", 0, NULL, "GetEnumerator", __native_object__, 0, NULL, NULL, NULL);
					return new mscorlib::System::Collections::IDictionaryEnumerator(__result__);
			}

			mscorlib::System::Object ResourceSet::GetObject(mscorlib::System::String name)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameters__[0] = (MonoObject*)name;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Resources", "ResourceSet", 0, NULL, "GetObject", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Object(__result__);
			}

			mscorlib::System::Object ResourceSet::GetObject(mscorlib::System::String name, mscorlib::System::Boolean ignoreCase)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameter_types__[1] = Global::GetType(typeid(ignoreCase).name());
					__parameters__[0] = (MonoObject*)name;
					__parameters__[1] = reinterpret_cast<void*>(ignoreCase);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Resources", "ResourceSet", 0, NULL, "GetObject", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Object(__result__);
			}

			mscorlib::System::String ResourceSet::GetString(mscorlib::System::String name)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameters__[0] = (MonoObject*)name;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Resources", "ResourceSet", 0, NULL, "GetString", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::String ResourceSet::GetString(mscorlib::System::String name, mscorlib::System::Boolean ignoreCase)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameter_types__[1] = Global::GetType(typeid(ignoreCase).name());
					__parameters__[0] = (MonoObject*)name;
					__parameters__[1] = reinterpret_cast<void*>(ignoreCase);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Resources", "ResourceSet", 0, NULL, "GetString", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}


		}
	}
}
