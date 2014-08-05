#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_STACK_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_STACK_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_ICollection.h>
#include <mscorlib/System/mscorlib_System_ICloneable.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IEnumerable.h>
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

			class Stack
				: public mscorlib::System::Object
				, public virtual mscorlib::System::ICloneable
				, public virtual mscorlib::System::Collections::ICollection
				, public virtual mscorlib::System::Collections::IEnumerable
			{
			public:
				Stack()
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.Stack"))
				, mscorlib::System::ICloneable(NULL)
				, mscorlib::System::Collections::ICollection(NULL)
				, mscorlib::System::Collections::IEnumerable(NULL)
				{
					__native_object__ = Global::New("mscorlib", "System.Collections", "Stack");
				};
			
				Stack(mscorlib::System::Collections::ICollection col)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.Stack"))
				, mscorlib::System::ICloneable(NULL)
				, mscorlib::System::Collections::ICollection(NULL)
				, mscorlib::System::Collections::IEnumerable(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.Collections", "ICollection");
					__parameters__[0] = (MonoObject*)col;
					__native_object__ = Global::New("mscorlib", "System.Collections", "Stack", 1, __parameter_types__, __parameters__);
				};
			
				Stack(mscorlib::System::Int32 initialCapacity)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.Stack"))
				, mscorlib::System::ICloneable(NULL)
				, mscorlib::System::Collections::ICollection(NULL)
				, mscorlib::System::Collections::IEnumerable(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
					__parameters__[0] = &initialCapacity;
					__native_object__ = Global::New("mscorlib", "System.Collections", "Stack", 1, __parameter_types__, __parameters__);
				};
			
				Stack(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				, mscorlib::System::ICloneable(NULL)
				, mscorlib::System::Collections::ICollection(NULL)
				, mscorlib::System::Collections::IEnumerable(NULL)
				{
				};
			
				Stack(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				, mscorlib::System::ICloneable(nativeObject)
				, mscorlib::System::Collections::ICollection(nativeObject)
				, mscorlib::System::Collections::IEnumerable(nativeObject)
				{
				};
			
				~Stack()
				{
				};
			

				Stack & operator=(Stack &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				static mscorlib::System::Collections::Stack  Synchronized(mscorlib::System::Collections::Stack stack);
				virtual void  Clear();
				virtual mscorlib::System::Object  Clone();
				virtual mscorlib::System::Boolean  Contains(mscorlib::System::Object obj);
				virtual void  CopyTo(mscorlib::System::Array array, mscorlib::System::Int32 index);
				virtual mscorlib::System::Collections::IEnumerator * GetEnumerator();
				virtual mscorlib::System::Object  Peek();
				virtual mscorlib::System::Object  Pop();
				virtual void  Push(mscorlib::System::Object obj);
				virtual std::vector<mscorlib::System::Object*>  ToArray();
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


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
