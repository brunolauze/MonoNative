#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_CONVERT_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_CONVERT_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_TypeCode.h>
#include <mscorlib/System/mscorlib_System_Base64FormattingOptions.h>
#include <mscorlib/System/mscorlib_System_IFormatProvider.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		class String;
		class Byte;
		class DateTime;
		class Decimal;
		class SByte;
		

	}
}
namespace mscorlib
{
	namespace System
	{

		class Convert
			: public mscorlib::System::Object
		{
		public:
			Convert(mscorlib::NativeTypeInfo *nativeTypeInfo)
			: mscorlib::System::Object(nativeTypeInfo)
			{
			};
		
			Convert(MonoObject *nativeObject)
			: mscorlib::System::Object(nativeObject)
			{
			};
		
			~Convert()
			{
			};
		

			Convert & operator=(Convert &value) { __native_object__ = value.GetNativeObject(); return value; };
			operator MonoObject*() { return __native_object__; };
			MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


			static std::vector<mscorlib::System::Byte*>  FromBase64CharArray(std::vector<mscorlib::System::Char*> inArray, mscorlib::System::Int32 offset, mscorlib::System::Int32 length);
			static std::vector<mscorlib::System::Byte*>  FromBase64String(mscorlib::System::String s);
			static std::vector<mscorlib::System::Byte*>  FromBase64String(const char *s);
			static mscorlib::System::TypeCode::__ENUM__  GetTypeCode(mscorlib::System::Object value);
			static mscorlib::System::Boolean  IsDBNull(mscorlib::System::Object value);
			static mscorlib::System::Int32  ToBase64CharArray(std::vector<mscorlib::System::Byte*> inArray, mscorlib::System::Int32 offsetIn, mscorlib::System::Int32 length, std::vector<mscorlib::System::Char*> outArray, mscorlib::System::Int32 offsetOut);
			static mscorlib::System::String  ToBase64String(std::vector<mscorlib::System::Byte*> inArray);
			static mscorlib::System::String  ToBase64String(std::vector<mscorlib::System::Byte*> inArray, mscorlib::System::Int32 offset, mscorlib::System::Int32 length);
			static mscorlib::System::String  ToBase64String(std::vector<mscorlib::System::Byte*> inArray, mscorlib::System::Base64FormattingOptions::__ENUM__ options);
			static mscorlib::System::String  ToBase64String(std::vector<mscorlib::System::Byte*> inArray, mscorlib::System::Int32 offset, mscorlib::System::Int32 length, mscorlib::System::Base64FormattingOptions::__ENUM__ options);
			static mscorlib::System::Int32  ToBase64CharArray(std::vector<mscorlib::System::Byte*> inArray, mscorlib::System::Int32 offsetIn, mscorlib::System::Int32 length, std::vector<mscorlib::System::Char*> outArray, mscorlib::System::Int32 offsetOut, mscorlib::System::Base64FormattingOptions::__ENUM__ options);
			static mscorlib::System::Boolean  ToBoolean(mscorlib::System::Boolean value);
			static mscorlib::System::Boolean  ToBoolean(mscorlib::System::Byte value);
			static mscorlib::System::Boolean  ToBoolean(mscorlib::System::Char value);
			static mscorlib::System::Boolean  ToBoolean(mscorlib::System::DateTime value);
			static mscorlib::System::Boolean  ToBoolean(mscorlib::System::Decimal value);
			static mscorlib::System::Boolean  ToBoolean(mscorlib::System::Double value);
			static mscorlib::System::Boolean  ToBoolean(mscorlib::System::Single value);
			static mscorlib::System::Boolean  ToBoolean(mscorlib::System::Int32 value);
			static mscorlib::System::Boolean  ToBoolean(mscorlib::System::Int64 value);
			static mscorlib::System::Boolean  ToBoolean(mscorlib::System::SByte value);
			static mscorlib::System::Boolean  ToBoolean(mscorlib::System::Int16 value);
			static mscorlib::System::Boolean  ToBoolean(mscorlib::System::String value);
			static mscorlib::System::Boolean  ToBoolean(const char *value);
			static mscorlib::System::Boolean  ToBoolean(mscorlib::System::String value, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::Boolean  ToBoolean(const char *value, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::Boolean  ToBoolean(mscorlib::System::UInt32 value);
			static mscorlib::System::Boolean  ToBoolean(mscorlib::System::UInt64 value);
			static mscorlib::System::Boolean  ToBoolean(mscorlib::System::UInt16 value);
			static mscorlib::System::Boolean  ToBoolean(mscorlib::System::Object value);
			static mscorlib::System::Boolean  ToBoolean(mscorlib::System::Object value, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::Byte  ToByte(mscorlib::System::Boolean value);
			static mscorlib::System::Byte  ToByte(mscorlib::System::Byte value);
			static mscorlib::System::Byte  ToByte(mscorlib::System::Char value);
			static mscorlib::System::Byte  ToByte(mscorlib::System::DateTime value);
			static mscorlib::System::Byte  ToByte(mscorlib::System::Decimal value);
			static mscorlib::System::Byte  ToByte(mscorlib::System::Double value);
			static mscorlib::System::Byte  ToByte(mscorlib::System::Single value);
			static mscorlib::System::Byte  ToByte(mscorlib::System::Int32 value);
			static mscorlib::System::Byte  ToByte(mscorlib::System::Int64 value);
			static mscorlib::System::Byte  ToByte(mscorlib::System::SByte value);
			static mscorlib::System::Byte  ToByte(mscorlib::System::Int16 value);
			static mscorlib::System::Byte  ToByte(mscorlib::System::String value);
			static mscorlib::System::Byte  ToByte(const char *value);
			static mscorlib::System::Byte  ToByte(mscorlib::System::String value, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::Byte  ToByte(const char *value, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::Byte  ToByte(mscorlib::System::String value, mscorlib::System::Int32 fromBase);
			static mscorlib::System::Byte  ToByte(const char *value, mscorlib::System::Int32 fromBase);
			static mscorlib::System::Byte  ToByte(mscorlib::System::UInt32 value);
			static mscorlib::System::Byte  ToByte(mscorlib::System::UInt64 value);
			static mscorlib::System::Byte  ToByte(mscorlib::System::UInt16 value);
			static mscorlib::System::Byte  ToByte(mscorlib::System::Object value);
			static mscorlib::System::Byte  ToByte(mscorlib::System::Object value, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::Char  ToChar(mscorlib::System::Boolean value);
			static mscorlib::System::Char  ToChar(mscorlib::System::Byte value);
			static mscorlib::System::Char  ToChar(mscorlib::System::Char value);
			static mscorlib::System::Char  ToChar(mscorlib::System::DateTime value);
			static mscorlib::System::Char  ToChar(mscorlib::System::Decimal value);
			static mscorlib::System::Char  ToChar(mscorlib::System::Double value);
			static mscorlib::System::Char  ToChar(mscorlib::System::Int32 value);
			static mscorlib::System::Char  ToChar(mscorlib::System::Int64 value);
			static mscorlib::System::Char  ToChar(mscorlib::System::Single value);
			static mscorlib::System::Char  ToChar(mscorlib::System::SByte value);
			static mscorlib::System::Char  ToChar(mscorlib::System::Int16 value);
			static mscorlib::System::Char  ToChar(mscorlib::System::String value);
			static mscorlib::System::Char  ToChar(const char *value);
			static mscorlib::System::Char  ToChar(mscorlib::System::String value, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::Char  ToChar(const char *value, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::Char  ToChar(mscorlib::System::UInt32 value);
			static mscorlib::System::Char  ToChar(mscorlib::System::UInt64 value);
			static mscorlib::System::Char  ToChar(mscorlib::System::UInt16 value);
			static mscorlib::System::Char  ToChar(mscorlib::System::Object value);
			static mscorlib::System::Char  ToChar(mscorlib::System::Object value, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::DateTime  ToDateTime(mscorlib::System::String value);
			static mscorlib::System::DateTime  ToDateTime(const char *value);
			static mscorlib::System::DateTime  ToDateTime(mscorlib::System::String value, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::DateTime  ToDateTime(const char *value, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::DateTime  ToDateTime(mscorlib::System::Boolean value);
			static mscorlib::System::DateTime  ToDateTime(mscorlib::System::Byte value);
			static mscorlib::System::DateTime  ToDateTime(mscorlib::System::Char value);
			static mscorlib::System::DateTime  ToDateTime(mscorlib::System::DateTime value);
			static mscorlib::System::DateTime  ToDateTime(mscorlib::System::Decimal value);
			static mscorlib::System::DateTime  ToDateTime(mscorlib::System::Double value);
			static mscorlib::System::DateTime  ToDateTime(mscorlib::System::Int16 value);
			static mscorlib::System::DateTime  ToDateTime(mscorlib::System::Int32 value);
			static mscorlib::System::DateTime  ToDateTime(mscorlib::System::Int64 value);
			static mscorlib::System::DateTime  ToDateTime(mscorlib::System::Single value);
			static mscorlib::System::DateTime  ToDateTime(mscorlib::System::Object value);
			static mscorlib::System::DateTime  ToDateTime(mscorlib::System::Object value, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::DateTime  ToDateTime(mscorlib::System::SByte value);
			static mscorlib::System::DateTime  ToDateTime(mscorlib::System::UInt16 value);
			static mscorlib::System::DateTime  ToDateTime(mscorlib::System::UInt32 value);
			static mscorlib::System::DateTime  ToDateTime(mscorlib::System::UInt64 value);
			static mscorlib::System::Decimal  ToDecimal(mscorlib::System::Boolean value);
			static mscorlib::System::Decimal  ToDecimal(mscorlib::System::Byte value);
			static mscorlib::System::Decimal  ToDecimal(mscorlib::System::Char value);
			static mscorlib::System::Decimal  ToDecimal(mscorlib::System::DateTime value);
			static mscorlib::System::Decimal  ToDecimal(mscorlib::System::Decimal value);
			static mscorlib::System::Decimal  ToDecimal(mscorlib::System::Double value);
			static mscorlib::System::Decimal  ToDecimal(mscorlib::System::Single value);
			static mscorlib::System::Decimal  ToDecimal(mscorlib::System::Int32 value);
			static mscorlib::System::Decimal  ToDecimal(mscorlib::System::Int64 value);
			static mscorlib::System::Decimal  ToDecimal(mscorlib::System::SByte value);
			static mscorlib::System::Decimal  ToDecimal(mscorlib::System::Int16 value);
			static mscorlib::System::Decimal  ToDecimal(mscorlib::System::String value);
			static mscorlib::System::Decimal  ToDecimal(const char *value);
			static mscorlib::System::Decimal  ToDecimal(mscorlib::System::String value, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::Decimal  ToDecimal(const char *value, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::Decimal  ToDecimal(mscorlib::System::UInt32 value);
			static mscorlib::System::Decimal  ToDecimal(mscorlib::System::UInt64 value);
			static mscorlib::System::Decimal  ToDecimal(mscorlib::System::UInt16 value);
			static mscorlib::System::Decimal  ToDecimal(mscorlib::System::Object value);
			static mscorlib::System::Decimal  ToDecimal(mscorlib::System::Object value, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::Double  ToDouble(mscorlib::System::Boolean value);
			static mscorlib::System::Double  ToDouble(mscorlib::System::Byte value);
			static mscorlib::System::Double  ToDouble(mscorlib::System::Char value);
			static mscorlib::System::Double  ToDouble(mscorlib::System::DateTime value);
			static mscorlib::System::Double  ToDouble(mscorlib::System::Decimal value);
			static mscorlib::System::Double  ToDouble(mscorlib::System::Double value);
			static mscorlib::System::Double  ToDouble(mscorlib::System::Single value);
			static mscorlib::System::Double  ToDouble(mscorlib::System::Int32 value);
			static mscorlib::System::Double  ToDouble(mscorlib::System::Int64 value);
			static mscorlib::System::Double  ToDouble(mscorlib::System::SByte value);
			static mscorlib::System::Double  ToDouble(mscorlib::System::Int16 value);
			static mscorlib::System::Double  ToDouble(mscorlib::System::String value);
			static mscorlib::System::Double  ToDouble(const char *value);
			static mscorlib::System::Double  ToDouble(mscorlib::System::String value, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::Double  ToDouble(const char *value, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::Double  ToDouble(mscorlib::System::UInt32 value);
			static mscorlib::System::Double  ToDouble(mscorlib::System::UInt64 value);
			static mscorlib::System::Double  ToDouble(mscorlib::System::UInt16 value);
			static mscorlib::System::Double  ToDouble(mscorlib::System::Object value);
			static mscorlib::System::Double  ToDouble(mscorlib::System::Object value, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::Int16  ToInt16(mscorlib::System::Boolean value);
			static mscorlib::System::Int16  ToInt16(mscorlib::System::Byte value);
			static mscorlib::System::Int16  ToInt16(mscorlib::System::Char value);
			static mscorlib::System::Int16  ToInt16(mscorlib::System::DateTime value);
			static mscorlib::System::Int16  ToInt16(mscorlib::System::Decimal value);
			static mscorlib::System::Int16  ToInt16(mscorlib::System::Double value);
			static mscorlib::System::Int16  ToInt16(mscorlib::System::Single value);
			static mscorlib::System::Int16  ToInt16(mscorlib::System::Int32 value);
			static mscorlib::System::Int16  ToInt16(mscorlib::System::Int64 value);
			static mscorlib::System::Int16  ToInt16(mscorlib::System::SByte value);
			static mscorlib::System::Int16  ToInt16(mscorlib::System::Int16 value);
			static mscorlib::System::Int16  ToInt16(mscorlib::System::String value);
			static mscorlib::System::Int16  ToInt16(const char *value);
			static mscorlib::System::Int16  ToInt16(mscorlib::System::String value, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::Int16  ToInt16(const char *value, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::Int16  ToInt16(mscorlib::System::String value, mscorlib::System::Int32 fromBase);
			static mscorlib::System::Int16  ToInt16(const char *value, mscorlib::System::Int32 fromBase);
			static mscorlib::System::Int16  ToInt16(mscorlib::System::UInt32 value);
			static mscorlib::System::Int16  ToInt16(mscorlib::System::UInt64 value);
			static mscorlib::System::Int16  ToInt16(mscorlib::System::UInt16 value);
			static mscorlib::System::Int16  ToInt16(mscorlib::System::Object value);
			static mscorlib::System::Int16  ToInt16(mscorlib::System::Object value, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::Int32  ToInt32(mscorlib::System::Boolean value);
			static mscorlib::System::Int32  ToInt32(mscorlib::System::Byte value);
			static mscorlib::System::Int32  ToInt32(mscorlib::System::Char value);
			static mscorlib::System::Int32  ToInt32(mscorlib::System::DateTime value);
			static mscorlib::System::Int32  ToInt32(mscorlib::System::Decimal value);
			static mscorlib::System::Int32  ToInt32(mscorlib::System::Double value);
			static mscorlib::System::Int32  ToInt32(mscorlib::System::Single value);
			static mscorlib::System::Int32  ToInt32(mscorlib::System::Int32 value);
			static mscorlib::System::Int32  ToInt32(mscorlib::System::Int64 value);
			static mscorlib::System::Int32  ToInt32(mscorlib::System::SByte value);
			static mscorlib::System::Int32  ToInt32(mscorlib::System::Int16 value);
			static mscorlib::System::Int32  ToInt32(mscorlib::System::String value);
			static mscorlib::System::Int32  ToInt32(const char *value);
			static mscorlib::System::Int32  ToInt32(mscorlib::System::String value, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::Int32  ToInt32(const char *value, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::Int32  ToInt32(mscorlib::System::String value, mscorlib::System::Int32 fromBase);
			static mscorlib::System::Int32  ToInt32(const char *value, mscorlib::System::Int32 fromBase);
			static mscorlib::System::Int32  ToInt32(mscorlib::System::UInt32 value);
			static mscorlib::System::Int32  ToInt32(mscorlib::System::UInt64 value);
			static mscorlib::System::Int32  ToInt32(mscorlib::System::UInt16 value);
			static mscorlib::System::Int32  ToInt32(mscorlib::System::Object value);
			static mscorlib::System::Int32  ToInt32(mscorlib::System::Object value, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::Int64  ToInt64(mscorlib::System::Boolean value);
			static mscorlib::System::Int64  ToInt64(mscorlib::System::Byte value);
			static mscorlib::System::Int64  ToInt64(mscorlib::System::Char value);
			static mscorlib::System::Int64  ToInt64(mscorlib::System::DateTime value);
			static mscorlib::System::Int64  ToInt64(mscorlib::System::Decimal value);
			static mscorlib::System::Int64  ToInt64(mscorlib::System::Double value);
			static mscorlib::System::Int64  ToInt64(mscorlib::System::Single value);
			static mscorlib::System::Int64  ToInt64(mscorlib::System::Int32 value);
			static mscorlib::System::Int64  ToInt64(mscorlib::System::Int64 value);
			static mscorlib::System::Int64  ToInt64(mscorlib::System::SByte value);
			static mscorlib::System::Int64  ToInt64(mscorlib::System::Int16 value);
			static mscorlib::System::Int64  ToInt64(mscorlib::System::String value);
			static mscorlib::System::Int64  ToInt64(const char *value);
			static mscorlib::System::Int64  ToInt64(mscorlib::System::String value, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::Int64  ToInt64(const char *value, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::Int64  ToInt64(mscorlib::System::String value, mscorlib::System::Int32 fromBase);
			static mscorlib::System::Int64  ToInt64(const char *value, mscorlib::System::Int32 fromBase);
			static mscorlib::System::Int64  ToInt64(mscorlib::System::UInt32 value);
			static mscorlib::System::Int64  ToInt64(mscorlib::System::UInt64 value);
			static mscorlib::System::Int64  ToInt64(mscorlib::System::UInt16 value);
			static mscorlib::System::Int64  ToInt64(mscorlib::System::Object value);
			static mscorlib::System::Int64  ToInt64(mscorlib::System::Object value, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::SByte  ToSByte(mscorlib::System::Boolean value);
			static mscorlib::System::SByte  ToSByte(mscorlib::System::Byte value);
			static mscorlib::System::SByte  ToSByte(mscorlib::System::Char value);
			static mscorlib::System::SByte  ToSByte(mscorlib::System::DateTime value);
			static mscorlib::System::SByte  ToSByte(mscorlib::System::Decimal value);
			static mscorlib::System::SByte  ToSByte(mscorlib::System::Double value);
			static mscorlib::System::SByte  ToSByte(mscorlib::System::Single value);
			static mscorlib::System::SByte  ToSByte(mscorlib::System::Int32 value);
			static mscorlib::System::SByte  ToSByte(mscorlib::System::Int64 value);
			static mscorlib::System::SByte  ToSByte(mscorlib::System::SByte value);
			static mscorlib::System::SByte  ToSByte(mscorlib::System::Int16 value);
			static mscorlib::System::SByte  ToSByte(mscorlib::System::String value);
			static mscorlib::System::SByte  ToSByte(const char *value);
			static mscorlib::System::SByte  ToSByte(mscorlib::System::String value, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::SByte  ToSByte(const char *value, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::SByte  ToSByte(mscorlib::System::String value, mscorlib::System::Int32 fromBase);
			static mscorlib::System::SByte  ToSByte(const char *value, mscorlib::System::Int32 fromBase);
			static mscorlib::System::SByte  ToSByte(mscorlib::System::UInt32 value);
			static mscorlib::System::SByte  ToSByte(mscorlib::System::UInt64 value);
			static mscorlib::System::SByte  ToSByte(mscorlib::System::UInt16 value);
			static mscorlib::System::SByte  ToSByte(mscorlib::System::Object value);
			static mscorlib::System::SByte  ToSByte(mscorlib::System::Object value, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::Single  ToSingle(mscorlib::System::Boolean value);
			static mscorlib::System::Single  ToSingle(mscorlib::System::Byte value);
			static mscorlib::System::Single  ToSingle(mscorlib::System::Char value);
			static mscorlib::System::Single  ToSingle(mscorlib::System::DateTime value);
			static mscorlib::System::Single  ToSingle(mscorlib::System::Decimal value);
			static mscorlib::System::Single  ToSingle(mscorlib::System::Double value);
			static mscorlib::System::Single  ToSingle(mscorlib::System::Single value);
			static mscorlib::System::Single  ToSingle(mscorlib::System::Int32 value);
			static mscorlib::System::Single  ToSingle(mscorlib::System::Int64 value);
			static mscorlib::System::Single  ToSingle(mscorlib::System::SByte value);
			static mscorlib::System::Single  ToSingle(mscorlib::System::Int16 value);
			static mscorlib::System::Single  ToSingle(mscorlib::System::String value);
			static mscorlib::System::Single  ToSingle(const char *value);
			static mscorlib::System::Single  ToSingle(mscorlib::System::String value, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::Single  ToSingle(const char *value, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::Single  ToSingle(mscorlib::System::UInt32 value);
			static mscorlib::System::Single  ToSingle(mscorlib::System::UInt64 value);
			static mscorlib::System::Single  ToSingle(mscorlib::System::UInt16 value);
			static mscorlib::System::Single  ToSingle(mscorlib::System::Object value);
			static mscorlib::System::Single  ToSingle(mscorlib::System::Object value, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::String  ToString(mscorlib::System::Boolean value);
			static mscorlib::System::String  ToString(mscorlib::System::Boolean value, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::String  ToString(mscorlib::System::Byte value);
			static mscorlib::System::String  ToString(mscorlib::System::Byte value, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::String  ToString(mscorlib::System::Byte value, mscorlib::System::Int32 toBase);
			static mscorlib::System::String  ToString(mscorlib::System::Char value);
			static mscorlib::System::String  ToString(mscorlib::System::Char value, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::String  ToString(mscorlib::System::DateTime value);
			static mscorlib::System::String  ToString(mscorlib::System::DateTime value, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::String  ToString(mscorlib::System::Decimal value);
			static mscorlib::System::String  ToString(mscorlib::System::Decimal value, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::String  ToString(mscorlib::System::Double value);
			static mscorlib::System::String  ToString(mscorlib::System::Double value, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::String  ToString(mscorlib::System::Single value);
			static mscorlib::System::String  ToString(mscorlib::System::Single value, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::String  ToString(mscorlib::System::Int32 value);
			static mscorlib::System::String  ToString(mscorlib::System::Int32 value, mscorlib::System::Int32 toBase);
			static mscorlib::System::String  ToString(mscorlib::System::Int32 value, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::String  ToString(mscorlib::System::Int64 value);
			static mscorlib::System::String  ToString(mscorlib::System::Int64 value, mscorlib::System::Int32 toBase);
			static mscorlib::System::String  ToString(mscorlib::System::Int64 value, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::String  ToString(mscorlib::System::Object value);
			static mscorlib::System::String  ToString(mscorlib::System::Object value, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::String  ToString(mscorlib::System::SByte value);
			static mscorlib::System::String  ToString(mscorlib::System::SByte value, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::String  ToString(mscorlib::System::Int16 value);
			static mscorlib::System::String  ToString(mscorlib::System::Int16 value, mscorlib::System::Int32 toBase);
			static mscorlib::System::String  ToString(mscorlib::System::Int16 value, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::String  ToString(mscorlib::System::String value);
			static mscorlib::System::String  ToString(const char *value);
			static mscorlib::System::String  ToString(mscorlib::System::String value, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::String  ToString(const char *value, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::String  ToString(mscorlib::System::UInt32 value);
			static mscorlib::System::String  ToString(mscorlib::System::UInt32 value, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::String  ToString(mscorlib::System::UInt64 value);
			static mscorlib::System::String  ToString(mscorlib::System::UInt64 value, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::String  ToString(mscorlib::System::UInt16 value);
			static mscorlib::System::String  ToString(mscorlib::System::UInt16 value, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::UInt16  ToUInt16(mscorlib::System::Boolean value);
			static mscorlib::System::UInt16  ToUInt16(mscorlib::System::Byte value);
			static mscorlib::System::UInt16  ToUInt16(mscorlib::System::Char value);
			static mscorlib::System::UInt16  ToUInt16(mscorlib::System::DateTime value);
			static mscorlib::System::UInt16  ToUInt16(mscorlib::System::Decimal value);
			static mscorlib::System::UInt16  ToUInt16(mscorlib::System::Double value);
			static mscorlib::System::UInt16  ToUInt16(mscorlib::System::Single value);
			static mscorlib::System::UInt16  ToUInt16(mscorlib::System::Int32 value);
			static mscorlib::System::UInt16  ToUInt16(mscorlib::System::Int64 value);
			static mscorlib::System::UInt16  ToUInt16(mscorlib::System::SByte value);
			static mscorlib::System::UInt16  ToUInt16(mscorlib::System::Int16 value);
			static mscorlib::System::UInt16  ToUInt16(mscorlib::System::String value);
			static mscorlib::System::UInt16  ToUInt16(const char *value);
			static mscorlib::System::UInt16  ToUInt16(mscorlib::System::String value, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::UInt16  ToUInt16(const char *value, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::UInt16  ToUInt16(mscorlib::System::String value, mscorlib::System::Int32 fromBase);
			static mscorlib::System::UInt16  ToUInt16(const char *value, mscorlib::System::Int32 fromBase);
			static mscorlib::System::UInt16  ToUInt16(mscorlib::System::UInt32 value);
			static mscorlib::System::UInt16  ToUInt16(mscorlib::System::UInt64 value);
			static mscorlib::System::UInt16  ToUInt16(mscorlib::System::UInt16 value);
			static mscorlib::System::UInt16  ToUInt16(mscorlib::System::Object value);
			static mscorlib::System::UInt16  ToUInt16(mscorlib::System::Object value, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::UInt32  ToUInt32(mscorlib::System::Boolean value);
			static mscorlib::System::UInt32  ToUInt32(mscorlib::System::Byte value);
			static mscorlib::System::UInt32  ToUInt32(mscorlib::System::Char value);
			static mscorlib::System::UInt32  ToUInt32(mscorlib::System::DateTime value);
			static mscorlib::System::UInt32  ToUInt32(mscorlib::System::Decimal value);
			static mscorlib::System::UInt32  ToUInt32(mscorlib::System::Double value);
			static mscorlib::System::UInt32  ToUInt32(mscorlib::System::Single value);
			static mscorlib::System::UInt32  ToUInt32(mscorlib::System::Int32 value);
			static mscorlib::System::UInt32  ToUInt32(mscorlib::System::Int64 value);
			static mscorlib::System::UInt32  ToUInt32(mscorlib::System::SByte value);
			static mscorlib::System::UInt32  ToUInt32(mscorlib::System::Int16 value);
			static mscorlib::System::UInt32  ToUInt32(mscorlib::System::String value);
			static mscorlib::System::UInt32  ToUInt32(const char *value);
			static mscorlib::System::UInt32  ToUInt32(mscorlib::System::String value, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::UInt32  ToUInt32(const char *value, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::UInt32  ToUInt32(mscorlib::System::String value, mscorlib::System::Int32 fromBase);
			static mscorlib::System::UInt32  ToUInt32(const char *value, mscorlib::System::Int32 fromBase);
			static mscorlib::System::UInt32  ToUInt32(mscorlib::System::UInt32 value);
			static mscorlib::System::UInt32  ToUInt32(mscorlib::System::UInt64 value);
			static mscorlib::System::UInt32  ToUInt32(mscorlib::System::UInt16 value);
			static mscorlib::System::UInt32  ToUInt32(mscorlib::System::Object value);
			static mscorlib::System::UInt32  ToUInt32(mscorlib::System::Object value, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::UInt64  ToUInt64(mscorlib::System::Boolean value);
			static mscorlib::System::UInt64  ToUInt64(mscorlib::System::Byte value);
			static mscorlib::System::UInt64  ToUInt64(mscorlib::System::Char value);
			static mscorlib::System::UInt64  ToUInt64(mscorlib::System::DateTime value);
			static mscorlib::System::UInt64  ToUInt64(mscorlib::System::Decimal value);
			static mscorlib::System::UInt64  ToUInt64(mscorlib::System::Double value);
			static mscorlib::System::UInt64  ToUInt64(mscorlib::System::Single value);
			static mscorlib::System::UInt64  ToUInt64(mscorlib::System::Int32 value);
			static mscorlib::System::UInt64  ToUInt64(mscorlib::System::Int64 value);
			static mscorlib::System::UInt64  ToUInt64(mscorlib::System::SByte value);
			static mscorlib::System::UInt64  ToUInt64(mscorlib::System::Int16 value);
			static mscorlib::System::UInt64  ToUInt64(mscorlib::System::String value);
			static mscorlib::System::UInt64  ToUInt64(const char *value);
			static mscorlib::System::UInt64  ToUInt64(mscorlib::System::String value, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::UInt64  ToUInt64(const char *value, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::UInt64  ToUInt64(mscorlib::System::String value, mscorlib::System::Int32 fromBase);
			static mscorlib::System::UInt64  ToUInt64(const char *value, mscorlib::System::Int32 fromBase);
			static mscorlib::System::UInt64  ToUInt64(mscorlib::System::UInt32 value);
			static mscorlib::System::UInt64  ToUInt64(mscorlib::System::UInt64 value);
			static mscorlib::System::UInt64  ToUInt64(mscorlib::System::UInt16 value);
			static mscorlib::System::UInt64  ToUInt64(mscorlib::System::Object value);
			static mscorlib::System::UInt64  ToUInt64(mscorlib::System::Object value, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::Object  ChangeType(mscorlib::System::Object value, mscorlib::System::Type conversionType);
			static mscorlib::System::Object  ChangeType(mscorlib::System::Object value, mscorlib::System::TypeCode::__ENUM__ typeCode);
			static mscorlib::System::Object  ChangeType(mscorlib::System::Object value, mscorlib::System::Type conversionType, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::Object  ChangeType(mscorlib::System::Object value, mscorlib::System::TypeCode::__ENUM__ typeCode, mscorlib::System::IFormatProvider provider);
			virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			//Public Static Fields
			static Property<mscorlib::System::Object , mscorlib::System::Convert> DBNull;

			//	Get/Set:DBNull
			static mscorlib::System::Object  get_DBNull();
			static void set_DBNull(mscorlib::System::Object  value);

		
		protected:
		
		private:
		
		};

	}
}
#endif
