#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_SerializationInfo.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/mscorlib_System_SByte.h>
#include <mscorlib/System/mscorlib_System_Decimal.h>
#include <mscorlib/System/mscorlib_System_DateTime.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Serialization
			{

				//Public Methods
				void SerializationInfo::AddValue(mscorlib::System::String name, mscorlib::System::Object value, mscorlib::System::Type type)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(value).name());
						__parameter_types__[2] = Global::GetType(typeid(type).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = (MonoObject*)value;
						__parameters__[2] = (MonoObject*)type;
						Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "SerializationInfo", 0, NULL, "AddValue", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Object SerializationInfo::GetValue(mscorlib::System::String name, mscorlib::System::Type type)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(type).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = (MonoObject*)type;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "SerializationInfo", 0, NULL, "GetValue", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Object(__result__);
				}

				void SerializationInfo::SetType(mscorlib::System::Type type)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(type).name());
						__parameters__[0] = (MonoObject*)type;
						Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "SerializationInfo", 0, NULL, "SetType", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Runtime::Serialization::SerializationInfoEnumerator* SerializationInfo::GetEnumerator()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "SerializationInfo", 0, NULL, "GetEnumerator", __native_object__, 0, NULL, NULL, NULL);
						return new mscorlib::System::Runtime::Serialization::SerializationInfoEnumerator(__result__);
				}

				void SerializationInfo::AddValue(mscorlib::System::String name, mscorlib::System::Int16 value)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = &value;
						Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "SerializationInfo", 0, NULL, "AddValue", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void SerializationInfo::AddValue(mscorlib::System::String name, mscorlib::System::UInt16 value)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = &value;
						Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "SerializationInfo", 0, NULL, "AddValue", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void SerializationInfo::AddValue(mscorlib::System::String name, mscorlib::System::Int32 value)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = &value;
						Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "SerializationInfo", 0, NULL, "AddValue", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void SerializationInfo::AddValue(mscorlib::System::String name, mscorlib::System::Byte value)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = (MonoObject*)value;
						Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "SerializationInfo", 0, NULL, "AddValue", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void SerializationInfo::AddValue(mscorlib::System::String name, mscorlib::System::Boolean value)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = reinterpret_cast<void*>(value);
						Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "SerializationInfo", 0, NULL, "AddValue", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void SerializationInfo::AddValue(mscorlib::System::String name, mscorlib::System::Char value)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = &value;
						Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "SerializationInfo", 0, NULL, "AddValue", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void SerializationInfo::AddValue(mscorlib::System::String name, mscorlib::System::SByte value)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = (MonoObject*)value;
						Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "SerializationInfo", 0, NULL, "AddValue", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void SerializationInfo::AddValue(mscorlib::System::String name, mscorlib::System::Double value)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = &value;
						Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "SerializationInfo", 0, NULL, "AddValue", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void SerializationInfo::AddValue(mscorlib::System::String name, mscorlib::System::Decimal value)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = (MonoObject*)value;
						Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "SerializationInfo", 0, NULL, "AddValue", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void SerializationInfo::AddValue(mscorlib::System::String name, mscorlib::System::DateTime value)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = (MonoObject*)value;
						Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "SerializationInfo", 0, NULL, "AddValue", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void SerializationInfo::AddValue(mscorlib::System::String name, mscorlib::System::Single value)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = &value;
						Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "SerializationInfo", 0, NULL, "AddValue", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void SerializationInfo::AddValue(mscorlib::System::String name, mscorlib::System::UInt32 value)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = &value;
						Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "SerializationInfo", 0, NULL, "AddValue", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void SerializationInfo::AddValue(mscorlib::System::String name, mscorlib::System::Int64 value)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = &value;
						Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "SerializationInfo", 0, NULL, "AddValue", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void SerializationInfo::AddValue(mscorlib::System::String name, mscorlib::System::UInt64 value)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = &value;
						Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "SerializationInfo", 0, NULL, "AddValue", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void SerializationInfo::AddValue(mscorlib::System::String name, mscorlib::System::Object value)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = (MonoObject*)value;
						Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "SerializationInfo", 0, NULL, "AddValue", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Boolean SerializationInfo::GetBoolean(mscorlib::System::String name)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameters__[0] = (MonoObject*)name;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "SerializationInfo", 0, NULL, "GetBoolean", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Byte SerializationInfo::GetByte(mscorlib::System::String name)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameters__[0] = (MonoObject*)name;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "SerializationInfo", 0, NULL, "GetByte", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Byte(__result__);
				}

				mscorlib::System::Char SerializationInfo::GetChar(mscorlib::System::String name)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameters__[0] = (MonoObject*)name;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "SerializationInfo", 0, NULL, "GetChar", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Char*)mono_object_unbox(__result__);
				}

				mscorlib::System::DateTime SerializationInfo::GetDateTime(mscorlib::System::String name)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameters__[0] = (MonoObject*)name;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "SerializationInfo", 0, NULL, "GetDateTime", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::DateTime(__result__);
				}

				mscorlib::System::Decimal SerializationInfo::GetDecimal(mscorlib::System::String name)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameters__[0] = (MonoObject*)name;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "SerializationInfo", 0, NULL, "GetDecimal", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Decimal(__result__);
				}

				mscorlib::System::Double SerializationInfo::GetDouble(mscorlib::System::String name)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameters__[0] = (MonoObject*)name;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "SerializationInfo", 0, NULL, "GetDouble", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Double*)mono_object_unbox(__result__);
				}

				mscorlib::System::Int16 SerializationInfo::GetInt16(mscorlib::System::String name)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameters__[0] = (MonoObject*)name;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "SerializationInfo", 0, NULL, "GetInt16", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int16*)mono_object_unbox(__result__);
				}

				mscorlib::System::Int32 SerializationInfo::GetInt32(mscorlib::System::String name)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameters__[0] = (MonoObject*)name;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "SerializationInfo", 0, NULL, "GetInt32", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				mscorlib::System::Int64 SerializationInfo::GetInt64(mscorlib::System::String name)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameters__[0] = (MonoObject*)name;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "SerializationInfo", 0, NULL, "GetInt64", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
				}

				mscorlib::System::SByte SerializationInfo::GetSByte(mscorlib::System::String name)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameters__[0] = (MonoObject*)name;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "SerializationInfo", 0, NULL, "GetSByte", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::SByte(__result__);
				}

				mscorlib::System::Single SerializationInfo::GetSingle(mscorlib::System::String name)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameters__[0] = (MonoObject*)name;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "SerializationInfo", 0, NULL, "GetSingle", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Single*)mono_object_unbox(__result__);
				}

				mscorlib::System::String SerializationInfo::GetString(mscorlib::System::String name)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameters__[0] = (MonoObject*)name;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "SerializationInfo", 0, NULL, "GetString", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::String(__result__);
				}

				mscorlib::System::UInt16 SerializationInfo::GetUInt16(mscorlib::System::String name)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameters__[0] = (MonoObject*)name;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "SerializationInfo", 0, NULL, "GetUInt16", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::UInt16*)mono_object_unbox(__result__);
				}

				mscorlib::System::UInt32 SerializationInfo::GetUInt32(mscorlib::System::String name)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameters__[0] = (MonoObject*)name;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "SerializationInfo", 0, NULL, "GetUInt32", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::UInt32*)mono_object_unbox(__result__);
				}

				mscorlib::System::UInt64 SerializationInfo::GetUInt64(mscorlib::System::String name)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameters__[0] = (MonoObject*)name;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "SerializationInfo", 0, NULL, "GetUInt64", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::UInt64*)mono_object_unbox(__result__);
				}

				//Get Set Properties Methods
				//	Get/Set:AssemblyName
				mscorlib::System::String  SerializationInfo::get_AssemblyName() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "SerializationInfo", 0, NULL, "get_AssemblyName", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void SerializationInfo::set_AssemblyName(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "SerializationInfo", 0, NULL, "set_AssemblyName", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:FullTypeName
				mscorlib::System::String  SerializationInfo::get_FullTypeName() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "SerializationInfo", 0, NULL, "get_FullTypeName", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void SerializationInfo::set_FullTypeName(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "SerializationInfo", 0, NULL, "set_FullTypeName", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get:MemberCount
				mscorlib::System::Int32  SerializationInfo::get_MemberCount() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "SerializationInfo", 0, NULL, "get_MemberCount", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//	Get:IsAssemblyNameSetExplicit
				mscorlib::System::Boolean  SerializationInfo::get_IsAssemblyNameSetExplicit() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "SerializationInfo", 0, NULL, "get_IsAssemblyNameSetExplicit", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsFullTypeNameSetExplicit
				mscorlib::System::Boolean  SerializationInfo::get_IsFullTypeNameSetExplicit() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "SerializationInfo", 0, NULL, "get_IsFullTypeNameSetExplicit", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:ObjectType
				mscorlib::System::Type  SerializationInfo::get_ObjectType() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "SerializationInfo", 0, NULL, "get_ObjectType", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}



			}
		}
	}
}
