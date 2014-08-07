#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_ENUM_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_ENUM_H

#include <mscorlib/System/mscorlib_System_ValueType.h>
#include <mscorlib/System/mscorlib_System_IConvertible.h>
#include <mscorlib/System/mscorlib_System_IComparable.h>
#include <mscorlib/System/mscorlib_System_IFormattable.h>
#include <mscorlib/System/mscorlib_System_TypeCode.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_IFormatProvider.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/mscorlib_System_SByte.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		class Array;
		

	}
}
namespace mscorlib
{
	namespace System
	{

		class Enum
			: public mscorlib::System::ValueType
			, public virtual mscorlib::System::IConvertible
			, public virtual mscorlib::System::IObjectComparable
			, public virtual mscorlib::System::IFormattable
		{
		public:
			Enum(mscorlib::NativeTypeInfo *nativeTypeInfo)
			: mscorlib::System::ValueType(nativeTypeInfo)
			, mscorlib::System::IConvertible(NULL)
			, mscorlib::System::IObjectComparable(NULL)
			, mscorlib::System::IFormattable(NULL)
			{
			};
		
			Enum(MonoObject *nativeObject)
			: mscorlib::System::ValueType(nativeObject)
			, mscorlib::System::IConvertible(nativeObject)
			, mscorlib::System::IObjectComparable(nativeObject)
			, mscorlib::System::IFormattable(nativeObject)
			{
			};
		
			~Enum()
			{
			};
		

			Enum & operator=(Enum &value) { __native_object__ = value.GetNativeObject(); return value; };
			bool operator==(Enum &value) { return mscorlib::System::Object::Equals(value); };
			operator MonoObject*() { return __native_object__; };
			MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


			virtual mscorlib::System::TypeCode::__ENUM__  GetTypeCode();
			static mscorlib::System::Array  GetValues(mscorlib::System::Type enumType);
			static std::vector<mscorlib::System::String*>  GetNames(mscorlib::System::Type enumType);
			static mscorlib::System::String  GetName(mscorlib::System::Type enumType, mscorlib::System::Object value);
			static mscorlib::System::Boolean  IsDefined(mscorlib::System::Type enumType, mscorlib::System::Object value);
			static mscorlib::System::Type  GetUnderlyingType(mscorlib::System::Type enumType);
			static mscorlib::System::Object  Parse(mscorlib::System::Type enumType, mscorlib::System::String value);
			static mscorlib::System::Object  Parse(mscorlib::System::Type enumType, const char *value);
			static mscorlib::System::Object  Parse(mscorlib::System::Type enumType, mscorlib::System::String value, mscorlib::System::Boolean ignoreCase);
			static mscorlib::System::Object  Parse(mscorlib::System::Type enumType, const char *value, mscorlib::System::Boolean ignoreCase);
			template<typename TEnum>
			static mscorlib::System::Boolean  TryParse(mscorlib::System::String value, TEnum result)
			{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(result).name());
				__parameters__[0] = (MonoObject*)value;
				__parameters__[1] = (MonoObject*)result;
				MonoType *__generic_types__[1];
				__generic_types__[0] = Global::GetType(typeid(TEnum).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Enum", 0, NULL, "TryParse", NullMonoObject, 1, __generic_types__, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			};
			
			template<typename TEnum>
			static mscorlib::System::Boolean  TryParse(const char *value, TEnum result)
			{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(result).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = (MonoObject*)result;
				MonoType *__generic_types__[1];
				__generic_types__[0] = Global::GetType(typeid(TEnum).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Enum", 0, NULL, "TryParse", NullMonoObject, 1, __generic_types__, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			};
			
			template<typename TEnum>
			static mscorlib::System::Boolean  TryParse(mscorlib::System::String value, mscorlib::System::Boolean ignoreCase, TEnum result)
			{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(ignoreCase).name());
				__parameter_types__[2] = Global::GetType(typeid(result).name());
				__parameters__[0] = (MonoObject*)value;
				__parameters__[1] = reinterpret_cast<void*>(ignoreCase);
				__parameters__[2] = (MonoObject*)result;
				MonoType *__generic_types__[1];
				__generic_types__[0] = Global::GetType(typeid(TEnum).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Enum", 0, NULL, "TryParse", NullMonoObject, 1, __generic_types__, 3, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			};
			
			template<typename TEnum>
			static mscorlib::System::Boolean  TryParse(const char *value, mscorlib::System::Boolean ignoreCase, TEnum result)
			{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(ignoreCase).name());
				__parameter_types__[2] = Global::GetType(typeid(result).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = reinterpret_cast<void*>(ignoreCase);
				__parameters__[2] = (MonoObject*)result;
				MonoType *__generic_types__[1];
				__generic_types__[0] = Global::GetType(typeid(TEnum).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Enum", 0, NULL, "TryParse", NullMonoObject, 1, __generic_types__, 3, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			};
			
			virtual mscorlib::System::Int32  CompareTo(mscorlib::System::Object target);
			virtual mscorlib::System::String  ToString() override;
			virtual mscorlib::System::String  ToString(mscorlib::System::IFormatProvider provider);
			mscorlib::System::String  ToString(mscorlib::System::String format);
			mscorlib::System::String  ToString(const char *format);
			virtual mscorlib::System::String  ToString(mscorlib::System::String format, mscorlib::System::IFormatProvider provider);
			virtual mscorlib::System::String  ToString(const char *format, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::Object  ToObject(mscorlib::System::Type enumType, mscorlib::System::Byte value);
			static mscorlib::System::Object  ToObject(mscorlib::System::Type enumType, mscorlib::System::Int16 value);
			static mscorlib::System::Object  ToObject(mscorlib::System::Type enumType, mscorlib::System::Int32 value);
			static mscorlib::System::Object  ToObject(mscorlib::System::Type enumType, mscorlib::System::Int64 value);
			static mscorlib::System::Object  ToObject(mscorlib::System::Type enumType, mscorlib::System::Object value);
			static mscorlib::System::Object  ToObject(mscorlib::System::Type enumType, mscorlib::System::SByte value);
			static mscorlib::System::Object  ToObject(mscorlib::System::Type enumType, mscorlib::System::UInt16 value);
			static mscorlib::System::Object  ToObject(mscorlib::System::Type enumType, mscorlib::System::UInt32 value);
			static mscorlib::System::Object  ToObject(mscorlib::System::Type enumType, mscorlib::System::UInt64 value);
			virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object obj) override;
			virtual mscorlib::System::Int32  GetHashCode() override;
			static mscorlib::System::String  Format(mscorlib::System::Type enumType, mscorlib::System::Object value, mscorlib::System::String format);
			static mscorlib::System::String  Format(mscorlib::System::Type enumType, mscorlib::System::Object value, const char *format);
			mscorlib::System::Boolean  HasFlag(mscorlib::System::Enum flag);
			virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


		
		protected:
		
		private:
		
		};

	}
}
#endif
