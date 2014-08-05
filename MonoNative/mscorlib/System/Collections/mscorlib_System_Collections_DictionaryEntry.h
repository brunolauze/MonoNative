#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_DICTIONARYENTRY_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_DICTIONARYENTRY_H

#include <mscorlib/System/mscorlib_System_ValueType.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class String;
		class Type;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Collections
		{

			class DictionaryEntry
				: public mscorlib::System::ValueType
			{
			public:
				DictionaryEntry(mscorlib::System::Object key, mscorlib::System::Object value)
				: mscorlib::System::ValueType(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.DictionaryEntry"))
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Object");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Object");
					__parameters__[0] = (MonoObject*)key;
					__parameters__[1] = (MonoObject*)value;
					__native_object__ = Global::New("mscorlib", "System.Collections", "DictionaryEntry", 2, __parameter_types__, __parameters__);
				};
			
				DictionaryEntry(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::ValueType(nativeTypeInfo)
				{
				};
			
				DictionaryEntry(MonoObject *nativeObject)
				: mscorlib::System::ValueType(nativeObject)
				{
				};
			
				~DictionaryEntry()
				{
				};
			

				DictionaryEntry & operator=(DictionaryEntry &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_Key, put=set_Key)) mscorlib::System::Object  Key;
				__declspec(property(get=get_Value, put=set_Value)) mscorlib::System::Object  Value;

				//Get Set Properties Methods
				//	Get/Set:Key
				mscorlib::System::Object  get_Key() const;
				void set_Key(mscorlib::System::Object  value);

				//	Get/Set:Value
				mscorlib::System::Object  get_Value() const;
				void set_Value(mscorlib::System::Object  value);

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
