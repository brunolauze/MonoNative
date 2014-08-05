#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_CONCURRENT_PARTITIONER_1_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_CONCURRENT_PARTITIONER_1_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IEnumerable_1.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IList_1.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IEnumerator_1.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>

namespace mscorlib
{
	namespace System
	{
		namespace Collections
		{
			namespace Concurrent
			{

				template<typename TSource>
				class Partitioner
					: public mscorlib::System::Object
				{
				public:
					Partitioner(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					Partitioner(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~Partitioner()
					{
					};
				

					Partitioner & operator=(Partitioner &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Collections::Generic::IEnumerable<TSource>  GetDynamicPartitions()
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TSource).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Concurrent", "Partitioner`1", 1, __generic_types__, "GetDynamicPartitions", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Collections::Generic::IEnumerable<TSource>(__result__);
					};
					
					virtual mscorlib::System::Collections::Generic::IList<mscorlib::System::Collections::Generic::IEnumerator<TSource>>  GetPartitions(mscorlib::System::Int32 partitionCount)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(partitionCount).name());
						__parameters__[0] = &partitionCount;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TSource).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Concurrent", "Partitioner`1", 1, __generic_types__, "GetPartitions", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Collections::Generic::IList<mscorlib::System::Collections::Generic::IEnumerator<TSource>>(__result__);
					};
					
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_SupportsDynamicPartitions)) mscorlib::System::Boolean  SupportsDynamicPartitions;

					//Get Set Properties Methods
					//	Get:SupportsDynamicPartitions
					mscorlib::System::Boolean  get_SupportsDynamicPartitions() const
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TSource).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Concurrent", "Partitioner`1", 1, __generic_types__, "get_SupportsDynamicPartitions", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					}

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
