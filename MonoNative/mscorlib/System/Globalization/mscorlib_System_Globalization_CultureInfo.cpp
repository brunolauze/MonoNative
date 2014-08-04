#include <mscorlib/System/Globalization/mscorlib_System_Globalization_CultureInfo.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_Calendar.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_TextInfo.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_CompareInfo.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_NumberFormatInfo.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_DateTimeFormatInfo.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Globalization
		{

			//Public Methods
			mscorlib::System::Globalization::CultureInfo CultureInfo::GetConsoleFallbackUICulture()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CultureInfo", 0, NULL, "GetConsoleFallbackUICulture", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Globalization::CultureInfo(__result__);
			}

			void CultureInfo::ClearCachedData()
			{
					Global::InvokeMethod("mscorlib", "System.Globalization", "CultureInfo", 0, NULL, "ClearCachedData", __native_object__, 0, NULL, NULL, NULL);
			}

			mscorlib::System::Object CultureInfo::Clone()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CultureInfo", 0, NULL, "Clone", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
			}

			mscorlib::System::Boolean CultureInfo::Equals(mscorlib::System::Object value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CultureInfo", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			std::vector<mscorlib::System::Globalization::CultureInfo*> CultureInfo::GetCultures(mscorlib::System::Globalization::CultureTypes::__ENUM__ types)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(types).name());
					__parameters__[0] = reinterpret_cast<void*>(types);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CultureInfo", 0, NULL, "GetCultures", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::Globalization::CultureInfo*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back(new mscorlib::System::Globalization::CultureInfo (__array_item__));
					}
					return __array_result__;
			}

			mscorlib::System::Int32 CultureInfo::GetHashCode()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CultureInfo", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Globalization::CultureInfo CultureInfo::ReadOnly(mscorlib::System::Globalization::CultureInfo ci)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(ci).name());
					__parameters__[0] = (MonoObject*)ci;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CultureInfo", 0, NULL, "ReadOnly", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Globalization::CultureInfo(__result__);
			}

			mscorlib::System::String CultureInfo::ToString()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CultureInfo", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::Object CultureInfo::GetFormat(mscorlib::System::Type formatType)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(formatType).name());
					__parameters__[0] = (MonoObject*)formatType;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CultureInfo", 0, NULL, "GetFormat", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Object(__result__);
			}

			mscorlib::System::Globalization::CultureInfo CultureInfo::GetCultureInfo(mscorlib::System::Int32 culture)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(culture).name());
					__parameters__[0] = &culture;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CultureInfo", 0, NULL, "GetCultureInfo", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Globalization::CultureInfo(__result__);
			}

			mscorlib::System::Globalization::CultureInfo CultureInfo::GetCultureInfo(mscorlib::System::String name)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameters__[0] = (MonoObject*)name;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CultureInfo", 0, NULL, "GetCultureInfo", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Globalization::CultureInfo(__result__);
			}

			mscorlib::System::Globalization::CultureInfo CultureInfo::GetCultureInfo(mscorlib::System::String name, mscorlib::System::String altName)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameter_types__[1] = Global::GetType(typeid(altName).name());
					__parameters__[0] = (MonoObject*)name;
					__parameters__[1] = (MonoObject*)altName;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CultureInfo", 0, NULL, "GetCultureInfo", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Globalization::CultureInfo(__result__);
			}

			mscorlib::System::Globalization::CultureInfo CultureInfo::GetCultureInfoByIetfLanguageTag(mscorlib::System::String name)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameters__[0] = (MonoObject*)name;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CultureInfo", 0, NULL, "GetCultureInfoByIetfLanguageTag", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Globalization::CultureInfo(__result__);
			}

			mscorlib::System::Globalization::CultureInfo CultureInfo::CreateSpecificCulture(mscorlib::System::String name)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameters__[0] = (MonoObject*)name;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CultureInfo", 0, NULL, "CreateSpecificCulture", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Globalization::CultureInfo(__result__);
			}

			//Get Set Properties Methods
			//	Get:CultureTypes
			mscorlib::System::Globalization::CultureTypes::__ENUM__  CultureInfo::get_CultureTypes()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CultureInfo", 0, NULL, "get_CultureTypes", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Globalization::CultureTypes::__ENUM__*)mono_object_unbox(__result__);
			}


			//	Get:IetfLanguageTag
			mscorlib::System::String  CultureInfo::get_IetfLanguageTag()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CultureInfo", 0, NULL, "get_IetfLanguageTag", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:KeyboardLayoutId
			mscorlib::System::Int32  CultureInfo::get_KeyboardLayoutId()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CultureInfo", 0, NULL, "get_KeyboardLayoutId", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}


			//	Get:LCID
			mscorlib::System::Int32  CultureInfo::get_LCID()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CultureInfo", 0, NULL, "get_LCID", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}


			//	Get:Name
			mscorlib::System::String  CultureInfo::get_Name()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CultureInfo", 0, NULL, "get_Name", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:NativeName
			mscorlib::System::String  CultureInfo::get_NativeName()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CultureInfo", 0, NULL, "get_NativeName", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:Calendar
			mscorlib::System::Globalization::Calendar  CultureInfo::get_Calendar()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CultureInfo", 0, NULL, "get_Calendar", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Globalization::Calendar(__result__);
			}


			//	Get:OptionalCalendars
			std::vector<mscorlib::System::Globalization::Calendar*>  CultureInfo::get_OptionalCalendars()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CultureInfo", 0, NULL, "get_OptionalCalendars", __native_object__, 0, NULL, NULL, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::Globalization::Calendar*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::Globalization::Calendar (__array_item__));
				}
				return __array_result__;
			}


			//	Get:Parent
			mscorlib::System::Globalization::CultureInfo  CultureInfo::get_Parent()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CultureInfo", 0, NULL, "get_Parent", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Globalization::CultureInfo(__result__);
			}


			//	Get:TextInfo
			mscorlib::System::Globalization::TextInfo  CultureInfo::get_TextInfo()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CultureInfo", 0, NULL, "get_TextInfo", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Globalization::TextInfo(__result__);
			}


			//	Get:ThreeLetterISOLanguageName
			mscorlib::System::String  CultureInfo::get_ThreeLetterISOLanguageName()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CultureInfo", 0, NULL, "get_ThreeLetterISOLanguageName", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:ThreeLetterWindowsLanguageName
			mscorlib::System::String  CultureInfo::get_ThreeLetterWindowsLanguageName()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CultureInfo", 0, NULL, "get_ThreeLetterWindowsLanguageName", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:TwoLetterISOLanguageName
			mscorlib::System::String  CultureInfo::get_TwoLetterISOLanguageName()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CultureInfo", 0, NULL, "get_TwoLetterISOLanguageName", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:UseUserOverride
			mscorlib::System::Boolean  CultureInfo::get_UseUserOverride()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CultureInfo", 0, NULL, "get_UseUserOverride", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:CompareInfo
			mscorlib::System::Globalization::CompareInfo  CultureInfo::get_CompareInfo()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CultureInfo", 0, NULL, "get_CompareInfo", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Globalization::CompareInfo(__result__);
			}


			//	Get:IsNeutralCulture
			mscorlib::System::Boolean  CultureInfo::get_IsNeutralCulture()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CultureInfo", 0, NULL, "get_IsNeutralCulture", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get/Set:NumberFormat
			mscorlib::System::Globalization::NumberFormatInfo  CultureInfo::get_NumberFormat()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CultureInfo", 0, NULL, "get_NumberFormat", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Globalization::NumberFormatInfo(__result__);
			}

			void CultureInfo::set_NumberFormat(mscorlib::System::Globalization::NumberFormatInfo  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Globalization", "CultureInfo", 0, NULL, "set_NumberFormat", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:DateTimeFormat
			mscorlib::System::Globalization::DateTimeFormatInfo  CultureInfo::get_DateTimeFormat()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CultureInfo", 0, NULL, "get_DateTimeFormat", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Globalization::DateTimeFormatInfo(__result__);
			}

			void CultureInfo::set_DateTimeFormat(mscorlib::System::Globalization::DateTimeFormatInfo  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Globalization", "CultureInfo", 0, NULL, "set_DateTimeFormat", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get:DisplayName
			mscorlib::System::String  CultureInfo::get_DisplayName()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CultureInfo", 0, NULL, "get_DisplayName", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:EnglishName
			mscorlib::System::String  CultureInfo::get_EnglishName()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CultureInfo", 0, NULL, "get_EnglishName", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:IsReadOnly
			mscorlib::System::Boolean  CultureInfo::get_IsReadOnly()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CultureInfo", 0, NULL, "get_IsReadOnly", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//Get Set Static Properties Methods
			//	Get:InvariantCulture
			mscorlib::System::Globalization::CultureInfo  CultureInfo::get_InvariantCulture()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CultureInfo", 0, NULL, "get_InvariantCulture", NullMonoObject, 0, NULL, NULL, NULL);
				return mscorlib::System::Globalization::CultureInfo(__result__);
			}


			//	Get:CurrentCulture
			mscorlib::System::Globalization::CultureInfo  CultureInfo::get_CurrentCulture()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CultureInfo", 0, NULL, "get_CurrentCulture", NullMonoObject, 0, NULL, NULL, NULL);
				return mscorlib::System::Globalization::CultureInfo(__result__);
			}


			//	Get:CurrentUICulture
			mscorlib::System::Globalization::CultureInfo  CultureInfo::get_CurrentUICulture()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CultureInfo", 0, NULL, "get_CurrentUICulture", NullMonoObject, 0, NULL, NULL, NULL);
				return mscorlib::System::Globalization::CultureInfo(__result__);
			}


			//	Get:InstalledUICulture
			mscorlib::System::Globalization::CultureInfo  CultureInfo::get_InstalledUICulture()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CultureInfo", 0, NULL, "get_InstalledUICulture", NullMonoObject, 0, NULL, NULL, NULL);
				return mscorlib::System::Globalization::CultureInfo(__result__);
			}


			//	Get/Set:DefaultThreadCurrentCulture
			mscorlib::System::Globalization::CultureInfo  CultureInfo::get_DefaultThreadCurrentCulture()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CultureInfo", 0, NULL, "get_DefaultThreadCurrentCulture", NullMonoObject, 0, NULL, NULL, NULL);
				return mscorlib::System::Globalization::CultureInfo(__result__);
			}

			void CultureInfo::set_DefaultThreadCurrentCulture(mscorlib::System::Globalization::CultureInfo  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Globalization", "CultureInfo", 0, NULL, "set_DefaultThreadCurrentCulture", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:DefaultThreadCurrentUICulture
			mscorlib::System::Globalization::CultureInfo  CultureInfo::get_DefaultThreadCurrentUICulture()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CultureInfo", 0, NULL, "get_DefaultThreadCurrentUICulture", NullMonoObject, 0, NULL, NULL, NULL);
				return mscorlib::System::Globalization::CultureInfo(__result__);
			}

			void CultureInfo::set_DefaultThreadCurrentUICulture(mscorlib::System::Globalization::CultureInfo  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Globalization", "CultureInfo", 0, NULL, "set_DefaultThreadCurrentUICulture", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
			}




		}
	}
}
