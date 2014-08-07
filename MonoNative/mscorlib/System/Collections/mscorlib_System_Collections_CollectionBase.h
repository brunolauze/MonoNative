#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_COLLECTIONBASE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_COLLECTIONBASE_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_ICollection.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IEnumerable.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IList.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IEnumerator.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		class String;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Collections
		{

			class CollectionBase
				: public mscorlib::System::Object
				, public virtual mscorlib::System::Collections::ICollection
				, public virtual mscorlib::System::Collections::IEnumerable
				, public virtual mscorlib::System::Collections::IList
			{
			public:
				CollectionBase(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				, mscorlib::System::Collections::ICollection(NULL)
				, mscorlib::System::Collections::IEnumerable(NULL)
				, mscorlib::System::Collections::IList(NULL)
				{
				};
			
				CollectionBase(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				, mscorlib::System::Collections::ICollection(nativeObject)
				, mscorlib::System::Collections::IEnumerable(nativeObject)
				, mscorlib::System::Collections::IList(nativeObject)
				{
				};
			
				~CollectionBase()
				{
				};
			

				CollectionBase & operator=(CollectionBase &value) { __native_object__ = value.GetNativeObject(); return value; };
				bool operator==(CollectionBase &value) { return mscorlib::System::Object::Equals(value); };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual mscorlib::System::Collections::IEnumerator * GetEnumerator();
				virtual void  Clear();
				virtual void  RemoveAt(mscorlib::System::Int32 index);
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_Count)) mscorlib::System::Int32  Count;
				__declspec(property(get=get_Capacity, put=set_Capacity)) mscorlib::System::Int32  Capacity;

				//Get Set Properties Methods
				//	Get:Count
				mscorlib::System::Int32  get_Count() const;

				//	Get/Set:Capacity
				mscorlib::System::Int32  get_Capacity() const;
				void set_Capacity(mscorlib::System::Int32  value);

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
