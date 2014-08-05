#include <mscorlib/System/mscorlib_System_Version.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{

		//Public Methods
		mscorlib::System::Object Version::Clone()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Version", 0, NULL, "Clone", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Object(__result__);
		}

		mscorlib::System::Int32 Version::CompareTo(mscorlib::System::Object version)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(version).name());
				__parameters__[0] = (MonoObject*)version;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Version", 0, NULL, "CompareTo", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean Version::Equals(mscorlib::System::Object obj)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(obj).name());
				__parameters__[0] = (MonoObject*)obj;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Version", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 Version::CompareTo(mscorlib::System::Version value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Version", 0, NULL, "CompareTo", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean Version::Equals(mscorlib::System::Version obj)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(obj).name());
				__parameters__[0] = (MonoObject*)obj;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Version", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 Version::GetHashCode()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Version", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::String Version::ToString()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Version", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String Version::ToString(mscorlib::System::Int32 fieldCount)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(fieldCount).name());
				__parameters__[0] = &fieldCount;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Version", 0, NULL, "ToString", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::Version Version::Parse(mscorlib::System::String input)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(input).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), input);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Version", 0, NULL, "Parse", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Version(__result__);
		}

		mscorlib::System::Version Version::Parse(const char *input)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(input).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), input);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Version", 0, NULL, "Parse", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Version(__result__);
		}

		mscorlib::System::Boolean Version::TryParse(mscorlib::System::String input, mscorlib::System::Version result)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(input).name());
				__parameter_types__[1] = Global::GetType(typeid(result).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), input);
				__parameters__[1] = (MonoObject*)result;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Version", 0, NULL, "TryParse", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean Version::TryParse(const char *input, mscorlib::System::Version result)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(input).name());
				__parameter_types__[1] = Global::GetType(typeid(result).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), input);
				__parameters__[1] = (MonoObject*)result;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Version", 0, NULL, "TryParse", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		//Get Set Properties Methods
		//	Get:Build
		mscorlib::System::Int32  Version::get_Build() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Version", 0, NULL, "get_Build", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}


		//	Get:Major
		mscorlib::System::Int32  Version::get_Major() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Version", 0, NULL, "get_Major", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}


		//	Get:Minor
		mscorlib::System::Int32  Version::get_Minor() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Version", 0, NULL, "get_Minor", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}


		//	Get:Revision
		mscorlib::System::Int32  Version::get_Revision() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Version", 0, NULL, "get_Revision", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}


		//	Get:MajorRevision
		mscorlib::System::Int16  Version::get_MajorRevision() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Version", 0, NULL, "get_MajorRevision", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int16*)mono_object_unbox(__result__);
		}


		//	Get:MinorRevision
		mscorlib::System::Int16  Version::get_MinorRevision() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Version", 0, NULL, "get_MinorRevision", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int16*)mono_object_unbox(__result__);
		}



	}
}
