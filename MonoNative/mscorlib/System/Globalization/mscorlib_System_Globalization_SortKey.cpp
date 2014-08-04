#include <mscorlib/System/Globalization/mscorlib_System_Globalization_SortKey.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Globalization
		{

			//Public Methods
			mscorlib::System::Int32 SortKey::Compare(mscorlib::System::Globalization::SortKey sortkey1, mscorlib::System::Globalization::SortKey sortkey2)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(sortkey1).name());
					__parameter_types__[1] = Global::GetType(typeid(sortkey2).name());
					__parameters__[0] = (MonoObject*)sortkey1;
					__parameters__[1] = (MonoObject*)sortkey2;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "SortKey", 0, NULL, "Compare", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean SortKey::Equals(mscorlib::System::Object value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "SortKey", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 SortKey::GetHashCode()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "SortKey", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::String SortKey::ToString()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "SortKey", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
			}

			//Get Set Properties Methods
			//	Get:OriginalString
			mscorlib::System::String  SortKey::get_OriginalString()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "SortKey", 0, NULL, "get_OriginalString", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:KeyData
			std::vector<mscorlib::System::Byte*>  SortKey::get_KeyData()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "SortKey", 0, NULL, "get_KeyData", __native_object__, 0, NULL, NULL, NULL);
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



		}
	}
}
