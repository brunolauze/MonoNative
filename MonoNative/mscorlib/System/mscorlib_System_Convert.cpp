#include <mscorlib/System/mscorlib_System_Convert.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/mscorlib_System_DateTime.h>
#include <mscorlib/System/mscorlib_System_Decimal.h>
#include <mscorlib/System/mscorlib_System_SByte.h>



namespace mscorlib
{
	namespace System
	{

		//Public Methods
		std::vector<mscorlib::System::Byte*> Convert::FromBase64CharArray(std::vector<mscorlib::System::Char*> inArray, mscorlib::System::Int32 offset, mscorlib::System::Int32 length)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(inArray).name()))->eklass);
				__parameter_types__[1] = Global::GetType(typeid(offset).name());
				__parameter_types__[2] = Global::GetType(typeid(length).name());
				__parameters__[0] = Global::FromArray<mscorlib::System::Char*>(inArray, typeid(mscorlib::System::Char).name());
				__parameters__[1] = &offset;
				__parameters__[2] = &length;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "FromBase64CharArray", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::Byte*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::Byte (__array_item__));
				}
				return __array_result__;
		}

		std::vector<mscorlib::System::Byte*> Convert::FromBase64String(mscorlib::System::String s)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(s).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), s);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "FromBase64String", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::Byte*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::Byte (__array_item__));
				}
				return __array_result__;
		}

		std::vector<mscorlib::System::Byte*> Convert::FromBase64String(const char *s)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(s).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), s);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "FromBase64String", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::Byte*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::Byte (__array_item__));
				}
				return __array_result__;
		}

		mscorlib::System::TypeCode::__ENUM__ Convert::GetTypeCode(mscorlib::System::Object value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "GetTypeCode", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return static_cast<mscorlib::System::TypeCode::__ENUM__>(*(mscorlib::System::TypeCode::__ENUM__*)mono_object_unbox(__result__));
		}

		mscorlib::System::Boolean Convert::IsDBNull(mscorlib::System::Object value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "IsDBNull", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 Convert::ToBase64CharArray(std::vector<mscorlib::System::Byte*> inArray, mscorlib::System::Int32 offsetIn, mscorlib::System::Int32 length, std::vector<mscorlib::System::Char*> outArray, mscorlib::System::Int32 offsetOut)
		{
				MonoType *__parameter_types__[5];
				void *__parameters__[5];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(inArray).name()))->eklass);
				__parameter_types__[1] = Global::GetType(typeid(offsetIn).name());
				__parameter_types__[2] = Global::GetType(typeid(length).name());
				__parameter_types__[3] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(outArray).name()))->eklass);
				__parameter_types__[4] = Global::GetType(typeid(offsetOut).name());
				__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(inArray, typeid(mscorlib::System::Byte).name());
				__parameters__[1] = &offsetIn;
				__parameters__[2] = &length;
				__parameters__[3] = Global::FromArray<mscorlib::System::Char*>(outArray, typeid(mscorlib::System::Char).name());
				__parameters__[4] = &offsetOut;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToBase64CharArray", NullMonoObject, 5, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::String Convert::ToBase64String(std::vector<mscorlib::System::Byte*> inArray)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(inArray).name()))->eklass);
				__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(inArray, typeid(mscorlib::System::Byte).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToBase64String", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String Convert::ToBase64String(std::vector<mscorlib::System::Byte*> inArray, mscorlib::System::Int32 offset, mscorlib::System::Int32 length)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(inArray).name()))->eklass);
				__parameter_types__[1] = Global::GetType(typeid(offset).name());
				__parameter_types__[2] = Global::GetType(typeid(length).name());
				__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(inArray, typeid(mscorlib::System::Byte).name());
				__parameters__[1] = &offset;
				__parameters__[2] = &length;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToBase64String", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String Convert::ToBase64String(std::vector<mscorlib::System::Byte*> inArray, mscorlib::System::Base64FormattingOptions::__ENUM__ options)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(inArray).name()))->eklass);
				__parameter_types__[1] = Global::GetType(typeid(options).name());
				__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(inArray, typeid(mscorlib::System::Byte).name());
				int __param_options__ = options;
				__parameters__[1] = &__param_options__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToBase64String", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String Convert::ToBase64String(std::vector<mscorlib::System::Byte*> inArray, mscorlib::System::Int32 offset, mscorlib::System::Int32 length, mscorlib::System::Base64FormattingOptions::__ENUM__ options)
		{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(inArray).name()))->eklass);
				__parameter_types__[1] = Global::GetType(typeid(offset).name());
				__parameter_types__[2] = Global::GetType(typeid(length).name());
				__parameter_types__[3] = Global::GetType(typeid(options).name());
				__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(inArray, typeid(mscorlib::System::Byte).name());
				__parameters__[1] = &offset;
				__parameters__[2] = &length;
				int __param_options__ = options;
				__parameters__[3] = &__param_options__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToBase64String", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::Int32 Convert::ToBase64CharArray(std::vector<mscorlib::System::Byte*> inArray, mscorlib::System::Int32 offsetIn, mscorlib::System::Int32 length, std::vector<mscorlib::System::Char*> outArray, mscorlib::System::Int32 offsetOut, mscorlib::System::Base64FormattingOptions::__ENUM__ options)
		{
				MonoType *__parameter_types__[6];
				void *__parameters__[6];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(inArray).name()))->eklass);
				__parameter_types__[1] = Global::GetType(typeid(offsetIn).name());
				__parameter_types__[2] = Global::GetType(typeid(length).name());
				__parameter_types__[3] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(outArray).name()))->eklass);
				__parameter_types__[4] = Global::GetType(typeid(offsetOut).name());
				__parameter_types__[5] = Global::GetType(typeid(options).name());
				__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(inArray, typeid(mscorlib::System::Byte).name());
				__parameters__[1] = &offsetIn;
				__parameters__[2] = &length;
				__parameters__[3] = Global::FromArray<mscorlib::System::Char*>(outArray, typeid(mscorlib::System::Char).name());
				__parameters__[4] = &offsetOut;
				int __param_options__ = options;
				__parameters__[5] = &__param_options__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToBase64CharArray", NullMonoObject, 6, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean Convert::ToBoolean(mscorlib::System::Boolean value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = reinterpret_cast<void*>(value);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToBoolean", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean Convert::ToBoolean(mscorlib::System::Byte value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToBoolean", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean Convert::ToBoolean(mscorlib::System::Char value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToBoolean", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean Convert::ToBoolean(mscorlib::System::DateTime value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToBoolean", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean Convert::ToBoolean(mscorlib::System::Decimal value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToBoolean", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean Convert::ToBoolean(mscorlib::System::Double value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToBoolean", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean Convert::ToBoolean(mscorlib::System::Single value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToBoolean", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean Convert::ToBoolean(mscorlib::System::Int32 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToBoolean", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean Convert::ToBoolean(mscorlib::System::Int64 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToBoolean", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean Convert::ToBoolean(mscorlib::System::SByte value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToBoolean", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean Convert::ToBoolean(mscorlib::System::Int16 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToBoolean", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean Convert::ToBoolean(mscorlib::System::String value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToBoolean", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean Convert::ToBoolean(const char *value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToBoolean", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean Convert::ToBoolean(mscorlib::System::String value, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToBoolean", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean Convert::ToBoolean(const char *value, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToBoolean", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean Convert::ToBoolean(mscorlib::System::UInt32 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToBoolean", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean Convert::ToBoolean(mscorlib::System::UInt64 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToBoolean", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean Convert::ToBoolean(mscorlib::System::UInt16 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToBoolean", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean Convert::ToBoolean(mscorlib::System::Object value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToBoolean", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean Convert::ToBoolean(mscorlib::System::Object value, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = (MonoObject*)value;
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToBoolean", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Byte Convert::ToByte(mscorlib::System::Boolean value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = reinterpret_cast<void*>(value);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToByte", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Byte(__result__);
		}

		mscorlib::System::Byte Convert::ToByte(mscorlib::System::Byte value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToByte", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Byte(__result__);
		}

		mscorlib::System::Byte Convert::ToByte(mscorlib::System::Char value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToByte", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Byte(__result__);
		}

		mscorlib::System::Byte Convert::ToByte(mscorlib::System::DateTime value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToByte", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Byte(__result__);
		}

		mscorlib::System::Byte Convert::ToByte(mscorlib::System::Decimal value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToByte", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Byte(__result__);
		}

		mscorlib::System::Byte Convert::ToByte(mscorlib::System::Double value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToByte", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Byte(__result__);
		}

		mscorlib::System::Byte Convert::ToByte(mscorlib::System::Single value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToByte", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Byte(__result__);
		}

		mscorlib::System::Byte Convert::ToByte(mscorlib::System::Int32 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToByte", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Byte(__result__);
		}

		mscorlib::System::Byte Convert::ToByte(mscorlib::System::Int64 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToByte", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Byte(__result__);
		}

		mscorlib::System::Byte Convert::ToByte(mscorlib::System::SByte value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToByte", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Byte(__result__);
		}

		mscorlib::System::Byte Convert::ToByte(mscorlib::System::Int16 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToByte", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Byte(__result__);
		}

		mscorlib::System::Byte Convert::ToByte(mscorlib::System::String value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToByte", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Byte(__result__);
		}

		mscorlib::System::Byte Convert::ToByte(const char *value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToByte", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Byte(__result__);
		}

		mscorlib::System::Byte Convert::ToByte(mscorlib::System::String value, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToByte", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Byte(__result__);
		}

		mscorlib::System::Byte Convert::ToByte(const char *value, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToByte", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Byte(__result__);
		}

		mscorlib::System::Byte Convert::ToByte(mscorlib::System::String value, mscorlib::System::Int32 fromBase)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(fromBase).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = &fromBase;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToByte", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Byte(__result__);
		}

		mscorlib::System::Byte Convert::ToByte(const char *value, mscorlib::System::Int32 fromBase)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(fromBase).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = &fromBase;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToByte", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Byte(__result__);
		}

		mscorlib::System::Byte Convert::ToByte(mscorlib::System::UInt32 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToByte", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Byte(__result__);
		}

		mscorlib::System::Byte Convert::ToByte(mscorlib::System::UInt64 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToByte", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Byte(__result__);
		}

		mscorlib::System::Byte Convert::ToByte(mscorlib::System::UInt16 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToByte", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Byte(__result__);
		}

		mscorlib::System::Byte Convert::ToByte(mscorlib::System::Object value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToByte", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Byte(__result__);
		}

		mscorlib::System::Byte Convert::ToByte(mscorlib::System::Object value, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = (MonoObject*)value;
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToByte", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Byte(__result__);
		}

		mscorlib::System::Char Convert::ToChar(mscorlib::System::Boolean value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = reinterpret_cast<void*>(value);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToChar", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Char*)mono_object_unbox(__result__);
		}

		mscorlib::System::Char Convert::ToChar(mscorlib::System::Byte value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToChar", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Char*)mono_object_unbox(__result__);
		}

		mscorlib::System::Char Convert::ToChar(mscorlib::System::Char value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToChar", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Char*)mono_object_unbox(__result__);
		}

		mscorlib::System::Char Convert::ToChar(mscorlib::System::DateTime value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToChar", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Char*)mono_object_unbox(__result__);
		}

		mscorlib::System::Char Convert::ToChar(mscorlib::System::Decimal value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToChar", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Char*)mono_object_unbox(__result__);
		}

		mscorlib::System::Char Convert::ToChar(mscorlib::System::Double value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToChar", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Char*)mono_object_unbox(__result__);
		}

		mscorlib::System::Char Convert::ToChar(mscorlib::System::Int32 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToChar", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Char*)mono_object_unbox(__result__);
		}

		mscorlib::System::Char Convert::ToChar(mscorlib::System::Int64 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToChar", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Char*)mono_object_unbox(__result__);
		}

		mscorlib::System::Char Convert::ToChar(mscorlib::System::Single value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToChar", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Char*)mono_object_unbox(__result__);
		}

		mscorlib::System::Char Convert::ToChar(mscorlib::System::SByte value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToChar", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Char*)mono_object_unbox(__result__);
		}

		mscorlib::System::Char Convert::ToChar(mscorlib::System::Int16 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToChar", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Char*)mono_object_unbox(__result__);
		}

		mscorlib::System::Char Convert::ToChar(mscorlib::System::String value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToChar", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Char*)mono_object_unbox(__result__);
		}

		mscorlib::System::Char Convert::ToChar(const char *value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToChar", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Char*)mono_object_unbox(__result__);
		}

		mscorlib::System::Char Convert::ToChar(mscorlib::System::String value, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToChar", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Char*)mono_object_unbox(__result__);
		}

		mscorlib::System::Char Convert::ToChar(const char *value, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToChar", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Char*)mono_object_unbox(__result__);
		}

		mscorlib::System::Char Convert::ToChar(mscorlib::System::UInt32 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToChar", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Char*)mono_object_unbox(__result__);
		}

		mscorlib::System::Char Convert::ToChar(mscorlib::System::UInt64 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToChar", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Char*)mono_object_unbox(__result__);
		}

		mscorlib::System::Char Convert::ToChar(mscorlib::System::UInt16 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToChar", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Char*)mono_object_unbox(__result__);
		}

		mscorlib::System::Char Convert::ToChar(mscorlib::System::Object value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToChar", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Char*)mono_object_unbox(__result__);
		}

		mscorlib::System::Char Convert::ToChar(mscorlib::System::Object value, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = (MonoObject*)value;
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToChar", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Char*)mono_object_unbox(__result__);
		}

		mscorlib::System::DateTime Convert::ToDateTime(mscorlib::System::String value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToDateTime", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTime(__result__);
		}

		mscorlib::System::DateTime Convert::ToDateTime(const char *value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToDateTime", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTime(__result__);
		}

		mscorlib::System::DateTime Convert::ToDateTime(mscorlib::System::String value, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToDateTime", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTime(__result__);
		}

		mscorlib::System::DateTime Convert::ToDateTime(const char *value, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToDateTime", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTime(__result__);
		}

		mscorlib::System::DateTime Convert::ToDateTime(mscorlib::System::Boolean value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = reinterpret_cast<void*>(value);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToDateTime", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTime(__result__);
		}

		mscorlib::System::DateTime Convert::ToDateTime(mscorlib::System::Byte value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToDateTime", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTime(__result__);
		}

		mscorlib::System::DateTime Convert::ToDateTime(mscorlib::System::Char value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToDateTime", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTime(__result__);
		}

		mscorlib::System::DateTime Convert::ToDateTime(mscorlib::System::DateTime value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToDateTime", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTime(__result__);
		}

		mscorlib::System::DateTime Convert::ToDateTime(mscorlib::System::Decimal value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToDateTime", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTime(__result__);
		}

		mscorlib::System::DateTime Convert::ToDateTime(mscorlib::System::Double value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToDateTime", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTime(__result__);
		}

		mscorlib::System::DateTime Convert::ToDateTime(mscorlib::System::Int16 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToDateTime", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTime(__result__);
		}

		mscorlib::System::DateTime Convert::ToDateTime(mscorlib::System::Int32 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToDateTime", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTime(__result__);
		}

		mscorlib::System::DateTime Convert::ToDateTime(mscorlib::System::Int64 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToDateTime", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTime(__result__);
		}

		mscorlib::System::DateTime Convert::ToDateTime(mscorlib::System::Single value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToDateTime", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTime(__result__);
		}

		mscorlib::System::DateTime Convert::ToDateTime(mscorlib::System::Object value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToDateTime", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTime(__result__);
		}

		mscorlib::System::DateTime Convert::ToDateTime(mscorlib::System::Object value, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = (MonoObject*)value;
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToDateTime", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTime(__result__);
		}

		mscorlib::System::DateTime Convert::ToDateTime(mscorlib::System::SByte value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToDateTime", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTime(__result__);
		}

		mscorlib::System::DateTime Convert::ToDateTime(mscorlib::System::UInt16 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToDateTime", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTime(__result__);
		}

		mscorlib::System::DateTime Convert::ToDateTime(mscorlib::System::UInt32 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToDateTime", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTime(__result__);
		}

		mscorlib::System::DateTime Convert::ToDateTime(mscorlib::System::UInt64 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToDateTime", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTime(__result__);
		}

		mscorlib::System::Decimal Convert::ToDecimal(mscorlib::System::Boolean value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = reinterpret_cast<void*>(value);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToDecimal", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Decimal(__result__);
		}

		mscorlib::System::Decimal Convert::ToDecimal(mscorlib::System::Byte value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToDecimal", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Decimal(__result__);
		}

		mscorlib::System::Decimal Convert::ToDecimal(mscorlib::System::Char value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToDecimal", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Decimal(__result__);
		}

		mscorlib::System::Decimal Convert::ToDecimal(mscorlib::System::DateTime value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToDecimal", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Decimal(__result__);
		}

		mscorlib::System::Decimal Convert::ToDecimal(mscorlib::System::Decimal value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToDecimal", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Decimal(__result__);
		}

		mscorlib::System::Decimal Convert::ToDecimal(mscorlib::System::Double value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToDecimal", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Decimal(__result__);
		}

		mscorlib::System::Decimal Convert::ToDecimal(mscorlib::System::Single value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToDecimal", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Decimal(__result__);
		}

		mscorlib::System::Decimal Convert::ToDecimal(mscorlib::System::Int32 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToDecimal", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Decimal(__result__);
		}

		mscorlib::System::Decimal Convert::ToDecimal(mscorlib::System::Int64 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToDecimal", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Decimal(__result__);
		}

		mscorlib::System::Decimal Convert::ToDecimal(mscorlib::System::SByte value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToDecimal", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Decimal(__result__);
		}

		mscorlib::System::Decimal Convert::ToDecimal(mscorlib::System::Int16 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToDecimal", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Decimal(__result__);
		}

		mscorlib::System::Decimal Convert::ToDecimal(mscorlib::System::String value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToDecimal", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Decimal(__result__);
		}

		mscorlib::System::Decimal Convert::ToDecimal(const char *value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToDecimal", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Decimal(__result__);
		}

		mscorlib::System::Decimal Convert::ToDecimal(mscorlib::System::String value, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToDecimal", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Decimal(__result__);
		}

		mscorlib::System::Decimal Convert::ToDecimal(const char *value, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToDecimal", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Decimal(__result__);
		}

		mscorlib::System::Decimal Convert::ToDecimal(mscorlib::System::UInt32 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToDecimal", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Decimal(__result__);
		}

		mscorlib::System::Decimal Convert::ToDecimal(mscorlib::System::UInt64 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToDecimal", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Decimal(__result__);
		}

		mscorlib::System::Decimal Convert::ToDecimal(mscorlib::System::UInt16 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToDecimal", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Decimal(__result__);
		}

		mscorlib::System::Decimal Convert::ToDecimal(mscorlib::System::Object value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToDecimal", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Decimal(__result__);
		}

		mscorlib::System::Decimal Convert::ToDecimal(mscorlib::System::Object value, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = (MonoObject*)value;
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToDecimal", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Decimal(__result__);
		}

		mscorlib::System::Double Convert::ToDouble(mscorlib::System::Boolean value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = reinterpret_cast<void*>(value);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToDouble", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Double*)mono_object_unbox(__result__);
		}

		mscorlib::System::Double Convert::ToDouble(mscorlib::System::Byte value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToDouble", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Double*)mono_object_unbox(__result__);
		}

		mscorlib::System::Double Convert::ToDouble(mscorlib::System::Char value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToDouble", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Double*)mono_object_unbox(__result__);
		}

		mscorlib::System::Double Convert::ToDouble(mscorlib::System::DateTime value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToDouble", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Double*)mono_object_unbox(__result__);
		}

		mscorlib::System::Double Convert::ToDouble(mscorlib::System::Decimal value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToDouble", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Double*)mono_object_unbox(__result__);
		}

		mscorlib::System::Double Convert::ToDouble(mscorlib::System::Double value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToDouble", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Double*)mono_object_unbox(__result__);
		}

		mscorlib::System::Double Convert::ToDouble(mscorlib::System::Single value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToDouble", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Double*)mono_object_unbox(__result__);
		}

		mscorlib::System::Double Convert::ToDouble(mscorlib::System::Int32 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToDouble", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Double*)mono_object_unbox(__result__);
		}

		mscorlib::System::Double Convert::ToDouble(mscorlib::System::Int64 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToDouble", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Double*)mono_object_unbox(__result__);
		}

		mscorlib::System::Double Convert::ToDouble(mscorlib::System::SByte value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToDouble", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Double*)mono_object_unbox(__result__);
		}

		mscorlib::System::Double Convert::ToDouble(mscorlib::System::Int16 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToDouble", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Double*)mono_object_unbox(__result__);
		}

		mscorlib::System::Double Convert::ToDouble(mscorlib::System::String value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToDouble", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Double*)mono_object_unbox(__result__);
		}

		mscorlib::System::Double Convert::ToDouble(const char *value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToDouble", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Double*)mono_object_unbox(__result__);
		}

		mscorlib::System::Double Convert::ToDouble(mscorlib::System::String value, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToDouble", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Double*)mono_object_unbox(__result__);
		}

		mscorlib::System::Double Convert::ToDouble(const char *value, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToDouble", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Double*)mono_object_unbox(__result__);
		}

		mscorlib::System::Double Convert::ToDouble(mscorlib::System::UInt32 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToDouble", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Double*)mono_object_unbox(__result__);
		}

		mscorlib::System::Double Convert::ToDouble(mscorlib::System::UInt64 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToDouble", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Double*)mono_object_unbox(__result__);
		}

		mscorlib::System::Double Convert::ToDouble(mscorlib::System::UInt16 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToDouble", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Double*)mono_object_unbox(__result__);
		}

		mscorlib::System::Double Convert::ToDouble(mscorlib::System::Object value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToDouble", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Double*)mono_object_unbox(__result__);
		}

		mscorlib::System::Double Convert::ToDouble(mscorlib::System::Object value, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = (MonoObject*)value;
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToDouble", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Double*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int16 Convert::ToInt16(mscorlib::System::Boolean value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = reinterpret_cast<void*>(value);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt16", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int16*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int16 Convert::ToInt16(mscorlib::System::Byte value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt16", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int16*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int16 Convert::ToInt16(mscorlib::System::Char value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt16", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int16*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int16 Convert::ToInt16(mscorlib::System::DateTime value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt16", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int16*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int16 Convert::ToInt16(mscorlib::System::Decimal value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt16", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int16*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int16 Convert::ToInt16(mscorlib::System::Double value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt16", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int16*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int16 Convert::ToInt16(mscorlib::System::Single value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt16", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int16*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int16 Convert::ToInt16(mscorlib::System::Int32 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt16", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int16*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int16 Convert::ToInt16(mscorlib::System::Int64 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt16", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int16*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int16 Convert::ToInt16(mscorlib::System::SByte value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt16", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int16*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int16 Convert::ToInt16(mscorlib::System::Int16 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt16", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int16*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int16 Convert::ToInt16(mscorlib::System::String value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt16", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int16*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int16 Convert::ToInt16(const char *value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt16", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int16*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int16 Convert::ToInt16(mscorlib::System::String value, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt16", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int16*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int16 Convert::ToInt16(const char *value, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt16", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int16*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int16 Convert::ToInt16(mscorlib::System::String value, mscorlib::System::Int32 fromBase)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(fromBase).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = &fromBase;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt16", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int16*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int16 Convert::ToInt16(const char *value, mscorlib::System::Int32 fromBase)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(fromBase).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = &fromBase;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt16", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int16*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int16 Convert::ToInt16(mscorlib::System::UInt32 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt16", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int16*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int16 Convert::ToInt16(mscorlib::System::UInt64 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt16", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int16*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int16 Convert::ToInt16(mscorlib::System::UInt16 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt16", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int16*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int16 Convert::ToInt16(mscorlib::System::Object value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt16", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int16*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int16 Convert::ToInt16(mscorlib::System::Object value, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = (MonoObject*)value;
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt16", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int16*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 Convert::ToInt32(mscorlib::System::Boolean value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = reinterpret_cast<void*>(value);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt32", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 Convert::ToInt32(mscorlib::System::Byte value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt32", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 Convert::ToInt32(mscorlib::System::Char value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt32", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 Convert::ToInt32(mscorlib::System::DateTime value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt32", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 Convert::ToInt32(mscorlib::System::Decimal value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt32", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 Convert::ToInt32(mscorlib::System::Double value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt32", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 Convert::ToInt32(mscorlib::System::Single value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt32", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 Convert::ToInt32(mscorlib::System::Int32 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt32", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 Convert::ToInt32(mscorlib::System::Int64 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt32", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 Convert::ToInt32(mscorlib::System::SByte value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt32", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 Convert::ToInt32(mscorlib::System::Int16 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt32", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 Convert::ToInt32(mscorlib::System::String value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt32", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 Convert::ToInt32(const char *value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt32", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 Convert::ToInt32(mscorlib::System::String value, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt32", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 Convert::ToInt32(const char *value, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt32", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 Convert::ToInt32(mscorlib::System::String value, mscorlib::System::Int32 fromBase)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(fromBase).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = &fromBase;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt32", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 Convert::ToInt32(const char *value, mscorlib::System::Int32 fromBase)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(fromBase).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = &fromBase;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt32", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 Convert::ToInt32(mscorlib::System::UInt32 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt32", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 Convert::ToInt32(mscorlib::System::UInt64 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt32", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 Convert::ToInt32(mscorlib::System::UInt16 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt32", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 Convert::ToInt32(mscorlib::System::Object value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt32", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 Convert::ToInt32(mscorlib::System::Object value, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = (MonoObject*)value;
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt32", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int64 Convert::ToInt64(mscorlib::System::Boolean value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = reinterpret_cast<void*>(value);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt64", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int64 Convert::ToInt64(mscorlib::System::Byte value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt64", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int64 Convert::ToInt64(mscorlib::System::Char value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt64", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int64 Convert::ToInt64(mscorlib::System::DateTime value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt64", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int64 Convert::ToInt64(mscorlib::System::Decimal value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt64", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int64 Convert::ToInt64(mscorlib::System::Double value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt64", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int64 Convert::ToInt64(mscorlib::System::Single value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt64", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int64 Convert::ToInt64(mscorlib::System::Int32 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt64", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int64 Convert::ToInt64(mscorlib::System::Int64 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt64", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int64 Convert::ToInt64(mscorlib::System::SByte value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt64", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int64 Convert::ToInt64(mscorlib::System::Int16 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt64", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int64 Convert::ToInt64(mscorlib::System::String value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt64", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int64 Convert::ToInt64(const char *value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt64", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int64 Convert::ToInt64(mscorlib::System::String value, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt64", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int64 Convert::ToInt64(const char *value, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt64", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int64 Convert::ToInt64(mscorlib::System::String value, mscorlib::System::Int32 fromBase)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(fromBase).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = &fromBase;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt64", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int64 Convert::ToInt64(const char *value, mscorlib::System::Int32 fromBase)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(fromBase).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = &fromBase;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt64", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int64 Convert::ToInt64(mscorlib::System::UInt32 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt64", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int64 Convert::ToInt64(mscorlib::System::UInt64 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt64", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int64 Convert::ToInt64(mscorlib::System::UInt16 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt64", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int64 Convert::ToInt64(mscorlib::System::Object value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt64", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int64 Convert::ToInt64(mscorlib::System::Object value, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = (MonoObject*)value;
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToInt64", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
		}

		mscorlib::System::SByte Convert::ToSByte(mscorlib::System::Boolean value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = reinterpret_cast<void*>(value);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToSByte", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::SByte(__result__);
		}

		mscorlib::System::SByte Convert::ToSByte(mscorlib::System::Byte value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToSByte", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::SByte(__result__);
		}

		mscorlib::System::SByte Convert::ToSByte(mscorlib::System::Char value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToSByte", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::SByte(__result__);
		}

		mscorlib::System::SByte Convert::ToSByte(mscorlib::System::DateTime value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToSByte", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::SByte(__result__);
		}

		mscorlib::System::SByte Convert::ToSByte(mscorlib::System::Decimal value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToSByte", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::SByte(__result__);
		}

		mscorlib::System::SByte Convert::ToSByte(mscorlib::System::Double value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToSByte", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::SByte(__result__);
		}

		mscorlib::System::SByte Convert::ToSByte(mscorlib::System::Single value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToSByte", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::SByte(__result__);
		}

		mscorlib::System::SByte Convert::ToSByte(mscorlib::System::Int32 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToSByte", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::SByte(__result__);
		}

		mscorlib::System::SByte Convert::ToSByte(mscorlib::System::Int64 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToSByte", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::SByte(__result__);
		}

		mscorlib::System::SByte Convert::ToSByte(mscorlib::System::SByte value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToSByte", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::SByte(__result__);
		}

		mscorlib::System::SByte Convert::ToSByte(mscorlib::System::Int16 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToSByte", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::SByte(__result__);
		}

		mscorlib::System::SByte Convert::ToSByte(mscorlib::System::String value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToSByte", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::SByte(__result__);
		}

		mscorlib::System::SByte Convert::ToSByte(const char *value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToSByte", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::SByte(__result__);
		}

		mscorlib::System::SByte Convert::ToSByte(mscorlib::System::String value, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToSByte", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::SByte(__result__);
		}

		mscorlib::System::SByte Convert::ToSByte(const char *value, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToSByte", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::SByte(__result__);
		}

		mscorlib::System::SByte Convert::ToSByte(mscorlib::System::String value, mscorlib::System::Int32 fromBase)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(fromBase).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = &fromBase;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToSByte", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::SByte(__result__);
		}

		mscorlib::System::SByte Convert::ToSByte(const char *value, mscorlib::System::Int32 fromBase)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(fromBase).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = &fromBase;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToSByte", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::SByte(__result__);
		}

		mscorlib::System::SByte Convert::ToSByte(mscorlib::System::UInt32 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToSByte", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::SByte(__result__);
		}

		mscorlib::System::SByte Convert::ToSByte(mscorlib::System::UInt64 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToSByte", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::SByte(__result__);
		}

		mscorlib::System::SByte Convert::ToSByte(mscorlib::System::UInt16 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToSByte", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::SByte(__result__);
		}

		mscorlib::System::SByte Convert::ToSByte(mscorlib::System::Object value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToSByte", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::SByte(__result__);
		}

		mscorlib::System::SByte Convert::ToSByte(mscorlib::System::Object value, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = (MonoObject*)value;
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToSByte", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::SByte(__result__);
		}

		mscorlib::System::Single Convert::ToSingle(mscorlib::System::Boolean value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = reinterpret_cast<void*>(value);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToSingle", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Single*)mono_object_unbox(__result__);
		}

		mscorlib::System::Single Convert::ToSingle(mscorlib::System::Byte value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToSingle", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Single*)mono_object_unbox(__result__);
		}

		mscorlib::System::Single Convert::ToSingle(mscorlib::System::Char value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToSingle", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Single*)mono_object_unbox(__result__);
		}

		mscorlib::System::Single Convert::ToSingle(mscorlib::System::DateTime value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToSingle", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Single*)mono_object_unbox(__result__);
		}

		mscorlib::System::Single Convert::ToSingle(mscorlib::System::Decimal value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToSingle", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Single*)mono_object_unbox(__result__);
		}

		mscorlib::System::Single Convert::ToSingle(mscorlib::System::Double value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToSingle", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Single*)mono_object_unbox(__result__);
		}

		mscorlib::System::Single Convert::ToSingle(mscorlib::System::Single value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToSingle", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Single*)mono_object_unbox(__result__);
		}

		mscorlib::System::Single Convert::ToSingle(mscorlib::System::Int32 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToSingle", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Single*)mono_object_unbox(__result__);
		}

		mscorlib::System::Single Convert::ToSingle(mscorlib::System::Int64 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToSingle", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Single*)mono_object_unbox(__result__);
		}

		mscorlib::System::Single Convert::ToSingle(mscorlib::System::SByte value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToSingle", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Single*)mono_object_unbox(__result__);
		}

		mscorlib::System::Single Convert::ToSingle(mscorlib::System::Int16 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToSingle", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Single*)mono_object_unbox(__result__);
		}

		mscorlib::System::Single Convert::ToSingle(mscorlib::System::String value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToSingle", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Single*)mono_object_unbox(__result__);
		}

		mscorlib::System::Single Convert::ToSingle(const char *value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToSingle", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Single*)mono_object_unbox(__result__);
		}

		mscorlib::System::Single Convert::ToSingle(mscorlib::System::String value, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToSingle", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Single*)mono_object_unbox(__result__);
		}

		mscorlib::System::Single Convert::ToSingle(const char *value, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToSingle", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Single*)mono_object_unbox(__result__);
		}

		mscorlib::System::Single Convert::ToSingle(mscorlib::System::UInt32 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToSingle", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Single*)mono_object_unbox(__result__);
		}

		mscorlib::System::Single Convert::ToSingle(mscorlib::System::UInt64 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToSingle", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Single*)mono_object_unbox(__result__);
		}

		mscorlib::System::Single Convert::ToSingle(mscorlib::System::UInt16 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToSingle", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Single*)mono_object_unbox(__result__);
		}

		mscorlib::System::Single Convert::ToSingle(mscorlib::System::Object value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToSingle", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Single*)mono_object_unbox(__result__);
		}

		mscorlib::System::Single Convert::ToSingle(mscorlib::System::Object value, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = (MonoObject*)value;
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToSingle", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Single*)mono_object_unbox(__result__);
		}

		mscorlib::System::String Convert::ToString(mscorlib::System::Boolean value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = reinterpret_cast<void*>(value);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToString", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String Convert::ToString(mscorlib::System::Boolean value, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = reinterpret_cast<void*>(value);
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToString", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String Convert::ToString(mscorlib::System::Byte value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToString", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String Convert::ToString(mscorlib::System::Byte value, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = (MonoObject*)value;
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToString", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String Convert::ToString(mscorlib::System::Byte value, mscorlib::System::Int32 toBase)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(toBase).name());
				__parameters__[0] = (MonoObject*)value;
				__parameters__[1] = &toBase;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToString", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String Convert::ToString(mscorlib::System::Char value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToString", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String Convert::ToString(mscorlib::System::Char value, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = &value;
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToString", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String Convert::ToString(mscorlib::System::DateTime value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToString", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String Convert::ToString(mscorlib::System::DateTime value, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = (MonoObject*)value;
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToString", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String Convert::ToString(mscorlib::System::Decimal value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToString", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String Convert::ToString(mscorlib::System::Decimal value, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = (MonoObject*)value;
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToString", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String Convert::ToString(mscorlib::System::Double value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToString", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String Convert::ToString(mscorlib::System::Double value, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = &value;
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToString", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String Convert::ToString(mscorlib::System::Single value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToString", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String Convert::ToString(mscorlib::System::Single value, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = &value;
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToString", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String Convert::ToString(mscorlib::System::Int32 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToString", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String Convert::ToString(mscorlib::System::Int32 value, mscorlib::System::Int32 toBase)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(toBase).name());
				__parameters__[0] = &value;
				__parameters__[1] = &toBase;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToString", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String Convert::ToString(mscorlib::System::Int32 value, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = &value;
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToString", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String Convert::ToString(mscorlib::System::Int64 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToString", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String Convert::ToString(mscorlib::System::Int64 value, mscorlib::System::Int32 toBase)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(toBase).name());
				__parameters__[0] = &value;
				__parameters__[1] = &toBase;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToString", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String Convert::ToString(mscorlib::System::Int64 value, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = &value;
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToString", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String Convert::ToString(mscorlib::System::Object value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToString", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String Convert::ToString(mscorlib::System::Object value, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = (MonoObject*)value;
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToString", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String Convert::ToString(mscorlib::System::SByte value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToString", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String Convert::ToString(mscorlib::System::SByte value, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = (MonoObject*)value;
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToString", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String Convert::ToString(mscorlib::System::Int16 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToString", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String Convert::ToString(mscorlib::System::Int16 value, mscorlib::System::Int32 toBase)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(toBase).name());
				__parameters__[0] = &value;
				__parameters__[1] = &toBase;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToString", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String Convert::ToString(mscorlib::System::Int16 value, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = &value;
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToString", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String Convert::ToString(mscorlib::System::String value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToString", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String Convert::ToString(const char *value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToString", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String Convert::ToString(mscorlib::System::String value, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToString", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String Convert::ToString(const char *value, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToString", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String Convert::ToString(mscorlib::System::UInt32 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToString", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String Convert::ToString(mscorlib::System::UInt32 value, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = &value;
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToString", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String Convert::ToString(mscorlib::System::UInt64 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToString", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String Convert::ToString(mscorlib::System::UInt64 value, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = &value;
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToString", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String Convert::ToString(mscorlib::System::UInt16 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToString", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String Convert::ToString(mscorlib::System::UInt16 value, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = &value;
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToString", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::UInt16 Convert::ToUInt16(mscorlib::System::Boolean value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = reinterpret_cast<void*>(value);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt16", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt16*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt16 Convert::ToUInt16(mscorlib::System::Byte value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt16", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt16*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt16 Convert::ToUInt16(mscorlib::System::Char value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt16", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt16*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt16 Convert::ToUInt16(mscorlib::System::DateTime value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt16", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt16*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt16 Convert::ToUInt16(mscorlib::System::Decimal value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt16", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt16*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt16 Convert::ToUInt16(mscorlib::System::Double value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt16", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt16*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt16 Convert::ToUInt16(mscorlib::System::Single value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt16", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt16*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt16 Convert::ToUInt16(mscorlib::System::Int32 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt16", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt16*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt16 Convert::ToUInt16(mscorlib::System::Int64 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt16", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt16*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt16 Convert::ToUInt16(mscorlib::System::SByte value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt16", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt16*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt16 Convert::ToUInt16(mscorlib::System::Int16 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt16", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt16*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt16 Convert::ToUInt16(mscorlib::System::String value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt16", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt16*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt16 Convert::ToUInt16(const char *value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt16", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt16*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt16 Convert::ToUInt16(mscorlib::System::String value, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt16", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt16*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt16 Convert::ToUInt16(const char *value, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt16", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt16*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt16 Convert::ToUInt16(mscorlib::System::String value, mscorlib::System::Int32 fromBase)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(fromBase).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = &fromBase;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt16", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt16*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt16 Convert::ToUInt16(const char *value, mscorlib::System::Int32 fromBase)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(fromBase).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = &fromBase;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt16", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt16*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt16 Convert::ToUInt16(mscorlib::System::UInt32 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt16", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt16*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt16 Convert::ToUInt16(mscorlib::System::UInt64 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt16", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt16*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt16 Convert::ToUInt16(mscorlib::System::UInt16 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt16", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt16*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt16 Convert::ToUInt16(mscorlib::System::Object value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt16", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt16*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt16 Convert::ToUInt16(mscorlib::System::Object value, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = (MonoObject*)value;
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt16", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt16*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt32 Convert::ToUInt32(mscorlib::System::Boolean value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = reinterpret_cast<void*>(value);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt32", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt32*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt32 Convert::ToUInt32(mscorlib::System::Byte value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt32", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt32*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt32 Convert::ToUInt32(mscorlib::System::Char value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt32", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt32*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt32 Convert::ToUInt32(mscorlib::System::DateTime value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt32", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt32*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt32 Convert::ToUInt32(mscorlib::System::Decimal value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt32", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt32*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt32 Convert::ToUInt32(mscorlib::System::Double value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt32", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt32*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt32 Convert::ToUInt32(mscorlib::System::Single value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt32", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt32*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt32 Convert::ToUInt32(mscorlib::System::Int32 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt32", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt32*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt32 Convert::ToUInt32(mscorlib::System::Int64 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt32", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt32*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt32 Convert::ToUInt32(mscorlib::System::SByte value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt32", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt32*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt32 Convert::ToUInt32(mscorlib::System::Int16 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt32", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt32*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt32 Convert::ToUInt32(mscorlib::System::String value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt32", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt32*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt32 Convert::ToUInt32(const char *value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt32", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt32*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt32 Convert::ToUInt32(mscorlib::System::String value, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt32", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt32*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt32 Convert::ToUInt32(const char *value, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt32", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt32*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt32 Convert::ToUInt32(mscorlib::System::String value, mscorlib::System::Int32 fromBase)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(fromBase).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = &fromBase;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt32", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt32*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt32 Convert::ToUInt32(const char *value, mscorlib::System::Int32 fromBase)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(fromBase).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = &fromBase;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt32", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt32*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt32 Convert::ToUInt32(mscorlib::System::UInt32 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt32", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt32*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt32 Convert::ToUInt32(mscorlib::System::UInt64 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt32", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt32*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt32 Convert::ToUInt32(mscorlib::System::UInt16 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt32", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt32*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt32 Convert::ToUInt32(mscorlib::System::Object value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt32", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt32*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt32 Convert::ToUInt32(mscorlib::System::Object value, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = (MonoObject*)value;
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt32", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt32*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt64 Convert::ToUInt64(mscorlib::System::Boolean value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = reinterpret_cast<void*>(value);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt64", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt64*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt64 Convert::ToUInt64(mscorlib::System::Byte value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt64", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt64*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt64 Convert::ToUInt64(mscorlib::System::Char value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt64", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt64*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt64 Convert::ToUInt64(mscorlib::System::DateTime value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt64", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt64*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt64 Convert::ToUInt64(mscorlib::System::Decimal value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt64", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt64*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt64 Convert::ToUInt64(mscorlib::System::Double value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt64", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt64*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt64 Convert::ToUInt64(mscorlib::System::Single value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt64", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt64*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt64 Convert::ToUInt64(mscorlib::System::Int32 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt64", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt64*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt64 Convert::ToUInt64(mscorlib::System::Int64 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt64", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt64*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt64 Convert::ToUInt64(mscorlib::System::SByte value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt64", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt64*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt64 Convert::ToUInt64(mscorlib::System::Int16 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt64", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt64*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt64 Convert::ToUInt64(mscorlib::System::String value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt64", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt64*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt64 Convert::ToUInt64(const char *value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt64", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt64*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt64 Convert::ToUInt64(mscorlib::System::String value, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt64", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt64*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt64 Convert::ToUInt64(const char *value, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt64", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt64*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt64 Convert::ToUInt64(mscorlib::System::String value, mscorlib::System::Int32 fromBase)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(fromBase).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = &fromBase;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt64", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt64*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt64 Convert::ToUInt64(const char *value, mscorlib::System::Int32 fromBase)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(fromBase).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = &fromBase;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt64", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt64*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt64 Convert::ToUInt64(mscorlib::System::UInt32 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt64", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt64*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt64 Convert::ToUInt64(mscorlib::System::UInt64 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt64", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt64*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt64 Convert::ToUInt64(mscorlib::System::UInt16 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt64", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt64*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt64 Convert::ToUInt64(mscorlib::System::Object value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt64", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt64*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt64 Convert::ToUInt64(mscorlib::System::Object value, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = (MonoObject*)value;
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ToUInt64", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt64*)mono_object_unbox(__result__);
		}

		mscorlib::System::Object Convert::ChangeType(mscorlib::System::Object value, mscorlib::System::Type conversionType)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(conversionType).name());
				__parameters__[0] = (MonoObject*)value;
				__parameters__[1] = (MonoObject*)conversionType;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ChangeType", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
		}

		mscorlib::System::Object Convert::ChangeType(mscorlib::System::Object value, mscorlib::System::TypeCode::__ENUM__ typeCode)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(typeCode).name());
				__parameters__[0] = (MonoObject*)value;
				int __param_typeCode__ = typeCode;
				__parameters__[1] = &__param_typeCode__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ChangeType", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
		}

		mscorlib::System::Object Convert::ChangeType(mscorlib::System::Object value, mscorlib::System::Type conversionType, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(conversionType).name());
				__parameter_types__[2] = Global::GetType(typeid(provider).name());
				__parameters__[0] = (MonoObject*)value;
				__parameters__[1] = (MonoObject*)conversionType;
				__parameters__[2] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ChangeType", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
		}

		mscorlib::System::Object Convert::ChangeType(mscorlib::System::Object value, mscorlib::System::TypeCode::__ENUM__ typeCode, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(typeCode).name());
				__parameter_types__[2] = Global::GetType(typeid(provider).name());
				__parameters__[0] = (MonoObject*)value;
				int __param_typeCode__ = typeCode;
				__parameters__[1] = &__param_typeCode__;
				__parameters__[2] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Convert", 0, NULL, "ChangeType", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
		}

			//	Get/Set:DBNull
		mscorlib::System::Object Convert::get_DBNull()
		{
			return Global::GetFieldValue("mscorlib", "System", "Convert", 0, NULL, "DBNull");
		}

		void Convert::set_DBNull(mscorlib::System::Object  value)
		{
			throw;
		}


	}
}
