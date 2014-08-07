#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_GENERIC_EQUALITYCOMPARER_1_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_GENERIC_EQUALITYCOMPARER_1_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IEqualityComparer_1.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IEqualityComparer.h>
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
				class EqualityComparer
					: public mscorlib::System::Object
					, public virtual mscorlib::System::Collections::Generic::IEqualityComparer<T>
					, public virtual mscorlib::System::Collections::IEqualityComparer
				{
				public:
					EqualityComparer(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					, mscorlib::System::Collections::Generic::IEqualityComparer<T>(NULL)
					, mscorlib::System::Collections::IEqualityComparer(NULL)
					{
					};
				
					EqualityComparer(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					, mscorlib::System::Collections::Generic::IEqualityComparer<T>(nativeObject)
					, mscorlib::System::Collections::IEqualityComparer(nativeObject)
					{
					};
				
					~EqualityComparer()
					{
					};
				

					EqualityComparer & operator=(EqualityComparer &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(EqualityComparer &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Int32  GetHashCode(T obj)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(obj).name());
						__parameters__[0] = (MonoObject*)obj;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "EqualityComparer`1", 1, __generic_types__, "GetHashCode", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					};
					
					virtual mscorlib::System::Boolean  Equals(T x, T y)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(x).name());
						__parameter_types__[1] = Global::GetType(typeid(y).name());
						__parameters__[0] = (MonoObject*)x;
						__parameters__[1] = (MonoObject*)y;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "EqualityComparer`1", 1, __generic_types__, "Equals", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					};
					
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Static Properties
					static Property<mscorlib::System::Collections::Generic::EqualityComparer<T> , mscorlib::System::Collections::Generic::EqualityComparer<T>> Default;

					//Get Set Static Properties Methods
					//	Get:Default
					static mscorlib::System::Collections::Generic::EqualityComparer<T>  get_Default()
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "EqualityComparer`1", 1, __generic_types__, "get_Default", NullMonoObject, 0, NULL, NULL, NULL);
						return mscorlib::System::Collections::Generic::EqualityComparer<T>(__result__);
					}
				


				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
