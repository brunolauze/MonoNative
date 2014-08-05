#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_NULLABLE_1_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_NULLABLE_1_H

#include <mscorlib/System/mscorlib_System_ValueType.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>

namespace mscorlib
{
	namespace System
	{

		template<typename T>
		class Nullable
			: public mscorlib::System::ValueType
		{
		public:
			Nullable(T value)
			: mscorlib::System::ValueType(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Nullable`1"))
			{
				MonoType *__generic_types__[1];
				__generic_types__[0] = Global::GetType(typeid(T).name());
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "T");
				__parameters__[0] = (MonoObject*)value;
				__native_object__ = Global::New("mscorlib", "System", "Nullable`1", 1, __generic_types__, __parameters__);
			};
		
			Nullable(mscorlib::NativeTypeInfo *nativeTypeInfo)
			: mscorlib::System::ValueType(nativeTypeInfo)
			{
			};
		
			Nullable(MonoObject *nativeObject)
			: mscorlib::System::ValueType(nativeObject)
			{
			};
		
			~Nullable()
			{
			};
		

			Nullable & operator=(Nullable &value) { __native_object__ = value.GetNativeObject(); return value; };
			operator MonoObject*() { return __native_object__; };
			MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


			virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object other) override
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(other).name());
				__parameters__[0] = (MonoObject*)other;
				MonoType *__generic_types__[1];
				__generic_types__[0] = Global::GetType(typeid(T).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Nullable`1", 1, __generic_types__, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			};
			
			virtual mscorlib::System::Int32  GetHashCode() override
			{
				MonoType *__generic_types__[1];
				__generic_types__[0] = Global::GetType(typeid(T).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Nullable`1", 1, __generic_types__, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			};
			
			T  GetValueOrDefault()
			{
				MonoType *__generic_types__[1];
				__generic_types__[0] = Global::GetType(typeid(T).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Nullable`1", 1, __generic_types__, "GetValueOrDefault", __native_object__, 0, NULL, NULL, NULL);
				return T(__result__);
			};
			
			T  GetValueOrDefault(T defaultValue)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(defaultValue).name());
				__parameters__[0] = (MonoObject*)defaultValue;
				MonoType *__generic_types__[1];
				__generic_types__[0] = Global::GetType(typeid(T).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Nullable`1", 1, __generic_types__, "GetValueOrDefault", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return T(__result__);
			};
			
			virtual mscorlib::System::String  ToString() override
			{
				MonoType *__generic_types__[1];
				__generic_types__[0] = Global::GetType(typeid(T).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Nullable`1", 1, __generic_types__, "ToString", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			};
			
			virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			//Public Properties
			__declspec(property(get=get_HasValue)) mscorlib::System::Boolean  HasValue;
			__declspec(property(get=get_Value)) T  Value;

			//Get Set Properties Methods
			//	Get:HasValue
			mscorlib::System::Boolean  get_HasValue() const
			{
				MonoType *__generic_types__[1];
				__generic_types__[0] = Global::GetType(typeid(T).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Nullable`1", 1, __generic_types__, "get_HasValue", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			//	Get:Value
			T  get_Value() const
			{
				MonoType *__generic_types__[1];
				__generic_types__[0] = Global::GetType(typeid(T).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Nullable`1", 1, __generic_types__, "get_Value", __native_object__, 0, NULL, NULL, NULL);
				return T(__result__);
			}

		
		protected:
		
		private:
		
		};

	}
}
#endif
