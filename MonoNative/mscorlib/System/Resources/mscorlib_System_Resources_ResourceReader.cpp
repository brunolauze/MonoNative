#include <mscorlib/System/Resources/mscorlib_System_Resources_ResourceReader.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Resources
		{

			//Public Methods
			void ResourceReader::Close()
			{
					Global::InvokeMethod("mscorlib", "System.Resources", "ResourceReader", 0, NULL, "Close", __native_object__, 0, NULL, NULL, NULL);
			}

			void ResourceReader::Dispose()
			{
					Global::InvokeMethod("mscorlib", "System.Resources", "ResourceReader", 0, NULL, "Dispose", __native_object__, 0, NULL, NULL, NULL);
			}

			mscorlib::System::Collections::IDictionaryEnumerator* ResourceReader::GetEnumerator()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Resources", "ResourceReader", 0, NULL, "GetEnumerator", __native_object__, 0, NULL, NULL, NULL);
					return new mscorlib::System::Collections::IDictionaryEnumerator(__result__);
			}

			void ResourceReader::GetResourceData(mscorlib::System::String resourceName, mscorlib::System::String resourceType, mscorlib::System::Byte* resourceData)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(resourceName).name());
					__parameter_types__[1] = Global::GetType(typeid(resourceType).name());
					__parameter_types__[2] = Global::GetType(typeid(resourceData).name());
					__parameters__[0] = (MonoObject*)resourceName;
					__parameters__[1] = (MonoObject*)resourceType;
					__parameters__[2] = (MonoObject*)resourceData;
					Global::InvokeMethod("mscorlib", "System.Resources", "ResourceReader", 0, NULL, "GetResourceData", __native_object__, 3, __parameter_types__, __parameters__, NULL);
			}


		}
	}
}
