#include <mscorlib/System/mscorlib_System_ModuleHandle.h>
#include <mscorlib/System/mscorlib_System_RuntimeFieldHandle.h>
#include <mscorlib/System/mscorlib_System_RuntimeMethodHandle.h>
#include <mscorlib/System/mscorlib_System_RuntimeTypeHandle.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{

		//Public Methods
		mscorlib::System::RuntimeFieldHandle ModuleHandle::ResolveFieldHandle(mscorlib::System::Int32 fieldToken)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(fieldToken).name());
				__parameters__[0] = &fieldToken;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "ModuleHandle", 0, NULL, "ResolveFieldHandle", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::RuntimeFieldHandle(__result__);
		}

		mscorlib::System::RuntimeMethodHandle ModuleHandle::ResolveMethodHandle(mscorlib::System::Int32 methodToken)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(methodToken).name());
				__parameters__[0] = &methodToken;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "ModuleHandle", 0, NULL, "ResolveMethodHandle", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::RuntimeMethodHandle(__result__);
		}

		mscorlib::System::RuntimeTypeHandle ModuleHandle::ResolveTypeHandle(mscorlib::System::Int32 typeToken)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(typeToken).name());
				__parameters__[0] = &typeToken;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "ModuleHandle", 0, NULL, "ResolveTypeHandle", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::RuntimeTypeHandle(__result__);
		}

		mscorlib::System::RuntimeTypeHandle ModuleHandle::ResolveTypeHandle(mscorlib::System::Int32 typeToken, std::vector<mscorlib::System::RuntimeTypeHandle*> typeInstantiationContext, std::vector<mscorlib::System::RuntimeTypeHandle*> methodInstantiationContext)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(typeToken).name());
				__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "RuntimeTypeHandle")), 1));
				__parameter_types__[2] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "RuntimeTypeHandle")), 1));
				__parameters__[0] = &typeToken;
				__parameters__[1] = Global::FromArray<mscorlib::System::RuntimeTypeHandle*>(typeInstantiationContext, typeid(mscorlib::System::RuntimeTypeHandle).name());
				__parameters__[2] = Global::FromArray<mscorlib::System::RuntimeTypeHandle*>(methodInstantiationContext, typeid(mscorlib::System::RuntimeTypeHandle).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "ModuleHandle", 0, NULL, "ResolveTypeHandle", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::RuntimeTypeHandle(__result__);
		}

		mscorlib::System::RuntimeMethodHandle ModuleHandle::ResolveMethodHandle(mscorlib::System::Int32 methodToken, std::vector<mscorlib::System::RuntimeTypeHandle*> typeInstantiationContext, std::vector<mscorlib::System::RuntimeTypeHandle*> methodInstantiationContext)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(methodToken).name());
				__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "RuntimeTypeHandle")), 1));
				__parameter_types__[2] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "RuntimeTypeHandle")), 1));
				__parameters__[0] = &methodToken;
				__parameters__[1] = Global::FromArray<mscorlib::System::RuntimeTypeHandle*>(typeInstantiationContext, typeid(mscorlib::System::RuntimeTypeHandle).name());
				__parameters__[2] = Global::FromArray<mscorlib::System::RuntimeTypeHandle*>(methodInstantiationContext, typeid(mscorlib::System::RuntimeTypeHandle).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "ModuleHandle", 0, NULL, "ResolveMethodHandle", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::RuntimeMethodHandle(__result__);
		}

		mscorlib::System::RuntimeFieldHandle ModuleHandle::ResolveFieldHandle(mscorlib::System::Int32 fieldToken, std::vector<mscorlib::System::RuntimeTypeHandle*> typeInstantiationContext, std::vector<mscorlib::System::RuntimeTypeHandle*> methodInstantiationContext)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(fieldToken).name());
				__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "RuntimeTypeHandle")), 1));
				__parameter_types__[2] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "RuntimeTypeHandle")), 1));
				__parameters__[0] = &fieldToken;
				__parameters__[1] = Global::FromArray<mscorlib::System::RuntimeTypeHandle*>(typeInstantiationContext, typeid(mscorlib::System::RuntimeTypeHandle).name());
				__parameters__[2] = Global::FromArray<mscorlib::System::RuntimeTypeHandle*>(methodInstantiationContext, typeid(mscorlib::System::RuntimeTypeHandle).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "ModuleHandle", 0, NULL, "ResolveFieldHandle", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::RuntimeFieldHandle(__result__);
		}

		mscorlib::System::RuntimeFieldHandle ModuleHandle::GetRuntimeFieldHandleFromMetadataToken(mscorlib::System::Int32 fieldToken)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(fieldToken).name());
				__parameters__[0] = &fieldToken;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "ModuleHandle", 0, NULL, "GetRuntimeFieldHandleFromMetadataToken", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::RuntimeFieldHandle(__result__);
		}

		mscorlib::System::RuntimeMethodHandle ModuleHandle::GetRuntimeMethodHandleFromMetadataToken(mscorlib::System::Int32 methodToken)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(methodToken).name());
				__parameters__[0] = &methodToken;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "ModuleHandle", 0, NULL, "GetRuntimeMethodHandleFromMetadataToken", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::RuntimeMethodHandle(__result__);
		}

		mscorlib::System::RuntimeTypeHandle ModuleHandle::GetRuntimeTypeHandleFromMetadataToken(mscorlib::System::Int32 typeToken)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(typeToken).name());
				__parameters__[0] = &typeToken;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "ModuleHandle", 0, NULL, "GetRuntimeTypeHandleFromMetadataToken", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::RuntimeTypeHandle(__result__);
		}

		mscorlib::System::Boolean ModuleHandle::Equals(mscorlib::System::Object obj)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(obj).name());
				__parameters__[0] = (MonoObject*)obj;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "ModuleHandle", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean ModuleHandle::Equals(mscorlib::System::ModuleHandle handle)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(handle).name());
				__parameters__[0] = (MonoObject*)handle;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "ModuleHandle", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 ModuleHandle::GetHashCode()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "ModuleHandle", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		//Get Set Properties Methods
		//	Get:MDStreamVersion
		mscorlib::System::Int32  ModuleHandle::get_MDStreamVersion() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "ModuleHandle", 0, NULL, "get_MDStreamVersion", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}


			//	Get/Set:EmptyHandle
		mscorlib::System::ModuleHandle ModuleHandle::get_EmptyHandle()
		{
			return Global::GetFieldValue("mscorlib", "System", "ModuleHandle", 0, NULL, "EmptyHandle");
		}

		void ModuleHandle::set_EmptyHandle(mscorlib::System::ModuleHandle  value)
		{
			throw;
		}


	}
}
