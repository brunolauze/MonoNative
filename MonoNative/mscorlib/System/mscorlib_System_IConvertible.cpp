#include <mscorlib/System/mscorlib_System_IConvertible.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/mscorlib_System_DateTime.h>
#include <mscorlib/System/mscorlib_System_Decimal.h>
#include <mscorlib/System/mscorlib_System_SByte.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{

		//Public Methods
		mscorlib::System::TypeCode::__ENUM__ IConvertible::GetTypeCode()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "IConvertible", 0, NULL, "GetTypeCode", __mscorlib_System_IConvertible, 0, NULL, NULL, NULL);
				return *(mscorlib::System::TypeCode::__ENUM__*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean IConvertible::ToBoolean(mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(provider).name());
				__parameters__[0] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "IConvertible", 0, NULL, "ToBoolean", __mscorlib_System_IConvertible, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Byte IConvertible::ToByte(mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(provider).name());
				__parameters__[0] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "IConvertible", 0, NULL, "ToByte", __mscorlib_System_IConvertible, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Byte(__result__);
		}

		mscorlib::System::Char IConvertible::ToChar(mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(provider).name());
				__parameters__[0] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "IConvertible", 0, NULL, "ToChar", __mscorlib_System_IConvertible, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Char*)mono_object_unbox(__result__);
		}

		mscorlib::System::DateTime IConvertible::ToDateTime(mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(provider).name());
				__parameters__[0] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "IConvertible", 0, NULL, "ToDateTime", __mscorlib_System_IConvertible, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTime(__result__);
		}

		mscorlib::System::Decimal IConvertible::ToDecimal(mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(provider).name());
				__parameters__[0] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "IConvertible", 0, NULL, "ToDecimal", __mscorlib_System_IConvertible, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Decimal(__result__);
		}

		mscorlib::System::Double IConvertible::ToDouble(mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(provider).name());
				__parameters__[0] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "IConvertible", 0, NULL, "ToDouble", __mscorlib_System_IConvertible, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Double*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int16 IConvertible::ToInt16(mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(provider).name());
				__parameters__[0] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "IConvertible", 0, NULL, "ToInt16", __mscorlib_System_IConvertible, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int16*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 IConvertible::ToInt32(mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(provider).name());
				__parameters__[0] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "IConvertible", 0, NULL, "ToInt32", __mscorlib_System_IConvertible, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int64 IConvertible::ToInt64(mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(provider).name());
				__parameters__[0] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "IConvertible", 0, NULL, "ToInt64", __mscorlib_System_IConvertible, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
		}

		mscorlib::System::SByte IConvertible::ToSByte(mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(provider).name());
				__parameters__[0] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "IConvertible", 0, NULL, "ToSByte", __mscorlib_System_IConvertible, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::SByte(__result__);
		}

		mscorlib::System::Single IConvertible::ToSingle(mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(provider).name());
				__parameters__[0] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "IConvertible", 0, NULL, "ToSingle", __mscorlib_System_IConvertible, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Single*)mono_object_unbox(__result__);
		}

		mscorlib::System::String IConvertible::ToString(mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(provider).name());
				__parameters__[0] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "IConvertible", 0, NULL, "ToString", __mscorlib_System_IConvertible, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::Object IConvertible::ToType(mscorlib::System::Type conversionType, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(conversionType).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = (MonoObject*)conversionType;
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "IConvertible", 0, NULL, "ToType", __mscorlib_System_IConvertible, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
		}

		mscorlib::System::UInt16 IConvertible::ToUInt16(mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(provider).name());
				__parameters__[0] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "IConvertible", 0, NULL, "ToUInt16", __mscorlib_System_IConvertible, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt16*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt32 IConvertible::ToUInt32(mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(provider).name());
				__parameters__[0] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "IConvertible", 0, NULL, "ToUInt32", __mscorlib_System_IConvertible, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt32*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt64 IConvertible::ToUInt64(mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(provider).name());
				__parameters__[0] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "IConvertible", 0, NULL, "ToUInt64", __mscorlib_System_IConvertible, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::UInt64*)mono_object_unbox(__result__);
		}


	}
}
