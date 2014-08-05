#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MethodBody.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ExceptionHandlingClause.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_LocalVariableInfo.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			//Public Methods
			std::vector<mscorlib::System::Byte*> MethodBody::GetILAsByteArray()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBody", 0, NULL, "GetILAsByteArray", __native_object__, 0, NULL, NULL, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::Byte*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back(new mscorlib::System::Byte (__array_item__));
					}
					return __array_result__;
			}

			//Get Set Properties Methods
			//	Get:ExceptionHandlingClauses
			mscorlib::System::Collections::Generic::IList<mscorlib::System::Reflection::ExceptionHandlingClause>  MethodBody::get_ExceptionHandlingClauses() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBody", 0, NULL, "get_ExceptionHandlingClauses", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Collections::Generic::IList<mscorlib::System::Reflection::ExceptionHandlingClause>(__result__);
			}


			//	Get:LocalVariables
			mscorlib::System::Collections::Generic::IList<mscorlib::System::Reflection::LocalVariableInfo>  MethodBody::get_LocalVariables() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBody", 0, NULL, "get_LocalVariables", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Collections::Generic::IList<mscorlib::System::Reflection::LocalVariableInfo>(__result__);
			}


			//	Get:InitLocals
			mscorlib::System::Boolean  MethodBody::get_InitLocals() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBody", 0, NULL, "get_InitLocals", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:LocalSignatureMetadataToken
			mscorlib::System::Int32  MethodBody::get_LocalSignatureMetadataToken() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBody", 0, NULL, "get_LocalSignatureMetadataToken", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}


			//	Get:MaxStackSize
			mscorlib::System::Int32  MethodBody::get_MaxStackSize() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBody", 0, NULL, "get_MaxStackSize", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}



		}
	}
}
