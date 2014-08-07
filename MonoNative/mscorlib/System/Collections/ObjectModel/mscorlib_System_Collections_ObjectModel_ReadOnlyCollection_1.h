#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_OBJECTMODEL_READONLYCOLLECTION_1_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_OBJECTMODEL_READONLYCOLLECTION_1_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IList_1.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_ICollection.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IReadOnlyList_1.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_ICollection_1.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IList.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IEnumerable.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IEnumerable_1.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IReadOnlyCollection_1.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IEnumerator_1.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>

namespace mscorlib
{
	namespace System
	{
		namespace Collections
		{
			namespace ObjectModel
			{

				template<typename T>
				class ReadOnlyCollection
					: public mscorlib::System::Object
					, public virtual mscorlib::System::Collections::ICollection
					, public virtual mscorlib::System::Collections::Generic::IList<T>
					, public virtual mscorlib::System::Collections::Generic::IReadOnlyList<T>
					, public virtual mscorlib::System::Collections::Generic::ICollection<T>
					, public virtual mscorlib::System::Collections::IList
					, public virtual mscorlib::System::Collections::IEnumerable
					, public virtual mscorlib::System::Collections::Generic::IEnumerable<T>
					, public virtual mscorlib::System::Collections::Generic::IReadOnlyCollection<T>
				{
				public:
					ReadOnlyCollection(mscorlib::System::Collections::Generic::IList<T> list)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.ObjectModel.ReadOnlyCollection`1"))
					, mscorlib::System::Collections::ICollection(NULL)
					, mscorlib::System::Collections::Generic::IList<T>(NULL)
					, mscorlib::System::Collections::Generic::IReadOnlyList<T>(NULL)
					, mscorlib::System::Collections::Generic::ICollection<T>(NULL)
					, mscorlib::System::Collections::IList(NULL)
					, mscorlib::System::Collections::IEnumerable(NULL)
					, mscorlib::System::Collections::Generic::IEnumerable<T>(NULL)
					, mscorlib::System::Collections::Generic::IReadOnlyCollection<T>(NULL)
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Collections.Generic", "IList`1");
						__parameters__[0] = (MonoObject*)list;
						__native_object__ = Global::New("mscorlib", "System.Collections.ObjectModel", "ReadOnlyCollection`1", 1, __generic_types__, __parameters__);
					};
				
					ReadOnlyCollection(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					, mscorlib::System::Collections::ICollection(NULL)
					, mscorlib::System::Collections::Generic::IList<T>(NULL)
					, mscorlib::System::Collections::Generic::IReadOnlyList<T>(NULL)
					, mscorlib::System::Collections::Generic::ICollection<T>(NULL)
					, mscorlib::System::Collections::IList(NULL)
					, mscorlib::System::Collections::IEnumerable(NULL)
					, mscorlib::System::Collections::Generic::IEnumerable<T>(NULL)
					, mscorlib::System::Collections::Generic::IReadOnlyCollection<T>(NULL)
					{
					};
				
					ReadOnlyCollection(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					, mscorlib::System::Collections::ICollection(nativeObject)
					, mscorlib::System::Collections::Generic::IList<T>(nativeObject)
					, mscorlib::System::Collections::Generic::IReadOnlyList<T>(nativeObject)
					, mscorlib::System::Collections::Generic::ICollection<T>(nativeObject)
					, mscorlib::System::Collections::IList(nativeObject)
					, mscorlib::System::Collections::IEnumerable(nativeObject)
					, mscorlib::System::Collections::Generic::IEnumerable<T>(nativeObject)
					, mscorlib::System::Collections::Generic::IReadOnlyCollection<T>(nativeObject)
					{
					};
				
					~ReadOnlyCollection()
					{
					};
				

					ReadOnlyCollection & operator=(ReadOnlyCollection &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(ReadOnlyCollection &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Boolean  Contains(T value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.ObjectModel", "ReadOnlyCollection`1", 1, __generic_types__, "Contains", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					};
					
					virtual void  CopyTo(std::vector<T*> array, mscorlib::System::Int32 index)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System.Collections.ObjectModel", "T")), 1));
						__parameter_types__[1] = Global::GetType(typeid(index).name());
						__parameters__[0] = Global::FromArray<T*>(array, typeid(T).name());
						__parameters__[1] = &index;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						Global::InvokeMethod("mscorlib", "System.Collections.ObjectModel", "ReadOnlyCollection`1", 1, __generic_types__, "CopyTo", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					};
					
					virtual mscorlib::System::Collections::Generic::IEnumerator<T> * GetEnumerator()
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.ObjectModel", "ReadOnlyCollection`1", 1, __generic_types__, "GetEnumerator", __native_object__, 0, NULL, NULL, NULL);
						return new mscorlib::System::Collections::Generic::IEnumerator<T>(__result__);
					};
					
					virtual mscorlib::System::Int32  IndexOf(T value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.ObjectModel", "ReadOnlyCollection`1", 1, __generic_types__, "IndexOf", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					};
					
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Count)) mscorlib::System::Int32  Count;
					__declspec(property(get=get_Item)) T  Item[];

					//Get Set Properties Methods
					//	Get:Count
					mscorlib::System::Int32  get_Count() const
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.ObjectModel", "ReadOnlyCollection`1", 1, __generic_types__, "get_Count", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					}

					//	Get:Item
					T  get_Item(mscorlib::System::Int32 index) const
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(index).name());
						__parameters__[0] = &index;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.ObjectModel", "ReadOnlyCollection`1", 1, __generic_types__, "get_Item", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return T(__result__);
					}

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
