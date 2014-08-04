#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_UnmanagedMarshal.h>
#include <mscorlib/System/mscorlib_System_Guid.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{
			namespace Emit
			{

				//Public Methods
				mscorlib::System::Reflection::Emit::UnmanagedMarshal UnmanagedMarshal::DefineByValArray(mscorlib::System::Int32 elemCount)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(elemCount).name());
						__parameters__[0] = &elemCount;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "UnmanagedMarshal", 0, NULL, "DefineByValArray", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::UnmanagedMarshal(__result__);
				}

				mscorlib::System::Reflection::Emit::UnmanagedMarshal UnmanagedMarshal::DefineByValTStr(mscorlib::System::Int32 elemCount)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(elemCount).name());
						__parameters__[0] = &elemCount;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "UnmanagedMarshal", 0, NULL, "DefineByValTStr", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::UnmanagedMarshal(__result__);
				}

				mscorlib::System::Reflection::Emit::UnmanagedMarshal UnmanagedMarshal::DefineLPArray(mscorlib::System::Runtime::InteropServices::UnmanagedType::__ENUM__ elemType)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(elemType).name());
						__parameters__[0] = reinterpret_cast<void*>(elemType);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "UnmanagedMarshal", 0, NULL, "DefineLPArray", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::UnmanagedMarshal(__result__);
				}

				mscorlib::System::Reflection::Emit::UnmanagedMarshal UnmanagedMarshal::DefineSafeArray(mscorlib::System::Runtime::InteropServices::UnmanagedType::__ENUM__ elemType)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(elemType).name());
						__parameters__[0] = reinterpret_cast<void*>(elemType);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "UnmanagedMarshal", 0, NULL, "DefineSafeArray", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::UnmanagedMarshal(__result__);
				}

				mscorlib::System::Reflection::Emit::UnmanagedMarshal UnmanagedMarshal::DefineUnmanagedMarshal(mscorlib::System::Runtime::InteropServices::UnmanagedType::__ENUM__ unmanagedType)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(unmanagedType).name());
						__parameters__[0] = reinterpret_cast<void*>(unmanagedType);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "UnmanagedMarshal", 0, NULL, "DefineUnmanagedMarshal", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::UnmanagedMarshal(__result__);
				}

				//Get Set Properties Methods
				//	Get:BaseType
				mscorlib::System::Runtime::InteropServices::UnmanagedType::__ENUM__  UnmanagedMarshal::get_BaseType()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "UnmanagedMarshal", 0, NULL, "get_BaseType", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Runtime::InteropServices::UnmanagedType::__ENUM__*)mono_object_unbox(__result__);
				}


				//	Get:ElementCount
				mscorlib::System::Int32  UnmanagedMarshal::get_ElementCount()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "UnmanagedMarshal", 0, NULL, "get_ElementCount", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//	Get:GetUnmanagedType
				mscorlib::System::Runtime::InteropServices::UnmanagedType::__ENUM__  UnmanagedMarshal::get_GetUnmanagedType()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "UnmanagedMarshal", 0, NULL, "get_GetUnmanagedType", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Runtime::InteropServices::UnmanagedType::__ENUM__*)mono_object_unbox(__result__);
				}


				//	Get:IIDGuid
				mscorlib::System::Guid  UnmanagedMarshal::get_IIDGuid()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "UnmanagedMarshal", 0, NULL, "get_IIDGuid", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Guid(__result__);
				}



			}
		}
	}
}
