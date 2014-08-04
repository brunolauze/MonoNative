#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_GLOBALIZATION_CULTUREINFO_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_GLOBALIZATION_CULTUREINFO_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_IFormatProvider.h>
#include <mscorlib/System/mscorlib_System_ICloneable.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_CultureTypes.h>

namespace mscorlib
{
	namespace System
	{
		namespace Globalization
		{

			class Calendar;
			class TextInfo;
			class CompareInfo;
			class NumberFormatInfo;
			class DateTimeFormatInfo;
			

		}
	}
}
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

			class CultureInfo
				: public mscorlib::System::Object
				, public virtual mscorlib::System::IFormatProvider
				, public virtual mscorlib::System::ICloneable
			{
			public:
				CultureInfo(mscorlib::System::Int32 culture)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Globalization.CultureInfo"))
				, mscorlib::System::IFormatProvider(NULL)
				, mscorlib::System::ICloneable(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
					__parameters__[0] = &culture;
					__native_object__ = Global::New("mscorlib", "System.Globalization", "CultureInfo", 1, __parameter_types__, __parameters__);
				};
			
				CultureInfo(mscorlib::System::Int32 culture, mscorlib::System::Boolean useUserOverride)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Globalization.CultureInfo"))
				, mscorlib::System::IFormatProvider(NULL)
				, mscorlib::System::ICloneable(NULL)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Boolean");
					__parameters__[0] = &culture;
					__parameters__[1] = reinterpret_cast<void*>(useUserOverride);
					__native_object__ = Global::New("mscorlib", "System.Globalization", "CultureInfo", 2, __parameter_types__, __parameters__);
				};
			
				CultureInfo(mscorlib::System::String name)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Globalization.CultureInfo"))
				, mscorlib::System::IFormatProvider(NULL)
				, mscorlib::System::ICloneable(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = (MonoObject*)name;
					__native_object__ = Global::New("mscorlib", "System.Globalization", "CultureInfo", 1, __parameter_types__, __parameters__);
				};
			
				CultureInfo(mscorlib::System::String name, mscorlib::System::Boolean useUserOverride)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Globalization.CultureInfo"))
				, mscorlib::System::IFormatProvider(NULL)
				, mscorlib::System::ICloneable(NULL)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Boolean");
					__parameters__[0] = (MonoObject*)name;
					__parameters__[1] = reinterpret_cast<void*>(useUserOverride);
					__native_object__ = Global::New("mscorlib", "System.Globalization", "CultureInfo", 2, __parameter_types__, __parameters__);
				};
			
				CultureInfo(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				, mscorlib::System::IFormatProvider(NULL)
				, mscorlib::System::ICloneable(NULL)
				{
				};
			
				CultureInfo(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				, mscorlib::System::IFormatProvider(nativeObject)
				, mscorlib::System::ICloneable(nativeObject)
				{
				};
			
				~CultureInfo()
				{
				};
			

				CultureInfo & operator=(CultureInfo &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				mscorlib::System::Globalization::CultureInfo  GetConsoleFallbackUICulture();
				void  ClearCachedData();
				virtual mscorlib::System::Object  Clone();
				virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object value) override;
				static std::vector<mscorlib::System::Globalization::CultureInfo*>  GetCultures(mscorlib::System::Globalization::CultureTypes::__ENUM__ types);
				virtual mscorlib::System::Int32  GetHashCode() override;
				static mscorlib::System::Globalization::CultureInfo  ReadOnly(mscorlib::System::Globalization::CultureInfo ci);
				virtual mscorlib::System::String  ToString() override;
				virtual mscorlib::System::Object  GetFormat(mscorlib::System::Type formatType);
				static mscorlib::System::Globalization::CultureInfo  GetCultureInfo(mscorlib::System::Int32 culture);
				static mscorlib::System::Globalization::CultureInfo  GetCultureInfo(mscorlib::System::String name);
				static mscorlib::System::Globalization::CultureInfo  GetCultureInfo(mscorlib::System::String name, mscorlib::System::String altName);
				static mscorlib::System::Globalization::CultureInfo  GetCultureInfoByIetfLanguageTag(mscorlib::System::String name);
				static mscorlib::System::Globalization::CultureInfo  CreateSpecificCulture(mscorlib::System::String name);
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_CultureTypes)) mscorlib::System::Globalization::CultureTypes::__ENUM__  CultureTypes;
				__declspec(property(get=get_IetfLanguageTag)) mscorlib::System::String  IetfLanguageTag;
				__declspec(property(get=get_KeyboardLayoutId)) mscorlib::System::Int32  KeyboardLayoutId;
				__declspec(property(get=get_LCID)) mscorlib::System::Int32  LCID;
				__declspec(property(get=get_Name)) mscorlib::System::String  Name;
				__declspec(property(get=get_NativeName)) mscorlib::System::String  NativeName;
				__declspec(property(get=get_Calendar)) mscorlib::System::Globalization::Calendar  Calendar;
				__declspec(property(get=get_OptionalCalendars)) std::vector<mscorlib::System::Globalization::Calendar*>  OptionalCalendars;
				__declspec(property(get=get_Parent)) mscorlib::System::Globalization::CultureInfo  Parent;
				__declspec(property(get=get_TextInfo)) mscorlib::System::Globalization::TextInfo  TextInfo;
				__declspec(property(get=get_ThreeLetterISOLanguageName)) mscorlib::System::String  ThreeLetterISOLanguageName;
				__declspec(property(get=get_ThreeLetterWindowsLanguageName)) mscorlib::System::String  ThreeLetterWindowsLanguageName;
				__declspec(property(get=get_TwoLetterISOLanguageName)) mscorlib::System::String  TwoLetterISOLanguageName;
				__declspec(property(get=get_UseUserOverride)) mscorlib::System::Boolean  UseUserOverride;
				__declspec(property(get=get_CompareInfo)) mscorlib::System::Globalization::CompareInfo  CompareInfo;
				__declspec(property(get=get_IsNeutralCulture)) mscorlib::System::Boolean  IsNeutralCulture;
				__declspec(property(get=get_NumberFormat, put=set_NumberFormat)) mscorlib::System::Globalization::NumberFormatInfo  NumberFormat;
				__declspec(property(get=get_DateTimeFormat, put=set_DateTimeFormat)) mscorlib::System::Globalization::DateTimeFormatInfo  DateTimeFormat;
				__declspec(property(get=get_DisplayName)) mscorlib::System::String  DisplayName;
				__declspec(property(get=get_EnglishName)) mscorlib::System::String  EnglishName;
				__declspec(property(get=get_IsReadOnly)) mscorlib::System::Boolean  IsReadOnly;

				//Public Static Properties
				static Property<mscorlib::System::Globalization::CultureInfo> InvariantCulture;
				static Property<mscorlib::System::Globalization::CultureInfo> CurrentCulture;
				static Property<mscorlib::System::Globalization::CultureInfo> CurrentUICulture;
				static Property<mscorlib::System::Globalization::CultureInfo> InstalledUICulture;
				static Property<mscorlib::System::Globalization::CultureInfo> DefaultThreadCurrentCulture;
				static Property<mscorlib::System::Globalization::CultureInfo> DefaultThreadCurrentUICulture;

				//Get Set Properties Methods
				//	Get:CultureTypes
				mscorlib::System::Globalization::CultureTypes::__ENUM__  get_CultureTypes();

				//	Get:IetfLanguageTag
				mscorlib::System::String  get_IetfLanguageTag();

				//	Get:KeyboardLayoutId
				mscorlib::System::Int32  get_KeyboardLayoutId();

				//	Get:LCID
				mscorlib::System::Int32  get_LCID();

				//	Get:Name
				mscorlib::System::String  get_Name();

				//	Get:NativeName
				mscorlib::System::String  get_NativeName();

				//	Get:Calendar
				mscorlib::System::Globalization::Calendar  get_Calendar();

				//	Get:OptionalCalendars
				std::vector<mscorlib::System::Globalization::Calendar*>  get_OptionalCalendars();

				//	Get:Parent
				mscorlib::System::Globalization::CultureInfo  get_Parent();

				//	Get:TextInfo
				mscorlib::System::Globalization::TextInfo  get_TextInfo();

				//	Get:ThreeLetterISOLanguageName
				mscorlib::System::String  get_ThreeLetterISOLanguageName();

				//	Get:ThreeLetterWindowsLanguageName
				mscorlib::System::String  get_ThreeLetterWindowsLanguageName();

				//	Get:TwoLetterISOLanguageName
				mscorlib::System::String  get_TwoLetterISOLanguageName();

				//	Get:UseUserOverride
				mscorlib::System::Boolean  get_UseUserOverride();

				//	Get:CompareInfo
				mscorlib::System::Globalization::CompareInfo  get_CompareInfo();

				//	Get:IsNeutralCulture
				mscorlib::System::Boolean  get_IsNeutralCulture();

				//	Get/Set:NumberFormat
				mscorlib::System::Globalization::NumberFormatInfo  get_NumberFormat();
				void set_NumberFormat(mscorlib::System::Globalization::NumberFormatInfo  value);

				//	Get/Set:DateTimeFormat
				mscorlib::System::Globalization::DateTimeFormatInfo  get_DateTimeFormat();
				void set_DateTimeFormat(mscorlib::System::Globalization::DateTimeFormatInfo  value);

				//	Get:DisplayName
				mscorlib::System::String  get_DisplayName();

				//	Get:EnglishName
				mscorlib::System::String  get_EnglishName();

				//	Get:IsReadOnly
				mscorlib::System::Boolean  get_IsReadOnly();

				//Get Set Static Properties Methods
				//	Get:InvariantCulture
				static mscorlib::System::Globalization::CultureInfo  get_InvariantCulture();

				//	Get:CurrentCulture
				static mscorlib::System::Globalization::CultureInfo  get_CurrentCulture();

				//	Get:CurrentUICulture
				static mscorlib::System::Globalization::CultureInfo  get_CurrentUICulture();

				//	Get:InstalledUICulture
				static mscorlib::System::Globalization::CultureInfo  get_InstalledUICulture();

				//	Get/Set:DefaultThreadCurrentCulture
				static mscorlib::System::Globalization::CultureInfo  get_DefaultThreadCurrentCulture();
				static void set_DefaultThreadCurrentCulture(mscorlib::System::Globalization::CultureInfo  value);

				//	Get/Set:DefaultThreadCurrentUICulture
				static mscorlib::System::Globalization::CultureInfo  get_DefaultThreadCurrentUICulture();
				static void set_DefaultThreadCurrentUICulture(mscorlib::System::Globalization::CultureInfo  value);


			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
