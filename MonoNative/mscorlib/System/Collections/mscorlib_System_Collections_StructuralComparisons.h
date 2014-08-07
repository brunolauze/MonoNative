#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_STRUCTURALCOMPARISONS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_STRUCTURALCOMPARISONS_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IComparer.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IEqualityComparer.h>

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

			class StructuralComparisons
				: public mscorlib::System::Object
			{
			public:
				StructuralComparisons(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				{
				};
			
				StructuralComparisons(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				{
				};
			
				~StructuralComparisons()
				{
				};
			

				StructuralComparisons & operator=(StructuralComparisons &value) { __native_object__ = value.GetNativeObject(); return value; };
				bool operator==(StructuralComparisons &value) { return mscorlib::System::Object::Equals(value); };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Static Properties
				static Property<mscorlib::System::Collections::IComparer , mscorlib::System::Collections::StructuralComparisons> StructuralComparer;
				static Property<mscorlib::System::Collections::IEqualityComparer , mscorlib::System::Collections::StructuralComparisons> StructuralEqualityComparer;

				//Get Set Static Properties Methods
				//	Get:StructuralComparer
				static mscorlib::System::Collections::IComparer  get_StructuralComparer();
				static void set_StructuralComparer(mscorlib::System::Collections::IComparer  value);

				//	Get:StructuralEqualityComparer
				static mscorlib::System::Collections::IEqualityComparer  get_StructuralEqualityComparer();
				static void set_StructuralEqualityComparer(mscorlib::System::Collections::IEqualityComparer  value);


			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
