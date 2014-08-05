#include <mscorlib/System/mscorlib_System_Guid.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{

		//Public Methods
		mscorlib::System::Int32 Guid::CompareTo(mscorlib::System::Object value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Guid", 0, NULL, "CompareTo", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean Guid::Equals(mscorlib::System::Object o)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(o).name());
				__parameters__[0] = (MonoObject*)o;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Guid", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 Guid::CompareTo(mscorlib::System::Guid value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Guid", 0, NULL, "CompareTo", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean Guid::Equals(mscorlib::System::Guid g)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(g).name());
				__parameters__[0] = (MonoObject*)g;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Guid", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 Guid::GetHashCode()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Guid", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Guid Guid::NewGuid()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Guid", 0, NULL, "NewGuid", NullMonoObject, 0, NULL, NULL, NULL);
				return mscorlib::System::Guid(__result__);
		}

		std::vector<mscorlib::System::Byte*> Guid::ToByteArray()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Guid", 0, NULL, "ToByteArray", __native_object__, 0, NULL, NULL, NULL);
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

		mscorlib::System::String Guid::ToString()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Guid", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String Guid::ToString(mscorlib::System::String format)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(format).name());
				__parameters__[0] = (MonoObject*)format;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Guid", 0, NULL, "ToString", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String Guid::ToString(mscorlib::System::String format, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(format).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = (MonoObject*)format;
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Guid", 0, NULL, "ToString", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::Guid Guid::Parse(mscorlib::System::String input)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(input).name());
				__parameters__[0] = (MonoObject*)input;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Guid", 0, NULL, "Parse", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Guid(__result__);
		}

		mscorlib::System::Guid Guid::ParseExact(mscorlib::System::String input, mscorlib::System::String format)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(input).name());
				__parameter_types__[1] = Global::GetType(typeid(format).name());
				__parameters__[0] = (MonoObject*)input;
				__parameters__[1] = (MonoObject*)format;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Guid", 0, NULL, "ParseExact", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Guid(__result__);
		}

		mscorlib::System::Boolean Guid::TryParse(mscorlib::System::String input, mscorlib::System::Guid result)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(input).name());
				__parameter_types__[1] = Global::GetType(typeid(result).name());
				__parameters__[0] = (MonoObject*)input;
				__parameters__[1] = (MonoObject*)result;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Guid", 0, NULL, "TryParse", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean Guid::TryParseExact(mscorlib::System::String input, mscorlib::System::String format, mscorlib::System::Guid result)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(input).name());
				__parameter_types__[1] = Global::GetType(typeid(format).name());
				__parameter_types__[2] = Global::GetType(typeid(result).name());
				__parameters__[0] = (MonoObject*)input;
				__parameters__[1] = (MonoObject*)format;
				__parameters__[2] = (MonoObject*)result;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Guid", 0, NULL, "TryParseExact", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

			//	Get/Set:Empty
		mscorlib::System::Guid Guid::get_Empty()
		{
			return Global::GetFieldValue("mscorlib", "System", "Guid", 0, NULL, "Empty");
		}

		void Guid::set_Empty(mscorlib::System::Guid  value)
		{
			throw;
		}


	}
}
