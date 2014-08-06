#include <mscorlib/System/mscorlib_System_StringComparer.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_CultureInfo.h>



namespace mscorlib
{
	namespace System
	{

		Property<mscorlib::System::StringComparer , mscorlib::System::StringComparer> mscorlib::System::StringComparer::CurrentCulture(&mscorlib::System::StringComparer::get_CurrentCulture, &mscorlib::System::StringComparer::set_CurrentCulture);
		Property<mscorlib::System::StringComparer , mscorlib::System::StringComparer> mscorlib::System::StringComparer::CurrentCultureIgnoreCase(&mscorlib::System::StringComparer::get_CurrentCultureIgnoreCase, &mscorlib::System::StringComparer::set_CurrentCultureIgnoreCase);
		Property<mscorlib::System::StringComparer , mscorlib::System::StringComparer> mscorlib::System::StringComparer::InvariantCulture(&mscorlib::System::StringComparer::get_InvariantCulture, &mscorlib::System::StringComparer::set_InvariantCulture);
		Property<mscorlib::System::StringComparer , mscorlib::System::StringComparer> mscorlib::System::StringComparer::InvariantCultureIgnoreCase(&mscorlib::System::StringComparer::get_InvariantCultureIgnoreCase, &mscorlib::System::StringComparer::set_InvariantCultureIgnoreCase);
		Property<mscorlib::System::StringComparer , mscorlib::System::StringComparer> mscorlib::System::StringComparer::Ordinal(&mscorlib::System::StringComparer::get_Ordinal, &mscorlib::System::StringComparer::set_Ordinal);
		Property<mscorlib::System::StringComparer , mscorlib::System::StringComparer> mscorlib::System::StringComparer::OrdinalIgnoreCase(&mscorlib::System::StringComparer::get_OrdinalIgnoreCase, &mscorlib::System::StringComparer::set_OrdinalIgnoreCase);
		//Public Methods
		mscorlib::System::StringComparer StringComparer::Create(mscorlib::System::Globalization::CultureInfo culture, mscorlib::System::Boolean ignoreCase)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(culture).name());
				__parameter_types__[1] = Global::GetType(typeid(ignoreCase).name());
				__parameters__[0] = (MonoObject*)culture;
				__parameters__[1] = reinterpret_cast<void*>(ignoreCase);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "StringComparer", 0, NULL, "Create", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::StringComparer(__result__);
		}

		mscorlib::System::Int32 StringComparer::Compare(mscorlib::System::Object x, mscorlib::System::Object y)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(x).name());
				__parameter_types__[1] = Global::GetType(typeid(y).name());
				__parameters__[0] = (MonoObject*)x;
				__parameters__[1] = (MonoObject*)y;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "StringComparer", 0, NULL, "Compare", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean StringComparer::Equals(mscorlib::System::Object x, mscorlib::System::Object y)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(x).name());
				__parameter_types__[1] = Global::GetType(typeid(y).name());
				__parameters__[0] = (MonoObject*)x;
				__parameters__[1] = (MonoObject*)y;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "StringComparer", 0, NULL, "Equals", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 StringComparer::GetHashCode(mscorlib::System::Object obj)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(obj).name());
				__parameters__[0] = (MonoObject*)obj;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "StringComparer", 0, NULL, "GetHashCode", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 StringComparer::Compare(mscorlib::System::String x, mscorlib::System::String y)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(x).name());
				__parameter_types__[1] = Global::GetType(typeid(y).name());
				__parameters__[0] = (MonoObject*)x;
				__parameters__[1] = (MonoObject*)y;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "StringComparer", 0, NULL, "Compare", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 StringComparer::Compare(const char *x, const char *y)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
				__parameters__[0] = mono_string_new(Global::GetDomain(), x);
				__parameters__[1] = mono_string_new(Global::GetDomain(), y);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "StringComparer", 0, NULL, "Compare", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean StringComparer::Equals(mscorlib::System::String x, mscorlib::System::String y)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(x).name());
				__parameter_types__[1] = Global::GetType(typeid(y).name());
				__parameters__[0] = (MonoObject*)x;
				__parameters__[1] = (MonoObject*)y;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "StringComparer", 0, NULL, "Equals", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean StringComparer::Equals(const char *x, const char *y)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
				__parameters__[0] = mono_string_new(Global::GetDomain(), x);
				__parameters__[1] = mono_string_new(Global::GetDomain(), y);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "StringComparer", 0, NULL, "Equals", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 StringComparer::GetHashCode(mscorlib::System::String obj)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(obj).name());
				__parameters__[0] = (MonoObject*)obj;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "StringComparer", 0, NULL, "GetHashCode", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 StringComparer::GetHashCode(const char *obj)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameters__[0] = mono_string_new(Global::GetDomain(), obj);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "StringComparer", 0, NULL, "GetHashCode", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		//Get Set Static Properties Methods
		//	Get:CurrentCulture
		mscorlib::System::StringComparer  StringComparer::get_CurrentCulture()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "StringComparer", 0, NULL, "get_CurrentCulture", NullMonoObject, 0, NULL, NULL, NULL);
			return mscorlib::System::StringComparer(__result__);
		}

		void StringComparer::set_CurrentCulture(mscorlib::System::StringComparer  value)
		{
			throw;
		}


		//	Get:CurrentCultureIgnoreCase
		mscorlib::System::StringComparer  StringComparer::get_CurrentCultureIgnoreCase()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "StringComparer", 0, NULL, "get_CurrentCultureIgnoreCase", NullMonoObject, 0, NULL, NULL, NULL);
			return mscorlib::System::StringComparer(__result__);
		}

		void StringComparer::set_CurrentCultureIgnoreCase(mscorlib::System::StringComparer  value)
		{
			throw;
		}


		//	Get:InvariantCulture
		mscorlib::System::StringComparer  StringComparer::get_InvariantCulture()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "StringComparer", 0, NULL, "get_InvariantCulture", NullMonoObject, 0, NULL, NULL, NULL);
			return mscorlib::System::StringComparer(__result__);
		}

		void StringComparer::set_InvariantCulture(mscorlib::System::StringComparer  value)
		{
			throw;
		}


		//	Get:InvariantCultureIgnoreCase
		mscorlib::System::StringComparer  StringComparer::get_InvariantCultureIgnoreCase()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "StringComparer", 0, NULL, "get_InvariantCultureIgnoreCase", NullMonoObject, 0, NULL, NULL, NULL);
			return mscorlib::System::StringComparer(__result__);
		}

		void StringComparer::set_InvariantCultureIgnoreCase(mscorlib::System::StringComparer  value)
		{
			throw;
		}


		//	Get:Ordinal
		mscorlib::System::StringComparer  StringComparer::get_Ordinal()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "StringComparer", 0, NULL, "get_Ordinal", NullMonoObject, 0, NULL, NULL, NULL);
			return mscorlib::System::StringComparer(__result__);
		}

		void StringComparer::set_Ordinal(mscorlib::System::StringComparer  value)
		{
			throw;
		}


		//	Get:OrdinalIgnoreCase
		mscorlib::System::StringComparer  StringComparer::get_OrdinalIgnoreCase()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "StringComparer", 0, NULL, "get_OrdinalIgnoreCase", NullMonoObject, 0, NULL, NULL, NULL);
			return mscorlib::System::StringComparer(__result__);
		}

		void StringComparer::set_OrdinalIgnoreCase(mscorlib::System::StringComparer  value)
		{
			throw;
		}




	}
}
