#include <mscorlib/System/mscorlib_System_Decimal.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_SByte.h>



namespace mscorlib
{
	namespace System
	{

		//Public Methods
		mscorlib::System::Decimal Decimal::FromOACurrency(mscorlib::System::Int64 cy)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(cy).name());
				__parameters__[0] = &cy;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Decimal", 0, NULL, "FromOACurrency", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Decimal(__result__);
		}

		std::vector<mscorlib::System::Int32*> Decimal::GetBits(mscorlib::System::Decimal d)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(d).name());
				__parameters__[0] = (MonoObject*)d;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Decimal", 0, NULL, "GetBits", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
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

		mscorlib::System::Decimal Decimal::Negate(mscorlib::System::Decimal d)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(d).name());
				__parameters__[0] = (MonoObject*)d;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Decimal", 0, NULL, "Negate", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Decimal(__result__);
		}

		mscorlib::System::Decimal Decimal::Add(mscorlib::System::Decimal d1, mscorlib::System::Decimal d2)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(d1).name());
				__parameter_types__[1] = Global::GetType(typeid(d2).name());
				__parameters__[0] = (MonoObject*)d1;
				__parameters__[1] = (MonoObject*)d2;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Decimal", 0, NULL, "Add", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Decimal(__result__);
		}

		mscorlib::System::Decimal Decimal::Subtract(mscorlib::System::Decimal d1, mscorlib::System::Decimal d2)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(d1).name());
				__parameter_types__[1] = Global::GetType(typeid(d2).name());
				__parameters__[0] = (MonoObject*)d1;
				__parameters__[1] = (MonoObject*)d2;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Decimal", 0, NULL, "Subtract", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Decimal(__result__);
		}

		mscorlib::System::Int32 Decimal::GetHashCode()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Decimal", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean Decimal::Equals(mscorlib::System::Decimal d1, mscorlib::System::Decimal d2)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(d1).name());
				__parameter_types__[1] = Global::GetType(typeid(d2).name());
				__parameters__[0] = (MonoObject*)d1;
				__parameters__[1] = (MonoObject*)d2;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Decimal", 0, NULL, "Equals", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean Decimal::Equals(mscorlib::System::Object value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Decimal", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Decimal Decimal::Floor(mscorlib::System::Decimal d)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(d).name());
				__parameters__[0] = (MonoObject*)d;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Decimal", 0, NULL, "Floor", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Decimal(__result__);
		}

		mscorlib::System::Decimal Decimal::Truncate(mscorlib::System::Decimal d)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(d).name());
				__parameters__[0] = (MonoObject*)d;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Decimal", 0, NULL, "Truncate", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Decimal(__result__);
		}

		mscorlib::System::Decimal Decimal::Round(mscorlib::System::Decimal d, mscorlib::System::Int32 decimals)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(d).name());
				__parameter_types__[1] = Global::GetType(typeid(decimals).name());
				__parameters__[0] = (MonoObject*)d;
				__parameters__[1] = &decimals;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Decimal", 0, NULL, "Round", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Decimal(__result__);
		}

		mscorlib::System::Decimal Decimal::Round(mscorlib::System::Decimal d, mscorlib::System::Int32 decimals, mscorlib::System::MidpointRounding::__ENUM__ mode)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(d).name());
				__parameter_types__[1] = Global::GetType(typeid(decimals).name());
				__parameter_types__[2] = Global::GetType(typeid(mode).name());
				__parameters__[0] = (MonoObject*)d;
				__parameters__[1] = &decimals;
				mscorlib::System::Int32 __param_mode__ = mode;
				__parameters__[2] = &__param_mode__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Decimal", 0, NULL, "Round", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Decimal(__result__);
		}

		mscorlib::System::Decimal Decimal::Round(mscorlib::System::Decimal d)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(d).name());
				__parameters__[0] = (MonoObject*)d;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Decimal", 0, NULL, "Round", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Decimal(__result__);
		}

		mscorlib::System::Decimal Decimal::Round(mscorlib::System::Decimal d, mscorlib::System::MidpointRounding::__ENUM__ mode)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(d).name());
				__parameter_types__[1] = Global::GetType(typeid(mode).name());
				__parameters__[0] = (MonoObject*)d;
				mscorlib::System::Int32 __param_mode__ = mode;
				__parameters__[1] = &__param_mode__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Decimal", 0, NULL, "Round", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Decimal(__result__);
		}

		mscorlib::System::Decimal Decimal::Multiply(mscorlib::System::Decimal d1, mscorlib::System::Decimal d2)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(d1).name());
				__parameter_types__[1] = Global::GetType(typeid(d2).name());
				__parameters__[0] = (MonoObject*)d1;
				__parameters__[1] = (MonoObject*)d2;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Decimal", 0, NULL, "Multiply", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Decimal(__result__);
		}

		mscorlib::System::Decimal Decimal::Divide(mscorlib::System::Decimal d1, mscorlib::System::Decimal d2)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(d1).name());
				__parameter_types__[1] = Global::GetType(typeid(d2).name());
				__parameters__[0] = (MonoObject*)d1;
				__parameters__[1] = (MonoObject*)d2;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Decimal", 0, NULL, "Divide", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Decimal(__result__);
		}

		mscorlib::System::Decimal Decimal::Remainder(mscorlib::System::Decimal d1, mscorlib::System::Decimal d2)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(d1).name());
				__parameter_types__[1] = Global::GetType(typeid(d2).name());
				__parameters__[0] = (MonoObject*)d1;
				__parameters__[1] = (MonoObject*)d2;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Decimal", 0, NULL, "Remainder", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Decimal(__result__);
		}

		mscorlib::System::Int32 Decimal::Compare(mscorlib::System::Decimal d1, mscorlib::System::Decimal d2)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(d1).name());
				__parameter_types__[1] = Global::GetType(typeid(d2).name());
				__parameters__[0] = (MonoObject*)d1;
				__parameters__[1] = (MonoObject*)d2;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Decimal", 0, NULL, "Compare", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 Decimal::CompareTo(mscorlib::System::Object value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Decimal", 0, NULL, "CompareTo", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 Decimal::CompareTo(mscorlib::System::Decimal value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Decimal", 0, NULL, "CompareTo", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean Decimal::Equals(mscorlib::System::Decimal value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Decimal", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Decimal Decimal::Ceiling(mscorlib::System::Decimal d)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(d).name());
				__parameters__[0] = (MonoObject*)d;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Decimal", 0, NULL, "Ceiling", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Decimal(__result__);
		}

		mscorlib::System::Decimal Decimal::Parse(mscorlib::System::String s)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(s).name());
				__parameters__[0] = (MonoObject*)s;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Decimal", 0, NULL, "Parse", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Decimal(__result__);
		}

		mscorlib::System::Decimal Decimal::Parse(const char *s)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameters__[0] = mono_string_new(Global::GetDomain(), s);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Decimal", 0, NULL, "Parse", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Decimal(__result__);
		}

		mscorlib::System::Decimal Decimal::Parse(mscorlib::System::String s, mscorlib::System::Globalization::NumberStyles::__ENUM__ style)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(s).name());
				__parameter_types__[1] = Global::GetType(typeid(style).name());
				__parameters__[0] = (MonoObject*)s;
				mscorlib::System::Int32 __param_style__ = style;
				__parameters__[1] = &__param_style__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Decimal", 0, NULL, "Parse", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Decimal(__result__);
		}

		mscorlib::System::Decimal Decimal::Parse(const char *s, mscorlib::System::Globalization::NumberStyles::__ENUM__ style)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(style).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), s);
				mscorlib::System::Int32 __param_style__ = style;
				__parameters__[1] = &__param_style__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Decimal", 0, NULL, "Parse", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Decimal(__result__);
		}

		mscorlib::System::Decimal Decimal::Parse(mscorlib::System::String s, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(s).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = (MonoObject*)s;
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Decimal", 0, NULL, "Parse", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Decimal(__result__);
		}

		mscorlib::System::Decimal Decimal::Parse(const char *s, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), s);
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Decimal", 0, NULL, "Parse", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Decimal(__result__);
		}

		mscorlib::System::Decimal Decimal::Parse(mscorlib::System::String s, mscorlib::System::Globalization::NumberStyles::__ENUM__ style, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(s).name());
				__parameter_types__[1] = Global::GetType(typeid(style).name());
				__parameter_types__[2] = Global::GetType(typeid(provider).name());
				__parameters__[0] = (MonoObject*)s;
				mscorlib::System::Int32 __param_style__ = style;
				__parameters__[1] = &__param_style__;
				__parameters__[2] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Decimal", 0, NULL, "Parse", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Decimal(__result__);
		}

		mscorlib::System::Decimal Decimal::Parse(const char *s, mscorlib::System::Globalization::NumberStyles::__ENUM__ style, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(style).name());
				__parameter_types__[2] = Global::GetType(typeid(provider).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), s);
				mscorlib::System::Int32 __param_style__ = style;
				__parameters__[1] = &__param_style__;
				__parameters__[2] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Decimal", 0, NULL, "Parse", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Decimal(__result__);
		}

		mscorlib::System::Boolean Decimal::TryParse(mscorlib::System::String s, mscorlib::System::Decimal result)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(s).name());
				__parameter_types__[1] = Global::GetType(typeid(result).name());
				__parameters__[0] = (MonoObject*)s;
				__parameters__[1] = (MonoObject*)result;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Decimal", 0, NULL, "TryParse", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean Decimal::TryParse(const char *s, mscorlib::System::Decimal result)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(result).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), s);
				__parameters__[1] = (MonoObject*)result;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Decimal", 0, NULL, "TryParse", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean Decimal::TryParse(mscorlib::System::String s, mscorlib::System::Globalization::NumberStyles::__ENUM__ style, mscorlib::System::IFormatProvider provider, mscorlib::System::Decimal result)
		{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType(typeid(s).name());
				__parameter_types__[1] = Global::GetType(typeid(style).name());
				__parameter_types__[2] = Global::GetType(typeid(provider).name());
				__parameter_types__[3] = Global::GetType(typeid(result).name());
				__parameters__[0] = (MonoObject*)s;
				mscorlib::System::Int32 __param_style__ = style;
				__parameters__[1] = &__param_style__;
				__parameters__[2] = (MonoObject*)provider;
				__parameters__[3] = (MonoObject*)result;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Decimal", 0, NULL, "TryParse", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean Decimal::TryParse(const char *s, mscorlib::System::Globalization::NumberStyles::__ENUM__ style, mscorlib::System::IFormatProvider provider, mscorlib::System::Decimal result)
		{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(style).name());
				__parameter_types__[2] = Global::GetType(typeid(provider).name());
				__parameter_types__[3] = Global::GetType(typeid(result).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), s);
				mscorlib::System::Int32 __param_style__ = style;
				__parameters__[1] = &__param_style__;
				__parameters__[2] = (MonoObject*)provider;
				__parameters__[3] = (MonoObject*)result;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Decimal", 0, NULL, "TryParse", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::TypeCode::__ENUM__ Decimal::GetTypeCode()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Decimal", 0, NULL, "GetTypeCode", __native_object__, 0, NULL, NULL, NULL);
				return static_cast<mscorlib::System::TypeCode::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
		}

		mscorlib::System::Byte Decimal::ToByte(mscorlib::System::Decimal value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Decimal", 0, NULL, "ToByte", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Byte(__result__);
		}

		mscorlib::System::Double Decimal::ToDouble(mscorlib::System::Decimal d)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(d).name());
				__parameters__[0] = (MonoObject*)d;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Decimal", 0, NULL, "ToDouble", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Double*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int16 Decimal::ToInt16(mscorlib::System::Decimal value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Decimal", 0, NULL, "ToInt16", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int16*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 Decimal::ToInt32(mscorlib::System::Decimal d)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(d).name());
				__parameters__[0] = (MonoObject*)d;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Decimal", 0, NULL, "ToInt32", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int64 Decimal::ToInt64(mscorlib::System::Decimal d)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(d).name());
				__parameters__[0] = (MonoObject*)d;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Decimal", 0, NULL, "ToInt64", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int64 Decimal::ToOACurrency(mscorlib::System::Decimal value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Decimal", 0, NULL, "ToOACurrency", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
		}

		mscorlib::System::SByte Decimal::ToSByte(mscorlib::System::Decimal value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Decimal", 0, NULL, "ToSByte", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::SByte(__result__);
		}

		mscorlib::System::Single Decimal::ToSingle(mscorlib::System::Decimal d)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(d).name());
				__parameters__[0] = (MonoObject*)d;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Decimal", 0, NULL, "ToSingle", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Single*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt16 Decimal::ToUInt16(mscorlib::System::Decimal value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Decimal", 0, NULL, "ToUInt16", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt16*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt32 Decimal::ToUInt32(mscorlib::System::Decimal d)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(d).name());
				__parameters__[0] = (MonoObject*)d;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Decimal", 0, NULL, "ToUInt32", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt32*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt64 Decimal::ToUInt64(mscorlib::System::Decimal d)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(d).name());
				__parameters__[0] = (MonoObject*)d;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Decimal", 0, NULL, "ToUInt64", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt64*)mono_object_unbox(__result__);
		}

		mscorlib::System::String Decimal::ToString(mscorlib::System::String format, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(format).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = (MonoObject*)format;
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Decimal", 0, NULL, "ToString", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String Decimal::ToString(const char *format, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), format);
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Decimal", 0, NULL, "ToString", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String Decimal::ToString()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Decimal", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String Decimal::ToString(mscorlib::System::String format)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(format).name());
				__parameters__[0] = (MonoObject*)format;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Decimal", 0, NULL, "ToString", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String Decimal::ToString(const char *format)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameters__[0] = mono_string_new(Global::GetDomain(), format);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Decimal", 0, NULL, "ToString", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String Decimal::ToString(mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(provider).name());
				__parameters__[0] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Decimal", 0, NULL, "ToString", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

			//	Get/Set:MinValue
		mscorlib::System::Decimal Decimal::get_MinValue()
		{
			return Global::GetFieldValue("mscorlib", "System", "Decimal", 0, NULL, "MinValue");
		}

		void Decimal::set_MinValue(mscorlib::System::Decimal  value)
		{
			throw;
		}

			//	Get/Set:MaxValue
		mscorlib::System::Decimal Decimal::get_MaxValue()
		{
			return Global::GetFieldValue("mscorlib", "System", "Decimal", 0, NULL, "MaxValue");
		}

		void Decimal::set_MaxValue(mscorlib::System::Decimal  value)
		{
			throw;
		}

			//	Get/Set:MinusOne
		mscorlib::System::Decimal Decimal::get_MinusOne()
		{
			return Global::GetFieldValue("mscorlib", "System", "Decimal", 0, NULL, "MinusOne");
		}

		void Decimal::set_MinusOne(mscorlib::System::Decimal  value)
		{
			throw;
		}

			//	Get/Set:One
		mscorlib::System::Decimal Decimal::get_One()
		{
			return Global::GetFieldValue("mscorlib", "System", "Decimal", 0, NULL, "One");
		}

		void Decimal::set_One(mscorlib::System::Decimal  value)
		{
			throw;
		}

			//	Get/Set:Zero
		mscorlib::System::Decimal Decimal::get_Zero()
		{
			return Global::GetFieldValue("mscorlib", "System", "Decimal", 0, NULL, "Zero");
		}

		void Decimal::set_Zero(mscorlib::System::Decimal  value)
		{
			throw;
		}


	}
}
