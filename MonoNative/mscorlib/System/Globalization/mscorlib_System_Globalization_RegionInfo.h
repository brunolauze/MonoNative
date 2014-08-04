#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_GLOBALIZATION_REGIONINFO_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_GLOBALIZATION_REGIONINFO_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_String.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Globalization
		{

			class RegionInfo
				: public mscorlib::System::Object
			{
			public:
				RegionInfo(mscorlib::System::Int32 culture)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Globalization.RegionInfo"))
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
					__parameters__[0] = &culture;
					__native_object__ = Global::New("mscorlib", "System.Globalization", "RegionInfo", 1, __parameter_types__, __parameters__);
				};
			
				RegionInfo(mscorlib::System::String name)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Globalization.RegionInfo"))
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = (MonoObject*)name;
					__native_object__ = Global::New("mscorlib", "System.Globalization", "RegionInfo", 1, __parameter_types__, __parameters__);
				};
			
				RegionInfo(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				{
				};
			
				RegionInfo(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				{
				};
			
				~RegionInfo()
				{
				};
			

				RegionInfo & operator=(RegionInfo &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object value) override;
				virtual mscorlib::System::Int32  GetHashCode() override;
				virtual mscorlib::System::String  ToString() override;
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_CurrencyEnglishName)) mscorlib::System::String  CurrencyEnglishName;
				__declspec(property(get=get_CurrencySymbol)) mscorlib::System::String  CurrencySymbol;
				__declspec(property(get=get_DisplayName)) mscorlib::System::String  DisplayName;
				__declspec(property(get=get_EnglishName)) mscorlib::System::String  EnglishName;
				__declspec(property(get=get_GeoId)) mscorlib::System::Int32  GeoId;
				__declspec(property(get=get_IsMetric)) mscorlib::System::Boolean  IsMetric;
				__declspec(property(get=get_ISOCurrencySymbol)) mscorlib::System::String  ISOCurrencySymbol;
				__declspec(property(get=get_NativeName)) mscorlib::System::String  NativeName;
				__declspec(property(get=get_CurrencyNativeName)) mscorlib::System::String  CurrencyNativeName;
				__declspec(property(get=get_Name)) mscorlib::System::String  Name;
				__declspec(property(get=get_ThreeLetterISORegionName)) mscorlib::System::String  ThreeLetterISORegionName;
				__declspec(property(get=get_ThreeLetterWindowsRegionName)) mscorlib::System::String  ThreeLetterWindowsRegionName;
				__declspec(property(get=get_TwoLetterISORegionName)) mscorlib::System::String  TwoLetterISORegionName;

				//Public Static Properties
				static Property<mscorlib::System::Globalization::RegionInfo> CurrentRegion;

				//Get Set Properties Methods
				//	Get:CurrencyEnglishName
				mscorlib::System::String  get_CurrencyEnglishName();

				//	Get:CurrencySymbol
				mscorlib::System::String  get_CurrencySymbol();

				//	Get:DisplayName
				mscorlib::System::String  get_DisplayName();

				//	Get:EnglishName
				mscorlib::System::String  get_EnglishName();

				//	Get:GeoId
				mscorlib::System::Int32  get_GeoId();

				//	Get:IsMetric
				mscorlib::System::Boolean  get_IsMetric();

				//	Get:ISOCurrencySymbol
				mscorlib::System::String  get_ISOCurrencySymbol();

				//	Get:NativeName
				mscorlib::System::String  get_NativeName();

				//	Get:CurrencyNativeName
				mscorlib::System::String  get_CurrencyNativeName();

				//	Get:Name
				mscorlib::System::String  get_Name();

				//	Get:ThreeLetterISORegionName
				mscorlib::System::String  get_ThreeLetterISORegionName();

				//	Get:ThreeLetterWindowsRegionName
				mscorlib::System::String  get_ThreeLetterWindowsRegionName();

				//	Get:TwoLetterISORegionName
				mscorlib::System::String  get_TwoLetterISORegionName();

				//Get Set Static Properties Methods
				//	Get:CurrentRegion
				static mscorlib::System::Globalization::RegionInfo  get_CurrentRegion();


			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
