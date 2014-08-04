#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_CONCURRENT_PARTITIONER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_CONCURRENT_PARTITIONER_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IEnumerable_1.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IList_1.h>
#include <mscorlib/System/Collections/Concurrent/mscorlib_System_Collections_Concurrent_EnumerablePartitionerOptions.h>

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
			namespace Concurrent
			{

				class PartitionerBase
					: public mscorlib::System::Object
				{
				public:
					PartitionerBase(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					PartitionerBase(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~PartitionerBase()
					{
					};
				

					PartitionerBase & operator=(PartitionerBase &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
