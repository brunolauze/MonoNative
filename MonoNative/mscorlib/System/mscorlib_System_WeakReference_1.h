#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_WEAKREFERENCE_1_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_WEAKREFERENCE_1_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ISerializable.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_SerializationInfo.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_StreamingContext.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>

namespace mscorlib
{
	namespace System
	{

		template<typename T>
		class WeakReference
			: public mscorlib::System::Object
			, public virtual mscorlib::System::Runtime::Serialization::ISerializable
		{
		public:
			WeakReference(T target)
			: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.WeakReference`1"))
			, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
			{
				MonoType *__generic_types__[1];
				__generic_types__[0] = Global::GetType(typeid(T).name());
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "T");
				__parameters__[0] = (MonoObject*)target;
				__native_object__ = Global::New("mscorlib", "System", "WeakReference`1", 1, __generic_types__, __parameters__);
			};
		
			WeakReference(T target, mscorlib::System::Boolean trackResurrection)
			: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.WeakReference`1"))
			, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
			{
				MonoType *__generic_types__[1];
				__generic_types__[0] = Global::GetType(typeid(T).name());
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "T");
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "Boolean");
				__parameters__[0] = (MonoObject*)target;
				__parameters__[1] = reinterpret_cast<void*>(trackResurrection);
				__native_object__ = Global::New("mscorlib", "System", "WeakReference`1", 1, __generic_types__, __parameters__);
			};
		
			WeakReference(mscorlib::NativeTypeInfo *nativeTypeInfo)
			: mscorlib::System::Object(nativeTypeInfo)
			, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
			{
			};
		
			WeakReference(MonoObject *nativeObject)
			: mscorlib::System::Object(nativeObject)
			, mscorlib::System::Runtime::Serialization::ISerializable(nativeObject)
			{
			};
		
			~WeakReference()
			{
			};
		

			WeakReference & operator=(WeakReference &value) { __native_object__ = value.GetNativeObject(); return value; };
			bool operator==(WeakReference &value) { return mscorlib::System::Object::Equals(value); };
			operator MonoObject*() { return __native_object__; };
			MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


			virtual void  GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context)
			{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(info).name());
				__parameter_types__[1] = Global::GetType(typeid(context).name());
				__parameters__[0] = (MonoObject*)info;
				__parameters__[1] = (MonoObject*)context;
				MonoType *__generic_types__[1];
				__generic_types__[0] = Global::GetType(typeid(T).name());
				Global::InvokeMethod("mscorlib", "System", "WeakReference`1", 1, __generic_types__, "GetObjectData", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			};
			
			void  SetTarget(T target)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(target).name());
				__parameters__[0] = (MonoObject*)target;
				MonoType *__generic_types__[1];
				__generic_types__[0] = Global::GetType(typeid(T).name());
				Global::InvokeMethod("mscorlib", "System", "WeakReference`1", 1, __generic_types__, "SetTarget", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			};
			
			mscorlib::System::Boolean  TryGetTarget(T target)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(target).name());
				__parameters__[0] = (MonoObject*)target;
				MonoType *__generic_types__[1];
				__generic_types__[0] = Global::GetType(typeid(T).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "WeakReference`1", 1, __generic_types__, "TryGetTarget", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			};
			
			virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


		
		protected:
		
		private:
		
		};

	}
}
#endif
