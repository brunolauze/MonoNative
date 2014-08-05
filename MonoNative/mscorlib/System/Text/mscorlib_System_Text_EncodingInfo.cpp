#include <mscorlib/System/Text/mscorlib_System_Text_EncodingInfo.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Text/mscorlib_System_Text_Encoding.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Text
		{

			//Public Methods
			mscorlib::System::Boolean EncodingInfo::Equals(mscorlib::System::Object value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "EncodingInfo", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 EncodingInfo::GetHashCode()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "EncodingInfo", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Text::Encoding EncodingInfo::GetEncoding()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "EncodingInfo", 0, NULL, "GetEncoding", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Text::Encoding(__result__);
			}

			//Get Set Properties Methods
			//	Get:CodePage
			mscorlib::System::Int32  EncodingInfo::get_CodePage() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "EncodingInfo", 0, NULL, "get_CodePage", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}


			//	Get:DisplayName
			mscorlib::System::String  EncodingInfo::get_DisplayName() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "EncodingInfo", 0, NULL, "get_DisplayName", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:Name
			mscorlib::System::String  EncodingInfo::get_Name() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "EncodingInfo", 0, NULL, "get_Name", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}



		}
	}
}
