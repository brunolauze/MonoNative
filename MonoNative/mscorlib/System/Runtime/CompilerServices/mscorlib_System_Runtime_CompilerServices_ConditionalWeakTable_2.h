#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_COMPILERSERVICES_CONDITIONALWEAKTABLE_2_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_COMPILERSERVICES_CONDITIONALWEAKTABLE_2_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_MulticastDelegate.h>
#include <mscorlib/System/mscorlib_System_IntPtr.h>
#include <mscorlib/System/mscorlib_System_ICloneable.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ISerializable.h>
#include <mscorlib/System/mscorlib_System_IAsyncResult.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_SerializationInfo.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_StreamingContext.h>
#include <mscorlib/System/mscorlib_System_Delegate.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MethodInfo.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>

namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace CompilerServices
			{

				template<typename TKey, typename TValue>
				class ConditionalWeakTable
					: public mscorlib::System::Object
				{
				public:
					ConditionalWeakTable()
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.CompilerServices.ConditionalWeakTable`2"))
					{
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TValue).name());
						__native_object__ = Global::New("mscorlib", "System.Runtime.CompilerServices", "ConditionalWeakTable`2", 2, __generic_types__, 0, NULL, NULL);
					};
				
					ConditionalWeakTable(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					ConditionalWeakTable(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~ConditionalWeakTable()
					{
					};
				

					ConditionalWeakTable & operator=(ConditionalWeakTable &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					void  Add(TKey key, TValue value)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(key).name());
						__parameter_types__[1] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)key;
						__parameters__[1] = (MonoObject*)value;
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TValue).name());
						Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "ConditionalWeakTable`2", 2, __generic_types__, "Add", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					};
					
					mscorlib::System::Boolean  Remove(TKey key)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(key).name());
						__parameters__[0] = (MonoObject*)key;
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TValue).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "ConditionalWeakTable`2", 2, __generic_types__, "Remove", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					};
					
					mscorlib::System::Boolean  TryGetValue(TKey key, TValue value)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(key).name());
						__parameter_types__[1] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)key;
						__parameters__[1] = (MonoObject*)value;
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TValue).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "ConditionalWeakTable`2", 2, __generic_types__, "TryGetValue", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					};
					
					TValue  GetOrCreateValue(TKey key)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(key).name());
						__parameters__[0] = (MonoObject*)key;
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TValue).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "ConditionalWeakTable`2", 2, __generic_types__, "GetOrCreateValue", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return TValue(__result__);
					};
					
					TValue  GetValue(TKey key, mscorlib::Callback<TValue  (TKey )> createValueCallback)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(key).name());
						__parameter_types__[1] = Global::GetType(typeid(createValueCallback).name());
						__parameters__[0] = (MonoObject*)key;
						__parameters__[1] = &createValueCallback;
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TValue).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "ConditionalWeakTable`2", 2, __generic_types__, "GetValue", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return TValue(__result__);
					};
					
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
