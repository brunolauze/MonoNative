#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_ARRAYSEGMENT_1_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_ARRAYSEGMENT_1_H

#include <mscorlib/System/mscorlib_System_ValueType.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IList_1.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IReadOnlyList_1.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IEnumerable.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_ICollection_1.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IEnumerable_1.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IReadOnlyCollection_1.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>

namespace mscorlib
{
	namespace System
	{

		template<typename T>
		class ArraySegment
			: public mscorlib::System::ValueType
			, public virtual mscorlib::System::Collections::Generic::IList<T>
			, public virtual mscorlib::System::Collections::Generic::IReadOnlyList<T>
			, public virtual mscorlib::System::Collections::IEnumerable
			, public virtual mscorlib::System::Collections::Generic::ICollection<T>
			, public virtual mscorlib::System::Collections::Generic::IEnumerable<T>
			, public virtual mscorlib::System::Collections::Generic::IReadOnlyCollection<T>
		{
		public:
			ArraySegment(std::vector<T*> array, mscorlib::System::Int32 offset, mscorlib::System::Int32 count)
			: mscorlib::System::ValueType(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.ArraySegment`1"))
			, mscorlib::System::Collections::Generic::IList<T>(NULL)
			, mscorlib::System::Collections::Generic::IReadOnlyList<T>(NULL)
			, mscorlib::System::Collections::IEnumerable(NULL)
			, mscorlib::System::Collections::Generic::ICollection<T>(NULL)
			, mscorlib::System::Collections::Generic::IEnumerable<T>(NULL)
			, mscorlib::System::Collections::Generic::IReadOnlyCollection<T>(NULL)
			{
				MonoType *__generic_types__[1];
				__generic_types__[0] = Global::GetType(typeid(T).name());
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType("mscorlib", "System", "T"))->eklass);
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[2] = Global::GetType("mscorlib", "System", "Int32");
				__parameters__[0] = Global::FromArray<T*>(array, "mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089", "System", "T");
				__parameters__[1] = &offset;
				__parameters__[2] = &count;
				__native_object__ = Global::New("mscorlib", "System", "ArraySegment`1", 1, __generic_types__, __parameters__);
			};
		
			ArraySegment(std::vector<T*> array)
			: mscorlib::System::ValueType(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.ArraySegment`1"))
			, mscorlib::System::Collections::Generic::IList<T>(NULL)
			, mscorlib::System::Collections::Generic::IReadOnlyList<T>(NULL)
			, mscorlib::System::Collections::IEnumerable(NULL)
			, mscorlib::System::Collections::Generic::ICollection<T>(NULL)
			, mscorlib::System::Collections::Generic::IEnumerable<T>(NULL)
			, mscorlib::System::Collections::Generic::IReadOnlyCollection<T>(NULL)
			{
				MonoType *__generic_types__[1];
				__generic_types__[0] = Global::GetType(typeid(T).name());
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType("mscorlib", "System", "T"))->eklass);
				__parameters__[0] = Global::FromArray<T*>(array, "mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089", "System", "T");
				__native_object__ = Global::New("mscorlib", "System", "ArraySegment`1", 1, __generic_types__, __parameters__);
			};
		
			ArraySegment(mscorlib::NativeTypeInfo *nativeTypeInfo)
			: mscorlib::System::ValueType(nativeTypeInfo)
			, mscorlib::System::Collections::Generic::IList<T>(NULL)
			, mscorlib::System::Collections::Generic::IReadOnlyList<T>(NULL)
			, mscorlib::System::Collections::IEnumerable(NULL)
			, mscorlib::System::Collections::Generic::ICollection<T>(NULL)
			, mscorlib::System::Collections::Generic::IEnumerable<T>(NULL)
			, mscorlib::System::Collections::Generic::IReadOnlyCollection<T>(NULL)
			{
			};
		
			ArraySegment(MonoObject *nativeObject)
			: mscorlib::System::ValueType(nativeObject)
			, mscorlib::System::Collections::Generic::IList<T>(nativeObject)
			, mscorlib::System::Collections::Generic::IReadOnlyList<T>(nativeObject)
			, mscorlib::System::Collections::IEnumerable(nativeObject)
			, mscorlib::System::Collections::Generic::ICollection<T>(nativeObject)
			, mscorlib::System::Collections::Generic::IEnumerable<T>(nativeObject)
			, mscorlib::System::Collections::Generic::IReadOnlyCollection<T>(nativeObject)
			{
			};
		
			~ArraySegment()
			{
			};
		

			ArraySegment & operator=(ArraySegment &value) { __native_object__ = value.GetNativeObject(); return value; };
			operator MonoObject*() { return __native_object__; };
			MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


			virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object obj) override
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(obj).name());
				__parameters__[0] = (MonoObject*)obj;
				MonoType *__generic_types__[1];
				__generic_types__[0] = Global::GetType(typeid(T).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "ArraySegment`1", 1, __generic_types__, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			};
			
			mscorlib::System::Boolean  Equals(mscorlib::System::ArraySegment<T> obj)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(obj).name());
				__parameters__[0] = (MonoObject*)obj;
				MonoType *__generic_types__[1];
				__generic_types__[0] = Global::GetType(typeid(T).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "ArraySegment`1", 1, __generic_types__, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			};
			
			virtual mscorlib::System::Int32  GetHashCode() override
			{
				MonoType *__generic_types__[1];
				__generic_types__[0] = Global::GetType(typeid(T).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "ArraySegment`1", 1, __generic_types__, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			};
			
			virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			//Public Properties
			__declspec(property(get=get_Array)) std::vector<T*>  Array;
			__declspec(property(get=get_Offset)) mscorlib::System::Int32  Offset;
			__declspec(property(get=get_Count)) mscorlib::System::Int32  Count;

			//Get Set Properties Methods
			//	Get:Array
			std::vector<T*>  get_Array()
			{
				MonoType *__generic_types__[1];
				__generic_types__[0] = Global::GetType(typeid(T).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "ArraySegment`1", 1, __generic_types__, "get_Array", __native_object__, 0, NULL, NULL, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<T*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new T (__array_item__));
				}
				return __array_result__;
			}

			//	Get:Offset
			mscorlib::System::Int32  get_Offset()
			{
				MonoType *__generic_types__[1];
				__generic_types__[0] = Global::GetType(typeid(T).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "ArraySegment`1", 1, __generic_types__, "get_Offset", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			//	Get:Count
			mscorlib::System::Int32  get_Count()
			{
				MonoType *__generic_types__[1];
				__generic_types__[0] = Global::GetType(typeid(T).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "ArraySegment`1", 1, __generic_types__, "get_Count", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

		
		protected:
		
		private:
		
		};

	}
}
#endif
