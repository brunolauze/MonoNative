#include <mscorlib/System/mscorlib_System_Array.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{

		//Public Methods
		mscorlib::System::Int32 Array::GetLength(mscorlib::System::Int32 dimension)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(dimension).name());
				__parameters__[0] = &dimension;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "GetLength", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int64 Array::GetLongLength(mscorlib::System::Int32 dimension)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(dimension).name());
				__parameters__[0] = &dimension;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "GetLongLength", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 Array::GetLowerBound(mscorlib::System::Int32 dimension)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(dimension).name());
				__parameters__[0] = &dimension;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "GetLowerBound", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Object Array::GetValue(std::vector<mscorlib::System::Int32*> indices)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Int32")), 1));
				__parameters__[0] = Global::FromPrimitiveArray<mscorlib::System::Int32*>(indices, typeid(mscorlib::System::Int32).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "GetValue", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
		}

		void Array::SetValue(mscorlib::System::Object value, std::vector<mscorlib::System::Int32*> indices)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Int32")), 1));
				__parameters__[0] = (MonoObject*)value;
				__parameters__[1] = Global::FromPrimitiveArray<mscorlib::System::Int32*>(indices, typeid(mscorlib::System::Int32).name());
				Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "SetValue", __native_object__, 2, __parameter_types__, __parameters__, NULL);
		}

		mscorlib::System::Collections::IEnumerator* Array::GetEnumerator()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "GetEnumerator", __native_object__, 0, NULL, NULL, NULL);
				return new mscorlib::System::Collections::IEnumerator(__result__);
		}

		mscorlib::System::Int32 Array::GetUpperBound(mscorlib::System::Int32 dimension)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(dimension).name());
				__parameters__[0] = &dimension;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "GetUpperBound", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Object Array::GetValue(mscorlib::System::Int32 index)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(index).name());
				__parameters__[0] = &index;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "GetValue", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
		}

		mscorlib::System::Object Array::GetValue(mscorlib::System::Int32 index1, mscorlib::System::Int32 index2)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(index1).name());
				__parameter_types__[1] = Global::GetType(typeid(index2).name());
				__parameters__[0] = &index1;
				__parameters__[1] = &index2;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "GetValue", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
		}

		mscorlib::System::Object Array::GetValue(mscorlib::System::Int32 index1, mscorlib::System::Int32 index2, mscorlib::System::Int32 index3)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(index1).name());
				__parameter_types__[1] = Global::GetType(typeid(index2).name());
				__parameter_types__[2] = Global::GetType(typeid(index3).name());
				__parameters__[0] = &index1;
				__parameters__[1] = &index2;
				__parameters__[2] = &index3;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "GetValue", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
		}

		mscorlib::System::Object Array::GetValue(mscorlib::System::Int64 index)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(index).name());
				__parameters__[0] = &index;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "GetValue", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
		}

		mscorlib::System::Object Array::GetValue(mscorlib::System::Int64 index1, mscorlib::System::Int64 index2)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(index1).name());
				__parameter_types__[1] = Global::GetType(typeid(index2).name());
				__parameters__[0] = &index1;
				__parameters__[1] = &index2;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "GetValue", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
		}

		mscorlib::System::Object Array::GetValue(mscorlib::System::Int64 index1, mscorlib::System::Int64 index2, mscorlib::System::Int64 index3)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(index1).name());
				__parameter_types__[1] = Global::GetType(typeid(index2).name());
				__parameter_types__[2] = Global::GetType(typeid(index3).name());
				__parameters__[0] = &index1;
				__parameters__[1] = &index2;
				__parameters__[2] = &index3;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "GetValue", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
		}

		void Array::SetValue(mscorlib::System::Object value, mscorlib::System::Int64 index)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(index).name());
				__parameters__[0] = (MonoObject*)value;
				__parameters__[1] = &index;
				Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "SetValue", __native_object__, 2, __parameter_types__, __parameters__, NULL);
		}

		void Array::SetValue(mscorlib::System::Object value, mscorlib::System::Int64 index1, mscorlib::System::Int64 index2)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(index1).name());
				__parameter_types__[2] = Global::GetType(typeid(index2).name());
				__parameters__[0] = (MonoObject*)value;
				__parameters__[1] = &index1;
				__parameters__[2] = &index2;
				Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "SetValue", __native_object__, 3, __parameter_types__, __parameters__, NULL);
		}

		void Array::SetValue(mscorlib::System::Object value, mscorlib::System::Int64 index1, mscorlib::System::Int64 index2, mscorlib::System::Int64 index3)
		{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(index1).name());
				__parameter_types__[2] = Global::GetType(typeid(index2).name());
				__parameter_types__[3] = Global::GetType(typeid(index3).name());
				__parameters__[0] = (MonoObject*)value;
				__parameters__[1] = &index1;
				__parameters__[2] = &index2;
				__parameters__[3] = &index3;
				Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "SetValue", __native_object__, 4, __parameter_types__, __parameters__, NULL);
		}

		void Array::SetValue(mscorlib::System::Object value, mscorlib::System::Int32 index)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(index).name());
				__parameters__[0] = (MonoObject*)value;
				__parameters__[1] = &index;
				Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "SetValue", __native_object__, 2, __parameter_types__, __parameters__, NULL);
		}

		void Array::SetValue(mscorlib::System::Object value, mscorlib::System::Int32 index1, mscorlib::System::Int32 index2)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(index1).name());
				__parameter_types__[2] = Global::GetType(typeid(index2).name());
				__parameters__[0] = (MonoObject*)value;
				__parameters__[1] = &index1;
				__parameters__[2] = &index2;
				Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "SetValue", __native_object__, 3, __parameter_types__, __parameters__, NULL);
		}

		void Array::SetValue(mscorlib::System::Object value, mscorlib::System::Int32 index1, mscorlib::System::Int32 index2, mscorlib::System::Int32 index3)
		{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(index1).name());
				__parameter_types__[2] = Global::GetType(typeid(index2).name());
				__parameter_types__[3] = Global::GetType(typeid(index3).name());
				__parameters__[0] = (MonoObject*)value;
				__parameters__[1] = &index1;
				__parameters__[2] = &index2;
				__parameters__[3] = &index3;
				Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "SetValue", __native_object__, 4, __parameter_types__, __parameters__, NULL);
		}

		mscorlib::System::Array Array::CreateInstance(mscorlib::System::Type elementType, mscorlib::System::Int32 length)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(elementType).name());
				__parameter_types__[1] = Global::GetType(typeid(length).name());
				__parameters__[0] = (MonoObject*)elementType;
				__parameters__[1] = &length;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "CreateInstance", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Array(__result__);
		}

		mscorlib::System::Array Array::CreateInstance(mscorlib::System::Type elementType, mscorlib::System::Int32 length1, mscorlib::System::Int32 length2)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(elementType).name());
				__parameter_types__[1] = Global::GetType(typeid(length1).name());
				__parameter_types__[2] = Global::GetType(typeid(length2).name());
				__parameters__[0] = (MonoObject*)elementType;
				__parameters__[1] = &length1;
				__parameters__[2] = &length2;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "CreateInstance", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Array(__result__);
		}

		mscorlib::System::Array Array::CreateInstance(mscorlib::System::Type elementType, mscorlib::System::Int32 length1, mscorlib::System::Int32 length2, mscorlib::System::Int32 length3)
		{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType(typeid(elementType).name());
				__parameter_types__[1] = Global::GetType(typeid(length1).name());
				__parameter_types__[2] = Global::GetType(typeid(length2).name());
				__parameter_types__[3] = Global::GetType(typeid(length3).name());
				__parameters__[0] = (MonoObject*)elementType;
				__parameters__[1] = &length1;
				__parameters__[2] = &length2;
				__parameters__[3] = &length3;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "CreateInstance", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Array(__result__);
		}

		mscorlib::System::Array Array::CreateInstance(mscorlib::System::Type elementType, std::vector<mscorlib::System::Int32*> lengths)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(elementType).name());
				__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Int32")), 1));
				__parameters__[0] = (MonoObject*)elementType;
				__parameters__[1] = Global::FromPrimitiveArray<mscorlib::System::Int32*>(lengths, typeid(mscorlib::System::Int32).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "CreateInstance", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Array(__result__);
		}

		mscorlib::System::Array Array::CreateInstance(mscorlib::System::Type elementType, std::vector<mscorlib::System::Int32*> lengths, std::vector<mscorlib::System::Int32*> lowerBounds)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(elementType).name());
				__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Int32")), 1));
				__parameter_types__[2] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Int32")), 1));
				__parameters__[0] = (MonoObject*)elementType;
				__parameters__[1] = Global::FromPrimitiveArray<mscorlib::System::Int32*>(lengths, typeid(mscorlib::System::Int32).name());
				__parameters__[2] = Global::FromPrimitiveArray<mscorlib::System::Int32*>(lowerBounds, typeid(mscorlib::System::Int32).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "CreateInstance", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Array(__result__);
		}

		mscorlib::System::Array Array::CreateInstance(mscorlib::System::Type elementType, std::vector<mscorlib::System::Int64*> lengths)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(elementType).name());
				__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Int64")), 1));
				__parameters__[0] = (MonoObject*)elementType;
				__parameters__[1] = Global::FromPrimitiveArray<mscorlib::System::Int64*>(lengths, typeid(mscorlib::System::Int64).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "CreateInstance", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Array(__result__);
		}

		mscorlib::System::Object Array::GetValue(std::vector<mscorlib::System::Int64*> indices)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Int64")), 1));
				__parameters__[0] = Global::FromPrimitiveArray<mscorlib::System::Int64*>(indices, typeid(mscorlib::System::Int64).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "GetValue", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
		}

		void Array::SetValue(mscorlib::System::Object value, std::vector<mscorlib::System::Int64*> indices)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Int64")), 1));
				__parameters__[0] = (MonoObject*)value;
				__parameters__[1] = Global::FromPrimitiveArray<mscorlib::System::Int64*>(indices, typeid(mscorlib::System::Int64).name());
				Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "SetValue", __native_object__, 2, __parameter_types__, __parameters__, NULL);
		}

		mscorlib::System::Int32 Array::BinarySearch(mscorlib::System::Array array, mscorlib::System::Object value)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(array).name());
				__parameter_types__[1] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)array;
				__parameters__[1] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "BinarySearch", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 Array::BinarySearch(mscorlib::System::Array array, mscorlib::System::Object value, mscorlib::System::Collections::IComparer comparer)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(array).name());
				__parameter_types__[1] = Global::GetType(typeid(value).name());
				__parameter_types__[2] = Global::GetType(typeid(comparer).name());
				__parameters__[0] = (MonoObject*)array;
				__parameters__[1] = (MonoObject*)value;
				__parameters__[2] = (MonoObject*)comparer;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "BinarySearch", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 Array::BinarySearch(mscorlib::System::Array array, mscorlib::System::Int32 index, mscorlib::System::Int32 length, mscorlib::System::Object value)
		{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType(typeid(array).name());
				__parameter_types__[1] = Global::GetType(typeid(index).name());
				__parameter_types__[2] = Global::GetType(typeid(length).name());
				__parameter_types__[3] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)array;
				__parameters__[1] = &index;
				__parameters__[2] = &length;
				__parameters__[3] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "BinarySearch", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 Array::BinarySearch(mscorlib::System::Array array, mscorlib::System::Int32 index, mscorlib::System::Int32 length, mscorlib::System::Object value, mscorlib::System::Collections::IComparer comparer)
		{
				MonoType *__parameter_types__[5];
				void *__parameters__[5];
				__parameter_types__[0] = Global::GetType(typeid(array).name());
				__parameter_types__[1] = Global::GetType(typeid(index).name());
				__parameter_types__[2] = Global::GetType(typeid(length).name());
				__parameter_types__[3] = Global::GetType(typeid(value).name());
				__parameter_types__[4] = Global::GetType(typeid(comparer).name());
				__parameters__[0] = (MonoObject*)array;
				__parameters__[1] = &index;
				__parameters__[2] = &length;
				__parameters__[3] = (MonoObject*)value;
				__parameters__[4] = (MonoObject*)comparer;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "BinarySearch", NullMonoObject, 5, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		void Array::Clear(mscorlib::System::Array array, mscorlib::System::Int32 index, mscorlib::System::Int32 length)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(array).name());
				__parameter_types__[1] = Global::GetType(typeid(index).name());
				__parameter_types__[2] = Global::GetType(typeid(length).name());
				__parameters__[0] = (MonoObject*)array;
				__parameters__[1] = &index;
				__parameters__[2] = &length;
				Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "Clear", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
		}

		mscorlib::System::Object Array::Clone()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "Clone", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Object(__result__);
		}

		void Array::Copy(mscorlib::System::Array sourceArray, mscorlib::System::Array destinationArray, mscorlib::System::Int32 length)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(sourceArray).name());
				__parameter_types__[1] = Global::GetType(typeid(destinationArray).name());
				__parameter_types__[2] = Global::GetType(typeid(length).name());
				__parameters__[0] = (MonoObject*)sourceArray;
				__parameters__[1] = (MonoObject*)destinationArray;
				__parameters__[2] = &length;
				Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "Copy", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
		}

		void Array::Copy(mscorlib::System::Array sourceArray, mscorlib::System::Int32 sourceIndex, mscorlib::System::Array destinationArray, mscorlib::System::Int32 destinationIndex, mscorlib::System::Int32 length)
		{
				MonoType *__parameter_types__[5];
				void *__parameters__[5];
				__parameter_types__[0] = Global::GetType(typeid(sourceArray).name());
				__parameter_types__[1] = Global::GetType(typeid(sourceIndex).name());
				__parameter_types__[2] = Global::GetType(typeid(destinationArray).name());
				__parameter_types__[3] = Global::GetType(typeid(destinationIndex).name());
				__parameter_types__[4] = Global::GetType(typeid(length).name());
				__parameters__[0] = (MonoObject*)sourceArray;
				__parameters__[1] = &sourceIndex;
				__parameters__[2] = (MonoObject*)destinationArray;
				__parameters__[3] = &destinationIndex;
				__parameters__[4] = &length;
				Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "Copy", NullMonoObject, 5, __parameter_types__, __parameters__, NULL);
		}

		void Array::Copy(mscorlib::System::Array sourceArray, mscorlib::System::Int64 sourceIndex, mscorlib::System::Array destinationArray, mscorlib::System::Int64 destinationIndex, mscorlib::System::Int64 length)
		{
				MonoType *__parameter_types__[5];
				void *__parameters__[5];
				__parameter_types__[0] = Global::GetType(typeid(sourceArray).name());
				__parameter_types__[1] = Global::GetType(typeid(sourceIndex).name());
				__parameter_types__[2] = Global::GetType(typeid(destinationArray).name());
				__parameter_types__[3] = Global::GetType(typeid(destinationIndex).name());
				__parameter_types__[4] = Global::GetType(typeid(length).name());
				__parameters__[0] = (MonoObject*)sourceArray;
				__parameters__[1] = &sourceIndex;
				__parameters__[2] = (MonoObject*)destinationArray;
				__parameters__[3] = &destinationIndex;
				__parameters__[4] = &length;
				Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "Copy", NullMonoObject, 5, __parameter_types__, __parameters__, NULL);
		}

		void Array::Copy(mscorlib::System::Array sourceArray, mscorlib::System::Array destinationArray, mscorlib::System::Int64 length)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(sourceArray).name());
				__parameter_types__[1] = Global::GetType(typeid(destinationArray).name());
				__parameter_types__[2] = Global::GetType(typeid(length).name());
				__parameters__[0] = (MonoObject*)sourceArray;
				__parameters__[1] = (MonoObject*)destinationArray;
				__parameters__[2] = &length;
				Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "Copy", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
		}

		mscorlib::System::Int32 Array::IndexOf(mscorlib::System::Array array, mscorlib::System::Object value)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(array).name());
				__parameter_types__[1] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)array;
				__parameters__[1] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "IndexOf", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 Array::IndexOf(mscorlib::System::Array array, mscorlib::System::Object value, mscorlib::System::Int32 startIndex)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(array).name());
				__parameter_types__[1] = Global::GetType(typeid(value).name());
				__parameter_types__[2] = Global::GetType(typeid(startIndex).name());
				__parameters__[0] = (MonoObject*)array;
				__parameters__[1] = (MonoObject*)value;
				__parameters__[2] = &startIndex;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "IndexOf", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 Array::IndexOf(mscorlib::System::Array array, mscorlib::System::Object value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count)
		{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType(typeid(array).name());
				__parameter_types__[1] = Global::GetType(typeid(value).name());
				__parameter_types__[2] = Global::GetType(typeid(startIndex).name());
				__parameter_types__[3] = Global::GetType(typeid(count).name());
				__parameters__[0] = (MonoObject*)array;
				__parameters__[1] = (MonoObject*)value;
				__parameters__[2] = &startIndex;
				__parameters__[3] = &count;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "IndexOf", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		void Array::Initialize()
		{
				Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "Initialize", __native_object__, 0, NULL, NULL, NULL);
		}

		mscorlib::System::Int32 Array::LastIndexOf(mscorlib::System::Array array, mscorlib::System::Object value)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(array).name());
				__parameter_types__[1] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)array;
				__parameters__[1] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "LastIndexOf", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 Array::LastIndexOf(mscorlib::System::Array array, mscorlib::System::Object value, mscorlib::System::Int32 startIndex)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(array).name());
				__parameter_types__[1] = Global::GetType(typeid(value).name());
				__parameter_types__[2] = Global::GetType(typeid(startIndex).name());
				__parameters__[0] = (MonoObject*)array;
				__parameters__[1] = (MonoObject*)value;
				__parameters__[2] = &startIndex;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "LastIndexOf", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 Array::LastIndexOf(mscorlib::System::Array array, mscorlib::System::Object value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count)
		{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType(typeid(array).name());
				__parameter_types__[1] = Global::GetType(typeid(value).name());
				__parameter_types__[2] = Global::GetType(typeid(startIndex).name());
				__parameter_types__[3] = Global::GetType(typeid(count).name());
				__parameters__[0] = (MonoObject*)array;
				__parameters__[1] = (MonoObject*)value;
				__parameters__[2] = &startIndex;
				__parameters__[3] = &count;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "LastIndexOf", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		void Array::Reverse(mscorlib::System::Array array)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(array).name());
				__parameters__[0] = (MonoObject*)array;
				Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "Reverse", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
		}

		void Array::Reverse(mscorlib::System::Array array, mscorlib::System::Int32 index, mscorlib::System::Int32 length)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(array).name());
				__parameter_types__[1] = Global::GetType(typeid(index).name());
				__parameter_types__[2] = Global::GetType(typeid(length).name());
				__parameters__[0] = (MonoObject*)array;
				__parameters__[1] = &index;
				__parameters__[2] = &length;
				Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "Reverse", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
		}

		void Array::Sort(mscorlib::System::Array array)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(array).name());
				__parameters__[0] = (MonoObject*)array;
				Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "Sort", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
		}

		void Array::Sort(mscorlib::System::Array keys, mscorlib::System::Array items)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(keys).name());
				__parameter_types__[1] = Global::GetType(typeid(items).name());
				__parameters__[0] = (MonoObject*)keys;
				__parameters__[1] = (MonoObject*)items;
				Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "Sort", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
		}

		void Array::Sort(mscorlib::System::Array array, mscorlib::System::Collections::IComparer comparer)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(array).name());
				__parameter_types__[1] = Global::GetType(typeid(comparer).name());
				__parameters__[0] = (MonoObject*)array;
				__parameters__[1] = (MonoObject*)comparer;
				Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "Sort", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
		}

		void Array::Sort(mscorlib::System::Array array, mscorlib::System::Int32 index, mscorlib::System::Int32 length)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(array).name());
				__parameter_types__[1] = Global::GetType(typeid(index).name());
				__parameter_types__[2] = Global::GetType(typeid(length).name());
				__parameters__[0] = (MonoObject*)array;
				__parameters__[1] = &index;
				__parameters__[2] = &length;
				Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "Sort", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
		}

		void Array::Sort(mscorlib::System::Array keys, mscorlib::System::Array items, mscorlib::System::Collections::IComparer comparer)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(keys).name());
				__parameter_types__[1] = Global::GetType(typeid(items).name());
				__parameter_types__[2] = Global::GetType(typeid(comparer).name());
				__parameters__[0] = (MonoObject*)keys;
				__parameters__[1] = (MonoObject*)items;
				__parameters__[2] = (MonoObject*)comparer;
				Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "Sort", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
		}

		void Array::Sort(mscorlib::System::Array keys, mscorlib::System::Array items, mscorlib::System::Int32 index, mscorlib::System::Int32 length)
		{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType(typeid(keys).name());
				__parameter_types__[1] = Global::GetType(typeid(items).name());
				__parameter_types__[2] = Global::GetType(typeid(index).name());
				__parameter_types__[3] = Global::GetType(typeid(length).name());
				__parameters__[0] = (MonoObject*)keys;
				__parameters__[1] = (MonoObject*)items;
				__parameters__[2] = &index;
				__parameters__[3] = &length;
				Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "Sort", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
		}

		void Array::Sort(mscorlib::System::Array array, mscorlib::System::Int32 index, mscorlib::System::Int32 length, mscorlib::System::Collections::IComparer comparer)
		{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType(typeid(array).name());
				__parameter_types__[1] = Global::GetType(typeid(index).name());
				__parameter_types__[2] = Global::GetType(typeid(length).name());
				__parameter_types__[3] = Global::GetType(typeid(comparer).name());
				__parameters__[0] = (MonoObject*)array;
				__parameters__[1] = &index;
				__parameters__[2] = &length;
				__parameters__[3] = (MonoObject*)comparer;
				Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "Sort", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
		}

		void Array::Sort(mscorlib::System::Array keys, mscorlib::System::Array items, mscorlib::System::Int32 index, mscorlib::System::Int32 length, mscorlib::System::Collections::IComparer comparer)
		{
				MonoType *__parameter_types__[5];
				void *__parameters__[5];
				__parameter_types__[0] = Global::GetType(typeid(keys).name());
				__parameter_types__[1] = Global::GetType(typeid(items).name());
				__parameter_types__[2] = Global::GetType(typeid(index).name());
				__parameter_types__[3] = Global::GetType(typeid(length).name());
				__parameter_types__[4] = Global::GetType(typeid(comparer).name());
				__parameters__[0] = (MonoObject*)keys;
				__parameters__[1] = (MonoObject*)items;
				__parameters__[2] = &index;
				__parameters__[3] = &length;
				__parameters__[4] = (MonoObject*)comparer;
				Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "Sort", NullMonoObject, 5, __parameter_types__, __parameters__, NULL);
		}

		void Array::CopyTo(mscorlib::System::Array array, mscorlib::System::Int32 index)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(array).name());
				__parameter_types__[1] = Global::GetType(typeid(index).name());
				__parameters__[0] = (MonoObject*)array;
				__parameters__[1] = &index;
				Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "CopyTo", __native_object__, 2, __parameter_types__, __parameters__, NULL);
		}

		void Array::CopyTo(mscorlib::System::Array array, mscorlib::System::Int64 index)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(array).name());
				__parameter_types__[1] = Global::GetType(typeid(index).name());
				__parameters__[0] = (MonoObject*)array;
				__parameters__[1] = &index;
				Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "CopyTo", __native_object__, 2, __parameter_types__, __parameters__, NULL);
		}

		void Array::ConstrainedCopy(mscorlib::System::Array sourceArray, mscorlib::System::Int32 sourceIndex, mscorlib::System::Array destinationArray, mscorlib::System::Int32 destinationIndex, mscorlib::System::Int32 length)
		{
				MonoType *__parameter_types__[5];
				void *__parameters__[5];
				__parameter_types__[0] = Global::GetType(typeid(sourceArray).name());
				__parameter_types__[1] = Global::GetType(typeid(sourceIndex).name());
				__parameter_types__[2] = Global::GetType(typeid(destinationArray).name());
				__parameter_types__[3] = Global::GetType(typeid(destinationIndex).name());
				__parameter_types__[4] = Global::GetType(typeid(length).name());
				__parameters__[0] = (MonoObject*)sourceArray;
				__parameters__[1] = &sourceIndex;
				__parameters__[2] = (MonoObject*)destinationArray;
				__parameters__[3] = &destinationIndex;
				__parameters__[4] = &length;
				Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "ConstrainedCopy", NullMonoObject, 5, __parameter_types__, __parameters__, NULL);
		}

		//Get Set Properties Methods
		//	Get:Length
		mscorlib::System::Int32  Array::get_Length() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "get_Length", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}


		//	Get:LongLength
		mscorlib::System::Int64  Array::get_LongLength() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "get_LongLength", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
		}


		//	Get:Rank
		mscorlib::System::Int32  Array::get_Rank() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "get_Rank", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}


		//	Get:IsSynchronized
		mscorlib::System::Boolean  Array::get_IsSynchronized() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "get_IsSynchronized", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}


		//	Get:SyncRoot
		mscorlib::System::Object  Array::get_SyncRoot() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "get_SyncRoot", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::Object(__result__);
		}


		//	Get:IsFixedSize
		mscorlib::System::Boolean  Array::get_IsFixedSize() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "get_IsFixedSize", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}


		//	Get:IsReadOnly
		mscorlib::System::Boolean  Array::get_IsReadOnly() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "get_IsReadOnly", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}



	}
}
