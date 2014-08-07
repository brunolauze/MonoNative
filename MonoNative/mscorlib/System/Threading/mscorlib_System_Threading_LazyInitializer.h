#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_LAZYINITIALIZER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_LAZYINITIALIZER_H

#include <mscorlib/System/mscorlib_System_Object.h>

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
		namespace Threading
		{

			class LazyInitializer
				: public mscorlib::System::Object
			{
			public:
				LazyInitializer(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				{
				};
			
				LazyInitializer(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				{
				};
			
				~LazyInitializer()
				{
				};
			

				LazyInitializer & operator=(LazyInitializer &value) { __native_object__ = value.GetNativeObject(); return value; };
				bool operator==(LazyInitializer &value) { return mscorlib::System::Object::Equals(value); };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				template<typename T>
				static T  EnsureInitialized(T target)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(target).name());
					__parameters__[0] = (MonoObject*)target;
					MonoType *__generic_types__[1];
					__generic_types__[0] = Global::GetType(typeid(T).name());
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "LazyInitializer", 0, NULL, "EnsureInitialized", NullMonoObject, 1, __generic_types__, 1, __parameter_types__, __parameters__, NULL);
					return T(__result__);
				};
				
				template<typename T>
				static T  EnsureInitialized(T target, mscorlib::Callback<T  ()> valueFactory)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(target).name());
					__parameter_types__[1] = Global::GetType(typeid(valueFactory).name());
					__parameters__[0] = (MonoObject*)target;
					__parameters__[1] = &valueFactory;
					MonoType *__generic_types__[1];
					__generic_types__[0] = Global::GetType(typeid(T).name());
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "LazyInitializer", 0, NULL, "EnsureInitialized", NullMonoObject, 1, __generic_types__, 2, __parameter_types__, __parameters__, NULL);
					return T(__result__);
				};
				
				template<typename T>
				static T  EnsureInitialized(T target, mscorlib::System::Boolean initialized, mscorlib::System::Object syncLock)
				{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(target).name());
					__parameter_types__[1] = Global::GetType(typeid(initialized).name());
					__parameter_types__[2] = Global::GetType(typeid(syncLock).name());
					__parameters__[0] = (MonoObject*)target;
					__parameters__[1] = &initialized;
					__parameters__[2] = (MonoObject*)syncLock;
					MonoType *__generic_types__[1];
					__generic_types__[0] = Global::GetType(typeid(T).name());
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "LazyInitializer", 0, NULL, "EnsureInitialized", NullMonoObject, 1, __generic_types__, 3, __parameter_types__, __parameters__, NULL);
					return T(__result__);
				};
				
				template<typename T>
				static T  EnsureInitialized(T target, mscorlib::System::Boolean initialized, mscorlib::System::Object syncLock, mscorlib::Callback<T  ()> valueFactory)
				{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = Global::GetType(typeid(target).name());
					__parameter_types__[1] = Global::GetType(typeid(initialized).name());
					__parameter_types__[2] = Global::GetType(typeid(syncLock).name());
					__parameter_types__[3] = Global::GetType(typeid(valueFactory).name());
					__parameters__[0] = (MonoObject*)target;
					__parameters__[1] = &initialized;
					__parameters__[2] = (MonoObject*)syncLock;
					__parameters__[3] = &valueFactory;
					MonoType *__generic_types__[1];
					__generic_types__[0] = Global::GetType(typeid(T).name());
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "LazyInitializer", 0, NULL, "EnsureInitialized", NullMonoObject, 1, __generic_types__, 4, __parameter_types__, __parameters__, NULL);
					return T(__result__);
				};
				
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
