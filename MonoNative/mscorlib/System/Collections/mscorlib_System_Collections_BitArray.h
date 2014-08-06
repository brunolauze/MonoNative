#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_BITARRAY_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_BITARRAY_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_ICloneable.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_ICollection.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IEnumerable.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IEnumerator.h>

namespace mscorlib
{
	namespace System
	{

		class Byte;
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

			class BitArray
				: public mscorlib::System::Object
				, public virtual mscorlib::System::ICloneable
				, public virtual mscorlib::System::Collections::ICollection
				, public virtual mscorlib::System::Collections::IEnumerable
			{
			public:
				BitArray(mscorlib::System::Collections::BitArray &bits)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.BitArray"))
				, mscorlib::System::ICloneable(NULL)
				, mscorlib::System::Collections::ICollection(NULL)
				, mscorlib::System::Collections::IEnumerable(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.Collections", "BitArray");
					__parameters__[0] = (MonoObject*)bits;
					__native_object__ = Global::New("mscorlib", "System.Collections", "BitArray", 1, __parameter_types__, __parameters__);
				};
			
				BitArray(std::vector<mscorlib::System::Boolean*> values)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.BitArray"))
				, mscorlib::System::ICloneable(NULL)
				, mscorlib::System::Collections::ICollection(NULL)
				, mscorlib::System::Collections::IEnumerable(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Boolean")), 1));
					__parameters__[0] = Global::FromArray<mscorlib::System::Boolean*>(values, "mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089", "System", "Boolean");
					__native_object__ = Global::New("mscorlib", "System.Collections", "BitArray", 1, __parameter_types__, __parameters__);
				};
			
				BitArray(std::vector<mscorlib::System::Byte*> bytes)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.BitArray"))
				, mscorlib::System::ICloneable(NULL)
				, mscorlib::System::Collections::ICollection(NULL)
				, mscorlib::System::Collections::IEnumerable(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
					__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(bytes, "mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089", "System", "Byte");
					__native_object__ = Global::New("mscorlib", "System.Collections", "BitArray", 1, __parameter_types__, __parameters__);
				};
			
				BitArray(std::vector<mscorlib::System::Int32*> values)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.BitArray"))
				, mscorlib::System::ICloneable(NULL)
				, mscorlib::System::Collections::ICollection(NULL)
				, mscorlib::System::Collections::IEnumerable(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Int32")), 1));
					__parameters__[0] = Global::FromArray<mscorlib::System::Int32*>(values, "mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089", "System", "Int32");
					__native_object__ = Global::New("mscorlib", "System.Collections", "BitArray", 1, __parameter_types__, __parameters__);
				};
			
				BitArray(mscorlib::System::Int32 length)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.BitArray"))
				, mscorlib::System::ICloneable(NULL)
				, mscorlib::System::Collections::ICollection(NULL)
				, mscorlib::System::Collections::IEnumerable(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
					__parameters__[0] = &length;
					__native_object__ = Global::New("mscorlib", "System.Collections", "BitArray", 1, __parameter_types__, __parameters__);
				};
			
				BitArray(mscorlib::System::Int32 length, mscorlib::System::Boolean defaultValue)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.BitArray"))
				, mscorlib::System::ICloneable(NULL)
				, mscorlib::System::Collections::ICollection(NULL)
				, mscorlib::System::Collections::IEnumerable(NULL)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Boolean");
					__parameters__[0] = &length;
					__parameters__[1] = reinterpret_cast<void*>(defaultValue);
					__native_object__ = Global::New("mscorlib", "System.Collections", "BitArray", 2, __parameter_types__, __parameters__);
				};
			
				BitArray(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				, mscorlib::System::ICloneable(NULL)
				, mscorlib::System::Collections::ICollection(NULL)
				, mscorlib::System::Collections::IEnumerable(NULL)
				{
				};
			
				BitArray(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				, mscorlib::System::ICloneable(nativeObject)
				, mscorlib::System::Collections::ICollection(nativeObject)
				, mscorlib::System::Collections::IEnumerable(nativeObject)
				{
				};
			
				~BitArray()
				{
				};
			

				BitArray & operator=(BitArray &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual mscorlib::System::Object  Clone();
				virtual void  CopyTo(mscorlib::System::Array array, mscorlib::System::Int32 index);
				mscorlib::System::Collections::BitArray  Not();
				mscorlib::System::Collections::BitArray  And(mscorlib::System::Collections::BitArray value);
				mscorlib::System::Collections::BitArray  Or(mscorlib::System::Collections::BitArray value);
				mscorlib::System::Collections::BitArray  Xor(mscorlib::System::Collections::BitArray value);
				mscorlib::System::Boolean  Get(mscorlib::System::Int32 index);
				void  Set(mscorlib::System::Int32 index, mscorlib::System::Boolean value);
				void  SetAll(mscorlib::System::Boolean value);
				virtual mscorlib::System::Collections::IEnumerator * GetEnumerator();
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_Count)) mscorlib::System::Int32  Count;
				__declspec(property(get=get_IsReadOnly)) mscorlib::System::Boolean  IsReadOnly;
				__declspec(property(get=get_IsSynchronized)) mscorlib::System::Boolean  IsSynchronized;
				__declspec(property(get=get_Item, put=set_Item)) mscorlib::System::Boolean  Item[];

				//Get Set Properties Methods
				//	Get:Count
				mscorlib::System::Int32  get_Count() const;

				//	Get:IsReadOnly
				mscorlib::System::Boolean  get_IsReadOnly() const;

				//	Get:IsSynchronized
				mscorlib::System::Boolean  get_IsSynchronized() const;

				//	Get/Set:Item
				mscorlib::System::Boolean  get_Item(mscorlib::System::Int32 index) const;
				void set_Item(mscorlib::System::Int32 index, mscorlib::System::Boolean  value);

				//	Get/Set:Length
				mscorlib::System::Int32  get_Length() const;
				void set_Length(mscorlib::System::Int32  value);

				//	Get:SyncRoot
				mscorlib::System::Object  get_SyncRoot() const;

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
