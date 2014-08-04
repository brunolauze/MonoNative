#include <mscorlib/System/mscorlib_System_StringComparer.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_CultureInfo.h>



namespace mscorlib
{
	namespace System
	{

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

		mscorlib::System::Int32 StringComparer::GetHashCode(mscorlib::System::String obj)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(obj).name());
				__parameters__[0] = (MonoObject*)obj;
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


		//	Get:CurrentCultureIgnoreCase
		mscorlib::System::StringComparer  StringComparer::get_CurrentCultureIgnoreCase()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "StringComparer", 0, NULL, "get_CurrentCultureIgnoreCase", NullMonoObject, 0, NULL, NULL, NULL);
			return mscorlib::System::StringComparer(__result__);
		}


		//	Get:InvariantCulture
		mscorlib::System::StringComparer  StringComparer::get_InvariantCulture()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "StringComparer", 0, NULL, "get_InvariantCulture", NullMonoObject, 0, NULL, NULL, NULL);
			return mscorlib::System::StringComparer(__result__);
		}


		//	Get:InvariantCultureIgnoreCase
		mscorlib::System::StringComparer  StringComparer::get_InvariantCultureIgnoreCase()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "StringComparer", 0, NULL, "get_InvariantCultureIgnoreCase", NullMonoObject, 0, NULL, NULL, NULL);
			return mscorlib::System::StringComparer(__result__);
		}


		//	Get:Ordinal
		mscorlib::System::StringComparer  StringComparer::get_Ordinal()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "StringComparer", 0, NULL, "get_Ordinal", NullMonoObject, 0, NULL, NULL, NULL);
			return mscorlib::System::StringComparer(__result__);
		}


		//	Get:OrdinalIgnoreCase
		mscorlib::System::StringComparer  StringComparer::get_OrdinalIgnoreCase()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "StringComparer", 0, NULL, "get_OrdinalIgnoreCase", NullMonoObject, 0, NULL, NULL, NULL);
			return mscorlib::System::StringComparer(__result__);
		}




	}
}
