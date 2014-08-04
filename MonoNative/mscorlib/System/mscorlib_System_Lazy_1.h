#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_LAZY_1_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_LAZY_1_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_LazyThreadSafetyMode.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>

namespace mscorlib
{
	namespace System
	{

		template<typename T>
		class Lazy
			: public mscorlib::System::Object
		{
		public:
			Lazy()
			: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Lazy`1"))
			{
				MonoType *__generic_types__[1];
				__generic_types__[0] = Global::GetType(typeid(T).name());
				__native_object__ = Global::New("mscorlib", "System", "Lazy`1", 1, __generic_types__, 0, NULL, NULL);
			};
		
			Lazy(mscorlib::Callback<T  ()> valueFactory)
			: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Lazy`1"))
			{
				MonoType *__generic_types__[1];
				__generic_types__[0] = Global::GetType(typeid(T).name());
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "Func`1");
				__parameters__[0] = &valueFactory;
				__native_object__ = Global::New("mscorlib", "System", "Lazy`1", 1, __generic_types__, __parameters__);
			};
		
			Lazy(mscorlib::System::Boolean isThreadSafe)
			: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Lazy`1"))
			{
				MonoType *__generic_types__[1];
				__generic_types__[0] = Global::GetType(typeid(T).name());
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "Boolean");
				__parameters__[0] = reinterpret_cast<void*>(isThreadSafe);
				__native_object__ = Global::New("mscorlib", "System", "Lazy`1", 1, __generic_types__, __parameters__);
			};
		
			Lazy(mscorlib::Callback<T  ()> valueFactory, mscorlib::System::Boolean isThreadSafe)
			: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Lazy`1"))
			{
				MonoType *__generic_types__[1];
				__generic_types__[0] = Global::GetType(typeid(T).name());
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "Func`1");
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "Boolean");
				__parameters__[0] = &valueFactory;
				__parameters__[1] = reinterpret_cast<void*>(isThreadSafe);
				__native_object__ = Global::New("mscorlib", "System", "Lazy`1", 1, __generic_types__, __parameters__);
			};
		
			Lazy(mscorlib::System::Threading::LazyThreadSafetyMode::__ENUM__ mode)
			: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Lazy`1"))
			{
				MonoType *__generic_types__[1];
				__generic_types__[0] = Global::GetType(typeid(T).name());
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System.Threading", "LazyThreadSafetyMode");
				__parameters__[0] = reinterpret_cast<void*>(mode);
				__native_object__ = Global::New("mscorlib", "System", "Lazy`1", 1, __generic_types__, __parameters__);
			};
		
			Lazy(mscorlib::Callback<T  ()> valueFactory, mscorlib::System::Threading::LazyThreadSafetyMode::__ENUM__ mode)
			: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Lazy`1"))
			{
				MonoType *__generic_types__[1];
				__generic_types__[0] = Global::GetType(typeid(T).name());
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "Func`1");
				__parameter_types__[1] = Global::GetType("mscorlib", "System.Threading", "LazyThreadSafetyMode");
				__parameters__[0] = &valueFactory;
				__parameters__[1] = reinterpret_cast<void*>(mode);
				__native_object__ = Global::New("mscorlib", "System", "Lazy`1", 1, __generic_types__, __parameters__);
			};
		
			Lazy(mscorlib::NativeTypeInfo *nativeTypeInfo)
			: mscorlib::System::Object(nativeTypeInfo)
			{
			};
		
			Lazy(MonoObject *nativeObject)
			: mscorlib::System::Object(nativeObject)
			{
			};
		
			~Lazy()
			{
			};
		

			Lazy & operator=(Lazy &value) { __native_object__ = value.GetNativeObject(); return value; };
			operator MonoObject*() { return __native_object__; };
			MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


			virtual mscorlib::System::String  ToString() override
			{
				MonoType *__generic_types__[1];
				__generic_types__[0] = Global::GetType(typeid(T).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Lazy`1", 1, __generic_types__, "ToString", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			};
			
			virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			//Public Properties
			__declspec(property(get=get_Value)) T  Value;
			__declspec(property(get=get_IsValueCreated)) mscorlib::System::Boolean  IsValueCreated;

			//Get Set Properties Methods
			//	Get:Value
			T  get_Value()
			{
				MonoType *__generic_types__[1];
				__generic_types__[0] = Global::GetType(typeid(T).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Lazy`1", 1, __generic_types__, "get_Value", __native_object__, 0, NULL, NULL, NULL);
				return T(__result__);
			}

			//	Get:IsValueCreated
			mscorlib::System::Boolean  get_IsValueCreated()
			{
				MonoType *__generic_types__[1];
				__generic_types__[0] = Global::GetType(typeid(T).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Lazy`1", 1, __generic_types__, "get_IsValueCreated", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

		
		protected:
		
		private:
		
		};

	}
}
#endif
