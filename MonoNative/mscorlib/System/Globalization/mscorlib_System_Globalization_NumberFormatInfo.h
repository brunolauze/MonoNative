#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_ICloneable.h>
#include <mscorlib/System/mscorlib_System_IFormatProvider.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_DigitShapes.h>

namespace mscorlib
{
	namespace System
	{

		class String;
		class Type;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Globalization
		{

			class NumberFormatInfo
				: public mscorlib::System::Object
				, public virtual mscorlib::System::ICloneable
				, public virtual mscorlib::System::IFormatProvider
			{
			public:
				NumberFormatInfo()
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Globalization.NumberFormatInfo"))
				, mscorlib::System::ICloneable(NULL)
				, mscorlib::System::IFormatProvider(NULL)
				{
					__native_object__ = Global::New("mscorlib", "System.Globalization", "NumberFormatInfo");
				};
			
				NumberFormatInfo(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				, mscorlib::System::ICloneable(NULL)
				, mscorlib::System::IFormatProvider(NULL)
				{
				};
			
				NumberFormatInfo(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				, mscorlib::System::ICloneable(nativeObject)
				, mscorlib::System::IFormatProvider(nativeObject)
				{
				};
			
				~NumberFormatInfo()
				{
				};
			

				NumberFormatInfo & operator=(NumberFormatInfo &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual mscorlib::System::Object  GetFormat(mscorlib::System::Type formatType);
				virtual mscorlib::System::Object  Clone();
				static mscorlib::System::Globalization::NumberFormatInfo  ReadOnly(mscorlib::System::Globalization::NumberFormatInfo nfi);
				static mscorlib::System::Globalization::NumberFormatInfo  GetInstance(mscorlib::System::IFormatProvider formatProvider);
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_CurrencyDecimalDigits, put=set_CurrencyDecimalDigits)) mscorlib::System::Int32  CurrencyDecimalDigits;
				__declspec(property(get=get_CurrencyDecimalSeparator, put=set_CurrencyDecimalSeparator)) mscorlib::System::String  CurrencyDecimalSeparator;
				__declspec(property(get=get_CurrencyGroupSeparator, put=set_CurrencyGroupSeparator)) mscorlib::System::String  CurrencyGroupSeparator;
				__declspec(property(get=get_CurrencyGroupSizes, put=set_CurrencyGroupSizes)) std::vector<mscorlib::System::Int32*>  CurrencyGroupSizes;
				__declspec(property(get=get_CurrencyNegativePattern, put=set_CurrencyNegativePattern)) mscorlib::System::Int32  CurrencyNegativePattern;
				__declspec(property(get=get_CurrencyPositivePattern, put=set_CurrencyPositivePattern)) mscorlib::System::Int32  CurrencyPositivePattern;
				__declspec(property(get=get_CurrencySymbol, put=set_CurrencySymbol)) mscorlib::System::String  CurrencySymbol;
				__declspec(property(get=get_IsReadOnly)) mscorlib::System::Boolean  IsReadOnly;
				__declspec(property(get=get_NaNSymbol, put=set_NaNSymbol)) mscorlib::System::String  NaNSymbol;
				__declspec(property(get=get_NativeDigits, put=set_NativeDigits)) std::vector<mscorlib::System::String*>  NativeDigits;
				__declspec(property(get=get_DigitSubstitution, put=set_DigitSubstitution)) mscorlib::System::Globalization::DigitShapes::__ENUM__  DigitSubstitution;
				__declspec(property(get=get_NegativeInfinitySymbol, put=set_NegativeInfinitySymbol)) mscorlib::System::String  NegativeInfinitySymbol;
				__declspec(property(get=get_NegativeSign, put=set_NegativeSign)) mscorlib::System::String  NegativeSign;
				__declspec(property(get=get_NumberDecimalDigits, put=set_NumberDecimalDigits)) mscorlib::System::Int32  NumberDecimalDigits;
				__declspec(property(get=get_NumberDecimalSeparator, put=set_NumberDecimalSeparator)) mscorlib::System::String  NumberDecimalSeparator;
				__declspec(property(get=get_NumberGroupSeparator, put=set_NumberGroupSeparator)) mscorlib::System::String  NumberGroupSeparator;
				__declspec(property(get=get_NumberGroupSizes, put=set_NumberGroupSizes)) std::vector<mscorlib::System::Int32*>  NumberGroupSizes;
				__declspec(property(get=get_NumberNegativePattern, put=set_NumberNegativePattern)) mscorlib::System::Int32  NumberNegativePattern;
				__declspec(property(get=get_PercentDecimalDigits, put=set_PercentDecimalDigits)) mscorlib::System::Int32  PercentDecimalDigits;
				__declspec(property(get=get_PercentDecimalSeparator, put=set_PercentDecimalSeparator)) mscorlib::System::String  PercentDecimalSeparator;
				__declspec(property(get=get_PercentGroupSeparator, put=set_PercentGroupSeparator)) mscorlib::System::String  PercentGroupSeparator;
				__declspec(property(get=get_PercentGroupSizes, put=set_PercentGroupSizes)) std::vector<mscorlib::System::Int32*>  PercentGroupSizes;
				__declspec(property(get=get_PercentNegativePattern, put=set_PercentNegativePattern)) mscorlib::System::Int32  PercentNegativePattern;
				__declspec(property(get=get_PercentPositivePattern, put=set_PercentPositivePattern)) mscorlib::System::Int32  PercentPositivePattern;
				__declspec(property(get=get_PercentSymbol, put=set_PercentSymbol)) mscorlib::System::String  PercentSymbol;
				__declspec(property(get=get_PerMilleSymbol, put=set_PerMilleSymbol)) mscorlib::System::String  PerMilleSymbol;
				__declspec(property(get=get_PositiveInfinitySymbol, put=set_PositiveInfinitySymbol)) mscorlib::System::String  PositiveInfinitySymbol;
				__declspec(property(get=get_PositiveSign, put=set_PositiveSign)) mscorlib::System::String  PositiveSign;

				//Public Static Properties
				static Property<mscorlib::System::Globalization::NumberFormatInfo , mscorlib::System::Globalization::NumberFormatInfo> CurrentInfo;
				static Property<mscorlib::System::Globalization::NumberFormatInfo , mscorlib::System::Globalization::NumberFormatInfo> InvariantInfo;

				//Get Set Properties Methods
				//	Get/Set:CurrencyDecimalDigits
				mscorlib::System::Int32  get_CurrencyDecimalDigits() const;
				void set_CurrencyDecimalDigits(mscorlib::System::Int32  value);

				//	Get/Set:CurrencyDecimalSeparator
				mscorlib::System::String  get_CurrencyDecimalSeparator() const;
				void set_CurrencyDecimalSeparator(mscorlib::System::String  value);

				//	Get/Set:CurrencyGroupSeparator
				mscorlib::System::String  get_CurrencyGroupSeparator() const;
				void set_CurrencyGroupSeparator(mscorlib::System::String  value);

				//	Get/Set:CurrencyGroupSizes
				std::vector<mscorlib::System::Int32*>  get_CurrencyGroupSizes() const;
				void set_CurrencyGroupSizes(std::vector<mscorlib::System::Int32*>  value);

				//	Get/Set:CurrencyNegativePattern
				mscorlib::System::Int32  get_CurrencyNegativePattern() const;
				void set_CurrencyNegativePattern(mscorlib::System::Int32  value);

				//	Get/Set:CurrencyPositivePattern
				mscorlib::System::Int32  get_CurrencyPositivePattern() const;
				void set_CurrencyPositivePattern(mscorlib::System::Int32  value);

				//	Get/Set:CurrencySymbol
				mscorlib::System::String  get_CurrencySymbol() const;
				void set_CurrencySymbol(mscorlib::System::String  value);

				//	Get:IsReadOnly
				mscorlib::System::Boolean  get_IsReadOnly() const;

				//	Get/Set:NaNSymbol
				mscorlib::System::String  get_NaNSymbol() const;
				void set_NaNSymbol(mscorlib::System::String  value);

				//	Get/Set:NativeDigits
				std::vector<mscorlib::System::String*>  get_NativeDigits() const;
				void set_NativeDigits(std::vector<mscorlib::System::String*>  value);

				//	Get/Set:DigitSubstitution
				mscorlib::System::Globalization::DigitShapes::__ENUM__  get_DigitSubstitution() const;
				void set_DigitSubstitution(mscorlib::System::Globalization::DigitShapes::__ENUM__  value);

				//	Get/Set:NegativeInfinitySymbol
				mscorlib::System::String  get_NegativeInfinitySymbol() const;
				void set_NegativeInfinitySymbol(mscorlib::System::String  value);

				//	Get/Set:NegativeSign
				mscorlib::System::String  get_NegativeSign() const;
				void set_NegativeSign(mscorlib::System::String  value);

				//	Get/Set:NumberDecimalDigits
				mscorlib::System::Int32  get_NumberDecimalDigits() const;
				void set_NumberDecimalDigits(mscorlib::System::Int32  value);

				//	Get/Set:NumberDecimalSeparator
				mscorlib::System::String  get_NumberDecimalSeparator() const;
				void set_NumberDecimalSeparator(mscorlib::System::String  value);

				//	Get/Set:NumberGroupSeparator
				mscorlib::System::String  get_NumberGroupSeparator() const;
				void set_NumberGroupSeparator(mscorlib::System::String  value);

				//	Get/Set:NumberGroupSizes
				std::vector<mscorlib::System::Int32*>  get_NumberGroupSizes() const;
				void set_NumberGroupSizes(std::vector<mscorlib::System::Int32*>  value);

				//	Get/Set:NumberNegativePattern
				mscorlib::System::Int32  get_NumberNegativePattern() const;
				void set_NumberNegativePattern(mscorlib::System::Int32  value);

				//	Get/Set:PercentDecimalDigits
				mscorlib::System::Int32  get_PercentDecimalDigits() const;
				void set_PercentDecimalDigits(mscorlib::System::Int32  value);

				//	Get/Set:PercentDecimalSeparator
				mscorlib::System::String  get_PercentDecimalSeparator() const;
				void set_PercentDecimalSeparator(mscorlib::System::String  value);

				//	Get/Set:PercentGroupSeparator
				mscorlib::System::String  get_PercentGroupSeparator() const;
				void set_PercentGroupSeparator(mscorlib::System::String  value);

				//	Get/Set:PercentGroupSizes
				std::vector<mscorlib::System::Int32*>  get_PercentGroupSizes() const;
				void set_PercentGroupSizes(std::vector<mscorlib::System::Int32*>  value);

				//	Get/Set:PercentNegativePattern
				mscorlib::System::Int32  get_PercentNegativePattern() const;
				void set_PercentNegativePattern(mscorlib::System::Int32  value);

				//	Get/Set:PercentPositivePattern
				mscorlib::System::Int32  get_PercentPositivePattern() const;
				void set_PercentPositivePattern(mscorlib::System::Int32  value);

				//	Get/Set:PercentSymbol
				mscorlib::System::String  get_PercentSymbol() const;
				void set_PercentSymbol(mscorlib::System::String  value);

				//	Get/Set:PerMilleSymbol
				mscorlib::System::String  get_PerMilleSymbol() const;
				void set_PerMilleSymbol(mscorlib::System::String  value);

				//	Get/Set:PositiveInfinitySymbol
				mscorlib::System::String  get_PositiveInfinitySymbol() const;
				void set_PositiveInfinitySymbol(mscorlib::System::String  value);

				//	Get/Set:PositiveSign
				mscorlib::System::String  get_PositiveSign() const;
				void set_PositiveSign(mscorlib::System::String  value);

				//Get Set Static Properties Methods
				//	Get:CurrentInfo
				static mscorlib::System::Globalization::NumberFormatInfo  get_CurrentInfo();
				static void set_CurrentInfo(mscorlib::System::Globalization::NumberFormatInfo  value);

				//	Get:InvariantInfo
				static mscorlib::System::Globalization::NumberFormatInfo  get_InvariantInfo();
				static void set_InvariantInfo(mscorlib::System::Globalization::NumberFormatInfo  value);


			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
