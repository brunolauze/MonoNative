#include <mscorlib/System/Resources/mscorlib_System_Resources_IResourceReader.h>



namespace mscorlib
{
	namespace System
	{
		namespace Resources
		{

			//Public Methods
			void IResourceReader::Close()
			{
					Global::InvokeMethod("mscorlib", "System.Resources", "IResourceReader", 0, NULL, "Close", __mscorlib_System_Resources_IResourceReader, 0, NULL, NULL, NULL);
			}

			mscorlib::System::Collections::IDictionaryEnumerator* IResourceReader::GetEnumerator()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Resources", "IResourceReader", 0, NULL, "GetEnumerator", __mscorlib_System_Resources_IResourceReader, 0, NULL, NULL, NULL);
					return new mscorlib::System::Collections::IDictionaryEnumerator(__result__);
			}


		}
	}
}
