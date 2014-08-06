#include <mscorlib/System/mscorlib_System_Enum.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_Array.h>



namespace mscorlib
{
	namespace System
	{

		//Public Methods
		mscorlib::System::TypeCode::__ENUM__ Enum::GetTypeCode()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Enum", 0, NULL, "GetTypeCode", __native_object__, 0, NULL, NULL, NULL);
				return static_cast<mscorlib::System::TypeCode::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
		}

		mscorlib::System::Array Enum::GetValues(mscorlib::System::Type enumType)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(enumType).name());
				__parameters__[0] = (MonoObject*)enumType;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Enum", 0, NULL, "GetValues", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Array(__result__);
		}

		std::vector<mscorlib::System::String*> Enum::GetNames(mscorlib::System::Type enumType)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(enumType).name());
				__parameters__[0] = (MonoObject*)enumType;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Enum", 0, NULL, "GetNames", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
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

		mscorlib::System::String Enum::GetName(mscorlib::System::Type enumType, mscorlib::System::Object value)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(enumType).name());
				__parameter_types__[1] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)enumType;
				__parameters__[1] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Enum", 0, NULL, "GetName", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::Boolean Enum::IsDefined(mscorlib::System::Type enumType, mscorlib::System::Object value)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(enumType).name());
				__parameter_types__[1] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)enumType;
				__parameters__[1] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Enum", 0, NULL, "IsDefined", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Type Enum::GetUnderlyingType(mscorlib::System::Type enumType)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(enumType).name());
				__parameters__[0] = (MonoObject*)enumType;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Enum", 0, NULL, "GetUnderlyingType", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Type(__result__);
		}

		mscorlib::System::Object Enum::Parse(mscorlib::System::Type enumType, mscorlib::System::String value)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(enumType).name());
				__parameter_types__[1] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)enumType;
				__parameters__[1] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Enum", 0, NULL, "Parse", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
		}

		mscorlib::System::Object Enum::Parse(mscorlib::System::Type enumType, const char *value)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(enumType).name());
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
				__parameters__[0] = (MonoObject*)enumType;
				__parameters__[1] = mono_string_new(Global::GetDomain(), value);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Enum", 0, NULL, "Parse", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
		}

		mscorlib::System::Object Enum::Parse(mscorlib::System::Type enumType, mscorlib::System::String value, mscorlib::System::Boolean ignoreCase)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(enumType).name());
				__parameter_types__[1] = Global::GetType(typeid(value).name());
				__parameter_types__[2] = Global::GetType(typeid(ignoreCase).name());
				__parameters__[0] = (MonoObject*)enumType;
				__parameters__[1] = (MonoObject*)value;
				__parameters__[2] = reinterpret_cast<void*>(ignoreCase);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Enum", 0, NULL, "Parse", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
		}

		mscorlib::System::Object Enum::Parse(mscorlib::System::Type enumType, const char *value, mscorlib::System::Boolean ignoreCase)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(enumType).name());
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[2] = Global::GetType(typeid(ignoreCase).name());
				__parameters__[0] = (MonoObject*)enumType;
				__parameters__[1] = mono_string_new(Global::GetDomain(), value);
				__parameters__[2] = reinterpret_cast<void*>(ignoreCase);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Enum", 0, NULL, "Parse", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
		}

		mscorlib::System::Int32 Enum::CompareTo(mscorlib::System::Object target)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(target).name());
				__parameters__[0] = (MonoObject*)target;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Enum", 0, NULL, "CompareTo", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::String Enum::ToString()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Enum", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String Enum::ToString(mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(provider).name());
				__parameters__[0] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Enum", 0, NULL, "ToString", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String Enum::ToString(mscorlib::System::String format)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(format).name());
				__parameters__[0] = (MonoObject*)format;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Enum", 0, NULL, "ToString", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String Enum::ToString(const char *format)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameters__[0] = mono_string_new(Global::GetDomain(), format);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Enum", 0, NULL, "ToString", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String Enum::ToString(mscorlib::System::String format, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(format).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = (MonoObject*)format;
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Enum", 0, NULL, "ToString", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String Enum::ToString(const char *format, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), format);
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Enum", 0, NULL, "ToString", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::Object Enum::ToObject(mscorlib::System::Type enumType, mscorlib::System::Byte value)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(enumType).name());
				__parameter_types__[1] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)enumType;
				__parameters__[1] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Enum", 0, NULL, "ToObject", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
		}

		mscorlib::System::Object Enum::ToObject(mscorlib::System::Type enumType, mscorlib::System::Int16 value)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(enumType).name());
				__parameter_types__[1] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)enumType;
				__parameters__[1] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Enum", 0, NULL, "ToObject", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
		}

		mscorlib::System::Object Enum::ToObject(mscorlib::System::Type enumType, mscorlib::System::Int32 value)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(enumType).name());
				__parameter_types__[1] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)enumType;
				__parameters__[1] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Enum", 0, NULL, "ToObject", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
		}

		mscorlib::System::Object Enum::ToObject(mscorlib::System::Type enumType, mscorlib::System::Int64 value)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(enumType).name());
				__parameter_types__[1] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)enumType;
				__parameters__[1] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Enum", 0, NULL, "ToObject", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
		}

		mscorlib::System::Object Enum::ToObject(mscorlib::System::Type enumType, mscorlib::System::Object value)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(enumType).name());
				__parameter_types__[1] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)enumType;
				__parameters__[1] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Enum", 0, NULL, "ToObject", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
		}

		mscorlib::System::Object Enum::ToObject(mscorlib::System::Type enumType, mscorlib::System::SByte value)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(enumType).name());
				__parameter_types__[1] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)enumType;
				__parameters__[1] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Enum", 0, NULL, "ToObject", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
		}

		mscorlib::System::Object Enum::ToObject(mscorlib::System::Type enumType, mscorlib::System::UInt16 value)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(enumType).name());
				__parameter_types__[1] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)enumType;
				__parameters__[1] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Enum", 0, NULL, "ToObject", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
		}

		mscorlib::System::Object Enum::ToObject(mscorlib::System::Type enumType, mscorlib::System::UInt32 value)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(enumType).name());
				__parameter_types__[1] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)enumType;
				__parameters__[1] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Enum", 0, NULL, "ToObject", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
		}

		mscorlib::System::Object Enum::ToObject(mscorlib::System::Type enumType, mscorlib::System::UInt64 value)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(enumType).name());
				__parameter_types__[1] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)enumType;
				__parameters__[1] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Enum", 0, NULL, "ToObject", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
		}

		mscorlib::System::Boolean Enum::Equals(mscorlib::System::Object obj)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(obj).name());
				__parameters__[0] = (MonoObject*)obj;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Enum", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 Enum::GetHashCode()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Enum", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::String Enum::Format(mscorlib::System::Type enumType, mscorlib::System::Object value, mscorlib::System::String format)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(enumType).name());
				__parameter_types__[1] = Global::GetType(typeid(value).name());
				__parameter_types__[2] = Global::GetType(typeid(format).name());
				__parameters__[0] = (MonoObject*)enumType;
				__parameters__[1] = (MonoObject*)value;
				__parameters__[2] = (MonoObject*)format;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Enum", 0, NULL, "Format", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String Enum::Format(mscorlib::System::Type enumType, mscorlib::System::Object value, const char *format)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(enumType).name());
				__parameter_types__[1] = Global::GetType(typeid(value).name());
				__parameter_types__[2] = Global::GetType("mscorlib", "System", "String");
				__parameters__[0] = (MonoObject*)enumType;
				__parameters__[1] = (MonoObject*)value;
				__parameters__[2] = mono_string_new(Global::GetDomain(), format);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Enum", 0, NULL, "Format", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::Boolean Enum::HasFlag(mscorlib::System::Enum flag)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(flag).name());
				__parameters__[0] = (MonoObject*)flag;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Enum", 0, NULL, "HasFlag", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}


	}
}
