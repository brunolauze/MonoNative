#include <mscorlib/System/Globalization/mscorlib_System_Globalization_TextInfo.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Globalization
		{

			//Public Methods
			mscorlib::System::Boolean TextInfo::Equals(mscorlib::System::Object obj)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(obj).name());
					__parameters__[0] = (MonoObject*)obj;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "TextInfo", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 TextInfo::GetHashCode()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "TextInfo", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::String TextInfo::ToString()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "TextInfo", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::String TextInfo::ToTitleCase(mscorlib::System::String str)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(str).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), str);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "TextInfo", 0, NULL, "ToTitleCase", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::String TextInfo::ToTitleCase(const char *str)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(str).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), str);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "TextInfo", 0, NULL, "ToTitleCase", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::Char TextInfo::ToLower(mscorlib::System::Char c)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(c).name());
					__parameters__[0] = &c;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "TextInfo", 0, NULL, "ToLower", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Char*)mono_object_unbox(__result__);
			}

			mscorlib::System::Char TextInfo::ToUpper(mscorlib::System::Char c)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(c).name());
					__parameters__[0] = &c;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "TextInfo", 0, NULL, "ToUpper", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Char*)mono_object_unbox(__result__);
			}

			mscorlib::System::String TextInfo::ToLower(mscorlib::System::String str)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(str).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), str);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "TextInfo", 0, NULL, "ToLower", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::String TextInfo::ToLower(const char *str)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(str).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), str);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "TextInfo", 0, NULL, "ToLower", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::String TextInfo::ToUpper(mscorlib::System::String str)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(str).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), str);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "TextInfo", 0, NULL, "ToUpper", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::String TextInfo::ToUpper(const char *str)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(str).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), str);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "TextInfo", 0, NULL, "ToUpper", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::Globalization::TextInfo TextInfo::ReadOnly(mscorlib::System::Globalization::TextInfo textInfo)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(textInfo).name());
					__parameters__[0] = (MonoObject*)textInfo;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "TextInfo", 0, NULL, "ReadOnly", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Globalization::TextInfo(__result__);
			}

			mscorlib::System::Object TextInfo::Clone()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "TextInfo", 0, NULL, "Clone", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
			}

			//Get Set Properties Methods
			//	Get:ANSICodePage
			mscorlib::System::Int32  TextInfo::get_ANSICodePage() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "TextInfo", 0, NULL, "get_ANSICodePage", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}


			//	Get:EBCDICCodePage
			mscorlib::System::Int32  TextInfo::get_EBCDICCodePage() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "TextInfo", 0, NULL, "get_EBCDICCodePage", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}


			//	Get:LCID
			mscorlib::System::Int32  TextInfo::get_LCID() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "TextInfo", 0, NULL, "get_LCID", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}


			//	Get/Set:ListSeparator
			mscorlib::System::String  TextInfo::get_ListSeparator() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "TextInfo", 0, NULL, "get_ListSeparator", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}

			void TextInfo::set_ListSeparator(mscorlib::System::String  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				Global::InvokeMethod("mscorlib", "System.Globalization", "TextInfo", 0, NULL, "set_ListSeparator", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get:MacCodePage
			mscorlib::System::Int32  TextInfo::get_MacCodePage() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "TextInfo", 0, NULL, "get_MacCodePage", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}


			//	Get:OEMCodePage
			mscorlib::System::Int32  TextInfo::get_OEMCodePage() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "TextInfo", 0, NULL, "get_OEMCodePage", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}


			//	Get:CultureName
			mscorlib::System::String  TextInfo::get_CultureName() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "TextInfo", 0, NULL, "get_CultureName", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:IsReadOnly
			mscorlib::System::Boolean  TextInfo::get_IsReadOnly() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "TextInfo", 0, NULL, "get_IsReadOnly", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsRightToLeft
			mscorlib::System::Boolean  TextInfo::get_IsRightToLeft() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "TextInfo", 0, NULL, "get_IsRightToLeft", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}



		}
	}
}
