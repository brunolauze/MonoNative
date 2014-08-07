#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_THREADLOCAL_1_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_THREADLOCAL_1_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_IDisposable.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IList_1.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>

namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			template<typename T>
			class ThreadLocal
				: public mscorlib::System::Object
				, public virtual mscorlib::System::IDisposable
			{
			public:
				ThreadLocal()
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.ThreadLocal`1"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__generic_types__[1];
					__generic_types__[0] = Global::GetType(typeid(T).name());
					__native_object__ = Global::New("mscorlib", "System.Threading", "ThreadLocal`1", 1, __generic_types__, 0, NULL, NULL);
				};
			
				ThreadLocal(mscorlib::Callback<T  ()> valueFactory)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.ThreadLocal`1"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__generic_types__[1];
					__generic_types__[0] = Global::GetType(typeid(T).name());
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Func`1");
					__parameters__[0] = &valueFactory;
					__native_object__ = Global::New("mscorlib", "System.Threading", "ThreadLocal`1", 1, __generic_types__, __parameters__);
				};
			
				ThreadLocal(mscorlib::System::Boolean trackAllValues)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.ThreadLocal`1"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__generic_types__[1];
					__generic_types__[0] = Global::GetType(typeid(T).name());
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Boolean");
					__parameters__[0] = reinterpret_cast<void*>(trackAllValues);
					__native_object__ = Global::New("mscorlib", "System.Threading", "ThreadLocal`1", 1, __generic_types__, __parameters__);
				};
			
				ThreadLocal(mscorlib::Callback<T  ()> valueFactory, mscorlib::System::Boolean trackAllValues)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.ThreadLocal`1"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__generic_types__[1];
					__generic_types__[0] = Global::GetType(typeid(T).name());
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Func`1");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Boolean");
					__parameters__[0] = &valueFactory;
					__parameters__[1] = reinterpret_cast<void*>(trackAllValues);
					__native_object__ = Global::New("mscorlib", "System.Threading", "ThreadLocal`1", 1, __generic_types__, __parameters__);
				};
			
				ThreadLocal(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				, mscorlib::System::IDisposable(NULL)
				{
				};
			
				ThreadLocal(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				, mscorlib::System::IDisposable(nativeObject)
				{
				};
			
				~ThreadLocal()
				{
				};
			

				ThreadLocal & operator=(ThreadLocal &value) { __native_object__ = value.GetNativeObject(); return value; };
				bool operator==(ThreadLocal &value) { return mscorlib::System::Object::Equals(value); };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual void  Dispose()
				{
					MonoType *__generic_types__[1];
					__generic_types__[0] = Global::GetType(typeid(T).name());
					Global::InvokeMethod("mscorlib", "System.Threading", "ThreadLocal`1", 1, __generic_types__, "Dispose", __native_object__, 0, NULL, NULL, NULL);
				};
				
				virtual mscorlib::System::String  ToString() override
				{
					MonoType *__generic_types__[1];
					__generic_types__[0] = Global::GetType(typeid(T).name());
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "ThreadLocal`1", 1, __generic_types__, "ToString", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				};
				
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_IsValueCreated)) mscorlib::System::Boolean  IsValueCreated;
				__declspec(property(get=get_Value, put=set_Value)) T  Value;
				__declspec(property(get=get_Values)) mscorlib::System::Collections::Generic::IList<T>  Values;

				//Get Set Properties Methods
				//	Get:IsValueCreated
				mscorlib::System::Boolean  get_IsValueCreated() const
				{
					MonoType *__generic_types__[1];
					__generic_types__[0] = Global::GetType(typeid(T).name());
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "ThreadLocal`1", 1, __generic_types__, "get_IsValueCreated", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				//	Get/Set:Value
				T  get_Value() const
				{
					MonoType *__generic_types__[1];
					__generic_types__[0] = Global::GetType(typeid(T).name());
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "ThreadLocal`1", 1, __generic_types__, "get_Value", __native_object__, 0, NULL, NULL, NULL);
					return T(__result__);
				}
				void set_Value(T  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					MonoType *__generic_types__[1];
					__generic_types__[0] = Global::GetType(typeid(T).name());
					Global::InvokeMethod("mscorlib", "System.Threading", "ThreadLocal`1", 1, __generic_types__, "set_Value", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}
			

				//	Get:Values
				mscorlib::System::Collections::Generic::IList<T>  get_Values() const
				{
					MonoType *__generic_types__[1];
					__generic_types__[0] = Global::GetType(typeid(T).name());
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "ThreadLocal`1", 1, __generic_types__, "get_Values", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Collections::Generic::IList<T>(__result__);
				}

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
