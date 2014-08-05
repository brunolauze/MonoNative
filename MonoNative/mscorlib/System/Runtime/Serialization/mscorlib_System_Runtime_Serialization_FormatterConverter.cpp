#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_FormatterConverter.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/mscorlib_System_DateTime.h>
#include <mscorlib/System/mscorlib_System_Decimal.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_SByte.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Serialization
			{

				//Public Methods
				mscorlib::System::Object FormatterConverter::Convert(mscorlib::System::Object value, mscorlib::System::Type type)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameter_types__[1] = Global::GetType(typeid(type).name());
						__parameters__[0] = (MonoObject*)value;
						__parameters__[1] = (MonoObject*)type;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "FormatterConverter", 0, NULL, "Convert", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Object(__result__);
				}

				mscorlib::System::Object FormatterConverter::Convert(mscorlib::System::Object value, mscorlib::System::TypeCode::__ENUM__ typeCode)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameter_types__[1] = Global::GetType(typeid(typeCode).name());
						__parameters__[0] = (MonoObject*)value;
						int __param_typeCode__ = typeCode;
						__parameters__[1] = &__param_typeCode__;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "FormatterConverter", 0, NULL, "Convert", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Object(__result__);
				}

				mscorlib::System::Boolean FormatterConverter::ToBoolean(mscorlib::System::Object value)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "FormatterConverter", 0, NULL, "ToBoolean", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Byte FormatterConverter::ToByte(mscorlib::System::Object value)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "FormatterConverter", 0, NULL, "ToByte", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Byte(__result__);
				}

				mscorlib::System::Char FormatterConverter::ToChar(mscorlib::System::Object value)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "FormatterConverter", 0, NULL, "ToChar", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Char*)mono_object_unbox(__result__);
				}

				mscorlib::System::DateTime FormatterConverter::ToDateTime(mscorlib::System::Object value)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "FormatterConverter", 0, NULL, "ToDateTime", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::DateTime(__result__);
				}

				mscorlib::System::Decimal FormatterConverter::ToDecimal(mscorlib::System::Object value)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "FormatterConverter", 0, NULL, "ToDecimal", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Decimal(__result__);
				}

				mscorlib::System::Double FormatterConverter::ToDouble(mscorlib::System::Object value)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "FormatterConverter", 0, NULL, "ToDouble", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Double*)mono_object_unbox(__result__);
				}

				mscorlib::System::Int16 FormatterConverter::ToInt16(mscorlib::System::Object value)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "FormatterConverter", 0, NULL, "ToInt16", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int16*)mono_object_unbox(__result__);
				}

				mscorlib::System::Int32 FormatterConverter::ToInt32(mscorlib::System::Object value)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "FormatterConverter", 0, NULL, "ToInt32", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				mscorlib::System::Int64 FormatterConverter::ToInt64(mscorlib::System::Object value)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "FormatterConverter", 0, NULL, "ToInt64", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
				}

				mscorlib::System::Single FormatterConverter::ToSingle(mscorlib::System::Object value)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "FormatterConverter", 0, NULL, "ToSingle", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Single*)mono_object_unbox(__result__);
				}

				mscorlib::System::String FormatterConverter::ToString(mscorlib::System::Object value)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "FormatterConverter", 0, NULL, "ToString", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::String(__result__);
				}

				mscorlib::System::SByte FormatterConverter::ToSByte(mscorlib::System::Object value)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "FormatterConverter", 0, NULL, "ToSByte", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::SByte(__result__);
				}

				mscorlib::System::UInt16 FormatterConverter::ToUInt16(mscorlib::System::Object value)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "FormatterConverter", 0, NULL, "ToUInt16", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::UInt16*)mono_object_unbox(__result__);
				}

				mscorlib::System::UInt32 FormatterConverter::ToUInt32(mscorlib::System::Object value)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "FormatterConverter", 0, NULL, "ToUInt32", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::UInt32*)mono_object_unbox(__result__);
				}

				mscorlib::System::UInt64 FormatterConverter::ToUInt64(mscorlib::System::Object value)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "FormatterConverter", 0, NULL, "ToUInt64", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::UInt64*)mono_object_unbox(__result__);
				}


			}
		}
	}
}
