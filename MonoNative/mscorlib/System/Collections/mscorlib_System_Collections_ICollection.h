#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_ICOLLECTION_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_ICOLLECTION_H

#include <mscorlib/System/Collections/mscorlib_System_Collections_IEnumerable.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class Array;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Collections
		{

			class ICollection
				: public virtual mscorlib::System::Collections::IEnumerable
			{
			public:
				ICollection(MonoObject *nativeObject)
				: mscorlib::System::Collections::IEnumerable(nativeObject)
				{
				};
			
				~ICollection()
				{
				};
			

				__declspec(property(get=get___mscorlib_System_Collections_ICollection, put=set___mscorlib_System_Collections_ICollection)) MonoObject *__mscorlib_System_Collections_ICollection;
				MonoObject* get___mscorlib_System_Collections_ICollection() const
				{
					return ICollection::__mscorlib_System_Collections_IEnumerable;
				}
				void set___mscorlib_System_Collections_ICollection(MonoObject *value)
				{
					ICollection::__mscorlib_System_Collections_IEnumerable = value;
				}
				ICollection & operator=(ICollection &value) { __mscorlib_System_Collections_ICollection = value.__mscorlib_System_Collections_ICollection; return value; };
				operator MonoObject*() { return __mscorlib_System_Collections_ICollection; };
				MonoObject* operator=(MonoObject* value) { __mscorlib_System_Collections_ICollection = value; return value; };


				virtual void  CopyTo(mscorlib::System::Array array, mscorlib::System::Int32 index);


				//Public Properties
				__declspec(property(get=get_Count)) mscorlib::System::Int32  Count;
				__declspec(property(get=get_IsSynchronized)) mscorlib::System::Boolean  IsSynchronized;
				__declspec(property(get=get_SyncRoot)) mscorlib::System::Object  SyncRoot;

				//Get Set Properties Methods
				//	Get:Count
				mscorlib::System::Int32  get_Count() const;

				//	Get:IsSynchronized
				mscorlib::System::Boolean  get_IsSynchronized() const;

				//	Get:SyncRoot
				mscorlib::System::Object  get_SyncRoot() const;

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
