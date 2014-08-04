#include <mscorlib/System/Globalization/mscorlib_System_Globalization_RegionInfo.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Globalization
		{

			//Public Methods
			mscorlib::System::Boolean RegionInfo::Equals(mscorlib::System::Object value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "RegionInfo", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 RegionInfo::GetHashCode()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "RegionInfo", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::String RegionInfo::ToString()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "RegionInfo", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
			}

			//Get Set Properties Methods
			//	Get:CurrencyEnglishName
			mscorlib::System::String  RegionInfo::get_CurrencyEnglishName()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "RegionInfo", 0, NULL, "get_CurrencyEnglishName", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:CurrencySymbol
			mscorlib::System::String  RegionInfo::get_CurrencySymbol()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "RegionInfo", 0, NULL, "get_CurrencySymbol", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:DisplayName
			mscorlib::System::String  RegionInfo::get_DisplayName()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "RegionInfo", 0, NULL, "get_DisplayName", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:EnglishName
			mscorlib::System::String  RegionInfo::get_EnglishName()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "RegionInfo", 0, NULL, "get_EnglishName", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:GeoId
			mscorlib::System::Int32  RegionInfo::get_GeoId()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "RegionInfo", 0, NULL, "get_GeoId", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}


			//	Get:IsMetric
			mscorlib::System::Boolean  RegionInfo::get_IsMetric()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "RegionInfo", 0, NULL, "get_IsMetric", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:ISOCurrencySymbol
			mscorlib::System::String  RegionInfo::get_ISOCurrencySymbol()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "RegionInfo", 0, NULL, "get_ISOCurrencySymbol", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:NativeName
			mscorlib::System::String  RegionInfo::get_NativeName()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "RegionInfo", 0, NULL, "get_NativeName", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:CurrencyNativeName
			mscorlib::System::String  RegionInfo::get_CurrencyNativeName()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "RegionInfo", 0, NULL, "get_CurrencyNativeName", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:Name
			mscorlib::System::String  RegionInfo::get_Name()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "RegionInfo", 0, NULL, "get_Name", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:ThreeLetterISORegionName
			mscorlib::System::String  RegionInfo::get_ThreeLetterISORegionName()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "RegionInfo", 0, NULL, "get_ThreeLetterISORegionName", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:ThreeLetterWindowsRegionName
			mscorlib::System::String  RegionInfo::get_ThreeLetterWindowsRegionName()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "RegionInfo", 0, NULL, "get_ThreeLetterWindowsRegionName", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:TwoLetterISORegionName
			mscorlib::System::String  RegionInfo::get_TwoLetterISORegionName()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "RegionInfo", 0, NULL, "get_TwoLetterISORegionName", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//Get Set Static Properties Methods
			//	Get:CurrentRegion
			mscorlib::System::Globalization::RegionInfo  RegionInfo::get_CurrentRegion()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "RegionInfo", 0, NULL, "get_CurrentRegion", NullMonoObject, 0, NULL, NULL, NULL);
				return mscorlib::System::Globalization::RegionInfo(__result__);
			}




		}
	}
}
