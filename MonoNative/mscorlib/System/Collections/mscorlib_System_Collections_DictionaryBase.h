#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_DICTIONARYBASE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_DICTIONARYBASE_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_ICollection.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IEnumerable.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IDictionary.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IDictionaryEnumerator.h>

namespace mscorlib
{
	namespace System
	{

		class Array;
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

			class DictionaryBase
				: public mscorlib::System::Object
				, public virtual mscorlib::System::Collections::ICollection
				, public virtual mscorlib::System::Collections::IEnumerable
				, public virtual mscorlib::System::Collections::IDictionary
			{
			public:
				DictionaryBase(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				, mscorlib::System::Collections::ICollection(NULL)
				, mscorlib::System::Collections::IEnumerable(NULL)
				, mscorlib::System::Collections::IDictionary(NULL)
				{
				};
			
				DictionaryBase(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				, mscorlib::System::Collections::ICollection(nativeObject)
				, mscorlib::System::Collections::IEnumerable(nativeObject)
				, mscorlib::System::Collections::IDictionary(nativeObject)
				{
				};
			
				~DictionaryBase()
				{
				};
			

				DictionaryBase & operator=(DictionaryBase &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual void  Clear();
				virtual void  CopyTo(mscorlib::System::Array array, mscorlib::System::Int32 index);
				virtual mscorlib::System::Collections::IDictionaryEnumerator * GetEnumerator();
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_Count)) mscorlib::System::Int32  Count;

				//Get Set Properties Methods
				//	Get:Count
				mscorlib::System::Int32  get_Count() const;

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
