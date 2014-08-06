#include <mscorlib/System/mscorlib_System_Delegate.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MethodInfo.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_SerializationInfo.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_StreamingContext.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{

		//Public Methods
		mscorlib::System::Delegate Delegate::CreateDelegate(mscorlib::System::Type type, mscorlib::System::Object firstArgument, mscorlib::System::Reflection::MethodInfo method, mscorlib::System::Boolean throwOnBindFailure)
		{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType(typeid(type).name());
				__parameter_types__[1] = Global::GetType(typeid(firstArgument).name());
				__parameter_types__[2] = Global::GetType(typeid(method).name());
				__parameter_types__[3] = Global::GetType(typeid(throwOnBindFailure).name());
				__parameters__[0] = (MonoObject*)type;
				__parameters__[1] = (MonoObject*)firstArgument;
				__parameters__[2] = (MonoObject*)method;
				__parameters__[3] = reinterpret_cast<void*>(throwOnBindFailure);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Delegate", 0, NULL, "CreateDelegate", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Delegate(__result__);
		}

		mscorlib::System::Delegate Delegate::CreateDelegate(mscorlib::System::Type type, mscorlib::System::Object firstArgument, mscorlib::System::Reflection::MethodInfo method)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(type).name());
				__parameter_types__[1] = Global::GetType(typeid(firstArgument).name());
				__parameter_types__[2] = Global::GetType(typeid(method).name());
				__parameters__[0] = (MonoObject*)type;
				__parameters__[1] = (MonoObject*)firstArgument;
				__parameters__[2] = (MonoObject*)method;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Delegate", 0, NULL, "CreateDelegate", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Delegate(__result__);
		}

		mscorlib::System::Delegate Delegate::CreateDelegate(mscorlib::System::Type type, mscorlib::System::Reflection::MethodInfo method, mscorlib::System::Boolean throwOnBindFailure)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(type).name());
				__parameter_types__[1] = Global::GetType(typeid(method).name());
				__parameter_types__[2] = Global::GetType(typeid(throwOnBindFailure).name());
				__parameters__[0] = (MonoObject*)type;
				__parameters__[1] = (MonoObject*)method;
				__parameters__[2] = reinterpret_cast<void*>(throwOnBindFailure);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Delegate", 0, NULL, "CreateDelegate", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Delegate(__result__);
		}

		mscorlib::System::Delegate Delegate::CreateDelegate(mscorlib::System::Type type, mscorlib::System::Reflection::MethodInfo method)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(type).name());
				__parameter_types__[1] = Global::GetType(typeid(method).name());
				__parameters__[0] = (MonoObject*)type;
				__parameters__[1] = (MonoObject*)method;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Delegate", 0, NULL, "CreateDelegate", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Delegate(__result__);
		}

		mscorlib::System::Delegate Delegate::CreateDelegate(mscorlib::System::Type type, mscorlib::System::Object target, mscorlib::System::String method)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(type).name());
				__parameter_types__[1] = Global::GetType(typeid(target).name());
				__parameter_types__[2] = Global::GetType(typeid(method).name());
				__parameters__[0] = (MonoObject*)type;
				__parameters__[1] = (MonoObject*)target;
				__parameters__[2] = (MonoObject*)method;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Delegate", 0, NULL, "CreateDelegate", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Delegate(__result__);
		}

		mscorlib::System::Delegate Delegate::CreateDelegate(mscorlib::System::Type type, mscorlib::System::Object target, const char *method)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(type).name());
				__parameter_types__[1] = Global::GetType(typeid(target).name());
				__parameter_types__[2] = Global::GetType("mscorlib", "System", "String");
				__parameters__[0] = (MonoObject*)type;
				__parameters__[1] = (MonoObject*)target;
				__parameters__[2] = mono_string_new(Global::GetDomain(), method);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Delegate", 0, NULL, "CreateDelegate", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Delegate(__result__);
		}

		mscorlib::System::Delegate Delegate::CreateDelegate(mscorlib::System::Type type, mscorlib::System::Type target, mscorlib::System::String method, mscorlib::System::Boolean ignoreCase, mscorlib::System::Boolean throwOnBindFailure)
		{
				MonoType *__parameter_types__[5];
				void *__parameters__[5];
				__parameter_types__[0] = Global::GetType(typeid(type).name());
				__parameter_types__[1] = Global::GetType(typeid(target).name());
				__parameter_types__[2] = Global::GetType(typeid(method).name());
				__parameter_types__[3] = Global::GetType(typeid(ignoreCase).name());
				__parameter_types__[4] = Global::GetType(typeid(throwOnBindFailure).name());
				__parameters__[0] = (MonoObject*)type;
				__parameters__[1] = (MonoObject*)target;
				__parameters__[2] = (MonoObject*)method;
				__parameters__[3] = reinterpret_cast<void*>(ignoreCase);
				__parameters__[4] = reinterpret_cast<void*>(throwOnBindFailure);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Delegate", 0, NULL, "CreateDelegate", NullMonoObject, 5, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Delegate(__result__);
		}

		mscorlib::System::Delegate Delegate::CreateDelegate(mscorlib::System::Type type, mscorlib::System::Type target, const char *method, mscorlib::System::Boolean ignoreCase, mscorlib::System::Boolean throwOnBindFailure)
		{
				MonoType *__parameter_types__[5];
				void *__parameters__[5];
				__parameter_types__[0] = Global::GetType(typeid(type).name());
				__parameter_types__[1] = Global::GetType(typeid(target).name());
				__parameter_types__[2] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[3] = Global::GetType(typeid(ignoreCase).name());
				__parameter_types__[4] = Global::GetType(typeid(throwOnBindFailure).name());
				__parameters__[0] = (MonoObject*)type;
				__parameters__[1] = (MonoObject*)target;
				__parameters__[2] = mono_string_new(Global::GetDomain(), method);
				__parameters__[3] = reinterpret_cast<void*>(ignoreCase);
				__parameters__[4] = reinterpret_cast<void*>(throwOnBindFailure);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Delegate", 0, NULL, "CreateDelegate", NullMonoObject, 5, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Delegate(__result__);
		}

		mscorlib::System::Delegate Delegate::CreateDelegate(mscorlib::System::Type type, mscorlib::System::Type target, mscorlib::System::String method)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(type).name());
				__parameter_types__[1] = Global::GetType(typeid(target).name());
				__parameter_types__[2] = Global::GetType(typeid(method).name());
				__parameters__[0] = (MonoObject*)type;
				__parameters__[1] = (MonoObject*)target;
				__parameters__[2] = (MonoObject*)method;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Delegate", 0, NULL, "CreateDelegate", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Delegate(__result__);
		}

		mscorlib::System::Delegate Delegate::CreateDelegate(mscorlib::System::Type type, mscorlib::System::Type target, const char *method)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(type).name());
				__parameter_types__[1] = Global::GetType(typeid(target).name());
				__parameter_types__[2] = Global::GetType("mscorlib", "System", "String");
				__parameters__[0] = (MonoObject*)type;
				__parameters__[1] = (MonoObject*)target;
				__parameters__[2] = mono_string_new(Global::GetDomain(), method);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Delegate", 0, NULL, "CreateDelegate", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Delegate(__result__);
		}

		mscorlib::System::Delegate Delegate::CreateDelegate(mscorlib::System::Type type, mscorlib::System::Type target, mscorlib::System::String method, mscorlib::System::Boolean ignoreCase)
		{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType(typeid(type).name());
				__parameter_types__[1] = Global::GetType(typeid(target).name());
				__parameter_types__[2] = Global::GetType(typeid(method).name());
				__parameter_types__[3] = Global::GetType(typeid(ignoreCase).name());
				__parameters__[0] = (MonoObject*)type;
				__parameters__[1] = (MonoObject*)target;
				__parameters__[2] = (MonoObject*)method;
				__parameters__[3] = reinterpret_cast<void*>(ignoreCase);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Delegate", 0, NULL, "CreateDelegate", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Delegate(__result__);
		}

		mscorlib::System::Delegate Delegate::CreateDelegate(mscorlib::System::Type type, mscorlib::System::Type target, const char *method, mscorlib::System::Boolean ignoreCase)
		{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType(typeid(type).name());
				__parameter_types__[1] = Global::GetType(typeid(target).name());
				__parameter_types__[2] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[3] = Global::GetType(typeid(ignoreCase).name());
				__parameters__[0] = (MonoObject*)type;
				__parameters__[1] = (MonoObject*)target;
				__parameters__[2] = mono_string_new(Global::GetDomain(), method);
				__parameters__[3] = reinterpret_cast<void*>(ignoreCase);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Delegate", 0, NULL, "CreateDelegate", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Delegate(__result__);
		}

		mscorlib::System::Delegate Delegate::CreateDelegate(mscorlib::System::Type type, mscorlib::System::Object target, mscorlib::System::String method, mscorlib::System::Boolean ignoreCase, mscorlib::System::Boolean throwOnBindFailure)
		{
				MonoType *__parameter_types__[5];
				void *__parameters__[5];
				__parameter_types__[0] = Global::GetType(typeid(type).name());
				__parameter_types__[1] = Global::GetType(typeid(target).name());
				__parameter_types__[2] = Global::GetType(typeid(method).name());
				__parameter_types__[3] = Global::GetType(typeid(ignoreCase).name());
				__parameter_types__[4] = Global::GetType(typeid(throwOnBindFailure).name());
				__parameters__[0] = (MonoObject*)type;
				__parameters__[1] = (MonoObject*)target;
				__parameters__[2] = (MonoObject*)method;
				__parameters__[3] = reinterpret_cast<void*>(ignoreCase);
				__parameters__[4] = reinterpret_cast<void*>(throwOnBindFailure);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Delegate", 0, NULL, "CreateDelegate", NullMonoObject, 5, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Delegate(__result__);
		}

		mscorlib::System::Delegate Delegate::CreateDelegate(mscorlib::System::Type type, mscorlib::System::Object target, const char *method, mscorlib::System::Boolean ignoreCase, mscorlib::System::Boolean throwOnBindFailure)
		{
				MonoType *__parameter_types__[5];
				void *__parameters__[5];
				__parameter_types__[0] = Global::GetType(typeid(type).name());
				__parameter_types__[1] = Global::GetType(typeid(target).name());
				__parameter_types__[2] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[3] = Global::GetType(typeid(ignoreCase).name());
				__parameter_types__[4] = Global::GetType(typeid(throwOnBindFailure).name());
				__parameters__[0] = (MonoObject*)type;
				__parameters__[1] = (MonoObject*)target;
				__parameters__[2] = mono_string_new(Global::GetDomain(), method);
				__parameters__[3] = reinterpret_cast<void*>(ignoreCase);
				__parameters__[4] = reinterpret_cast<void*>(throwOnBindFailure);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Delegate", 0, NULL, "CreateDelegate", NullMonoObject, 5, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Delegate(__result__);
		}

		mscorlib::System::Delegate Delegate::CreateDelegate(mscorlib::System::Type type, mscorlib::System::Object target, mscorlib::System::String method, mscorlib::System::Boolean ignoreCase)
		{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType(typeid(type).name());
				__parameter_types__[1] = Global::GetType(typeid(target).name());
				__parameter_types__[2] = Global::GetType(typeid(method).name());
				__parameter_types__[3] = Global::GetType(typeid(ignoreCase).name());
				__parameters__[0] = (MonoObject*)type;
				__parameters__[1] = (MonoObject*)target;
				__parameters__[2] = (MonoObject*)method;
				__parameters__[3] = reinterpret_cast<void*>(ignoreCase);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Delegate", 0, NULL, "CreateDelegate", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Delegate(__result__);
		}

		mscorlib::System::Delegate Delegate::CreateDelegate(mscorlib::System::Type type, mscorlib::System::Object target, const char *method, mscorlib::System::Boolean ignoreCase)
		{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType(typeid(type).name());
				__parameter_types__[1] = Global::GetType(typeid(target).name());
				__parameter_types__[2] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[3] = Global::GetType(typeid(ignoreCase).name());
				__parameters__[0] = (MonoObject*)type;
				__parameters__[1] = (MonoObject*)target;
				__parameters__[2] = mono_string_new(Global::GetDomain(), method);
				__parameters__[3] = reinterpret_cast<void*>(ignoreCase);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Delegate", 0, NULL, "CreateDelegate", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Delegate(__result__);
		}

		mscorlib::System::Object Delegate::DynamicInvoke(std::vector<mscorlib::System::Object*> args)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
				__parameters__[0] = Global::FromArray<mscorlib::System::Object*>(args, typeid(mscorlib::System::Object).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Delegate", 0, NULL, "DynamicInvoke", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
		}

		mscorlib::System::Object Delegate::Clone()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Delegate", 0, NULL, "Clone", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Object(__result__);
		}

		mscorlib::System::Boolean Delegate::Equals(mscorlib::System::Object obj)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(obj).name());
				__parameters__[0] = (MonoObject*)obj;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Delegate", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 Delegate::GetHashCode()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Delegate", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		void Delegate::GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(info).name());
				__parameter_types__[1] = Global::GetType(typeid(context).name());
				__parameters__[0] = (MonoObject*)info;
				__parameters__[1] = (MonoObject*)context;
				Global::InvokeMethod("mscorlib", "System", "Delegate", 0, NULL, "GetObjectData", __native_object__, 2, __parameter_types__, __parameters__, NULL);
		}

		std::vector<mscorlib::System::Delegate*> Delegate::GetInvocationList()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Delegate", 0, NULL, "GetInvocationList", __native_object__, 0, NULL, NULL, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::Delegate*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::Delegate (__array_item__));
				}
				return __array_result__;
		}

		mscorlib::System::Delegate Delegate::Combine(mscorlib::System::Delegate a, mscorlib::System::Delegate b)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(a).name());
				__parameter_types__[1] = Global::GetType(typeid(b).name());
				__parameters__[0] = (MonoObject*)a;
				__parameters__[1] = (MonoObject*)b;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Delegate", 0, NULL, "Combine", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Delegate(__result__);
		}

		mscorlib::System::Delegate Delegate::Combine(std::vector<mscorlib::System::Delegate*> delegates)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Delegate")), 1));
				__parameters__[0] = Global::FromArray<mscorlib::System::Delegate*>(delegates, typeid(mscorlib::System::Delegate).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Delegate", 0, NULL, "Combine", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Delegate(__result__);
		}

		mscorlib::System::Delegate Delegate::Remove(mscorlib::System::Delegate source, mscorlib::System::Delegate value)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(source).name());
				__parameter_types__[1] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)source;
				__parameters__[1] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Delegate", 0, NULL, "Remove", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Delegate(__result__);
		}

		mscorlib::System::Delegate Delegate::RemoveAll(mscorlib::System::Delegate source, mscorlib::System::Delegate value)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(source).name());
				__parameter_types__[1] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)source;
				__parameters__[1] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Delegate", 0, NULL, "RemoveAll", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Delegate(__result__);
		}

		//Get Set Properties Methods
		//	Get:Method
		mscorlib::System::Reflection::MethodInfo  Delegate::get_Method() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Delegate", 0, NULL, "get_Method", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::Reflection::MethodInfo(__result__);
		}


		//	Get:Target
		mscorlib::System::Object  Delegate::get_Target() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Delegate", 0, NULL, "get_Target", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::Object(__result__);
		}



	}
}
