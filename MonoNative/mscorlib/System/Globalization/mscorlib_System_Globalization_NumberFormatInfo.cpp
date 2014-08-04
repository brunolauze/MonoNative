#include <mscorlib/System/Globalization/mscorlib_System_Globalization_NumberFormatInfo.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Globalization
		{

			//Public Methods
			mscorlib::System::Object NumberFormatInfo::GetFormat(mscorlib::System::Type formatType)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(formatType).name());
					__parameters__[0] = (MonoObject*)formatType;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "NumberFormatInfo", 0, NULL, "GetFormat", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Object(__result__);
			}

			mscorlib::System::Object NumberFormatInfo::Clone()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "NumberFormatInfo", 0, NULL, "Clone", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
			}

			mscorlib::System::Globalization::NumberFormatInfo NumberFormatInfo::ReadOnly(mscorlib::System::Globalization::NumberFormatInfo nfi)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(nfi).name());
					__parameters__[0] = (MonoObject*)nfi;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "NumberFormatInfo", 0, NULL, "ReadOnly", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Globalization::NumberFormatInfo(__result__);
			}

			mscorlib::System::Globalization::NumberFormatInfo NumberFormatInfo::GetInstance(mscorlib::System::IFormatProvider formatProvider)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(formatProvider).name());
					__parameters__[0] = (MonoObject*)formatProvider;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "NumberFormatInfo", 0, NULL, "GetInstance", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Globalization::NumberFormatInfo(__result__);
			}

			//Get Set Properties Methods
			//	Get/Set:CurrencyDecimalDigits
			mscorlib::System::Int32  NumberFormatInfo::get_CurrencyDecimalDigits()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "NumberFormatInfo", 0, NULL, "get_CurrencyDecimalDigits", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			void NumberFormatInfo::set_CurrencyDecimalDigits(mscorlib::System::Int32  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				Global::InvokeMethod("mscorlib", "System.Globalization", "NumberFormatInfo", 0, NULL, "set_CurrencyDecimalDigits", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:CurrencyDecimalSeparator
			mscorlib::System::String  NumberFormatInfo::get_CurrencyDecimalSeparator()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "NumberFormatInfo", 0, NULL, "get_CurrencyDecimalSeparator", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}

			void NumberFormatInfo::set_CurrencyDecimalSeparator(mscorlib::System::String  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Globalization", "NumberFormatInfo", 0, NULL, "set_CurrencyDecimalSeparator", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:CurrencyGroupSeparator
			mscorlib::System::String  NumberFormatInfo::get_CurrencyGroupSeparator()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "NumberFormatInfo", 0, NULL, "get_CurrencyGroupSeparator", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}

			void NumberFormatInfo::set_CurrencyGroupSeparator(mscorlib::System::String  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Globalization", "NumberFormatInfo", 0, NULL, "set_CurrencyGroupSeparator", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:CurrencyGroupSizes
			std::vector<mscorlib::System::Int32*>  NumberFormatInfo::get_CurrencyGroupSizes()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "NumberFormatInfo", 0, NULL, "get_CurrencyGroupSizes", __native_object__, 0, NULL, NULL, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::Int32*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back((mscorlib::System::Int32 *)mono_object_unbox(__array_item__));
				}
				return __array_result__;
			}

			void NumberFormatInfo::set_CurrencyGroupSizes(std::vector<mscorlib::System::Int32*>  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(value).name()))->eklass);
				__parameters__[0] = Global::FromArray<mscorlib::System::Int32*>(value, typeid(mscorlib::System::Int32).name());
				Global::InvokeMethod("mscorlib", "System.Globalization", "NumberFormatInfo", 0, NULL, "set_CurrencyGroupSizes", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:CurrencyNegativePattern
			mscorlib::System::Int32  NumberFormatInfo::get_CurrencyNegativePattern()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "NumberFormatInfo", 0, NULL, "get_CurrencyNegativePattern", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			void NumberFormatInfo::set_CurrencyNegativePattern(mscorlib::System::Int32  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				Global::InvokeMethod("mscorlib", "System.Globalization", "NumberFormatInfo", 0, NULL, "set_CurrencyNegativePattern", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:CurrencyPositivePattern
			mscorlib::System::Int32  NumberFormatInfo::get_CurrencyPositivePattern()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "NumberFormatInfo", 0, NULL, "get_CurrencyPositivePattern", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			void NumberFormatInfo::set_CurrencyPositivePattern(mscorlib::System::Int32  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				Global::InvokeMethod("mscorlib", "System.Globalization", "NumberFormatInfo", 0, NULL, "set_CurrencyPositivePattern", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:CurrencySymbol
			mscorlib::System::String  NumberFormatInfo::get_CurrencySymbol()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "NumberFormatInfo", 0, NULL, "get_CurrencySymbol", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}

			void NumberFormatInfo::set_CurrencySymbol(mscorlib::System::String  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Globalization", "NumberFormatInfo", 0, NULL, "set_CurrencySymbol", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get:IsReadOnly
			mscorlib::System::Boolean  NumberFormatInfo::get_IsReadOnly()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "NumberFormatInfo", 0, NULL, "get_IsReadOnly", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get/Set:NaNSymbol
			mscorlib::System::String  NumberFormatInfo::get_NaNSymbol()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "NumberFormatInfo", 0, NULL, "get_NaNSymbol", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}

			void NumberFormatInfo::set_NaNSymbol(mscorlib::System::String  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Globalization", "NumberFormatInfo", 0, NULL, "set_NaNSymbol", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:NativeDigits
			std::vector<mscorlib::System::String*>  NumberFormatInfo::get_NativeDigits()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "NumberFormatInfo", 0, NULL, "get_NativeDigits", __native_object__, 0, NULL, NULL, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::String*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::String (__array_item__));
				}
				return __array_result__;
			}

			void NumberFormatInfo::set_NativeDigits(std::vector<mscorlib::System::String*>  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(value).name()))->eklass);
				__parameters__[0] = Global::FromArray<mscorlib::System::String*>(value, typeid(mscorlib::System::String).name());
				Global::InvokeMethod("mscorlib", "System.Globalization", "NumberFormatInfo", 0, NULL, "set_NativeDigits", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:DigitSubstitution
			mscorlib::System::Globalization::DigitShapes::__ENUM__  NumberFormatInfo::get_DigitSubstitution()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "NumberFormatInfo", 0, NULL, "get_DigitSubstitution", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Globalization::DigitShapes::__ENUM__*)mono_object_unbox(__result__);
			}

			void NumberFormatInfo::set_DigitSubstitution(mscorlib::System::Globalization::DigitShapes::__ENUM__  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = reinterpret_cast<void*>(value);
				Global::InvokeMethod("mscorlib", "System.Globalization", "NumberFormatInfo", 0, NULL, "set_DigitSubstitution", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:NegativeInfinitySymbol
			mscorlib::System::String  NumberFormatInfo::get_NegativeInfinitySymbol()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "NumberFormatInfo", 0, NULL, "get_NegativeInfinitySymbol", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}

			void NumberFormatInfo::set_NegativeInfinitySymbol(mscorlib::System::String  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Globalization", "NumberFormatInfo", 0, NULL, "set_NegativeInfinitySymbol", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:NegativeSign
			mscorlib::System::String  NumberFormatInfo::get_NegativeSign()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "NumberFormatInfo", 0, NULL, "get_NegativeSign", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}

			void NumberFormatInfo::set_NegativeSign(mscorlib::System::String  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Globalization", "NumberFormatInfo", 0, NULL, "set_NegativeSign", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:NumberDecimalDigits
			mscorlib::System::Int32  NumberFormatInfo::get_NumberDecimalDigits()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "NumberFormatInfo", 0, NULL, "get_NumberDecimalDigits", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			void NumberFormatInfo::set_NumberDecimalDigits(mscorlib::System::Int32  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				Global::InvokeMethod("mscorlib", "System.Globalization", "NumberFormatInfo", 0, NULL, "set_NumberDecimalDigits", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:NumberDecimalSeparator
			mscorlib::System::String  NumberFormatInfo::get_NumberDecimalSeparator()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "NumberFormatInfo", 0, NULL, "get_NumberDecimalSeparator", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}

			void NumberFormatInfo::set_NumberDecimalSeparator(mscorlib::System::String  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Globalization", "NumberFormatInfo", 0, NULL, "set_NumberDecimalSeparator", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:NumberGroupSeparator
			mscorlib::System::String  NumberFormatInfo::get_NumberGroupSeparator()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "NumberFormatInfo", 0, NULL, "get_NumberGroupSeparator", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}

			void NumberFormatInfo::set_NumberGroupSeparator(mscorlib::System::String  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Globalization", "NumberFormatInfo", 0, NULL, "set_NumberGroupSeparator", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:NumberGroupSizes
			std::vector<mscorlib::System::Int32*>  NumberFormatInfo::get_NumberGroupSizes()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "NumberFormatInfo", 0, NULL, "get_NumberGroupSizes", __native_object__, 0, NULL, NULL, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::Int32*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back((mscorlib::System::Int32 *)mono_object_unbox(__array_item__));
				}
				return __array_result__;
			}

			void NumberFormatInfo::set_NumberGroupSizes(std::vector<mscorlib::System::Int32*>  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(value).name()))->eklass);
				__parameters__[0] = Global::FromArray<mscorlib::System::Int32*>(value, typeid(mscorlib::System::Int32).name());
				Global::InvokeMethod("mscorlib", "System.Globalization", "NumberFormatInfo", 0, NULL, "set_NumberGroupSizes", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:NumberNegativePattern
			mscorlib::System::Int32  NumberFormatInfo::get_NumberNegativePattern()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "NumberFormatInfo", 0, NULL, "get_NumberNegativePattern", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			void NumberFormatInfo::set_NumberNegativePattern(mscorlib::System::Int32  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				Global::InvokeMethod("mscorlib", "System.Globalization", "NumberFormatInfo", 0, NULL, "set_NumberNegativePattern", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:PercentDecimalDigits
			mscorlib::System::Int32  NumberFormatInfo::get_PercentDecimalDigits()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "NumberFormatInfo", 0, NULL, "get_PercentDecimalDigits", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			void NumberFormatInfo::set_PercentDecimalDigits(mscorlib::System::Int32  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				Global::InvokeMethod("mscorlib", "System.Globalization", "NumberFormatInfo", 0, NULL, "set_PercentDecimalDigits", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:PercentDecimalSeparator
			mscorlib::System::String  NumberFormatInfo::get_PercentDecimalSeparator()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "NumberFormatInfo", 0, NULL, "get_PercentDecimalSeparator", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}

			void NumberFormatInfo::set_PercentDecimalSeparator(mscorlib::System::String  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Globalization", "NumberFormatInfo", 0, NULL, "set_PercentDecimalSeparator", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:PercentGroupSeparator
			mscorlib::System::String  NumberFormatInfo::get_PercentGroupSeparator()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "NumberFormatInfo", 0, NULL, "get_PercentGroupSeparator", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}

			void NumberFormatInfo::set_PercentGroupSeparator(mscorlib::System::String  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Globalization", "NumberFormatInfo", 0, NULL, "set_PercentGroupSeparator", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:PercentGroupSizes
			std::vector<mscorlib::System::Int32*>  NumberFormatInfo::get_PercentGroupSizes()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "NumberFormatInfo", 0, NULL, "get_PercentGroupSizes", __native_object__, 0, NULL, NULL, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::Int32*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back((mscorlib::System::Int32 *)mono_object_unbox(__array_item__));
				}
				return __array_result__;
			}

			void NumberFormatInfo::set_PercentGroupSizes(std::vector<mscorlib::System::Int32*>  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(value).name()))->eklass);
				__parameters__[0] = Global::FromArray<mscorlib::System::Int32*>(value, typeid(mscorlib::System::Int32).name());
				Global::InvokeMethod("mscorlib", "System.Globalization", "NumberFormatInfo", 0, NULL, "set_PercentGroupSizes", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:PercentNegativePattern
			mscorlib::System::Int32  NumberFormatInfo::get_PercentNegativePattern()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "NumberFormatInfo", 0, NULL, "get_PercentNegativePattern", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			void NumberFormatInfo::set_PercentNegativePattern(mscorlib::System::Int32  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				Global::InvokeMethod("mscorlib", "System.Globalization", "NumberFormatInfo", 0, NULL, "set_PercentNegativePattern", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:PercentPositivePattern
			mscorlib::System::Int32  NumberFormatInfo::get_PercentPositivePattern()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "NumberFormatInfo", 0, NULL, "get_PercentPositivePattern", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			void NumberFormatInfo::set_PercentPositivePattern(mscorlib::System::Int32  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				Global::InvokeMethod("mscorlib", "System.Globalization", "NumberFormatInfo", 0, NULL, "set_PercentPositivePattern", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:PercentSymbol
			mscorlib::System::String  NumberFormatInfo::get_PercentSymbol()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "NumberFormatInfo", 0, NULL, "get_PercentSymbol", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}

			void NumberFormatInfo::set_PercentSymbol(mscorlib::System::String  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Globalization", "NumberFormatInfo", 0, NULL, "set_PercentSymbol", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:PerMilleSymbol
			mscorlib::System::String  NumberFormatInfo::get_PerMilleSymbol()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "NumberFormatInfo", 0, NULL, "get_PerMilleSymbol", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}

			void NumberFormatInfo::set_PerMilleSymbol(mscorlib::System::String  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Globalization", "NumberFormatInfo", 0, NULL, "set_PerMilleSymbol", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:PositiveInfinitySymbol
			mscorlib::System::String  NumberFormatInfo::get_PositiveInfinitySymbol()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "NumberFormatInfo", 0, NULL, "get_PositiveInfinitySymbol", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}

			void NumberFormatInfo::set_PositiveInfinitySymbol(mscorlib::System::String  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Globalization", "NumberFormatInfo", 0, NULL, "set_PositiveInfinitySymbol", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:PositiveSign
			mscorlib::System::String  NumberFormatInfo::get_PositiveSign()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "NumberFormatInfo", 0, NULL, "get_PositiveSign", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}

			void NumberFormatInfo::set_PositiveSign(mscorlib::System::String  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Globalization", "NumberFormatInfo", 0, NULL, "set_PositiveSign", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//Get Set Static Properties Methods
			//	Get:CurrentInfo
			mscorlib::System::Globalization::NumberFormatInfo  NumberFormatInfo::get_CurrentInfo()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "NumberFormatInfo", 0, NULL, "get_CurrentInfo", NullMonoObject, 0, NULL, NULL, NULL);
				return mscorlib::System::Globalization::NumberFormatInfo(__result__);
			}


			//	Get:InvariantInfo
			mscorlib::System::Globalization::NumberFormatInfo  NumberFormatInfo::get_InvariantInfo()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "NumberFormatInfo", 0, NULL, "get_InvariantInfo", NullMonoObject, 0, NULL, NULL, NULL);
				return mscorlib::System::Globalization::NumberFormatInfo(__result__);
			}




		}
	}
}
