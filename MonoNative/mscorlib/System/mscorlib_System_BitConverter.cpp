#include <mscorlib/System/mscorlib_System_BitConverter.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Byte.h>



namespace mscorlib
{
	namespace System
	{

		//Public Methods
		mscorlib::System::Int64 BitConverter::DoubleToInt64Bits(mscorlib::System::Double value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "BitConverter", 0, NULL, "DoubleToInt64Bits", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
		}

		mscorlib::System::Double BitConverter::Int64BitsToDouble(mscorlib::System::Int64 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "BitConverter", 0, NULL, "Int64BitsToDouble", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Double*)mono_object_unbox(__result__);
		}

		std::vector<mscorlib::System::Byte*> BitConverter::GetBytes(mscorlib::System::Boolean value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = reinterpret_cast<void*>(value);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "BitConverter", 0, NULL, "GetBytes", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
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

		std::vector<mscorlib::System::Byte*> BitConverter::GetBytes(mscorlib::System::Char value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "BitConverter", 0, NULL, "GetBytes", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
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

		std::vector<mscorlib::System::Byte*> BitConverter::GetBytes(mscorlib::System::Int16 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "BitConverter", 0, NULL, "GetBytes", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
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

		std::vector<mscorlib::System::Byte*> BitConverter::GetBytes(mscorlib::System::Int32 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "BitConverter", 0, NULL, "GetBytes", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
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

		std::vector<mscorlib::System::Byte*> BitConverter::GetBytes(mscorlib::System::Int64 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "BitConverter", 0, NULL, "GetBytes", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
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

		std::vector<mscorlib::System::Byte*> BitConverter::GetBytes(mscorlib::System::UInt16 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "BitConverter", 0, NULL, "GetBytes", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
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

		std::vector<mscorlib::System::Byte*> BitConverter::GetBytes(mscorlib::System::UInt32 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "BitConverter", 0, NULL, "GetBytes", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
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

		std::vector<mscorlib::System::Byte*> BitConverter::GetBytes(mscorlib::System::UInt64 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "BitConverter", 0, NULL, "GetBytes", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
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

		std::vector<mscorlib::System::Byte*> BitConverter::GetBytes(mscorlib::System::Single value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "BitConverter", 0, NULL, "GetBytes", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
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

		std::vector<mscorlib::System::Byte*> BitConverter::GetBytes(mscorlib::System::Double value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "BitConverter", 0, NULL, "GetBytes", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
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

		mscorlib::System::Boolean BitConverter::ToBoolean(std::vector<mscorlib::System::Byte*> value, mscorlib::System::Int32 startIndex)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(value).name()))->eklass);
				__parameter_types__[1] = Global::GetType(typeid(startIndex).name());
				__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(value, typeid(mscorlib::System::Byte).name());
				__parameters__[1] = &startIndex;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "BitConverter", 0, NULL, "ToBoolean", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Char BitConverter::ToChar(std::vector<mscorlib::System::Byte*> value, mscorlib::System::Int32 startIndex)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(value).name()))->eklass);
				__parameter_types__[1] = Global::GetType(typeid(startIndex).name());
				__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(value, typeid(mscorlib::System::Byte).name());
				__parameters__[1] = &startIndex;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "BitConverter", 0, NULL, "ToChar", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Char*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int16 BitConverter::ToInt16(std::vector<mscorlib::System::Byte*> value, mscorlib::System::Int32 startIndex)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(value).name()))->eklass);
				__parameter_types__[1] = Global::GetType(typeid(startIndex).name());
				__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(value, typeid(mscorlib::System::Byte).name());
				__parameters__[1] = &startIndex;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "BitConverter", 0, NULL, "ToInt16", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int16*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 BitConverter::ToInt32(std::vector<mscorlib::System::Byte*> value, mscorlib::System::Int32 startIndex)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(value).name()))->eklass);
				__parameter_types__[1] = Global::GetType(typeid(startIndex).name());
				__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(value, typeid(mscorlib::System::Byte).name());
				__parameters__[1] = &startIndex;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "BitConverter", 0, NULL, "ToInt32", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int64 BitConverter::ToInt64(std::vector<mscorlib::System::Byte*> value, mscorlib::System::Int32 startIndex)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(value).name()))->eklass);
				__parameter_types__[1] = Global::GetType(typeid(startIndex).name());
				__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(value, typeid(mscorlib::System::Byte).name());
				__parameters__[1] = &startIndex;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "BitConverter", 0, NULL, "ToInt64", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt16 BitConverter::ToUInt16(std::vector<mscorlib::System::Byte*> value, mscorlib::System::Int32 startIndex)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(value).name()))->eklass);
				__parameter_types__[1] = Global::GetType(typeid(startIndex).name());
				__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(value, typeid(mscorlib::System::Byte).name());
				__parameters__[1] = &startIndex;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "BitConverter", 0, NULL, "ToUInt16", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt16*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt32 BitConverter::ToUInt32(std::vector<mscorlib::System::Byte*> value, mscorlib::System::Int32 startIndex)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(value).name()))->eklass);
				__parameter_types__[1] = Global::GetType(typeid(startIndex).name());
				__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(value, typeid(mscorlib::System::Byte).name());
				__parameters__[1] = &startIndex;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "BitConverter", 0, NULL, "ToUInt32", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt32*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt64 BitConverter::ToUInt64(std::vector<mscorlib::System::Byte*> value, mscorlib::System::Int32 startIndex)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(value).name()))->eklass);
				__parameter_types__[1] = Global::GetType(typeid(startIndex).name());
				__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(value, typeid(mscorlib::System::Byte).name());
				__parameters__[1] = &startIndex;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "BitConverter", 0, NULL, "ToUInt64", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt64*)mono_object_unbox(__result__);
		}

		mscorlib::System::Single BitConverter::ToSingle(std::vector<mscorlib::System::Byte*> value, mscorlib::System::Int32 startIndex)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(value).name()))->eklass);
				__parameter_types__[1] = Global::GetType(typeid(startIndex).name());
				__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(value, typeid(mscorlib::System::Byte).name());
				__parameters__[1] = &startIndex;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "BitConverter", 0, NULL, "ToSingle", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Single*)mono_object_unbox(__result__);
		}

		mscorlib::System::Double BitConverter::ToDouble(std::vector<mscorlib::System::Byte*> value, mscorlib::System::Int32 startIndex)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(value).name()))->eklass);
				__parameter_types__[1] = Global::GetType(typeid(startIndex).name());
				__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(value, typeid(mscorlib::System::Byte).name());
				__parameters__[1] = &startIndex;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "BitConverter", 0, NULL, "ToDouble", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Double*)mono_object_unbox(__result__);
		}

		mscorlib::System::String BitConverter::ToString(std::vector<mscorlib::System::Byte*> value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(value).name()))->eklass);
				__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(value, typeid(mscorlib::System::Byte).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "BitConverter", 0, NULL, "ToString", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String BitConverter::ToString(std::vector<mscorlib::System::Byte*> value, mscorlib::System::Int32 startIndex)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(value).name()))->eklass);
				__parameter_types__[1] = Global::GetType(typeid(startIndex).name());
				__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(value, typeid(mscorlib::System::Byte).name());
				__parameters__[1] = &startIndex;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "BitConverter", 0, NULL, "ToString", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String BitConverter::ToString(std::vector<mscorlib::System::Byte*> value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 length)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(value).name()))->eklass);
				__parameter_types__[1] = Global::GetType(typeid(startIndex).name());
				__parameter_types__[2] = Global::GetType(typeid(length).name());
				__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(value, typeid(mscorlib::System::Byte).name());
				__parameters__[1] = &startIndex;
				__parameters__[2] = &length;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "BitConverter", 0, NULL, "ToString", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

			//	Get/Set:IsLittleEndian
		mscorlib::System::Boolean BitConverter::get_IsLittleEndian()
		{
			return Global::GetFieldBooleanValue("mscorlib", "System", "BitConverter", 0, NULL, "IsLittleEndian");
		}



	}
}
