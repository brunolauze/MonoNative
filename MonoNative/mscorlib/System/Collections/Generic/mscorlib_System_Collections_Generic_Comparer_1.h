#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_GENERIC_COMPARER_1_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_GENERIC_COMPARER_1_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IComparer_1.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IComparer.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>

namespace mscorlib
{
	namespace System
	{
		namespace Collections
		{
			namespace Generic
			{

				template<typename T>
				class Comparer
					: public mscorlib::System::Object
					, public virtual mscorlib::System::Collections::Generic::IComparer<T>
					, public virtual mscorlib::System::Collections::IComparer
				{
				public:
					Comparer(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					, mscorlib::System::Collections::Generic::IComparer<T>(NULL)
					, mscorlib::System::Collections::IComparer(NULL)
					{
					};
				
					Comparer(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					, mscorlib::System::Collections::Generic::IComparer<T>(nativeObject)
					, mscorlib::System::Collections::IComparer(nativeObject)
					{
					};
				
					~Comparer()
					{
					};
				

					Comparer & operator=(Comparer &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(Comparer &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Int32  Compare(T x, T y)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(x).name());
						__parameter_types__[1] = Global::GetType(typeid(y).name());
						__parameters__[0] = (MonoObject*)x;
						__parameters__[1] = (MonoObject*)y;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "Comparer`1", 1, __generic_types__, "Compare", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					};
					
					static mscorlib::System::Collections::Generic::Comparer<T>  Create(mscorlib::Callback<mscorlib::System::Int32  (T , T )> comparison)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(comparison).name());
						__parameters__[0] = &comparison;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "Comparer`1", 1, __generic_types__, "Create", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Collections::Generic::Comparer<T>(__result__);
					};
					
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Static Properties
					static Property<mscorlib::System::Collections::Generic::Comparer<T> , mscorlib::System::Collections::Generic::Comparer<T>> Default;

					//Get Set Static Properties Methods
					//	Get:Default
					static mscorlib::System::Collections::Generic::Comparer<T>  get_Default()
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "Comparer`1", 1, __generic_types__, "get_Default", NullMonoObject, 0, NULL, NULL, NULL);
						return mscorlib::System::Collections::Generic::Comparer<T>(__result__);
					}
				


				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
