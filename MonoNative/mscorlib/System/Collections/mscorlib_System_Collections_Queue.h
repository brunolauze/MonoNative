#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_QUEUE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_QUEUE_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_ICollection.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IEnumerable.h>
#include <mscorlib/System/mscorlib_System_ICloneable.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IEnumerator.h>

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

			class Queue
				: public mscorlib::System::Object
				, public virtual mscorlib::System::Collections::ICollection
				, public virtual mscorlib::System::Collections::IEnumerable
				, public virtual mscorlib::System::ICloneable
			{
			public:
				Queue()
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.Queue"))
				, mscorlib::System::Collections::ICollection(NULL)
				, mscorlib::System::Collections::IEnumerable(NULL)
				, mscorlib::System::ICloneable(NULL)
				{
					__native_object__ = Global::New("mscorlib", "System.Collections", "Queue");
				};
			
				Queue(mscorlib::System::Int32 capacity)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.Queue"))
				, mscorlib::System::Collections::ICollection(NULL)
				, mscorlib::System::Collections::IEnumerable(NULL)
				, mscorlib::System::ICloneable(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
					__parameters__[0] = &capacity;
					__native_object__ = Global::New("mscorlib", "System.Collections", "Queue", 1, __parameter_types__, __parameters__);
				};
			
				Queue(mscorlib::System::Collections::ICollection col)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.Queue"))
				, mscorlib::System::Collections::ICollection(NULL)
				, mscorlib::System::Collections::IEnumerable(NULL)
				, mscorlib::System::ICloneable(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.Collections", "ICollection");
					__parameters__[0] = (MonoObject*)col;
					__native_object__ = Global::New("mscorlib", "System.Collections", "Queue", 1, __parameter_types__, __parameters__);
				};
			
				Queue(mscorlib::System::Int32 capacity, mscorlib::System::Single growFactor)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.Queue"))
				, mscorlib::System::Collections::ICollection(NULL)
				, mscorlib::System::Collections::IEnumerable(NULL)
				, mscorlib::System::ICloneable(NULL)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Single");
					__parameters__[0] = &capacity;
					__parameters__[1] = &growFactor;
					__native_object__ = Global::New("mscorlib", "System.Collections", "Queue", 2, __parameter_types__, __parameters__);
				};
			
				Queue(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				, mscorlib::System::Collections::ICollection(NULL)
				, mscorlib::System::Collections::IEnumerable(NULL)
				, mscorlib::System::ICloneable(NULL)
				{
				};
			
				Queue(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				, mscorlib::System::Collections::ICollection(nativeObject)
				, mscorlib::System::Collections::IEnumerable(nativeObject)
				, mscorlib::System::ICloneable(nativeObject)
				{
				};
			
				~Queue()
				{
				};
			

				Queue & operator=(Queue &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual void  CopyTo(mscorlib::System::Array array, mscorlib::System::Int32 index);
				virtual mscorlib::System::Collections::IEnumerator * GetEnumerator();
				virtual mscorlib::System::Object  Clone();
				virtual void  Clear();
				virtual mscorlib::System::Boolean  Contains(mscorlib::System::Object obj);
				virtual mscorlib::System::Object  Dequeue();
				virtual void  Enqueue(mscorlib::System::Object obj);
				virtual mscorlib::System::Object  Peek();
				static mscorlib::System::Collections::Queue  Synchronized(mscorlib::System::Collections::Queue queue);
				virtual std::vector<mscorlib::System::Object*>  ToArray();
				virtual void  TrimToSize();
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_Count)) mscorlib::System::Int32  Count;
				__declspec(property(get=get_IsSynchronized)) mscorlib::System::Boolean  IsSynchronized;
				__declspec(property(get=get_SyncRoot)) mscorlib::System::Object  SyncRoot;

				//Get Set Properties Methods
				//	Get:Count
				mscorlib::System::Int32  get_Count();

				//	Get:IsSynchronized
				mscorlib::System::Boolean  get_IsSynchronized();

				//	Get:SyncRoot
				mscorlib::System::Object  get_SyncRoot();

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
