#include <mscorlib/System/Collections/mscorlib_System_Collections_ICollection.h>
#include <mscorlib/System/mscorlib_System_Array.h>



namespace mscorlib
{
	namespace System
	{
		namespace Collections
		{

			//Public Methods
			void ICollection::CopyTo(mscorlib::System::Array array, mscorlib::System::Int32 index)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(array).name());
					__parameter_types__[1] = Global::GetType(typeid(index).name());
					__parameters__[0] = (MonoObject*)array;
					__parameters__[1] = &index;
					Global::InvokeMethod("mscorlib", "System.Collections", "ICollection", 0, NULL, "CopyTo", __mscorlib_System_Collections_ICollection, 2, __parameter_types__, __parameters__, NULL);
			}

			//Get Set Properties Methods
			//	Get:Count
			mscorlib::System::Int32  ICollection::get_Count() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "ICollection", 0, NULL, "get_Count", __mscorlib_System_Collections_ICollection, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}


			//	Get:IsSynchronized
			mscorlib::System::Boolean  ICollection::get_IsSynchronized() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "ICollection", 0, NULL, "get_IsSynchronized", __mscorlib_System_Collections_ICollection, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:SyncRoot
			mscorlib::System::Object  ICollection::get_SyncRoot() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "ICollection", 0, NULL, "get_SyncRoot", __mscorlib_System_Collections_ICollection, 0, NULL, NULL, NULL);
				return mscorlib::System::Object(__result__);
			}



		}
	}
}
