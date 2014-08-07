#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_NULLABLE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_NULLABLE_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_Nullable_1.h>

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

		class NullableBase
			: public mscorlib::System::Object
		{
		public:
			NullableBase(mscorlib::NativeTypeInfo *nativeTypeInfo)
			: mscorlib::System::Object(nativeTypeInfo)
			{
			};
		
			NullableBase(MonoObject *nativeObject)
			: mscorlib::System::Object(nativeObject)
			{
			};
		
			~NullableBase()
			{
			};
		

			NullableBase & operator=(NullableBase &value) { __native_object__ = value.GetNativeObject(); return value; };
			bool operator==(NullableBase &value) { return mscorlib::System::Object::Equals(value); };
			operator MonoObject*() { return __native_object__; };
			MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


			template<typename T>
			static mscorlib::System::Int32  Compare(mscorlib::System::Nullable<T> n1, mscorlib::System::Nullable<T> n2)
			{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(n1).name());
				__parameter_types__[1] = Global::GetType(typeid(n2).name());
				__parameters__[0] = (MonoObject*)n1;
				__parameters__[1] = (MonoObject*)n2;
				MonoType *__generic_types__[1];
				__generic_types__[0] = Global::GetType(typeid(T).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Nullable", 0, NULL, "Compare", NullMonoObject, 1, __generic_types__, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			};
			
			template<typename T>
			static mscorlib::System::Boolean  Equals(mscorlib::System::Nullable<T> n1, mscorlib::System::Nullable<T> n2)
			{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(n1).name());
				__parameter_types__[1] = Global::GetType(typeid(n2).name());
				__parameters__[0] = (MonoObject*)n1;
				__parameters__[1] = (MonoObject*)n2;
				MonoType *__generic_types__[1];
				__generic_types__[0] = Global::GetType(typeid(T).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Nullable", 0, NULL, "Equals", NullMonoObject, 1, __generic_types__, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			};
			
			static mscorlib::System::Type  GetUnderlyingType(mscorlib::System::Type nullableType);
			virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


		
		protected:
		
		private:
		
		};

	}
}
#endif
