#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_2_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_2_H

#include <mscorlib/System/mscorlib_System_ValueType.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_Type.h>

namespace mscorlib
{
	namespace System
	{
		namespace Collections
		{
			namespace Generic
			{

				template<typename TKey, typename TValue>
				class KeyValuePair
					: public mscorlib::System::ValueType
				{
				public:
					KeyValuePair(TKey key, TValue value)
					: mscorlib::System::ValueType(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.Generic.KeyValuePair`2"))
					{
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TValue).name());
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Collections.Generic", "TKey");
						__parameter_types__[1] = Global::GetType("mscorlib", "System.Collections.Generic", "TValue");
						__parameters__[0] = (MonoObject*)key;
						__parameters__[1] = (MonoObject*)value;
						__native_object__ = Global::New("mscorlib", "System.Collections.Generic", "KeyValuePair`2", 2, __generic_types__, __parameters__);
					};
				
					KeyValuePair(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::ValueType(nativeTypeInfo)
					{
					};
				
					KeyValuePair(MonoObject *nativeObject)
					: mscorlib::System::ValueType(nativeObject)
					{
					};
				
					~KeyValuePair()
					{
					};
				

					KeyValuePair & operator=(KeyValuePair &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::String  ToString() override
					{
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TValue).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "KeyValuePair`2", 2, __generic_types__, "ToString", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
					};
					
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Key, put=set_Key)) TKey  Key;
					__declspec(property(get=get_Value, put=set_Value)) TValue  Value;

					//Get Set Properties Methods
					//	Get/Set:Key
					TKey  get_Key()
					{
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TValue).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "KeyValuePair`2", 2, __generic_types__, "get_Key", __native_object__, 0, NULL, NULL, NULL);
						return TKey(__result__);
					}
					void set_Key(TKey  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TValue).name());
						Global::InvokeMethod("mscorlib", "System.Collections.Generic", "KeyValuePair`2", 2, __generic_types__, "set_Key", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}
				

					//	Get/Set:Value
					TValue  get_Value()
					{
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TValue).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "KeyValuePair`2", 2, __generic_types__, "get_Value", __native_object__, 0, NULL, NULL, NULL);
						return TValue(__result__);
					}
					void set_Value(TValue  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TValue).name());
						Global::InvokeMethod("mscorlib", "System.Collections.Generic", "KeyValuePair`2", 2, __generic_types__, "set_Value", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}
				

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
