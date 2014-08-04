#include <mscorlib/System/mscorlib_System_ApplicationId.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{

		//Public Methods
		mscorlib::System::ApplicationId ApplicationId::Copy()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "ApplicationId", 0, NULL, "Copy", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::ApplicationId(__result__);
		}

		mscorlib::System::Boolean ApplicationId::Equals(mscorlib::System::Object o)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(o).name());
				__parameters__[0] = (MonoObject*)o;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "ApplicationId", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 ApplicationId::GetHashCode()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "ApplicationId", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::String ApplicationId::ToString()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "ApplicationId", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
		}

		//Get Set Properties Methods
		//	Get:Culture
		mscorlib::System::String  ApplicationId::get_Culture()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "ApplicationId", 0, NULL, "get_Culture", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}


		//	Get:Name
		mscorlib::System::String  ApplicationId::get_Name()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "ApplicationId", 0, NULL, "get_Name", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}


		//	Get:ProcessorArchitecture
		mscorlib::System::String  ApplicationId::get_ProcessorArchitecture()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "ApplicationId", 0, NULL, "get_ProcessorArchitecture", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}


		//	Get:PublicKeyToken
		std::vector<mscorlib::System::Byte*>  ApplicationId::get_PublicKeyToken()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "ApplicationId", 0, NULL, "get_PublicKeyToken", __native_object__, 0, NULL, NULL, NULL);
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


		//	Get:Version
		mscorlib::System::Version  ApplicationId::get_Version()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "ApplicationId", 0, NULL, "get_Version", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::Version(__result__);
		}



	}
}
