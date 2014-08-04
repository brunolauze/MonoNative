#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_READONLYCOLLECTIONBASE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_READONLYCOLLECTIONBASE_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_ICollection.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IEnumerable.h>
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

			class ReadOnlyCollectionBase
				: public mscorlib::System::Object
				, public virtual mscorlib::System::Collections::ICollection
				, public virtual mscorlib::System::Collections::IEnumerable
			{
			public:
				ReadOnlyCollectionBase(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				, mscorlib::System::Collections::ICollection(NULL)
				, mscorlib::System::Collections::IEnumerable(NULL)
				{
				};
			
				ReadOnlyCollectionBase(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				, mscorlib::System::Collections::ICollection(nativeObject)
				, mscorlib::System::Collections::IEnumerable(nativeObject)
				{
				};
			
				~ReadOnlyCollectionBase()
				{
				};
			

				ReadOnlyCollectionBase & operator=(ReadOnlyCollectionBase &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual mscorlib::System::Collections::IEnumerator * GetEnumerator();
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_Count)) mscorlib::System::Int32  Count;

				//Get Set Properties Methods
				//	Get:Count
				mscorlib::System::Int32  get_Count();

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
