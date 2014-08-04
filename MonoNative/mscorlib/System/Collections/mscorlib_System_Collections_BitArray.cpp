#include <mscorlib/System/Collections/mscorlib_System_Collections_BitArray.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/mscorlib_System_Array.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Collections
		{

			//Public Methods
			mscorlib::System::Object BitArray::Clone()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "BitArray", 0, NULL, "Clone", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
			}

			void BitArray::CopyTo(mscorlib::System::Array array, mscorlib::System::Int32 index)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(array).name());
					__parameter_types__[1] = Global::GetType(typeid(index).name());
					__parameters__[0] = (MonoObject*)array;
					__parameters__[1] = &index;
					Global::InvokeMethod("mscorlib", "System.Collections", "BitArray", 0, NULL, "CopyTo", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Collections::BitArray BitArray::Not()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "BitArray", 0, NULL, "Not", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Collections::BitArray(__result__);
			}

			mscorlib::System::Collections::BitArray BitArray::And(mscorlib::System::Collections::BitArray value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "BitArray", 0, NULL, "And", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Collections::BitArray(__result__);
			}

			mscorlib::System::Collections::BitArray BitArray::Or(mscorlib::System::Collections::BitArray value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "BitArray", 0, NULL, "Or", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Collections::BitArray(__result__);
			}

			mscorlib::System::Collections::BitArray BitArray::Xor(mscorlib::System::Collections::BitArray value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "BitArray", 0, NULL, "Xor", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Collections::BitArray(__result__);
			}

			mscorlib::System::Boolean BitArray::Get(mscorlib::System::Int32 index)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(index).name());
					__parameters__[0] = &index;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "BitArray", 0, NULL, "Get", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			void BitArray::Set(mscorlib::System::Int32 index, mscorlib::System::Boolean value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(index).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = &index;
					__parameters__[1] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Collections", "BitArray", 0, NULL, "Set", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			void BitArray::SetAll(mscorlib::System::Boolean value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Collections", "BitArray", 0, NULL, "SetAll", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Collections::IEnumerator* BitArray::GetEnumerator()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "BitArray", 0, NULL, "GetEnumerator", __native_object__, 0, NULL, NULL, NULL);
					return new mscorlib::System::Collections::IEnumerator(__result__);
			}

			//Get Set Properties Methods
			//	Get:Count
			mscorlib::System::Int32  BitArray::get_Count()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "BitArray", 0, NULL, "get_Count", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}


			//	Get:IsReadOnly
			mscorlib::System::Boolean  BitArray::get_IsReadOnly()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "BitArray", 0, NULL, "get_IsReadOnly", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsSynchronized
			mscorlib::System::Boolean  BitArray::get_IsSynchronized()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "BitArray", 0, NULL, "get_IsSynchronized", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get/Set:Item
			mscorlib::System::Boolean  BitArray::get_Item(mscorlib::System::Int32 index)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(index).name());
				__parameters__[0] = &index;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "BitArray", 0, NULL, "get_Item", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			void BitArray::set_Item(mscorlib::System::Int32 index, mscorlib::System::Boolean  value)
			{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(index).name());
				__parameter_types__[1] = Global::GetType(typeid(value).name());
				__parameters__[0] = &index;
				__parameters__[1] = reinterpret_cast<void*>(value);
				Global::InvokeMethod("mscorlib", "System.Collections", "BitArray", 0, NULL, "set_Item", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:Length
			mscorlib::System::Int32  BitArray::get_Length()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "BitArray", 0, NULL, "get_Length", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			void BitArray::set_Length(mscorlib::System::Int32  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				Global::InvokeMethod("mscorlib", "System.Collections", "BitArray", 0, NULL, "set_Length", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get:SyncRoot
			mscorlib::System::Object  BitArray::get_SyncRoot()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "BitArray", 0, NULL, "get_SyncRoot", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Object(__result__);
			}



		}
	}
}
