#include <mscorlib/System/mscorlib_System_CharEnumerator.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{

		//Public Methods
		void CharEnumerator::Dispose()
		{
				Global::InvokeMethod("mscorlib", "System", "CharEnumerator", 0, NULL, "Dispose", __native_object__, 0, NULL, NULL, NULL);
		}

		mscorlib::System::Object CharEnumerator::Clone()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "CharEnumerator", 0, NULL, "Clone", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Object(__result__);
		}

		mscorlib::System::Boolean CharEnumerator::MoveNext()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "CharEnumerator", 0, NULL, "MoveNext", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		void CharEnumerator::Reset()
		{
				Global::InvokeMethod("mscorlib", "System", "CharEnumerator", 0, NULL, "Reset", __native_object__, 0, NULL, NULL, NULL);
		}

		//Get Set Properties Methods
		//	Get:Current
		mscorlib::System::Char  CharEnumerator::get_Current() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "CharEnumerator", 0, NULL, "get_Current", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Char*)mono_object_unbox(__result__);
		}



	}
}
